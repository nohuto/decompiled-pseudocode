/*
 * XREFs of rimObsIsObserverTarget_0 @ 0x14020E18C
 * Callers:
 *     rimObsCheckForRegistrationConflicts @ 0x14020DE84 (rimObsCheckForRegistrationConflicts.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall rimObsIsObserverTarget_0(_DWORD *a1, int a2, int a3, int a4)
{
  __int64 result; // rax

  result = 0LL;
  if ( a2 == a1[27] && (a2 != 2 || a3 == a1[28] && a4 == a1[29]) )
    return 1LL;
  return result;
}
