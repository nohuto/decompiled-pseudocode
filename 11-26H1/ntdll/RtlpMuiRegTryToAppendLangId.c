/*
 * XREFs of RtlpMuiRegTryToAppendLangId @ 0x18003C6F0
 * Callers:
 *     RtlpMuiRegGetFallbackLanguagesAsMultiSZ @ 0x1801011B0 (RtlpMuiRegGetFallbackLanguagesAsMultiSZ.c)
 * Callees:
 *     RtlCultureNameToLCID @ 0x180004710 (RtlCultureNameToLCID.c)
 *     RtlpLangNameInMultiSzString_Size @ 0x18003AA20 (RtlpLangNameInMultiSzString_Size.c)
 *     RtlIntegerToUnicode @ 0x18003D010 (RtlIntegerToUnicode.c)
 *     wcslen @ 0x18012DAE0 (wcslen.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     memmove @ 0x180164700 (memmove.c)
 */

__int64 __fastcall RtlpMuiRegTryToAppendLangId(__int64 a1, __int64 a2, unsigned int *a3, wchar_t *a4, unsigned int a5)
{
  __int64 v7; // rsi
  unsigned int v8; // ebx
  unsigned int v9; // r14d
  size_t v10; // rax
  unsigned __int16 v11; // bp
  unsigned int v12; // r8d
  __int64 v13; // r13
  unsigned int v14; // ebx
  __int64 v16; // rax
  __int64 v17; // r8
  const wchar_t *v18; // rcx
  size_t v19; // rax
  unsigned int v20; // [rsp+20h] [rbp-78h] BYREF
  _QWORD v21[2]; // [rsp+28h] [rbp-70h] BYREF
  wchar_t String[4]; // [rsp+38h] [rbp-60h] BYREF
  __int16 v23; // [rsp+40h] [rbp-58h]

  *(_QWORD *)String = 0LL;
  v23 = 0;
  v20 = 0;
  if ( a2 && a1 && a3 )
  {
    v7 = *a3;
    if ( *(_WORD *)(a2 + 4) )
    {
      v8 = *(unsigned __int16 *)(a2 + 4);
    }
    else
    {
      v16 = *(__int16 *)(a2 + 6);
      if ( (__int16)v16 <= 0 )
        return (unsigned int)-1073741595;
      v17 = *(_QWORD *)(a1 + 32);
      v21[0] = 0LL;
      v18 = (const wchar_t *)(*(_QWORD *)(v17 + 24) + 2LL * *(__int16 *)(*(_QWORD *)(v17 + 16) + 2 * v16));
      v21[1] = v18;
      if ( v18 )
      {
        v19 = 2 * wcslen(v18);
        if ( v19 >= 0xFFFE )
          LOWORD(v19) = -4;
        LOWORD(v21[0]) = v19;
        WORD1(v21[0]) = v19 + 2;
      }
      if ( !RtlCultureNameToLCID((unsigned __int16 *)v21, (int *)&v20) )
        return (unsigned int)-1073741811;
      v8 = v20;
    }
    v9 = RtlIntegerToUnicode(v8, 16LL, 4294967292LL, String);
    if ( (v9 & 0x80000000) != 0 )
      return v9;
    v10 = wcslen(String);
    v11 = 2 * v10;
    if ( 2 * v10 >= 0xFFFE )
      v11 = -4;
    if ( v8 != 4096 )
    {
      v12 = *a3;
      if ( *a3 )
      {
        if ( v12 <= a5 && (unsigned __int8)RtlpLangNameInMultiSzString_Size(a4, String, v12) )
          return v9;
      }
    }
    v13 = (unsigned int)v7 + (v11 >> 1);
    v14 = v13 + 1;
    if ( a4 && (unsigned int)v7 < v14 )
    {
      if ( v14 < a5 )
      {
        memmove(&a4[v7], String, v11);
        a4[v13] = 0;
LABEL_17:
        *a3 = v14;
        return v9;
      }
    }
    else if ( v14 < a5 || !a4 )
    {
      goto LABEL_17;
    }
    v9 = -1073741789;
    goto LABEL_17;
  }
  return 3221225485LL;
}
