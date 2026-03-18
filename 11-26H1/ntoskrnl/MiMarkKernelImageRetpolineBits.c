/*
 * XREFs of MiMarkKernelImageRetpolineBits @ 0x140B1F2FC
 * Callers:
 *     MiUnloadSystemImage @ 0x140AC76E8 (MiUnloadSystemImage.c)
 *     MiFinalizeKernelScpForSystemImage @ 0x140B1F2AC (MiFinalizeKernelScpForSystemImage.c)
 * Callees:
 *     MiIsRetpolineEnabled @ 0x14047FA5C (MiIsRetpolineEnabled.c)
 *     MiMarkRetpolineBits @ 0x140B1F348 (MiMarkRetpolineBits.c)
 *     MiIsImageFullyRetpolined @ 0x140B1F430 (MiIsImageFullyRetpolined.c)
 */

__int64 __fastcall MiMarkKernelImageRetpolineBits(__int64 a1, unsigned int a2)
{
  int v4; // edx
  __int64 v5; // rcx

  if ( MiIsRetpolineEnabled() && (!v4 || (unsigned int)MiIsImageFullyRetpolined(v5)) )
    return MiMarkRetpolineBits(*(_QWORD *)(a1 + 48), *(unsigned int *)(a1 + 64), a2);
  else
    return 0LL;
}
