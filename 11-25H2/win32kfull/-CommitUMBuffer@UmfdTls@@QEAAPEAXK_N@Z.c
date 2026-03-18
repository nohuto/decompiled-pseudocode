/*
 * XREFs of ?CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z @ 0x1401541F4
 * Callers:
 *     ?CreateUsermodeParameters@FontManagementRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x140153180 (-CreateUsermodeParameters@FontManagementRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z.c)
 *     ?CreateUsermodeParameters@UnloadFontFileRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1401532D0 (-CreateUsermodeParameters@UnloadFontFileRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z.c)
 *     ?CreateUsermodeParameters@GetTrueTypeFileRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x140153330 (-CreateUsermodeParameters@GetTrueTypeFileRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z.c)
 *     ?CreateUsermodeParameters@FreeRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1401533A0 (-CreateUsermodeParameters@FreeRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z.c)
 *     ?CreateUsermodeParameters@LoadFontFileRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x140153400 (-CreateUsermodeParameters@LoadFontFileRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z.c)
 *     ?CreateUsermodeParameters@TrueTypeFreeGlyphsetRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x140153810 (-CreateUsermodeParameters@TrueTypeFreeGlyphsetRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z.c)
 *     ?CreateUsermodeParameters@QueryFontTreeRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x140153870 (-CreateUsermodeParameters@QueryFontTreeRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z.c)
 *     ?CreateUsermodeParameters@QueryFontFileRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1401538F0 (-CreateUsermodeParameters@QueryFontFileRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z.c)
 *     ?CreateUsermodeParameters@QueryTrueTypeOutlineRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x140153990 (-CreateUsermodeParameters@QueryTrueTypeOutlineRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z.c)
 *     ?CreateUsermodeParameters@QueryFontRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x140153AD0 (-CreateUsermodeParameters@QueryFontRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z.c)
 *     ?CreateUsermodeParameters@DestroyFontRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x140153B50 (-CreateUsermodeParameters@DestroyFontRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z.c)
 *     ?CreateUsermodeParameters@QueryGlyphMetricsPlusBitsRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x140153BD0 (-CreateUsermodeParameters@QueryGlyphMetricsPlusBitsRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z.c)
 *     ?CreateUsermodeParameters@QueryAdvanceWidthsRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x140153D60 (-CreateUsermodeParameters@QueryAdvanceWidthsRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z.c)
 *     ?CreateUsermodeParameters@QueryTrueTypeTableRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x140153EE0 (-CreateUsermodeParameters@QueryTrueTypeTableRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z.c)
 *     ?CreateUsermodeParameters@QueryFontDataRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x140153FF0 (-CreateUsermodeParameters@QueryFontDataRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z.c)
 *     ?CreateUsermodeParameters@EscapeRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x140341400 (-CreateUsermodeParameters@EscapeRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z.c)
 *     ?CreateUsermodeParameters@QueryGlyphAttrsRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x140341520 (-CreateUsermodeParameters@QueryGlyphAttrsRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z.c)
 * Callees:
 *     ?AllocTemporaryBuffer@UmfdUMBuffer@@AEAA_NK@Z @ 0x1403415D0 (-AllocTemporaryBuffer@UmfdUMBuffer@@AEAA_NK@Z.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

void *__fastcall UmfdTls::CommitUMBuffer(UmfdUMBuffer **this, unsigned int a2, char a3)
{
  size_t v4; // rsi
  UmfdUMBuffer *v5; // rdi
  unsigned int v6; // ecx
  void *v7; // rbx
  unsigned int v9; // eax
  int v10; // ecx
  int v11; // eax
  char v12; // al
  ULONG_PTR RegionSize; // [rsp+50h] [rbp+8h] BYREF
  PVOID BaseAddress; // [rsp+68h] [rbp+20h] BYREF

  v4 = a2;
  v5 = *this;
  if ( a2 > *((_DWORD *)*this + 9) )
  {
    if ( UmfdUMBuffer::AllocTemporaryBuffer(*this, a2) )
    {
      v7 = (void *)*((_QWORD *)v5 + 1);
      goto LABEL_6;
    }
    goto LABEL_15;
  }
  if ( *((_QWORD *)v5 + 1) )
  {
    BaseAddress = (PVOID)*((_QWORD *)v5 + 1);
    RegionSize = 0LL;
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
    *((_QWORD *)v5 + 1) = 0LL;
    *((_DWORD *)v5 + 4) = 0;
  }
  v6 = *((_DWORD *)v5 + 8);
  if ( (unsigned int)v4 <= v6 )
    goto LABEL_5;
  if ( (int)v4 + 4095 < (unsigned int)v4 )
    goto LABEL_15;
  v9 = (v4 + 4095) & 0xFFFFF000;
  if ( v9 < v6 || v9 < (unsigned int)v4 || v9 > *((_DWORD *)v5 + 9) )
  {
    v12 = 0;
  }
  else
  {
    RegionSize = ((_DWORD)v4 + 4095) & 0xFFFFF000;
    if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v5 + 3, 0LL, &RegionSize, 0x1000u, 4u) < 0 )
      goto LABEL_15;
    v10 = RegionSize;
    if ( RegionSize < v4 )
      goto LABEL_15;
    if ( RegionSize > 0xFFFFFFFF )
    {
      v11 = -2147024362;
      v10 = -1;
    }
    else
    {
      v11 = 0;
    }
    *((_DWORD *)v5 + 8) = v10;
    if ( v11 < 0 )
      goto LABEL_15;
    v12 = 1;
  }
  if ( !v12 )
  {
LABEL_15:
    v7 = 0LL;
    goto LABEL_6;
  }
LABEL_5:
  v7 = (void *)*((_QWORD *)v5 + 3);
LABEL_6:
  *(_QWORD *)v5 = v7;
  if ( v7 && a3 )
    memset_0(v7, 0, v4);
  return v7;
}
