/*
 * XREFs of GetAttributeName @ 0x140A7118C
 * Callers:
 *     GetOperandValue @ 0x140A70FD0 (GetOperandValue.c)
 * Callees:
 *     _wcsnicmp @ 0x140538B30 (_wcsnicmp.c)
 *     iswalnum @ 0x140539140 (iswalnum.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     IsLegalAttributeChar2 @ 0x14081EEEC (IsLegalAttributeChar2.c)
 *     SddlpAlloc @ 0x140A6F758 (SddlpAlloc.c)
 *     DecodeAttributeName @ 0x140A714FC (DecodeAttributeName.c)
 */

__int64 __fastcall GetAttributeName(wchar_t *Str1, __int64 *a2, unsigned int *a3)
{
  unsigned __int16 *v5; // rsi
  unsigned int v6; // ebx
  unsigned int v7; // edi
  wint_t v8; // bp
  unsigned int v9; // eax
  const wchar_t *v10; // rcx
  __int64 v11; // rcx
  unsigned int v12; // eax
  bool v13; // zf
  PVOID v14; // rax
  __int64 v15; // rcx
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int16 v20; // cx
  __int64 v21; // [rsp+68h] [rbp+20h] BYREF

  v21 = 0LL;
  v5 = Str1;
  v6 = 0;
  v7 = 0;
  if ( wcsnicmp(Str1, L"@", 1uLL) )
  {
    while ( 1 )
    {
      v8 = v5[v7];
      if ( v8 > 0xFFu )
        break;
      if ( !iswalnum(v8) )
      {
        v9 = 0;
        v10 = L":./_@";
        while ( v9 < 5 )
        {
          if ( *v10 == v8 )
            goto LABEL_4;
          ++v9;
          ++v10;
        }
        break;
      }
LABEL_4:
      if ( !v5[v7] )
        break;
      ++v7;
    }
  }
  else
  {
    if ( !IsLegalAttributeChar2(*v5) )
      return 1336;
    do
    {
      if ( !v20 )
        break;
      ++v7;
    }
    while ( IsLegalAttributeChar2(v5[v7]) );
  }
  if ( v7 >= 8 && !wcsnicmp(v5, L"@DEVICE.", 8uLL) )
  {
    if ( v7 == 8 )
      return 1336;
    v11 = *a2;
    v12 = 2 * v7 - 16;
    v5 += 8;
    *(_BYTE *)(*a2 + 1) = -5;
    goto LABEL_22;
  }
  if ( v7 >= 0xA )
  {
    if ( !wcsnicmp(v5, L"@RESOURCE.", 0xAuLL) )
    {
      if ( v7 != 10 )
      {
        v11 = *a2;
        v12 = 2 * v7 - 20;
        v5 += 10;
        *(_BYTE *)(*a2 + 1) = -6;
        goto LABEL_22;
      }
      return 1336;
    }
LABEL_17:
    if ( !wcsnicmp(v5, L"@USER.", 6uLL) )
    {
      if ( v7 == 6 )
        return 1336;
      v11 = *a2;
      v12 = 2 * v7 - 12;
      v5 += 6;
      *(_BYTE *)(*a2 + 1) = -7;
      goto LABEL_22;
    }
    goto LABEL_18;
  }
  if ( v7 >= 6 )
    goto LABEL_17;
LABEL_18:
  if ( v7 < 7 )
  {
    if ( !v7 )
      return 1336;
  }
  else if ( !wcsnicmp(v5, L"@TOKEN.", 7uLL) )
  {
    if ( v7 == 7 )
      return 1336;
    v11 = *a2;
    v12 = 2 * v7 - 14;
    v5 += 7;
    *(_BYTE *)(*a2 + 1) = -4;
    goto LABEL_22;
  }
  if ( !wcsnicmp(v5, L"@", 1uLL) )
    return 1336;
  v11 = *a2;
  v12 = 2 * v7;
  *(_BYTE *)(*a2 + 1) = -8;
LABEL_22:
  *(_DWORD *)(v11 + 4) = v12;
  v13 = *(_BYTE *)(v11 + 1) == 0xF8;
  *a3 = v7;
  if ( v13 )
  {
    v14 = SddlpAlloc(v12);
    v15 = *a2;
    *(_QWORD *)(*a2 + 8) = v14;
    if ( v14 )
      memmove(v14, v5, *(unsigned int *)(v15 + 4));
    else
      return 8;
  }
  else
  {
    v6 = DecodeAttributeName(v5, v12, &v21);
    if ( !v6 )
    {
      v17 = *a2;
      v18 = -1LL;
      v19 = v21;
      *(_QWORD *)(*a2 + 8) = v21;
      do
        ++v18;
      while ( *(_WORD *)(v19 + 2 * v18) );
      *(_DWORD *)(v17 + 4) = 2 * v18;
    }
  }
  return v6;
}
