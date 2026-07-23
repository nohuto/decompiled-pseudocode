/*
 * XREFs of MiCaptureImageExceptionValues @ 0x140AA5A00
 * Callers:
 *     MiConstructLoaderEntry @ 0x140AA535C (MiConstructLoaderEntry.c)
 * Callees:
 *     DbgPrintEx @ 0x1403992B0 (DbgPrintEx.c)
 *     RtlSetAllBits @ 0x1403EE130 (RtlSetAllBits.c)
 *     RtlImageNtHeader @ 0x140462E40 (RtlImageNtHeader.c)
 *     RtlClearAllBits @ 0x140478400 (RtlClearAllBits.c)
 *     MiGetExtendedLoaderBitmap @ 0x1404F780C (MiGetExtendedLoaderBitmap.c)
 *     RtlMarkExceptionHandlingPages @ 0x140AA5AD0 (RtlMarkExceptionHandlingPages.c)
 */

void __fastcall MiCaptureImageExceptionValues(__int64 a1)
{
  char *v1; // rbp
  PIMAGE_NT_HEADERS v3; // r14
  _RTL_BITMAP *ExtendedLoaderBitmap; // rdi
  unsigned int v5; // esi
  int v6; // edx
  char *v7; // r8
  int Size; // r9d
  PRTL_BITMAP BitMapHeader; // [rsp+20h] [rbp-18h]

  v1 = *(char **)(a1 + 48);
  v3 = RtlImageNtHeader(v1);
  ExtendedLoaderBitmap = (_RTL_BITMAP *)MiGetExtendedLoaderBitmap(a1);
  v5 = *(_DWORD *)(a1 + 64) >> 12;
  ExtendedLoaderBitmap->SizeOfBitMap = v5;
  ExtendedLoaderBitmap->Buffer = &ExtendedLoaderBitmap[1].SizeOfBitMap;
  RtlClearAllBits(ExtendedLoaderBitmap);
  if ( v3->OptionalHeader.NumberOfRvaAndSizes > 3 )
  {
    v6 = *(_DWORD *)(a1 + 152);
    v7 = &v1[v3->OptionalHeader.DataDirectory[3].VirtualAddress];
    *(_QWORD *)(a1 + 16) = v7;
    Size = v3->OptionalHeader.DataDirectory[3].Size;
    *(_DWORD *)(a1 + 24) = Size;
    if ( (int)RtlMarkExceptionHandlingPages((int)v1, v6, (int)v7, Size, ExtendedLoaderBitmap) < 0 )
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
