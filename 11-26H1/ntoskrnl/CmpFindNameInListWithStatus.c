/*
 * XREFs of CmpFindNameInListWithStatus @ 0x1408DB7C0
 * Callers:
 *     CmpGetSymbolicLinkTarget @ 0x1408C0924 (CmpGetSymbolicLinkTarget.c)
 *     CmDeleteValueKey @ 0x1408C1D50 (CmDeleteValueKey.c)
 *     CmpLightWeightPrepareDeleteValueKeyUoW @ 0x1408C54A0 (CmpLightWeightPrepareDeleteValueKeyUoW.c)
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x1408C570C (CmpLightWeightPrepareSetValueKeyUoW.c)
 *     CmSetValueKey @ 0x1408D53E0 (CmSetValueKey.c)
 *     CmpCompareNewValueDataAgainstKCBCache @ 0x1408D65E0 (CmpCompareNewValueDataAgainstKCBCache.c)
 *     CmQueryMultipleValueKey @ 0x140940B3C (CmQueryMultipleValueKey.c)
 *     CmpFindNameInList @ 0x140AACC58 (CmpFindNameInList.c)
 *     CmpFindValueByName @ 0x140AAFFF0 (CmpFindValueByName.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x140B0144C (CmEnumerateValueKeyFromMergedView.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x140B10F94 (CmQueryMultipleValueForLayeredKey.c)
 *     CmpMergeKeyValues @ 0x140B2DE64 (CmpMergeKeyValues.c)
 * Callees:
 *     HvpGetCellFlat @ 0x140864DF0 (HvpGetCellFlat.c)
 *     RtlUpcaseUnicodeChar @ 0x1408DB730 (RtlUpcaseUnicodeChar.c)
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408DD9D0 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x1408DF8E0 (HvpGetCellContextInitialize.c)
 *     RtlCompareUnicodeStrings @ 0x140943110 (RtlCompareUnicodeStrings.c)
 */

