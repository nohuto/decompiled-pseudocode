/*
 * XREFs of CSTPush @ 0x14012B030
 * Callers:
 *     InitCreateSystemThreadsMsg @ 0x14012AF00 (InitCreateSystemThreadsMsg.c)
 *     ?SendVideoPortCalloutRequest@@YAJPEAU_POWER_INIT@@PEAH@Z @ 0x14012AF58 (-SendVideoPortCalloutRequest@@YAJPEAU_POWER_INIT@@PEAH@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CSTPush(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  int v4; // esi
  __int64 UserSessionState; // rax

  v2 = 0LL;
  v4 = a1;
  UserSessionState = W32GetUserSessionState(a1, a2);
  while ( (unsigned int)v2 < 0x1E )
  {
    if ( !*(_QWORD *)(UserSessionState + 24 * v2 + 71296) )
    {
      *(_QWORD *)(UserSessionState + 24 * v2 + 71296) = a2;
      *(_DWORD *)(UserSessionState + 24 * v2 + 71312) = v4;
      return 1LL;
    }
    v2 = (unsigned int)(v2 + 1);
  }
  return 0LL;
}
