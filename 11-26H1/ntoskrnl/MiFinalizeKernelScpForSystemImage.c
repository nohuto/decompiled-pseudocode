/*
 * XREFs of MiFinalizeKernelScpForSystemImage @ 0x140B2132C
 * Callers:
 *     MmLoadSystemImageEx @ 0x140A39A74 (MmLoadSystemImageEx.c)
 * Callees:
 *     MiMapKernelScp @ 0x1404EC740 (MiMapKernelScp.c)
 *     MiMarkKernelImageRetpolineBits @ 0x140B2137C (MiMarkKernelImageRetpolineBits.c)
 *     MiLogRetpolineImageLoadEvents @ 0x140B214F4 (MiLogRetpolineImageLoadEvents.c)
 */

__int64 __fastcall MiFinalizeKernelScpForSystemImage(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // edi

  MiMapKernelScp(*(_QWORD *)(a1 + 48), (unsigned __int64)*(unsigned int *)(a1 + 64) >> 12, a3);
  v4 = MiMarkKernelImageRetpolineBits(a1, 1LL);
  if ( v4 >= 0 )
    MiLogRetpolineImageLoadEvents(a1);
  return (unsigned int)v4;
}
