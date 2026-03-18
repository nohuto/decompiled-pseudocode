/*
 * XREFs of MiCaptureImageExceptionValues @ 0x140AA95F8
 * Callers:
 *     MiConstructLoaderEntry @ 0x140AA8F54 (MiConstructLoaderEntry.c)
 * Callees:
 *     DbgPrintEx @ 0x140397530 (DbgPrintEx.c)
 *     RtlSetAllBits @ 0x1403F4780 (RtlSetAllBits.c)
 *     RtlImageNtHeader @ 0x1404696C0 (RtlImageNtHeader.c)
 *     RtlClearAllBits @ 0x14047EA90 (RtlClearAllBits.c)
 *     MiGetExtendedLoaderBitmap @ 0x1404FE2CC (MiGetExtendedLoaderBitmap.c)
 *     RtlMarkExceptionHandlingPages @ 0x140AA96C8 (RtlMarkExceptionHandlingPages.c)
 */

void __fastcall MiCaptureImageExceptionValues(__int64 a1)
{
  unsigned __int64 v1; // rbp
  _DWORD *v3; // r14
  RTL_BITMAP *ExtendedLoaderBitmap; // rdi
  unsigned int v5; // esi
  int v6; // edx
  unsigned __int64 v7; // r8
  int v8; // r9d
  PRTL_BITMAP BitMapHeader; // [rsp+20h] [rbp-18h]

  v1 = *(_QWORD *)(a1 + 48);
  v3 = RtlImageNtHeader(v1);
  ExtendedLoaderBitmap = (RTL_BITMAP *)MiGetExtendedLoaderBitmap(a1);
  v5 = *(_DWORD *)(a1 + 64) >> 12;
  ExtendedLoaderBitmap->SizeOfBitMap = v5;
  ExtendedLoaderBitmap->Buffer = &ExtendedLoaderBitmap[1].SizeOfBitMap;
  RtlClearAllBits(ExtendedLoaderBitmap);
  if ( v3[33] > 3u )
  {
    v6 = *(_DWORD *)(a1 + 152);
    v7 = v1 + (unsigned int)v3[40];
    *(_QWORD *)(a1 + 16) = v7;
    v8 = v3[41];
    *(_DWORD *)(a1 + 24) = v8;
    if ( (int)RtlMarkExceptionHandlingPages(v1, v6, v7, v8, ExtendedLoaderBitmap) < 0 )
    {
      LODWORD(BitMapHeader) = v5;
      DbgPrintEx(
        0x66u,
        0,
        "Image %wZ has unrecognized unwind information causing a charge of %u pages\n",
        a1 + 88,
        BitMapHeader);
      RtlSetAllBits(ExtendedLoaderBitmap);
    }
  }
}
