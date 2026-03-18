/*
 * XREFs of ?DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z @ 0x1403B77F0
 * Callers:
 *     DxgkOpenKeyedMutexFromNtHandle @ 0x1401EBA30 (DxgkOpenKeyedMutexFromNtHandle.c)
 *     DxgkCreateKeyedMutex @ 0x1401FEF00 (DxgkCreateKeyedMutex.c)
 *     DxgkCreateKeyedMutex2 @ 0x1401FF290 (DxgkCreateKeyedMutex2.c)
 *     DxgkOpenKeyedMutex @ 0x1401FF7A0 (DxgkOpenKeyedMutex.c)
 *     DxgkOpenKeyedMutex2 @ 0x1401FFAE0 (DxgkOpenKeyedMutex2.c)
 *     ?CloseLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAXW4_OUTPUTDUPL_MUTEX_TYPE@@H@Z @ 0x1402B05CC (-CloseLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAXW4_OUTPUTDUPL_MUTEX_TYPE@@H@Z.c)
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1402E7F14 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     ?DestroyLocal@DXGKEYEDMUTEX@@SAJI@Z @ 0x1403B75BC (-DestroyLocal@DXGKEYEDMUTEX@@SAJI@Z.c)
 * Callees:
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x140009220 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x14004C5D0 (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ?FreeHandleUnsafe@DXGPROCESS@@QEAAXI@Z @ 0x1400678B0 (-FreeHandleUnsafe@DXGPROCESS@@QEAAXI@Z.c)
 *     ?GetHostHandle@DXGKEYEDMUTEX@@QEAAII@Z @ 0x14018B1F4 (-GetHostHandle@DXGKEYEDMUTEX@@QEAAII@Z.c)
 *     ?FreeHostHandle@DXGKEYEDMUTEX@@QEAAXI@Z @ 0x1401FE298 (-FreeHostHandle@DXGKEYEDMUTEX@@QEAAXI@Z.c)
 *     ?VmBusSendDestroyKeyedMutex@DXG_GUEST_GLOBAL_VMBUS@@QEAAXII@Z @ 0x14022E3EC (-VmBusSendDestroyKeyedMutex@DXG_GUEST_GLOBAL_VMBUS@@QEAAXII@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

unsigned __int8 __fastcall DXGKEYEDMUTEX::DestroyHandle(__int64 a1)
{
  unsigned int v1; // esi
  struct DXGPROCESS *Current; // rbx
  unsigned int v3; // eax
  __int64 v4; // rcx
  DXGKEYEDMUTEX *v5; // rdi
  int HostHandle; // ebp
  int v8; // ebx
  struct DXGGLOBAL *Global; // rax
  _BYTE v10[32]; // [rsp+50h] [rbp-28h] BYREF

  v1 = a1;
  Current = DXGPROCESS::GetCurrent(a1);
  if ( !Current )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4535;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pProcess != NULL", 4535LL, 0LL, 0LL, 0LL, 0LL);
  }
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v10, Current);
  v3 = (v1 >> 6) & 0xFFFFFF;
  if ( v3 < *((_DWORD *)Current + 74)
    && ((v1 >> 25) & 0x60) == (*(_BYTE *)(*((_QWORD *)Current + 35) + 16LL * v3 + 8) & 0x60)
    && (*(_DWORD *)(*((_QWORD *)Current + 35) + 16LL * v3 + 8) & 0x1F) != 0
    && (v4 = *((_QWORD *)Current + 35), (*(_BYTE *)(v4 + 16LL * v3 + 8) & 0x1F) == 9)
    && (v5 = *(DXGKEYEDMUTEX **)(v4 + 16LL * v3)) != 0LL )
  {
    DXGPROCESS::FreeHandleUnsafe(Current, v1);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v10);
    if ( *((_BYTE *)v5 + 176) )
    {
      HostHandle = DXGKEYEDMUTEX::GetHostHandle(v5, v1);
      if ( HostHandle )
      {
        v8 = *((_DWORD *)Current + 122);
        Global = DXGGLOBAL::GetGlobal();
        DXG_GUEST_GLOBAL_VMBUS::VmBusSendDestroyKeyedMutex(*((DXG_GUEST_GLOBAL_VMBUS **)Global + 212), v8, HostHandle);
        DXGKEYEDMUTEX::FreeHostHandle(v5, v1);
      }
    }
    DXGKEYEDMUTEX::ReleaseReference(v5);
    return 1;
  }
  else
  {
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v10);
    return 0;
  }
}
