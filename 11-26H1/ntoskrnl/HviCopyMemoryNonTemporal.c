/*
 * XREFs of HviCopyMemoryNonTemporal @ 0x1404F9560
 * Callers:
 *     CcCopyToCacheHelper @ 0x1404875B4 (CcCopyToCacheHelper.c)
 * Callees:
 *     HviEnterKernelAperture @ 0x140637888 (HviEnterKernelAperture.c)
 *     HviLeaveKernelAperture @ 0x140637960 (HviLeaveKernelAperture.c)
 *     RtlCopyMemoryNonTemporal @ 0x140730E40 (RtlCopyMemoryNonTemporal.c)
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