__int64 __fastcall CmpFindNameInListWithStatus(
        ULONG_PTR BugCheckParameter3,
        unsigned int *a2,
        unsigned __int16 *a3,
        int a4,
        unsigned int *a5,
        _DWORD *a6)
{
  int v8; // r12d
  unsigned __int16 *v9; // rdi
  unsigned int v10; // esi
  __int64 CellFlat; // rax
  __int64 v12; // rbx
  __int64 v13; // rdx
  unsigned int v14; // ebx
  unsigned int i; // r14d
  __int64 CellPaged; // rax
  unsigned __int64 v18; // rbp
  WCHAR *v19; // r13
  int v20; // ecx
  WCHAR *v21; // r12
  unsigned __int16 v22; // bx
  LONG v23; // edi
  WCHAR v24; // si
  unsigned int v25; // edi
  unsigned int v26; // esi
  unsigned int v27; // edi
  unsigned __int8 *v28; // r12
  unsigned __int16 v29; // si
  unsigned __int16 j; // bp
  int v31; // edi
  WCHAR v32; // di
  unsigned int v33; // ebx
  __int64 v34; // [rsp+30h] [rbp-58h] BYREF
  __int64 v35; // [rsp+38h] [rbp-50h]
  unsigned int v36[4]; // [rsp+40h] [rbp-48h] BYREF
  unsigned int v37; // [rsp+98h] [rbp+10h]

  v8 = a4;
  *(_QWORD *)v36 = 0LL;
  v9 = a3;
  HvpGetCellContextInitialize(v36);
  v10 = *a2;
  v37 = *a2;
  if ( !*a2 )
  {
    HvpGetCellContextInitialize(&v34);
LABEL_6:
    v14 = -1073741772;
    *a6 = -1;
    if ( a5 )
      *a5 = 0;
    goto LABEL_8;
  }
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
  {
    CellFlat = HvpGetCellFlat(BugCheckParameter3, a2[1], v36);
  }
  else
  {
    CellFlat = HvpGetCellPaged(BugCheckParameter3);
    v10 = *a2;
    v37 = *a2;
  }
  v35 = CellFlat;
  v12 = CellFlat;
  v34 = 0LL;
  HvpGetCellContextInitialize(&v34);
  if ( !v10 )
  {
    v13 = v12;
    goto LABEL_6;
  }
  for ( i = 0; i < v10; ++i )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      CellPaged = HvpGetCellFlat(BugCheckParameter3, *(_DWORD *)(v12 + 4LL * i), (unsigned int *)&v34);
    else
      CellPaged = HvpGetCellPaged(BugCheckParameter3);
    v18 = *(unsigned __int16 *)(CellPaged + 2);
    v19 = (WCHAR *)(CellPaged + 20);
    v20 = v8 & 0x10000;
    if ( (*(_BYTE *)(CellPaged + 16) & 1) != 0 )
    {
      v21 = (WCHAR *)*((_QWORD *)v9 + 1);
      v22 = *v9;
      if ( v20 )
      {
        while ( v22 && (_WORD)v18 )
        {
          v26 = *(unsigned __int8 *)v21;
          v21 = (WCHAR *)((char *)v21 + 1);
          v27 = *(unsigned __int8 *)v19;
          v19 = (WCHAR *)((char *)v19 + 1);
          if ( (_WORD)v26 != (_WORD)v27 )
          {
            if ( v26 >= 0x61 )
            {
              if ( v26 > 0x7A )
                LOWORD(v26) = RtlUpcaseUnicodeChar(v26);
              else
                LOWORD(v26) = v26 - 32;
            }
            if ( v27 >= 0x61 )
            {
              if ( v27 > 0x7A )
                LOWORD(v27) = RtlUpcaseUnicodeChar(v27);
              else
                LOWORD(v27) = v27 - 32;
            }
            v23 = (unsigned __int16)v26 - (unsigned __int16)v27;
            if ( v23 )
              goto LABEL_21;
          }
          --v22;
          LOWORD(v18) = v18 - 1;
        }
      }
      else
      {
        for ( v22 >>= 1; v22 && (_WORD)v18; --v22 )
        {
          v24 = *v21++;
          v25 = *(unsigned __int8 *)v19;
          v19 = (WCHAR *)((char *)v19 + 1);
          if ( v24 != (_WORD)v25 )
          {
            if ( v24 >= 0x61u )
            {
              if ( v24 > 0x7Au )
                v24 = RtlUpcaseUnicodeChar(v24);
              else
                v24 -= 32;
            }
            if ( v25 >= 0x61 )
            {
              if ( v25 > 0x7A )
                LOWORD(v25) = RtlUpcaseUnicodeChar(v25);
              else
                LOWORD(v25) = v25 - 32;
            }
            v23 = v24 - (unsigned __int16)v25;
            if ( v23 )
              goto LABEL_21;
          }
          LOWORD(v18) = v18 - 1;
        }
      }
      v23 = v22 - (unsigned __int16)v18;
LABEL_21:
      v8 = a4;
    }
    else if ( v20 )
    {
      v28 = (unsigned __int8 *)*((_QWORD *)v9 + 1);
      v29 = *v9;
      for ( j = (unsigned __int16)v18 >> 1; j && v29; --j )
      {
        v32 = *v19++;
        v33 = *v28++;
        if ( v32 != (_WORD)v33 )
        {
          if ( v32 >= 0x61u )
          {
            if ( v32 > 0x7Au )
              v32 = RtlUpcaseUnicodeChar(v32);
            else
              v32 -= 32;
          }
          if ( v33 >= 0x61 )
          {
            if ( v33 > 0x7A )
              LOWORD(v33) = RtlUpcaseUnicodeChar(v33);
            else
              LOWORD(v33) = v33 - 32;
          }
          v31 = v32 - (unsigned __int16)v33;
          if ( v31 )
            goto LABEL_64;
        }
        --v29;
      }
      v31 = j - v29;
LABEL_64:
      v8 = a4;
      v23 = -v31;
    }
    else
    {
      v23 = RtlCompareUnicodeStrings(
              *((PCWCH *)v9 + 1),
              (unsigned __int64)*v9 >> 1,
              (PCWCH)(CellPaged + 20),
              v18 >> 1,
              1u);
    }
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, (__int64)&v34);
    else
      HvpReleaseCellPaged(BugCheckParameter3, &v34);
    if ( !v23 )
    {
      v13 = v35;
      v14 = 0;
      *a6 = *(_DWORD *)(v35 + 4LL * i);
      if ( a5 )
        *a5 = i;
      goto LABEL_8;
    }
    v9 = a3;
    v10 = v37;
    v12 = v35;
  }
  v14 = -1073741772;
  v13 = v35;
  *a6 = -1;
  if ( a5 )
    *a5 = v10;
LABEL_8:
  if ( !v13 )
    return v14;
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0 )
  {
    HvpReleaseCellPaged(BugCheckParameter3, v36);
    return v14;
  }
  HvpReleaseCellFlat(BugCheckParameter3, (__int64)v36);
  return v14;
}
