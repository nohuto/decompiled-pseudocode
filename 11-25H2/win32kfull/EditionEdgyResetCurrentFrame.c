/*
 * XREFs of EditionEdgyResetCurrentFrame @ 0x1402A66B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall EditionEdgyResetCurrentFrame(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(a1, a2) + 19144) + 248LL);
  if ( result )
    *(_QWORD *)(result + 232) = 0LL;
  return result;
}
