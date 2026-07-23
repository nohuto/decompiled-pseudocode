/*
 * XREFs of CmpFindPathByNameEx @ 0x1408B7F30
 * Callers:
 *     CmpVirtualPathPresent @ 0x1407764E0 (CmpVirtualPathPresent.c)
 *     CmpVirtualBranchIsReplicated @ 0x1408B7C80 (CmpVirtualBranchIsReplicated.c)
 *     CmpVEExecuteRealStoreParseLogic @ 0x1408B8450 (CmpVEExecuteRealStoreParseLogic.c)
 *     CmpVEExecuteOpenLogic @ 0x1408DF920 (CmpVEExecuteOpenLogic.c)
 *     CmpVEExecuteVirtualStoreParseLogic @ 0x140AF6E78 (CmpVEExecuteVirtualStoreParseLogic.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     HvpGetCellFlat @ 0x140864DF0 (HvpGetCellFlat.c)
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408DD9D0 (HvpGetCellPaged.c)
 *     CmpFindSubKeyByNameWithStatus @ 0x1408DDA50 (CmpFindSubKeyByNameWithStatus.c)
 */

char __fastcall CmpFindPathByNameEx(
        __int64 a1,
        __m128i *a2,
        UNICODE_STRING *a3,
        int a4,
        unsigned int *a5,
        ULONG_PTR *a6)
{
  unsigned int *v6; // r12
  unsigned __int16 v7; // r14
  ULONG_PTR *v11; // rcx
  __m128i v12; // xmm1
  unsigned __int16 v13; // bx
  unsigned __int64 v14; // xmm0_8
  unsigned __int16 epi16; // r15
  ULONG_PTR v16; // rsi
  unsigned int v17; // ecx
  wchar_t *v18; // rdi
  unsigned int v20; // r12d
  ULONG_PTR v21; // rcx
  __int64 CellFlat; // rax
  ULONG_PTR *v24; // rax
  unsigned __int64 v25; // rax
  UNICODE_STRING v26; // [rsp+20h] [rbp-20h]
  unsigned int v27; // [rsp+90h] [rbp+50h] BYREF
  int v28; // [rsp+94h] [rbp+54h]
  int v29; // [rsp+98h] [rbp+58h]

  v29 = a4;
  v6 = a5;
  v7 = 0;
  v28 = 0;
  v27 = -1;
  *a5 = -1;
  v11 = a6;
  *a6 = 0LL;
  if ( a3 )
  {
    RtlInitUnicodeString(a3, 0LL);
    v11 = a6;
  }
  v12 = *a2;
  v13 = _mm_cvtsi128_si32(*a2);
  v26 = (UNICODE_STRING)v12;
  if ( v13 )
  {
    v14 = _mm_srli_si128(v12, 8).m128i_u64[0];
    epi16 = _mm_extract_epi16(v12, 1);
    if ( a1 )
    {
      v16 = *(_QWORD *)(a1 + 32);
      *v11 = v16;
      v17 = *(_DWORD *)(a1 + 40);
      v18 = (wchar_t *)v14;
      *v6 = v17;
    }
    else
    {
      v16 = CmpMasterHive;
      v18 = (wchar_t *)v14;
      v17 = *(_DWORD *)(*(_QWORD *)(CmpMasterHive + 64) + 36LL);
      do
      {
        if ( *v18 != 92 )
          break;
        ++v18;
        v13 -= 2;
        epi16 -= 2;
        v26.Buffer = v18;
        v26.Length = v13;
        v26.MaximumLength = epi16;
      }
      while ( v13 );
      while ( v13 && *v18 != 92 )
      {
        ++v18;
        v13 -= 2;
        epi16 -= 2;
        v26.Buffer = v18;
        v26.MaximumLength = epi16;
        v26.Length = v13;
      }
    }
    while ( 1 )
    {
      while ( v13 && *v18 == 92 )
      {
        ++v18;
        v13 -= 2;
        epi16 -= 2;
        v26.Buffer = v18;
        v26.MaximumLength = epi16;
        v26.Length = v13;
      }
      if ( a3 )
        *a3 = v26;
      if ( !v13 )
        break;
      if ( (*(_BYTE *)(v16 + 140) & 1) != 0 )
        CellFlat = HvpGetCellFlat(v16, v17, &v27);
      else
        CellFlat = HvpGetCellPaged(v16);
      if ( !CellFlat )
        return 0;
      do
      {
        if ( v18[(unsigned __int64)v7 >> 1] == 92 )
          break;
        v7 += 2;
      }
      while ( v7 < v13 );
      if ( (*(_BYTE *)(CellFlat + 2) & 2) != 0 )
      {
        v20 = *(_DWORD *)(CellFlat + 28);
        v21 = v16;
        v16 = *(_QWORD *)(CellFlat + 36);
        if ( (*(_BYTE *)(v21 + 140) & 1) != 0 )
          HvpReleaseCellFlat(v21, &v27);
        else
          HvpReleaseCellPaged(v21, &v27);
        if ( v16 != CmpMasterHive && v29 && (v29 & *(_DWORD *)(v16 + 4120)) == 0 )
          return 0;
        if ( !((*(_BYTE *)(v16 + 140) & 1) != 0 ? HvpGetCellFlat(v16, v20, &v27) : HvpGetCellPaged(v16)) )
          return 0;
        v6 = a5;
      }
      CmpFindSubKeyByNameWithStatus(v16);
      if ( (*(_BYTE *)(v16 + 140) & 1) != 0 )
        HvpReleaseCellFlat(v16, &v27);
      else
        HvpReleaseCellPaged(v16, &v27);
      v17 = 0;
      v24 = a6;
      epi16 -= v7;
      v13 -= v7;
      *v6 = 0;
      v26.MaximumLength = epi16;
      v26.Length = v13;
      *v24 = v16;
      v25 = v7;
      v7 = 0;
      v18 += v25 >> 1;
      v26.Buffer = v18;
      if ( !v13 )
        return 1;
    }
    return 1;
  }
  if ( a1 )
  {
    *v11 = *(_QWORD *)(a1 + 32);
    *v6 = *(_DWORD *)(a1 + 40);
    return 1;
  }
  return 0;
}
