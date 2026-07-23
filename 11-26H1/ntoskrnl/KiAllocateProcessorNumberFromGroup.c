/*
 * XREFs of KiAllocateProcessorNumberFromGroup @ 0x1405F1C5C
 * Callers:
 *     KiAllocateProcessorNumber @ 0x1405F1B14 (KiAllocateProcessorNumber.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 __fastcall KiAllocateProcessorNumberFromGroup(unsigned __int16 a1, unsigned int *a2)
{
  __int64 v2; // r11
  ULONG_PTR v3; // r9
  unsigned __int64 v4; // r10
  __int64 v5; // rax
  __int64 result; // rax
  unsigned int v7; // [rsp+40h] [rbp+8h]

  v2 = 4LL * a1;
  v3 = KiGroupBlock[v2];
  v4 = v3 + 1;
  if ( v3 == -1LL )
    KeBugCheckEx(0x200u, 3uLL, a1, 0xFFFFFFFFFFFFFFFFuLL, (unsigned int)KiMaximumGroupSize);
  _BitScanReverse64((unsigned __int64 *)&v5, v4);
  if ( (unsigned int)v5 >= (unsigned int)KiMaximumGroupSize )
    KeBugCheckEx(0x200u, 3uLL, a1, v3, (unsigned int)KiMaximumGroupSize);
  v7 = a1;
  BYTE2(v7) = v5;
  result = v7;
  KiGroupBlock[v2] = v4 | v3;
  *a2 = v7;
  return result;
}
