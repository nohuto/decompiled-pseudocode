/*
 * XREFs of sub_1409F0C04 @ 0x1409F0C04
 * Callers:
 *     sub_1408807A8 @ 0x1408807A8 (sub_1408807A8.c)
 *     sub_1409F0E8C @ 0x1409F0E8C (sub_1409F0E8C.c)
 * Callees:
 *     WbMakeUserExecutablePagesKernelWritable @ 0x1409F0C30 (WbMakeUserExecutablePagesKernelWritable.c)
 *     WbMakeUserDataPagesKernelWritable @ 0x1409F0D3C (WbMakeUserDataPagesKernelWritable.c)
 */

__int64 __fastcall sub_1409F0C04(void *a1, __int64 a2, int a3, __int64 a4, __int64 a5)
{
  if ( a3 )
    return WbMakeUserExecutablePagesKernelWritable(a1, a2, a4, a5);
  else
    return WbMakeUserDataPagesKernelWritable(a1, a2);
}
