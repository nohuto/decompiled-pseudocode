/*
 * XREFs of DifInitSegContext @ 0x140650B6C
 * Callers:
 *     DifRegisterObjectTracking @ 0x14064ED80 (DifRegisterObjectTracking.c)
 *     DifInit @ 0x14064F4A0 (DifInit.c)
 * Callees:
 *     DifAllocSegments @ 0x140650A10 (DifAllocSegments.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall DifInitSegContext(_DWORD *a1, int a2, unsigned int a3, unsigned int a4)
{
  if ( (unsigned int)(a2 - 1) > 0x7F )
    return 3221225712LL;
  if ( a3 - 16 > 0x70 )
    return 3221225713LL;
  if ( 0x1000 % a3 || (a3 & 0xF) != 0 )
    return 3221225714LL;
  if ( a4 > (a2 * (0x1000 / a3)) >> 2 )
    return 3221225715LL;
  memset_0(a1, 0, 0x60uLL);
  a1[8] = a2;
  a1[10] = a3;
  a1[22] = a4;
  return DifAllocSegments((__int64)a1);
}
