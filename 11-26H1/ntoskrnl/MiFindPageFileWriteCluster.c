/*
 * XREFs of MiFindPageFileWriteCluster @ 0x1403FEDBC
 * Callers:
 *     MiModwriterFillMdl @ 0x140400130 (MiModwriterFillMdl.c)
 * Callees:
 *     MiMakePageFilePte @ 0x140298330 (MiMakePageFilePte.c)
 *     MiSetPageFileAllocationBits @ 0x1403FDBF4 (MiSetPageFileAllocationBits.c)
 *     RtlFindLongestRunClearCapped @ 0x1403FDC2C (RtlFindLongestRunClearCapped.c)
 *     MiFindFreePageFileSpace @ 0x1403FEF30 (MiFindFreePageFileSpace.c)
 *     MiDerefPageFileSpaceBitmaps @ 0x14040353C (MiDerefPageFileSpaceBitmaps.c)
 *     MiRefPageFileSpaceBitmaps @ 0x1404A5504 (MiRefPageFileSpaceBitmaps.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

unsigned int *__fastcall MiFindPageFileWriteCluster(__int64 a1, unsigned int *a2, ULONG *a3, int a4)
{
  unsigned int v4; // ebx
  unsigned int v7; // ecx
  unsigned __int64 PageFilePte; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  int v11; // r9d
  ULONG FreePageFileSpace; // r14d
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // rbx
  unsigned int *result; // rax
  unsigned int *v16; // rcx
  _OWORD *v17; // r13
  int v18; // r15d
  unsigned int v19; // edi
  ULONG v20; // eax
  ULONG LongestRunClearCapped; // eax
  unsigned int v22; // ecx
  void *v23; // rax
  __int64 v24; // [rsp+20h] [rbp-48h] BYREF
  __int64 v25; // [rsp+28h] [rbp-40h]
  _OWORD v26[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v27; // [rsp+50h] [rbp-18h]
  unsigned __int64 v28; // [rsp+B0h] [rbp+48h] BYREF
  unsigned int *v29; // [rsp+B8h] [rbp+50h]
  ULONG *v30; // [rsp+C0h] [rbp+58h]
  ULONG v31; // [rsp+C8h] [rbp+60h] BYREF

  v30 = a3;
  v29 = a2;
  v4 = *a3;
  LODWORD(v25) = 0;
  v27 = 0LL;
  v24 = 0LL;
  v7 = *a2;
  memset(v26, 0, sizeof(v26));
  PageFilePte = MiMakePageFilePte(v7);
  v9 = *(_QWORD *)(a1 + 224);
  v28 = v10 ^ (v10 ^ PageFilePte) & 0xFFFFFFFFFFFF0FFFuLL;
  FreePageFileSpace = MiFindFreePageFileSpace(v9, &v28, v4, v11 != 0 ? 38 : 32);
  if ( FreePageFileSpace )
  {
    v13 = v28;
    if ( qword_140E2D8C0 && (v28 & 0x10) == 0 )
      v13 = qword_140E2D8C8 & v28;
    v14 = HIDWORD(v13);
  }
  else
  {
    if ( a4 )
    {
      v16 = (unsigned int *)&v24;
      v17 = *(_OWORD **)(a1 + 80);
      v18 = 0;
      LODWORD(v24) = *(_DWORD *)a1;
      v19 = v4;
      v25 = *((_QWORD *)v17 + 2);
      v20 = *v29;
    }
    else
    {
      v18 = *(_DWORD *)(a1 + 96);
      v19 = *(_DWORD *)(a1 + 92);
      if ( v19 < dword_140FBF21C && *(_DWORD *)(a1 + 100) != v18 )
      {
        if ( v19 >= (unsigned int)dword_140FBF21C >> 3 )
        {
          v22 = v19 + (v19 >> 1);
          v19 = dword_140FBF21C;
          if ( v22 < dword_140FBF21C )
            v19 = v22;
        }
        else
        {
          v19 *= 2;
        }
        *(_DWORD *)(a1 + 92) = v19;
      }
      v17 = v26;
      if ( v4 < v19 )
        v19 = v4;
      if ( (*(_WORD *)(a1 + 172) & 0x800) != 0 )
        v19 = 1;
      MiRefPageFileSpaceBitmaps(a1, v26);
      v20 = *(_DWORD *)(a1 + 88);
      v16 = (unsigned int *)v26 + 2;
    }
    v31 = v20;
    LongestRunClearCapped = RtlFindLongestRunClearCapped(v16, v19, &v31);
    LODWORD(v14) = v31;
    FreePageFileSpace = LongestRunClearCapped;
    if ( a4 )
    {
      MiSetPageFileAllocationBits(a1, v31, LongestRunClearCapped);
    }
    else
    {
      if ( LongestRunClearCapped )
      {
        if ( LongestRunClearCapped < v19 )
        {
          *(_DWORD *)(a1 + 92) = LongestRunClearCapped;
          *(_DWORD *)(a1 + 100) = v18;
        }
        *(_DWORD *)(a1 + 88) = v14 + LongestRunClearCapped;
      }
      v23 = (void *)MiDerefPageFileSpaceBitmaps(a1, v17, 0LL);
      if ( v23 )
        ExFreePoolWithTag(v23, 0);
    }
  }
  *v30 = FreePageFileSpace;
  result = v29;
  *v29 = v14;
  return result;
}
