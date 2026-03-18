/*
 * XREFs of ?MNSetTimerToOpenHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@@Z @ 0x1402054B8
 * Callers:
 *     xxxMenuWindowProc @ 0x140183030 (xxxMenuWindowProc.c)
 * Callees:
 *     InternalSetTimer @ 0x140019C44 (InternalSetTimer.c)
 */

__int64 __fastcall MNSetTimerToOpenHierarchy(__int64 **a1)
{
  __int64 v2; // rdx
  _QWORD *v3; // rcx
  _DWORD *v5; // rcx
  __int64 UserSessionState; // rax

  if ( *(_DWORD *)(**a1 + 80) == -1 )
    return 0LL;
  if ( *(_DWORD *)(**a1 + 80) >= *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 40) + 40LL) + 44LL) )
    return 0LL;
  v2 = **a1;
  v3 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 40) + 88LL) + 96LL * *(unsigned int *)(v2 + 80));
  if ( !v3[2] || (*(_DWORD *)(*v3 + 4LL) & 3) != 0 )
    return 0LL;
  if ( (*(_DWORD *)**a1 & 0x2000) != 0 )
    return 1LL;
  v5 = (_DWORD *)**a1;
  if ( (*v5 & 0x20) != 0 )
  {
    v2 = **a1;
    v5 = (_DWORD *)v2;
    if ( *(_DWORD *)(v2 + 80) == *(_DWORD *)(v2 + 84) )
      return 1LL;
  }
  UserSessionState = W32GetUserSessionState(v5, v2);
  if ( InternalSetTimer(*(_QWORD *)(**a1 + 16), 65534LL, *(_DWORD *)(UserSessionState + 66032), 0LL, 0, 16) )
  {
    *(_DWORD *)**a1 |= 0x2000u;
    return 1LL;
  }
  return 0xFFFFFFFFLL;
}
