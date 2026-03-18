/*
 * XREFs of UserScreenAccessCheck @ 0x14011A350
 * Callers:
 *     <none>
 * Callees:
 *     UserSurfaceAccessCheck @ 0x14011A3A0 (UserSurfaceAccessCheck.c)
 */

__int64 __fastcall UserScreenAccessCheck(int a1, int a2, int a3)
{
  __int64 v3; // rbx
  int v4; // edx
  int v5; // ecx
  int v6; // r8d

  v3 = 0LL;
  if ( *(_QWORD *)(W32GetUserSessionState(a1, a2, a3) + 19176) )
    v3 = ***(_QWORD ***)(*(_QWORD *)(W32GetUserSessionState(v5, v4, v6) + 19176) + 8LL);
  return UserSurfaceAccessCheck(v3);
}
