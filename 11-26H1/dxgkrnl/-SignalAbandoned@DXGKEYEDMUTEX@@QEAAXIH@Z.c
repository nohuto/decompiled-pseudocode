/*
 * XREFs of ?SignalAbandoned@DXGKEYEDMUTEX@@QEAAXIH@Z @ 0x1403B7534
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1402E7F14 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 * Callees:
 *     ??0DXGKEYEDMUTEXBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGKEYEDMUTEX@@@Z @ 0x140007F98 (--0DXGKEYEDMUTEXBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGKEYEDMUTEX@@@Z.c)
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x14004C5D0 (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?SignalAbandonedInternal@DXGKEYEDMUTEX@@QEAAXIH@Z @ 0x1403B7978 (-SignalAbandonedInternal@DXGKEYEDMUTEX@@QEAAXIH@Z.c)
 */

void __fastcall DXGKEYEDMUTEX::SignalAbandoned(DXGKEYEDMUTEX *this, unsigned int a2)
{
  __int64 v2; // rbx
  struct _KTHREAD **Current; // rax
  struct DXGKEYEDMUTEX *v4; // [rsp+30h] [rbp+8h] BYREF
  DXGKEYEDMUTEX *v5; // [rsp+48h] [rbp+20h] BYREF

  v4 = this;
  v2 = a2;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent((__int64)this);
  v4 = 0LL;
  DXGKEYEDMUTEXBYHANDLE::DXGKEYEDMUTEXBYHANDLE((DXGKEYEDMUTEXBYHANDLE *)&v5, v2, Current, &v4);
  if ( v4 )
  {
    DXGKEYEDMUTEX::SignalAbandonedInternal(v4, v2, 0);
  }
  else
  {
    WdLogSingleEntry2(3LL, v2, -1073741811LL);
    WdLogGlobalForLineNumber = 4590;
  }
  if ( v5 )
    DXGKEYEDMUTEX::ReleaseReference(v5);
}
