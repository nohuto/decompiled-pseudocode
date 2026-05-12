/*
 * XREFs of sub_1401B71D0 @ 0x1401B71D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1401B71D0(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 - 16);
  if ( (*(_BYTE *)(result + 248) & 2) == 0 )
    KeBugCheckEx(0xF1u, 0x2002uLL, 0LL, 0LL, 0LL);
  return result;
}
