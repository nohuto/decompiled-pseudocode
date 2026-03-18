/*
 * XREFs of GetglpSetupPrograms @ 0x1402836E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GetglpSetupPrograms(__int64 *a1, __int64 a2)
{
  __int64 result; // rax

  result = W32GetUserSessionState(a1, a2) + 68416;
  *a1 = result;
  return result;
}
