/*
 * XREFs of MiUpdateCfgSystemWideBitmapWorker @ 0x14099A770
 * Callers:
 *     MiUpdateCfgSystemWideBitmap @ 0x14099A680 (MiUpdateCfgSystemWideBitmap.c)
 * Callees:
 *     MiLocatePagefileSubsection @ 0x140342390 (MiLocatePagefileSubsection.c)
 *     RtlSetBitsEx @ 0x1403712C0 (RtlSetBitsEx.c)
 *     MiSectionControlArea @ 0x14038C760 (MiSectionControlArea.c)
 *     MiCheckPurgeAndUpMapCount @ 0x14043B530 (MiCheckPurgeAndUpMapCount.c)
 *     MiGetAnyMultiplexedVm @ 0x14044F0E0 (MiGetAnyMultiplexedVm.c)
 *     RtlClearAllBitsEx @ 0x14047CE30 (RtlClearAllBitsEx.c)
 *     MiRemoveFromSystemSpace @ 0x140489AA8 (MiRemoveFromSystemSpace.c)
 *     MiInsertInSystemSpace @ 0x1404E7024 (MiInsertInSystemSpace.c)
 *     MiDereferenceControlArea @ 0x1404E89D0 (MiDereferenceControlArea.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     MiImageCfgEnumNextImageExtensionRva @ 0x14077FC10 (MiImageCfgEnumNextImageExtensionRva.c)
 *     MiChargeSegmentCommit @ 0x14099AB90 (MiChargeSegmentCommit.c)
 *     MiEliminateZeroPages @ 0x14099AF5C (MiEliminateZeroPages.c)
 *     MiImageCfgEnumRvaListFirst @ 0x14099B138 (MiImageCfgEnumRvaListFirst.c)
 */

