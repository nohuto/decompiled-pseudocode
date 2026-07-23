/*
 * XREFs of RtlpMuiRegGetFallbackLanguageInfoByLangId @ 0x18010A5FC
 * Callers:
 *     RtlGetUILanguageInfo @ 0x180055900 (RtlGetUILanguageInfo.c)
 *     RtlpMuiRegGetFallbackLanguageInfoByName @ 0x18010E690 (RtlpMuiRegGetFallbackLanguageInfoByName.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     RtlpInitAndCallLcidToCultureName @ 0x1800505A0 (RtlpInitAndCallLcidToCultureName.c)
 *     RtlpMuiRegGetFallbackLanguageInfoByName @ 0x18010E690 (RtlpMuiRegGetFallbackLanguageInfoByName.c)
 */

__int64 __fastcall RtlpMuiRegGetFallbackLanguageInfoByLangId(
        __int64 a1,
        __int64 a2,
        unsigned __int16 a3,
        char a4,
        __int64 a5)
{
  LCID v5; // ebp
  __int16 v9; // r9
  __int16 i; // dx
  __int16 v11; // r8
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 result; // rax
  wchar_t *Heap_0; // rax
  wchar_t *v17; // rdi
  unsigned int FallbackLanguageInfoByName; // ebx
  _UNICODE_STRING v19; // [rsp+30h] [rbp-28h] BYREF

  v5 = a3;
  v19 = 0LL;
  if ( !a1 || !a2 || !a5 )
    return 3221225485LL;
  v9 = 0;
  for ( i = 0; i < 8; i += 2 )
  {
    v11 = (*(_WORD *)(a2 + 8) >> i) & 3;
    v12 = *(__int16 *)(a2 + 2LL * v9 + 12);
    if ( v11 == 2 )
    {
      v13 = 28 * v12;
      v14 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL);
      if ( *(_WORD *)(v13 + v14 + 4) == (_WORD)v5 )
      {
        *(_OWORD *)a5 = *(_OWORD *)(v13 + v14);
        *(_QWORD *)(a5 + 16) = *(_QWORD *)(v13 + v14 + 16);
        *(_DWORD *)(a5 + 24) = *(_DWORD *)(v13 + v14 + 24);
        return 0LL;
      }
    }
    else if ( (_DWORD)v12 != v5 && v11 != 1 )
    {
      result = 0LL;
      *(_OWORD *)a5 = 0LL;
      *(_QWORD *)(a5 + 16) = 0LL;
      *(_DWORD *)(a5 + 24) = 0;
      *(_WORD *)(a5 + 4) = v5;
      *(_WORD *)(a5 + 6) = -1;
      return result;
    }
    ++v9;
  }
  Heap_0 = (wchar_t *)RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8u, 0xAAuLL);
  v17 = Heap_0;
  if ( !Heap_0 )
    return 3221225495LL;
  if ( a4 && *(__int16 *)(a2 + 6) > 0 && RtlpInitAndCallLcidToCultureName(&v19, Heap_0, v5) )
  {
    FallbackLanguageInfoByName = RtlpMuiRegGetFallbackLanguageInfoByName(a1, a2, v19.Buffer, 0LL, a5);
    RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v17);
    return FallbackLanguageInfoByName;
  }
  else
  {
    RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v17);
    return 3221225524LL;
  }
}
