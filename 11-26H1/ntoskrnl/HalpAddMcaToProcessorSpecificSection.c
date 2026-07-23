/*
 * XREFs of HalpAddMcaToProcessorSpecificSection @ 0x14044ACCC
 * Callers:
 *     HalpCreateMcaProcessorErrorRecord @ 0x14044A8B4 (HalpCreateMcaProcessorErrorRecord.c)
 * Callees:
 *     HalpWheaGetApicId @ 0x14044C290 (HalpWheaGetApicId.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall HalpAddMcaToProcessorSpecificSection(__int64 a1, GUID *a2, unsigned int *a3)
{
  unsigned int v6; // esi
  __int64 v7; // rdx
  GUID *v8; // r11
  __int64 v9; // rdx
  _QWORD *Data4; // r10
  unsigned __int64 v11; // r9
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // r9
  unsigned __int64 v16; // r9
  unsigned __int64 v17; // r9
  unsigned __int64 v18; // r9
  unsigned __int64 v19; // r9
  unsigned __int64 v20; // r9
  unsigned __int64 v21; // r9
  __int64 v22; // rax
  __int64 v23; // r8
  __int64 v24; // rcx
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // r9
  char *v28; // r9
  __int64 v30; // [rsp+70h] [rbp+8h]

  v6 = 64;
  *(_QWORD *)&a2->Data1 |= 2uLL;
  v30 = *(unsigned int *)(a1 + 16);
  guard_dispatch_icall_no_overrides(v30, 1LL);
  *(_QWORD *)&a2->Data1 |= 1uLL;
  *(_QWORD *)a2->Data4 = HalpWheaGetApicId(v30, v7);
  v8 = a2 + 4;
  if ( _bittest64((const signed __int64 *)(a1 + 40), 0x3Au) )
  {
    *(_QWORD *)&a2[5].Data1 |= 2uLL;
    *(_QWORD *)&a2[6].Data1 = *(_QWORD *)(a1 + 48);
  }
  if ( (*(_BYTE *)(a1 + 20) & 2) != 0 )
  {
    *(_QWORD *)&a2[5].Data1 |= 0x10uLL;
    *(_QWORD *)a2[7].Data4 = *(_QWORD *)(a1 + 28);
  }
  v9 = *(unsigned __int16 *)(a1 + 40);
  if ( (_WORD)v9 == 1
    || (unsigned __int16)(v9 - 2) <= 2u
    || (_WORD)v9 == 1024
    || (v9 & 0xFC00) == 0x400 && (v9 & 0x3FF) != 0 )
  {
    *(_QWORD *)&a2[5].Data1 |= 1uLL;
    Data4 = a2[5].Data4;
    v22 = 1LL;
    v23 = 2LL;
    *v8 = WHEA_MSCHECK_GUID;
    v24 = *(_QWORD *)a2[5].Data4;
    do
    {
      v24 |= v22++;
      --v23;
    }
    while ( v23 );
    *Data4 = v24;
    v25 = (*(_QWORD *)(a1 + 40) >> 38) ^ ((*(_QWORD *)(a1 + 40) >> 38) ^ v24) & 0xFFFFFFFFFFF7FFFFuLL | 4;
    *Data4 = v25;
    v26 = (*(_QWORD *)(a1 + 40) >> 41) ^ ((*(_QWORD *)(a1 + 40) >> 41) ^ v25) & 0xFFFFFFFFFFEFFFFFuLL | 0x20;
    *Data4 = v26;
    v27 = (*(_QWORD *)(a1 + 40) >> 39) ^ (v26 ^ (*(_QWORD *)(a1 + 40) >> 39)) & 0xFFFFFFFFFF7FFFFFuLL;
    *Data4 = v27;
    if ( (_WORD)v9 )
    {
      switch ( (_WORD)v9 )
      {
        case 1:
          v18 = v27 & 0xFFFFFFFFFFF8FFFFuLL | 0x10000;
          break;
        case 2:
          v18 = v27 & 0xFFFFFFFFFFF8FFFFuLL | 0x20000;
          break;
        case 3:
          v18 = v27 & 0xFFFFFFFFFFF8FFFFuLL | 0x30000;
          break;
        case 4:
          v18 = v27 & 0xFFFFFFFFFFF8FFFFuLL | 0x40000;
          break;
        default:
          v18 = v27 & 0xFFFFFFFFFFF8FFFFuLL | 0x50000;
          break;
      }
    }
    else
    {
      v18 = v27 & 0xFFFFFFFFFFF8FFFFuLL;
    }
  }
  else
  {
    if ( (v9 & 0xEFFC) == 0xC )
    {
      *(_QWORD *)&a2[5].Data1 |= 1uLL;
      Data4 = a2[5].Data4;
      *v8 = WHEA_CACHECHECK_GUID;
      v11 = (unsigned __int64)(v9 & 3) << 22;
      v12 = *(_QWORD *)a2[5].Data4 & 0xFFFFFFFFFE3FFFFFuLL;
LABEL_17:
      v15 = v12 | v11 | 0xC;
      *Data4 = v15;
      v16 = HIDWORD(*(_QWORD *)(a1 + 40)) ^ (HIDWORD(*(_QWORD *)(a1 + 40)) ^ v15) & 0xFFFFFFFFFDFFFFFFuLL | 0x10;
      *Data4 = v16;
      v17 = (*(_QWORD *)(a1 + 40) >> 35) ^ ((*(_QWORD *)(a1 + 40) >> 35) ^ v16) & 0xFFFFFFFFFBFFFFFFuLL | 0x80;
      *Data4 = v17;
      v18 = (*(_QWORD *)(a1 + 40) >> 33) ^ ((*(_QWORD *)(a1 + 40) >> 33) ^ v17) & 0xFFFFFFFFDFFFFFFFuLL;
      goto LABEL_35;
    }
    if ( (v9 & 0xEFF0) == 0x10 )
    {
      *(_QWORD *)&a2[5].Data1 |= 1uLL;
      Data4 = a2[5].Data4;
      *v8 = WHEA_TLBCHECK_GUID;
      v13 = *(_QWORD *)a2[5].Data4 & 0xFFFFFFFFFE3CFFFEuLL | 1;
      v14 = ((unsigned __int8)((unsigned __int16)v9 >> 2) << 16) & 0x30000;
LABEL_16:
      v11 = v14 ^ v13;
      v12 = (unsigned __int64)(v9 & 3) << 22;
      goto LABEL_17;
    }
    if ( (v9 & 0xEF00) == 0x100 )
    {
      *(_QWORD *)&a2[5].Data1 |= 1uLL;
      Data4 = a2[5].Data4;
      *v8 = WHEA_CACHECHECK_GUID;
      v13 = (*(_QWORD *)a2[5].Data4 & 0xFFFFFFFFFE00FFFEuLL | 1) ^ ((unsigned __int64)(((unsigned __int16)v9 >> 2) & 3) << 16) | 2;
      v14 = ((unsigned __int8)((unsigned __int16)v9 >> 4) << 18) & 0x3C0000;
      goto LABEL_16;
    }
    if ( (v9 & 0xE800) != 0x800 )
    {
      memset_0(&a2[4], 0, 0x40uLL);
      v8 = 0LL;
      goto LABEL_37;
    }
    *(_QWORD *)&a2[5].Data1 |= 1uLL;
    Data4 = a2[5].Data4;
    *v8 = WHEA_BUSCHECK_GUID;
    v19 = ((unsigned __int64)(v9 & 3) << 22) | ((unsigned __int8)((unsigned __int16)v9 >> 4) << 18) & 0x3C0000 ^ (*(_QWORD *)a2[5].Data4 & 0xFFFFFFFFFE03FFFDuLL | 2) | 0xC;
    *(_QWORD *)a2[5].Data4 = v19;
    v20 = HIDWORD(*(_QWORD *)(a1 + 40)) ^ (HIDWORD(*(_QWORD *)(a1 + 40)) ^ v19) & 0xFFFFFFFFFDFFFFFFuLL | 0x10;
    *(_QWORD *)a2[5].Data4 = v20;
    v21 = (*(_QWORD *)(a1 + 40) >> 35) ^ ((*(_QWORD *)(a1 + 40) >> 35) ^ v20) & 0xFFFFFFFFFBFFFFFFuLL | 0x80;
    *(_QWORD *)a2[5].Data4 = v21;
    v18 = ((unsigned __int64)(unsigned __int8)((unsigned __int16)v9 >> 2) << 33) & 0x600000000LL ^ (((v9 & 0xFFFFFFFFFFFFFF00uLL) << 24) & 0x100000000LL ^ (((v9 & 0xFFFFFE00) << 21) & 0xC0000000 ^ ((*(_QWORD *)(a1 + 40) >> 33) & 0x20000000LL ^ v21 & 0xFFFFFFF81FFFFFFFuLL | 0x100) | 0x200) | 0x400);
  }
LABEL_35:
  *Data4 = v18;
  if ( a2 != (GUID *)-64LL )
  {
    v6 = 128;
    *(_QWORD *)&a2->Data1 = *(_QWORD *)&a2->Data1 & 0xFFFFFFFFFFFFFF03uLL | 4;
  }
LABEL_37:
  if ( *(_DWORD *)(a1 + 64) && v8 )
  {
    v28 = (char *)v8 + v6;
    *(_QWORD *)&a2->Data1 = *(_QWORD *)&a2->Data1 & 0xFFFFFFFFFFFFC0FFuLL | 0x100;
    *(_DWORD *)v28 = 524289;
    *((_DWORD *)v28 + 1) = 384;
    *((_QWORD *)v28 + 1) = 0LL;
    memmove(&v28[v6 + 16], (const void *)(a1 + 72), 8LL * *(unsigned int *)(a1 + 64));
    v6 += 16 + 8 * *(_DWORD *)(a1 + 64);
  }
  *a3 = v6;
  return 0LL;
}