__int64 __fastcall MiUpdateCfgSystemWideBitmapWorker(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        int a5,
        unsigned int a6)
{
  ULONG_PTR v8; // rdi
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // r15
  unsigned __int64 v12; // rbx
  int v13; // r13d
  size_t v14; // rbx
  ULONG_PTR v15; // r15
  unsigned __int64 v16; // rax
  unsigned int *v17; // rax
  unsigned __int64 SizeOfBitMap; // r13
  __int64 v19; // rsi
  unsigned int ImageExtensionRva; // eax
  unsigned int i; // ebx
  unsigned __int64 v22; // rdx
  char *v23; // r10
  __int64 v24; // r9
  char v25; // r8
  unsigned int v26; // ecx
  __int64 v27; // rcx
  int v28; // r8d
  unsigned int v29; // r9d
  unsigned int v30; // r11d
  int v31; // r10d
  __int64 v32; // rbx
  __int64 v33; // rcx
  int v34; // edx
  char *AnyMultiplexedVm; // rax
  int *v37; // r8
  unsigned __int64 v38; // [rsp+30h] [rbp-40h] BYREF
  _RTL_BITMAP_EX BitMapHeader; // [rsp+38h] [rbp-38h] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+48h] [rbp-28h]
  ULONG_PTR BugCheckParameter3[2]; // [rsp+50h] [rbp-20h] BYREF
  __int64 v42; // [rsp+60h] [rbp-10h]
  int v43; // [rsp+68h] [rbp-8h]
  unsigned __int64 v45; // [rsp+C0h] [rbp+50h] BYREF
  ULONG_PTR v46; // [rsp+C8h] [rbp+58h] BYREF

  v42 = 0LL;
  v43 = 0;
  v8 = 0LL;
  *(_OWORD *)BugCheckParameter3 = 0LL;
  if ( a2 )
    v8 = *(_QWORD *)(a2 + 8);
  v9 = a3 >> 3;
  v10 = a4 >> 3;
  v45 = a3 >> 3;
  v46 = 0LL;
  BitMapHeader.SizeOfBitMap = (a4 >> 15) + ((((a3 >> 3) & 0xFFF) + 4095 + ((a4 >> 3) & 0xFFF)) >> 12);
  v11 = MiSectionControlArea(a1);
  MiCheckPurgeAndUpMapCount(v11);
  if ( v10 )
  {
    v12 = (unsigned __int16)v45 + v10;
    if ( v12 < (unsigned __int16)v45 || (LODWORD(v45) = v45 & 0xFFFF0000, v12 > *(_QWORD *)(a1 + 48) - v45) )
    {
      v13 = -1073741793;
      goto LABEL_43;
    }
  }
  else
  {
    LODWORD(v45) = v45 & 0xFFFF0000;
    v12 = *(_QWORD *)(a1 + 48) - v45;
  }
  v13 = MiInsertInSystemSpace(v12, a1, (__int64 *)&v45, 0, &v46);
  if ( v13 < 0 )
  {
LABEL_43:
    MiDereferenceControlArea(v11);
    return (unsigned int)v13;
  }
  v14 = v12 - (unsigned __int16)v9;
  v15 = v46 | (unsigned __int16)v9;
  v38 = v9 >> 12;
  BugCheckParameter1 = v46;
  v16 = MiSectionControlArea(a1);
  v17 = MiLocatePagefileSubsection((unsigned int *)(v16 + 128), &v38);
  SizeOfBitMap = BitMapHeader.SizeOfBitMap;
  if ( (unsigned int)MiChargeSegmentCommit(v17, *((_QWORD *)v17 + 1) + 8 * v38) )
  {
    v19 = a2;
    if ( a2 && (*(_DWORD *)a2 & 1) != 0 && v8 )
    {
      BitMapHeader.Buffer = (unsigned __int64 *)v15;
      BitMapHeader.SizeOfBitMap = a4;
      RtlClearAllBitsEx(&BitMapHeader);
      ImageExtensionRva = MiImageCfgEnumRvaListFirst(v8, BugCheckParameter3, a6);
      for ( i = 0; ImageExtensionRva; LODWORD(BugCheckParameter3[0]) = ImageExtensionRva )
      {
        if ( (BugCheckParameter3[0] & 0x100000000LL) != 0 )
        {
          v22 = 2 * ((unsigned __int64)ImageExtensionRva >> 4);
          if ( (ImageExtensionRva & 0xF) == *(_WORD *)(v19 + 4) )
          {
            if ( (BugCheckParameter3[0] & 0x400000000LL) != 0 )
              *(_BYTE *)(((v22 + 1) >> 3) + v15) |= 1 << ((v22 + 1) & 7);
            else
              *(_BYTE *)(((unsigned __int64)ImageExtensionRva >> 6) + v15) |= 1 << (v22 & 7);
          }
          else
          {
            RtlSetBitsEx((__int64)&BitMapHeader, v22, 2uLL);
          }
        }
        ImageExtensionRva = BugCheckParameter3[0];
        if ( LODWORD(BugCheckParameter3[0]) < HIDWORD(v42) || !HIDWORD(v42) )
        {
          ++HIDWORD(BugCheckParameter3[1]);
          v23 = (char *)((unsigned int)v42 + *(_QWORD *)(v8 + 16));
          ImageExtensionRva = BugCheckParameter3[1];
          v24 = *(_QWORD *)(v8 + 24) - (unsigned int)v42;
          if ( v24 )
          {
            do
            {
              if ( !v24 )
                KeBugCheckEx(0x1Au, 0x43666720uLL, v8, (ULONG_PTR)&BugCheckParameter3[1], ImageExtensionRva);
              v25 = *v23;
              --v24;
              v26 = (unsigned __int8)*v23++;
              v27 = v26 >> 6;
              ImageExtensionRva += *((_DWORD *)RtlpRvaCompressionTableScales + v27) * (v25 & 0x3F);
            }
            while ( (_DWORD)v27 != 3 );
            LODWORD(BugCheckParameter3[1]) = ImageExtensionRva;
            v28 = 0;
            LODWORD(v42) = (_DWORD)v23 - *(_DWORD *)(v8 + 16);
            v29 = *(_DWORD *)(v8 + 8);
            if ( v29 <= 1 )
            {
              if ( v29 == 1 )
              {
                v37 = *(int **)(v8 + 48);
                if ( v37 )
                  v28 = *v37;
                else
                  v28 = 1;
              }
            }
            else
            {
              v30 = 0;
              v31 = 1;
              v32 = 0LL;
              do
              {
                if ( _bittest64(*(const signed __int64 **)(v8 + 40), HIDWORD(BugCheckParameter3[1]) * v29 + v30) )
                {
                  v33 = *(_QWORD *)(v8 + 48);
                  if ( v33 )
                    v34 = *(_DWORD *)(v33 + v32);
                  else
                    v34 = v31;
                  v28 |= v34;
                }
                ++v30;
                v31 = __ROL4__(v31, 1);
                v32 += 4LL;
              }
              while ( v30 < v29 );
              v19 = a2;
            }
            HIDWORD(BugCheckParameter3[0]) = v28;
            i = 0;
          }
          else
          {
            ImageExtensionRva = 0;
          }
        }
        if ( !ImageExtensionRva || ImageExtensionRva >= HIDWORD(v42) && HIDWORD(v42) )
          ImageExtensionRva = MiImageCfgEnumNextImageExtensionRva(BugCheckParameter3);
      }
      AnyMultiplexedVm = MiGetAnyMultiplexedVm(2);
      MiEliminateZeroPages(AnyMultiplexedVm, v15 & 0xFFFFFFFFFFFFF000uLL, SizeOfBitMap << 12, 0LL);
    }
    else
    {
      memset_0((void *)v15, 255, v14);
      i = 0;
    }
  }
  else
  {
    i = -1073741523;
  }
  MiRemoveFromSystemSpace(BugCheckParameter1);
  return i;
}
