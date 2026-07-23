/*
 * XREFs of HviCopyMemoryNonTemporal @ 0x1404F2B70
 * Callers:
 *     CcCopyToCacheHelper @ 0x140480FF4 (CcCopyToCacheHelper.c)
 * Callees:
 *     HviEnterKernelAperture @ 0x14063A88C (HviEnterKernelAperture.c)
 *     HviLeaveKernelAperture @ 0x14063A964 (HviLeaveKernelAperture.c)
 *     RtlCopyMemoryNonTemporal @ 0x140735A10 (RtlCopyMemoryNonTemporal.c)
 */

__int64 __fastcall HviCopyMemoryNonTemporal(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 i; // rdi
  unsigned int v8; // ebx

  for ( i = 0LL; (unsigned int)i < a3; i = (unsigned int)(i + 0x100000) )
  {
    v8 = a3 - i;
    if ( a3 - (unsigned int)i > 0x100000 )
      v8 = 0x100000;
    HviEnterKernelAperture();
    RtlCopyMemoryNonTemporal((void *)(i + a1), (const void *)(i + a2), v8);
    HviLeaveKernelAperture();
  }
  return 0LL;
}
