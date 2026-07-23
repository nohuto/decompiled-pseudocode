/*
 * XREFs of RtlpMuiRegTryToAppendLanguageName @ 0x18004F6F0
 * Callers:
 *     RtlpMuiRegGetFallbackLanguagesAsMultiSZ @ 0x180100900 (RtlpMuiRegGetFallbackLanguagesAsMultiSZ.c)
 * Callees:
 *     RtlpLangNameInMultiSzString_Size @ 0x180024F90 (RtlpLangNameInMultiSzString_Size.c)
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     RtlLCIDToCultureName @ 0x1800512D0 (RtlLCIDToCultureName.c)
 *     wcslen @ 0x18012D850 (wcslen.c)
 *     memmove @ 0x180164600 (memmove.c)
 */

__int64 __fastcall RtlpMuiRegTryToAppendLanguageName(
        __int64 a1,
        __int64 a2,
        unsigned int *a3,
        wchar_t *a4,
        unsigned int a5)
{
  unsigned int v5; // ebp
  __int64 v10; // r12
  wchar_t *Heap_0; // r14
  __int64 v12; // rax
  LCID v13; // ecx
  wchar_t *v14; // rcx
  size_t v15; // rax
  unsigned int v16; // r8d
  __int64 v17; // r13
  unsigned int v18; // edi
  _UNICODE_STRING String; // [rsp+20h] [rbp-38h] BYREF

  v5 = 0;
  String = 0LL;
  if ( !a2 || !a1 || !a3 )
    return 3221225485LL;
  v10 = *a3;
  Heap_0 = (wchar_t *)RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8u, 0xAAuLL);
  if ( !Heap_0 )
    return 3221225495LL;
  v12 = *(__int16 *)(a2 + 6);
  if ( (__int16)v12 > 0 )
  {
    v14 = (wchar_t *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 24LL)
                    + 2LL * *(__int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) + 2 * v12));
    String.Buffer = v14;
    if ( v14 )
    {
      v15 = 2 * wcslen(v14);
      if ( v15 >= 0xFFFE )
        LOWORD(v15) = -4;
      String.Length = v15;
      String.MaximumLength = v15 + 2;
    }
LABEL_12:
    v16 = *a3;
    if ( *a3 && v16 <= a5 && (unsigned __int8)RtlpLangNameInMultiSzString_Size(a4, String.Buffer, v16) )
      goto LABEL_23;
    v17 = (unsigned int)v10 + (String.Length >> 1);
    v18 = v17 + 1;
    if ( a4 && (unsigned int)v10 < v18 )
    {
      if ( v18 < a5 )
      {
        memmove(&a4[v10], String.Buffer, String.Length);
        a4[v17] = 0;
        goto LABEL_22;
      }
    }
    else if ( v18 < a5 || !a4 )
    {
      goto LABEL_22;
    }
    v5 = -1073741789;
LABEL_22:
    *a3 = v18;
    goto LABEL_23;
  }
  v13 = *(unsigned __int16 *)(a2 + 4);
  String.Buffer = Heap_0;
  *(_DWORD *)&String.Length = 11141120;
  if ( RtlLCIDToCultureName(v13, &String) )
    goto LABEL_12;
  v5 = -1073741595;
LABEL_23:
  RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, Heap_0);
  return v5;
}
