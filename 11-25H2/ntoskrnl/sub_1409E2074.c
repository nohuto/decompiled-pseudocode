/*
 * XREFs of sub_1409E2074 @ 0x1409E2074
 * Callers:
 *     sub_1407F0D20 @ 0x1407F0D20 (sub_1407F0D20.c)
 *     sub_1409E2780 @ 0x1409E2780 (sub_1409E2780.c)
 * Callees:
 *     WbMakeUserExecutablePagesKernelWritable @ 0x1409E20A0 (WbMakeUserExecutablePagesKernelWritable.c)
 *     WbMakeUserDataPagesKernelWritable @ 0x1409E21A8 (WbMakeUserDataPagesKernelWritable.c)
 */

__int64 __fastcall sub_1409E2074(void *a1, __int64 a2, int a3, __int64 a4, __int64 a5)
{
  if ( a3 )
    return WbMakeUserExecutablePagesKernelWritable(a1, a2, a4, a5);
  else
    return WbMakeUserDataPagesKernelWritable(a1, a2);
}
