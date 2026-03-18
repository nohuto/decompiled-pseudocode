/*
 * XREFs of ??1DXGDEVICE@@QEAA@XZ @ 0x1403C3748
 * Callers:
 *     ??_GDXGDEVICE@@QEAAPEAXI@Z @ 0x14003CBD8 (--_GDXGDEVICE@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x14000972C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x14001D25C (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??1?$DXGNODELIST@VADAPTER_DISPLAY@@VDXGPROTECTEDSESSION@@@@AEAA@XZ @ 0x140058930 (--1-$DXGNODELIST@VADAPTER_DISPLAY@@VDXGPROTECTEDSESSION@@@@AEAA@XZ.c)
 *     ?RemoveDxgDevice@DXGK_VIRTUAL_GPU_PARAV@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x14007589C (-RemoveDxgDevice@DXGK_VIRTUAL_GPU_PARAV@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?VmBusSendSetGuestData@DXG_HOST_GLOBAL_VMBUS@@SAXPEAXEW4SETGUESTDATA_DATATYPE@@0@Z @ 0x140084B04 (-VmBusSendSetGuestData@DXG_HOST_GLOBAL_VMBUS@@SAXPEAXEW4SETGUESTDATA_DATATYPE@@0@Z.c)
 */

void __fastcall DXGDEVICE::~DXGDEVICE(DXGDEVICE *this)
{
  __int64 v2; // r8
  void **v3; // rsi
  __int64 v4; // rbp
  _DWORD *v5; // rdi
  _BYTE *v6; // rdi
  void *v7; // rcx
  void *v8; // rcx
  __int64 v9; // rcx
  DXGK_VIRTUAL_GPU_PARAV *v10; // rcx
  int v11; // [rsp+60h] [rbp+8h] BYREF

  if ( *((_BYTE *)this + 72) != 1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 744;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_InDestructor == TRUE", 744LL, 0LL, 0LL, 0LL, 0LL);
  }
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*((void **)this + 241));
  v3 = (void **)((char *)this + 1320);
  v4 = 16LL;
  v5 = (_DWORD *)((char *)this + 1448);
  do
  {
    if ( *(v5 - 116) )
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*(v3 - 58));
    if ( *v5 )
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*v3);
    ++v5;
    ++v3;
    --v4;
  }
  while ( v4 );
  v6 = (char *)this + 1917;
  if ( (*((_BYTE *)this + 1917) & 2) != 0 )
  {
    v9 = *((_QWORD *)this + 60);
    if ( v9 )
    {
      v11 = 22;
      DXG_HOST_GLOBAL_VMBUS::VmBusSendSetGuestData(v9, 1, v2, &v11);
      v6 = (char *)this + 1917;
    }
    DXGPUSHLOCK::AcquireExclusive((DXGDEVICE *)((char *)this + 80));
    v10 = (DXGK_VIRTUAL_GPU_PARAV *)*((_QWORD *)this + 14);
    if ( v10 )
      DXGK_VIRTUAL_GPU_PARAV::RemoveDxgDevice(v10, (struct _LIST_ENTRY *)((char *)this + 120));
    *((_QWORD *)this + 11) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 80, 0LL);
    KeLeaveCriticalRegion();
  }
  v7 = (void *)*((_QWORD *)this + 245);
  if ( v7 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v7);
  v8 = (void *)*((_QWORD *)this + 60);
  if ( (*v6 & 1) != 0 )
  {
    if ( v8 )
      CRefCountedBuffer::RefCountedBufferRelease(v8);
  }
  else
  {
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v8);
  }
  if ( (*v6 & 4) != 0
    && _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)this + 2) + 184LL), 0xFFFFFFFF) == 1 )
  {
    _InterlockedExchange64((volatile __int64 *)(*((_QWORD *)this + 2) + 176LL), 0LL);
  }
  DXGNODELIST<ADAPTER_DISPLAY,DXGPROTECTEDSESSION>::~DXGNODELIST<ADAPTER_DISPLAY,DXGPROTECTEDSESSION>((_QWORD *)this + 70);
  DXGNODELIST<ADAPTER_DISPLAY,DXGPROTECTEDSESSION>::~DXGNODELIST<ADAPTER_DISPLAY,DXGPROTECTEDSESSION>((_QWORD *)this + 68);
  DXGNODELIST<ADAPTER_DISPLAY,DXGPROTECTEDSESSION>::~DXGNODELIST<ADAPTER_DISPLAY,DXGPROTECTEDSESSION>((_QWORD *)this + 66);
  DXGNODELIST<ADAPTER_DISPLAY,DXGPROTECTEDSESSION>::~DXGNODELIST<ADAPTER_DISPLAY,DXGPROTECTEDSESSION>((_QWORD *)this + 64);
  DXGNODELIST<ADAPTER_DISPLAY,DXGPROTECTEDSESSION>::~DXGNODELIST<ADAPTER_DISPLAY,DXGPROTECTEDSESSION>((_QWORD *)this + 62);
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
}
