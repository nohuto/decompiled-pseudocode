/*
 * XREFs of HvMoveLayoutStats @ 0x140A5DBE0
 * Callers:
 *     HvCheckHive @ 0x140A5D6B0 (HvCheckHive.c)
 *     HvCheckBin @ 0x140A5D8F0 (HvCheckBin.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvMoveLayoutStats(_DWORD *a1)
{
  __int64 result; // rax

  *a1 += a1[2];
  a1[1] += a1[3];
  result = 0LL;
  *((_QWORD *)a1 + 1) = 0LL;
  return result;
}
