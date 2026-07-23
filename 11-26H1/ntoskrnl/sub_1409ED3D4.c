/*
 * XREFs of sub_1409ED3D4 @ 0x1409ED3D4
 * Callers:
 *     sub_140886BA8 @ 0x140886BA8 (sub_140886BA8.c)
 *     sub_1409ED65C @ 0x1409ED65C (sub_1409ED65C.c)
 * Callees:
 *     WbMakeUserExecutablePagesKernelWritable @ 0x1409ED400 (WbMakeUserExecutablePagesKernelWritable.c)
 *     WbMakeUserDataPagesKernelWritable @ 0x1409ED50C (WbMakeUserDataPagesKernelWritable.c)
 */

__int64 __fastcall sub_1409ED3D4(void *a1, __int64 a2, int a3, __int64 a4, __int64 a5)
{
  if ( a3 )
    return WbMakeUserExecutablePagesKernelWritable(a1, a2, a4, a5);
  else
    return WbMakeUserDataPagesKernelWritable(a1, a2);
}
