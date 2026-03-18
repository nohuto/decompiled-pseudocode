/*
 * XREFs of ?QueryAutoRotationState@CRotationMgr@@QEAA?AW4tagAR_STATE@@XZ @ 0x1400F9948
 * Callers:
 *     QueryAutoRotationState @ 0x1400F9850 (QueryAutoRotationState.c)
 *     ?RequestAsyncRefreshOrientation@CDispBrokerRotationMgr@@AEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1400F9A48 (-RequestAsyncRefreshOrientation@CDispBrokerRotationMgr@@AEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@.c)
 *     ?RotationLockTogglePressed@CRotationMgr@@UEAAXXZ @ 0x140299F80 (-RotationLockTogglePressed@CRotationMgr@@UEAAXXZ.c)
 * Callees:
 *     IsRemoteConnection @ 0x1400F99E0 (IsRemoteConnection.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CRotationMgr::QueryAutoRotationState(_DWORD *a1)
{
  int v2; // ecx
  int v3; // edx
  int v4; // ecx
  int v5; // edx
  unsigned int v6; // r8d
  __int64 result; // rax

  if ( a1[7] )
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 24LL))(a1);
  v2 = (unsigned int)IsRemoteConnection() != 0 ? 4 : 0;
  v3 = v2 | 1;
  if ( a1[2] )
    v3 = v2;
  if ( a1[9] || a1[8] )
    v3 |= 8u;
  v4 = v3 | 0x10;
  if ( a1[4] )
    v4 = v3;
  v5 = v4 | 0x40;
  if ( !a1[5] )
    v5 = v4;
  v6 = v5 | 0x80;
  if ( !a1[6] )
    v6 = v5;
  result = v6 | 0x20;
  if ( !a1[7] )
    return v6;
  return result;
}
