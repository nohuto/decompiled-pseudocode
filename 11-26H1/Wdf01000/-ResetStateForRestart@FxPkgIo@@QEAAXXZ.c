/*
 * XREFs of ?ResetStateForRestart@FxPkgIo@@QEAAXXZ @ 0x1400A15B8
 * Callers:
 *     ?PnpEventPdoRestart@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1400A3A90 (-PnpEventPdoRestart@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x14000A7C0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x14000AD10 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?GetIoQueueListLocked@FxPkgIo@@AEAAXPEAU_SINGLE_LIST_ENTRY@@W4FxIoIteratorList@@@Z @ 0x140044CF4 (-GetIoQueueListLocked@FxPkgIo@@AEAAXPEAU_SINGLE_LIST_ENTRY@@W4FxIoIteratorList@@@Z.c)
 *     WPP_IFR_SF_q @ 0x1400488BC (WPP_IFR_SF_q.c)
 *     ?SetState@FxIoQueue@@QEAAXW4_FX_IO_QUEUE_SET_STATE@@@Z @ 0x14004ED90 (-SetState@FxIoQueue@@QEAAXW4_FX_IO_QUEUE_SET_STATE@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

void __fastcall FxPkgIo::ResetStateForRestart(FxPkgIo *this)
{
  FxDeviceBase *m_DeviceBase; // rdx
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  unsigned __int16 m_ObjectSize; // ax
  const void *v5; // rdx
  unsigned __int8 v6; // r8
  unsigned __int8 v7; // r8
  unsigned __int8 v8; // r8
  _SINGLE_LIST_ENTRY *Next; // r14
  _SINGLE_LIST_ENTRY *v10; // rbx
  _SINGLE_LIST_ENTRY *v11; // rdi
  _SINGLE_LIST_ENTRY *v12; // rbp
  unsigned __int8 v13; // r8
  unsigned __int8 v14; // dl
  unsigned __int8 v15; // r8
  unsigned __int8 irql; // [rsp+60h] [rbp+8h] BYREF
  _SINGLE_LIST_ENTRY queueList; // [rsp+68h] [rbp+10h] BYREF

  irql = 0;
  m_DeviceBase = this->m_DeviceBase;
  m_Globals = this->m_Globals;
  m_ObjectSize = m_DeviceBase->m_ObjectSize;
  v5 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !m_ObjectSize )
    v5 = 0LL;
  WPP_IFR_SF_q(m_Globals, 4u, 0xDu, 0x20u, WPP_FxPkgIo_cpp_Traceguids, v5);
  queueList.Next = 0LL;
  FxNonPagedObject::Lock(this, &irql, v6);
  FxPkgIo::GetIoQueueListLocked(this, &queueList, (void *)1);
  FxNonPagedObject::Unlock(this, irql, v7);
  Next = queueList.Next;
  if ( queueList.Next )
  {
    v10 = queueList.Next->Next;
    while ( 1 )
    {
      v11 = Next - 116;
      LOBYTE(queueList.Next) = 0;
      FxNonPagedObject::Lock((FxNonPagedObject *)&Next[-116], (unsigned __int8 *)&queueList, v8);
      if ( !BYTE2(Next[-99].Next) )
        LODWORD(v11[22].Next) = 1;
      v12 = v10;
      FxIoQueue::SetState((FxIoQueue *)&Next[-116], FxIoQueueClearShutdown|0x1);
      FxNonPagedObject::Unlock((FxNonPagedObject *)&Next[-116], (unsigned __int8)queueList.Next, v13);
      Next->Next = 0LL;
      ((void (__fastcall *)(_SINGLE_LIST_ENTRY *, __int64, __int64, const char *))v11->Next[2].Next)(
        Next - 116,
        1702326128LL,
        1379LL,
        "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxpkgio.cpp");
      if ( !v10 )
        break;
      v10 = v10->Next;
      Next = v12;
    }
  }
  FxNonPagedObject::Lock(this, &irql, v8);
  v14 = irql;
  *(_WORD *)&this->m_PowerStateOn = 1;
  FxNonPagedObject::Unlock(this, v14, v15);
}
