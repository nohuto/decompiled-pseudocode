/*
 * XREFs of RtlCreateUserThread @ 0x1800761C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpCreateUserThreadEx @ 0x180076230 (RtlpCreateUserThreadEx.c)
 */

__int64 __fastcall RtlCreateUserThread(int a1, int a2, char a3, int a4, __int64 a5, __int64 a6)
{
  return RtlpCreateUserThreadEx(a1, a2, a3 == 1, a4, a5, a6);
}
