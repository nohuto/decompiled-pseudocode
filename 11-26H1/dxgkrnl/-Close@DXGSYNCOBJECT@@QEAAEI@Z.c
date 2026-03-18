/*
 * XREFs of ?Close@DXGSYNCOBJECT@@QEAAEI@Z @ 0x1403A0420
 * Callers:
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I_N@Z @ 0x1401FE008 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I_N@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x14000972C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?GetHostHandle@DXGSYNCOBJECT@@QEAAIIE@Z @ 0x140193010 (-GetHostHandle@DXGSYNCOBJECT@@QEAAIIE@Z.c)
 *     ?FreeHostHandle@DXGSYNCOBJECT@@QEAAXI@Z @ 0x1401FE314 (-FreeHostHandle@DXGSYNCOBJECT@@QEAAXI@Z.c)
 *     ?VmBusSendDestroySyncObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAXII@Z @ 0x14022E764 (-VmBusSendDestroySyncObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAXII@Z.c)
 *     ?FreeHandle@HMGRTABLE@@QEAAXI@Z @ 0x1402E98A0 (-FreeHandle@HMGRTABLE@@QEAAXI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

bool __fastcall DXGSYNCOBJECT::Close(DXGSYNCOBJECT *this, unsigned int a2)
{
  __int64 v2; // rsi
  struct DXGGLOBAL *Global; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx
  struct DXGPROCESS *Current; // rbp
  struct DXGPROCESS *v8; // rax
  int HostHandle; // r14d
  int v11; // ebx
  struct DXGGLOBAL *v12; // rax

  v2 = a2;
  Global = DXGGLOBAL::GetGlobal();
  if ( !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)Global + 76)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3024;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"DXGGLOBAL::GetGlobal()->IsSyncObjectLockExclusiveOwner()",
      3024LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  Current = DXGPROCESS::GetCurrent(v5);
  if ( (_DWORD)v2 )
  {
    if ( (*((_DWORD *)this + 107) & 2) != 0 )
    {
      HostHandle = DXGSYNCOBJECT::GetHostHandle(this, v2);
      if ( HostHandle )
      {
        v11 = *((_DWORD *)Current + 122);
        v12 = DXGGLOBAL::GetGlobal();
        DXG_GUEST_GLOBAL_VMBUS::VmBusSendDestroySyncObject(*((DXG_GUEST_GLOBAL_VMBUS **)v12 + 212), v11, HostHandle);
        DXGSYNCOBJECT::FreeHostHandle(this, v2);
      }
    }
    DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 248));
    HMGRTABLE::FreeHandle((struct DXGPROCESS *)((char *)Current + 280), v2);
    *((_QWORD *)Current + 32) = 0LL;
    ExReleasePushLockExclusiveEx((char *)Current + 248, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( !*((_DWORD *)this + 6) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3050;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"0 != m_cReference", 3050LL, 0LL, 0LL, 0LL, 0LL);
  }
  v8 = DXGPROCESS::GetCurrent(v6);
  WdLogSingleEntry3(4LL, this, v2, v8);
  WdLogGlobalForLineNumber = 3058;
  return _InterlockedAdd((volatile signed __int32 *)this + 6, 0xFFFFFFFF) == 0;
}
