/*
 * XREFs of MiConvertContiguousPages @ 0x140464F84
 * Callers:
 *     MiFindContiguousPagesFinish @ 0x1404F063C (MiFindContiguousPagesFinish.c)
 * Callees:
 *     MiMakeDemandZeroPte @ 0x14028A830 (MiMakeDemandZeroPte.c)
 *     MiUpdatePageFileHighInPte @ 0x14028B570 (MiUpdatePageFileHighInPte.c)
 *     MiChangePageAttribute @ 0x1402BA420 (MiChangePageAttribute.c)
 *     MiMakeLinkedListPte @ 0x1403675E4 (MiMakeLinkedListPte.c)
 *     MiChangePageAttributeBatch @ 0x14036ABBC (MiChangePageAttributeBatch.c)
 *     MiGetPteLink @ 0x14036AF38 (MiGetPteLink.c)
 */

__int64 __fastcall MiConvertContiguousPages(__int64 a1, __int64 a2, unsigned int a3, char a4)
{
  unsigned __int64 DemandZeroPte; // rax
  char v7; // r11
  __int64 v8; // r9
  __int64 v9; // rdx
  unsigned __int64 v10; // rdi
  __int64 v11; // r10
  __int64 PteLink; // r15
  __int64 v13; // r13
  __int64 v14; // r14
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // rbx
  int v17; // ecx
  int v18; // ebp
  unsigned int v19; // eax
  unsigned __int64 v20; // rax
  __int64 v22; // rax
  __int64 v23; // r8
  __int64 v24; // rax
  __int64 v25; // r9
  __int64 v26; // r10
  __int64 v27; // r11
  unsigned __int64 v28; // rcx
  __int64 v29; // rax
  unsigned int v30; // ecx
  unsigned __int64 updated; // rax
  signed __int32 v32[8]; // [rsp+0h] [rbp-78h] BYREF
  __int64 v33; // [rsp+20h] [rbp-58h]
  __int128 v34; // [rsp+28h] [rbp-50h] BYREF
  __int64 v35; // [rsp+38h] [rbp-40h]
  unsigned int v36; // [rsp+80h] [rbp+8h]

  v36 = 1;
  v35 = 0LL;
  v34 = 0LL;
  DemandZeroPte = MiMakeDemandZeroPte(4);
  v8 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
  v10 = DemandZeroPte;
  v11 = a1 + 48 * v9;
  v33 = v11;
  *(_QWORD *)&v34 = 0x7FFFFFFFFFLL;
  PteLink = 0x7FFFFFFFFFLL;
  v13 = (a1 + 0x220000000000LL) / 48;
  if ( a1 != v11 )
  {
    v14 = a1 + 16;
    while ( 1 )
    {
      v15 = *(_QWORD *)v14;
      if ( qword_140E2D8C0 )
      {
        if ( (v15 & 0x10) != 0 )
          v15 &= ~0x10uLL;
        else
          v15 &= qword_140E2D8C8;
      }
      v16 = HIDWORD(v15);
      if ( (*(_QWORD *)v14 & 0x3E0LL) != 0
        || (v17 = (*(_DWORD *)(v14 + 16) >> 22) & 3, v17 != a3)
        && ((unsigned __int8)((1 << v17) | (1 << a3)) & (unsigned __int8)byte_140E2D918) != 0 )
      {
        v18 = 1;
        v36 = 0;
      }
      else
      {
        v18 = 0;
      }
      v19 = *(_DWORD *)(v14 + 16);
      if ( ((v19 >> 22) & 3) != a3 )
      {
        if ( (v19 & 0xC00000) == 0x400000
          || (v19 & 0xC00000) != 0xC00000
          && ((v22 = (*(_QWORD *)(v14 + 8) >> 59) & 7LL, ((*(_QWORD *)(v14 + 8) >> 59) & 7) == 0)
           || (_InterlockedOr(v32, 0), v30 = ((_BYTE)KiTbFlushTimeStamp - (_BYTE)v22) & 7, v30 <= 2)
           && ((v22 & 1) != 0 || v30 < 2)) )
        {
          *(_QWORD *)v14 = MiMakeLinkedListPte(PteLink);
          PteLink = v13;
          *(_QWORD *)&v34 = v13;
          v24 = (unsigned int)v23 | 1LL;
          if ( !v18 )
            v24 = v23;
          *(_QWORD *)(v14 - 16) = v24;
          goto LABEL_14;
        }
        MiChangePageAttribute(v14 - 16, a3);
        v11 = v33;
      }
      v20 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
      if ( v18 )
        v20 = v10;
      *(_QWORD *)v14 = v20;
      if ( (_DWORD)v16 == -3 )
        *(_QWORD *)v14 = MiUpdatePageFileHighInPte(*(_QWORD *)v14, 0xFFFFFFFD);
LABEL_14:
      v14 += 48LL;
      ++v13;
      if ( v14 - 16 == v11 )
      {
        v8 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
        v7 = a4;
        break;
      }
    }
  }
  if ( PteLink != 0x7FFFFFFFFFLL )
  {
    DWORD2(v34) = a3;
    BYTE12(v34) = 1;
    v35 = v8;
    MiChangePageAttributeBatch((__int64)&v34, v7 == 2);
    do
    {
      PteLink = MiGetPteLink(*(_QWORD *)(48 * PteLink - 0x220000000000LL + 16));
      v28 = v10;
      v29 = *(_QWORD *)(v26 + 8 * v25);
      if ( (v29 & 1) == 0 )
        v28 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
      *(_QWORD *)(v26 + 8 * v25 + 16) = v28;
      if ( (v29 & 2) != 0 )
      {
        updated = MiUpdatePageFileHighInPte(*(_QWORD *)(v26 + 8 * v25 + 16), 0xFFFFFFFD);
        *(_QWORD *)(v26 + 8 * v25 + 16) = updated;
      }
      *(_QWORD *)(v26 + 8 * v25) = v27;
    }
    while ( PteLink != 0x7FFFFFFFFFLL );
  }
  return v36;
}
