/*
 * XREFs of UserScreenAccessCheck @ 0x1400D53D0
 * Callers:
 *     <none>
 * Callees:
 *     UserSurfaceAccessCheck @ 0x1400D5420 (UserSurfaceAccessCheck.c)
 */

__int64 __fastcall UserScreenAccessCheck(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx

  v2 = 0LL;
  if ( *(_QWORD *)(W32GetUserSessionState(a1, a2) + 19144) )
    v2 = ***(_QWORD ***)(*(_QWORD *)(W32GetUserSessionState(v4, v3) + 19144) + 8LL);
  return UserSurfaceAccessCheck(v2);
}
