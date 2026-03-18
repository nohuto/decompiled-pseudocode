/*
 * XREFs of CSTPush @ 0x140166B10
 * Callers:
 *     InitCreateSystemThreadsMsg @ 0x1401669E0 (InitCreateSystemThreadsMsg.c)
 *     ?SendVideoPortCalloutRequest@@YAJPEAU_POWER_INIT@@PEAH@Z @ 0x140166A38 (-SendVideoPortCalloutRequest@@YAJPEAU_POWER_INIT@@PEAH@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CSTPush(int a1, __int64 a2, int a3)
{
  __int64 v3; // rbx
  __int64 UserSessionState; // rax

  v3 = 0LL;
  UserSessionState = W32GetUserSessionState(a1, a2, a3);
  while ( (unsigned int)v3 < 0x1E )
  {
    if ( !*(_QWORD *)(UserSessionState + 24 * v3 + 71280) )
    {
      *(_QWORD *)(UserSessionState + 24 * v3 + 71280) = a2;
      *(_DWORD *)(UserSessionState + 24 * v3 + 71296) = a1;
      return 1LL;
    }
    v3 = (unsigned int)(v3 + 1);
  }
  return 0LL;
}
