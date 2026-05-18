/*
 * XREFs of sub_1800422A0 @ 0x1800422A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180034428 @ 0x180034428 (sub_180034428.c)
 *     sub_18007AB60 @ 0x18007AB60 (sub_18007AB60.c)
 */

__int64 __fastcall sub_1800422A0(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 result; // rax
  int v5; // edx

  result = *a4;
  v5 = *(_DWORD *)(*a4 + 440);
  if ( (v5 & 0x10000) != 0 && (v5 & 0x200000) != 0 )
  {
    sub_18007AB60();
    sub_180034428();
  }
  return result;
}
