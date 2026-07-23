/*
 * XREFs of CmpFindNameInListCellWithStatus @ 0x140942DA0
 * Callers:
 *     CmpValueEnumStackMatchingValueInUpperLayer @ 0x140942C58 (CmpValueEnumStackMatchingValueInUpperLayer.c)
 * Callees:
 *     HvpGetCellFlat @ 0x140864DF0 (HvpGetCellFlat.c)
 *     RtlUpcaseUnicodeChar @ 0x1408DB730 (RtlUpcaseUnicodeChar.c)
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408DD9D0 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x1408DF8E0 (HvpGetCellContextInitialize.c)
 *     RtlCompareUnicodeStrings @ 0x140943110 (RtlCompareUnicodeStrings.c)
 */

__int64 __fastcall CmpFindNameInListCellWithStatus(
        ULONG_PTR BugCheckParameter3,
        __int64 a2,
        unsigned int a3,
        unsigned __int16 *a4,
        int a5,
        unsigned int *a6,
        _DWORD *a7)
{
  __int64 v8; // r15
  unsigned __int16 *v9; // rbx
  unsigned int v10; // edx
  unsigned int v11; // r8d
  __int64 result; // rax
  unsigned int i; // r14d
  __int64 v14; // rdx
  __int64 CellFlat; // rax
  WCHAR *v16; // r12
  unsigned __int64 v17; // rbp
  int v18; // ecx
  WCHAR *v19; // r15
  unsigned __int16 v20; // bx
  LONG v21; // edi
  WCHAR v22; // si
  unsigned int v23; // edi
  unsigned int v24; // esi
  unsigned int v25; // edi
  unsigned __int8 *v26; // r15
  unsigned __int16 v27; // si
  unsigned __int16 j; // bp
  int v29; // edi
  WCHAR v30; // di
  unsigned int v31; // ebx
  unsigned int v32[4]; // [rsp+30h] [rbp-48h] BYREF

  v8 = a2;
  *(_QWORD *)v32 = 0LL;
  v9 = a4;
  HvpGetCellContextInitialize(v32);
  if ( v11 )
  {
    for ( i = v10; i < v11; ++i )
    {
      v14 = *(unsigned int *)(v8 + 4LL * i);
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        CellFlat = HvpGetCellFlat(BugCheckParameter3, v14, v32);
      else
        CellFlat = HvpGetCellPaged(BugCheckParameter3, v14);
      v16 = (WCHAR *)(CellFlat + 20);
      v17 = *(unsigned __int16 *)(CellFlat + 2);
      v18 = a5 & 0x10000;
      if ( (*(_BYTE *)(CellFlat + 16) & 1) != 0 )
      {
        v19 = (WCHAR *)*((_QWORD *)v9 + 1);
        v20 = *v9;
        if ( v18 )
        {
          while ( v20 && (_WORD)v17 )
          {
            v24 = *(unsigned __int8 *)v19;
            v19 = (WCHAR *)((char *)v19 + 1);
            v25 = *(unsigned __int8 *)v16;
            v16 = (WCHAR *)((char *)v16 + 1);
            if ( (_WORD)v24 != (_WORD)v25 )
            {
              if ( v24 >= 0x61 )
              {
                if ( v24 > 0x7A )
                  LOWORD(v24) = RtlUpcaseUnicodeChar(v24);
                else
                  LOWORD(v24) = v24 - 32;
              }
              if ( v25 >= 0x61 )
              {
                if ( v25 > 0x7A )
                  LOWORD(v25) = RtlUpcaseUnicodeChar(v25);
                else
                  LOWORD(v25) = v25 - 32;
              }
              v21 = (unsigned __int16)v24 - (unsigned __int16)v25;
              if ( v21 )
                goto LABEL_14;
            }
            --v20;
            LOWORD(v17) = v17 - 1;
          }
        }
        else
        {
          for ( v20 >>= 1; v20 && (_WORD)v17; --v20 )
          {
            v22 = *v19++;
            v23 = *(unsigned __int8 *)v16;
            v16 = (WCHAR *)((char *)v16 + 1);
            if ( v22 != (_WORD)v23 )
            {
              if ( v22 >= 0x61u )
              {
                if ( v22 > 0x7Au )
                  v22 = RtlUpcaseUnicodeChar(v22);
                else
                  v22 -= 32;
              }
              if ( v23 >= 0x61 )
              {
                if ( v23 > 0x7A )
                  LOWORD(v23) = RtlUpcaseUnicodeChar(v23);
                else
                  LOWORD(v23) = v23 - 32;
              }
              v21 = v22 - (unsigned __int16)v23;
              if ( v21 )
                goto LABEL_14;
            }
            LOWORD(v17) = v17 - 1;
          }
        }
        v21 = v20 - (unsigned __int16)v17;
LABEL_14:
        v8 = a2;
      }
      else if ( v18 )
      {
        v26 = (unsigned __int8 *)*((_QWORD *)v9 + 1);
        v27 = *v9;
        for ( j = (unsigned __int16)v17 >> 1; j && v27; --j )
        {
          v30 = *v16++;
          v31 = *v26++;
          if ( v30 != (_WORD)v31 )
          {
            if ( v30 >= 0x61u )
            {
              if ( v30 > 0x7Au )
                v30 = RtlUpcaseUnicodeChar(v30);
              else
                v30 -= 32;
            }
            if ( v31 >= 0x61 )
            {
              if ( v31 > 0x7A )
                LOWORD(v31) = RtlUpcaseUnicodeChar(v31);
              else
                LOWORD(v31) = v31 - 32;
            }
            v29 = v30 - (unsigned __int16)v31;
            if ( v29 )
              goto LABEL_56;
          }
          --v27;
        }
        v29 = j - v27;
LABEL_56:
        v8 = a2;
        v21 = -v29;
      }
      else
      {
        v21 = RtlCompareUnicodeStrings(
                *((PCWCH *)v9 + 1),
                (unsigned __int64)*v9 >> 1,
                (PCWCH)(CellFlat + 20),
                v17 >> 1,
                1u);
      }
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, (__int64)v32);
      else
        HvpReleaseCellPaged(BugCheckParameter3, v32);
      if ( !v21 )
      {
        result = 0LL;
        *a7 = *(_DWORD *)(v8 + 4LL * i);
        if ( a6 )
          *a6 = i;
        return result;
      }
      v9 = a4;
      v11 = a3;
    }
    *a7 = -1;
    if ( a6 )
      *a6 = v11;
    return 3221225524LL;
  }
  else
  {
    *a7 = -1;
    if ( a6 )
      *a6 = v10;
    return 3221225524LL;
  }
}
