/*
 * XREFs of RtlpMuiRegGetOrAddString @ 0x18004D7B0
 * Callers:
 *     RtlpMuiRegGetLanguageSpec @ 0x18004D6C0 (RtlpMuiRegGetLanguageSpec.c)
 *     _RtlpMuiRegAddNeutralLanguage @ 0x18004E02C (_RtlpMuiRegAddNeutralLanguage.c)
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x180050A20 (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     RtlpLoadPolicyLanguageSpec @ 0x1800586F4 (RtlpLoadPolicyLanguageSpec.c)
 *     RtlpPopulateLanguageConfigList @ 0x180058A90 (RtlpPopulateLanguageConfigList.c)
 *     RtlpMuiRegGetFallbackLanguageInfoByName @ 0x18010E690 (RtlpMuiRegGetFallbackLanguageInfoByName.c)
 *     _RtlMuiRegAddLIPParent @ 0x180112F1C (_RtlMuiRegAddLIPParent.c)
 *     _RtlpMuiRegInitAnyLanguage @ 0x18014DEA0 (_RtlpMuiRegInitAnyLanguage.c)
 *     _RtlpMuiRegValidateInstalled @ 0x18014E6A8 (_RtlpMuiRegValidateInstalled.c)
 * Callees:
 *     RtlpMuiRegGetOrAddStringToPool @ 0x18004D9F0 (RtlpMuiRegGetOrAddStringToPool.c)
 *     RtlpMuiRegGrowStringPool @ 0x180122350 (RtlpMuiRegGrowStringPool.c)
 *     _wcsicmp @ 0x180128CB0 (_wcsicmp.c)
 *     memmove @ 0x180164600 (memmove.c)
 */

__int64 __fastcall RtlpMuiRegGetOrAddString(__int64 a1, const wchar_t *a2, char a3, __int16 *a4)
{
  __int16 v7; // r12
  __int64 v8; // rbx
  unsigned int v9; // r14d
  int v10; // edi
  __int64 v11; // rbp
  const wchar_t *v12; // rcx
  __int64 result; // rax
  __int64 v14; // rax
  __int64 v16; // r9
  unsigned __int64 v17; // rbp
  unsigned __int16 v18; // cx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // r8
  __int16 v22; // [rsp+20h] [rbp-48h]
  bool v23; // [rsp+70h] [rbp+8h]

  v7 = -1;
  if ( !a1 || !a2 || !*a2 )
  {
LABEL_27:
    v9 = -1073741811;
    goto LABEL_14;
  }
  v23 = a3 && (*(_DWORD *)a1 & 2) != 0;
  v8 = *(_QWORD *)(a1 + 32);
  v9 = 0;
  if ( v8 )
  {
    v10 = 0;
    v11 = 0LL;
    while ( v10 < *(unsigned __int16 *)(v8 + 6) )
    {
      v12 = (const wchar_t *)(*(_QWORD *)(v8 + 24) + 2LL * *(__int16 *)(*(_QWORD *)(v8 + 16) + v11));
      if ( v12 == a2 || !wcsicmp(v12, a2) )
      {
        if ( v10 < 0 )
          break;
        goto LABEL_13;
      }
      ++v10;
      v11 += 2LL;
    }
  }
  if ( !v8 )
    goto LABEL_18;
  v14 = -1LL;
  while ( a2[++v14] != 0 )
    ;
  v16 = *(unsigned __int16 *)(v8 + 10);
  v17 = v14 + 1;
  v22 = *(_WORD *)(v8 + 10);
  if ( v16 + v14 + 1 > (unsigned __int64)*(unsigned __int16 *)(v8 + 8) )
  {
    LOWORD(v10) = -1;
  }
  else
  {
    if ( !v23 || (v18 = *(_WORD *)(v8 + 6), v18 >= *(_WORD *)(v8 + 4)) )
    {
LABEL_18:
      LOWORD(v10) = -1;
      goto LABEL_13;
    }
    if ( is_mul_ok(v17, 2uLL) )
    {
      LOWORD(v10) = *(_WORD *)(v8 + 6);
      *(_WORD *)(v8 + 6) = v18 + 1;
      *(_WORD *)(v8 + 10) = v16 + 1;
      memmove((void *)(*(_QWORD *)(v8 + 24) + 2LL * (__int16)v16), a2, 2 * v17);
      v19 = *(_QWORD *)(v8 + 16);
      *(_WORD *)(v8 + 10) += v17;
      *(_WORD *)(v19 + 2LL * (unsigned __int16)v10) = v22;
    }
    else
    {
      LOWORD(v10) = -1;
    }
  }
LABEL_13:
  v7 = v10;
  if ( (v10 & 0x8000u) == 0 )
    goto LABEL_14;
  if ( !a3 )
    goto LABEL_27;
  v20 = RtlpMuiRegGrowStringPool(*(PVOID *)(a1 + 32));
  if ( v20 )
  {
    *(_DWORD *)a1 |= 2u;
    LOBYTE(v21) = 1;
    *(_QWORD *)(a1 + 32) = v20;
    v7 = RtlpMuiRegGetOrAddStringToPool(v20, a2, v21, 0LL);
    if ( v7 < 0 )
      v9 = -1073741801;
  }
  else
  {
    v9 = -1073741801;
  }
LABEL_14:
  result = v9;
  if ( a4 )
    *a4 = v7;
  return result;
}
