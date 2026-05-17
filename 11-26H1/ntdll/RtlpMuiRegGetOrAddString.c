/*
 * XREFs of RtlpMuiRegGetOrAddString @ 0x180002080
 * Callers:
 *     RtlpMuiRegGetLanguageSpec @ 0x180001F90 (RtlpMuiRegGetLanguageSpec.c)
 *     _RtlpMuiRegAddNeutralLanguage @ 0x1800028FC (_RtlpMuiRegAddNeutralLanguage.c)
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x1800052F0 (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     RtlpLoadPolicyLanguageSpec @ 0x18000CFC4 (RtlpLoadPolicyLanguageSpec.c)
 *     RtlpPopulateLanguageConfigList @ 0x18000D360 (RtlpPopulateLanguageConfigList.c)
 *     RtlpMuiRegGetFallbackLanguageInfoByName @ 0x18010EB40 (RtlpMuiRegGetFallbackLanguageInfoByName.c)
 *     _RtlMuiRegAddLIPParent @ 0x18011346C (_RtlMuiRegAddLIPParent.c)
 *     _RtlpMuiRegInitAnyLanguage @ 0x18014DFF0 (_RtlpMuiRegInitAnyLanguage.c)
 *     _RtlpMuiRegValidateInstalled @ 0x18014E7F8 (_RtlpMuiRegValidateInstalled.c)
 * Callees:
 *     RtlpMuiRegGetOrAddStringToPool @ 0x1800022C0 (RtlpMuiRegGetOrAddStringToPool.c)
 *     RtlpMuiRegGrowStringPool @ 0x1801225B0 (RtlpMuiRegGrowStringPool.c)
 *     _wcsicmp @ 0x180128F40 (_wcsicmp.c)
 *     memmove @ 0x180164700 (memmove.c)
 */

__int64 __fastcall RtlpMuiRegGetOrAddString(__int64 a1, __int64 a2, char a3, __int16 *a4)
{
  unsigned __int128 v4; // rax
  __int16 *v5; // r13
  const wchar_t *v7; // rsi
  __int16 v8; // r12
  __int64 v9; // rbx
  unsigned int v10; // r14d
  int v11; // edi
  __int64 v12; // rbp
  const wchar_t *v13; // rcx
  __int64 v14; // r8
  __int64 result; // rax
  __int64 v16; // rax
  unsigned __int64 v18; // rbp
  unsigned __int16 v19; // cx
  __int64 v20; // rax
  __int64 v21; // r8
  __int16 *v22; // [rsp+20h] [rbp-48h]
  bool v23; // [rsp+70h] [rbp+8h]
  int v25; // [rsp+88h] [rbp+20h]

  *((_QWORD *)&v4 + 1) = a2;
  v5 = a4;
  v7 = (const wchar_t *)*((_QWORD *)&v4 + 1);
  v8 = -1;
  if ( !a1 || !*((_QWORD *)&v4 + 1) || !**((_WORD **)&v4 + 1) )
  {
LABEL_28:
    v10 = -1073741811;
    goto LABEL_15;
  }
  v25 = *(_DWORD *)a1 & 2;
  v23 = a3 && (*(_DWORD *)a1 & 2) != 0;
  v9 = *(_QWORD *)(a1 + 32);
  v10 = 0;
  if ( v9 )
  {
    v11 = 0;
    v12 = 0LL;
    while ( v11 < *(unsigned __int16 *)(v9 + 6) )
    {
      v13 = (const wchar_t *)(*(_QWORD *)(v9 + 24) + 2LL * *(__int16 *)(*(_QWORD *)(v9 + 16) + v12));
      if ( v13 == v7 || !wcsicmp(v13, v7) )
      {
        if ( v11 < 0 )
          break;
        goto LABEL_13;
      }
      ++v11;
      v12 += 2LL;
    }
  }
  v14 = 0LL;
  if ( !v9 )
    goto LABEL_19;
  v16 = -1LL;
  while ( v7[++v16] != 0 )
    ;
  a4 = (__int16 *)*(unsigned __int16 *)(v9 + 10);
  v18 = v16 + 1;
  v22 = a4;
  if ( (unsigned __int64)a4 + v16 + 1 > *(unsigned __int16 *)(v9 + 8) )
  {
    v14 = (unsigned int)v18;
    LOWORD(v11) = -1;
  }
  else
  {
    if ( !v23 || (v19 = *(_WORD *)(v9 + 6), v19 >= *(_WORD *)(v9 + 4)) )
    {
LABEL_19:
      LOWORD(v11) = -1;
      goto LABEL_14;
    }
    v4 = v18 * (unsigned __int128)2uLL;
    if ( is_mul_ok(v18, 2uLL) )
    {
      LOWORD(v11) = *(_WORD *)(v9 + 6);
      *(_WORD *)(v9 + 6) = v19 + 1;
      *(_WORD *)(v9 + 10) = (_WORD)a4 + 1;
      memmove((void *)(*(_QWORD *)(v9 + 24) + 2LL * (__int16)a4), v7, 2 * v18);
      *(_QWORD *)&v4 = *(_QWORD *)(v9 + 16);
      *((_QWORD *)&v4 + 1) = v22;
      *(_WORD *)(v9 + 10) += v18;
      *(_WORD *)(v4 + 2LL * (unsigned __int16)v11) = (_WORD)v22;
LABEL_13:
      v14 = 0LL;
    }
    else
    {
      v14 = 0LL;
      LOWORD(v11) = -1;
    }
  }
LABEL_14:
  v8 = v11;
  if ( (v11 & 0x8000u) == 0 )
    goto LABEL_15;
  if ( !a3 )
    goto LABEL_28;
  LOBYTE(a4) = v25 == 0;
  v20 = RtlpMuiRegGrowStringPool(*(_QWORD *)(a1 + 32), *((_QWORD *)&v4 + 1), v14, a4);
  if ( v20 )
  {
    *(_DWORD *)a1 |= 2u;
    LOBYTE(v21) = 1;
    *(_QWORD *)(a1 + 32) = v20;
    v8 = RtlpMuiRegGetOrAddStringToPool(v20, v7, v21, 0LL);
    if ( v8 < 0 )
      v10 = -1073741801;
  }
  else
  {
    v10 = -1073741801;
  }
LABEL_15:
  result = v10;
  if ( v5 )
    *v5 = v8;
  return result;
}
