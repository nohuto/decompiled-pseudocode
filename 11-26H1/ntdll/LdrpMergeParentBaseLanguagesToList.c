/*
 * XREFs of LdrpMergeParentBaseLanguagesToList @ 0x18004EB30
 * Callers:
 *     RtlGetUserPreferredUILanguages @ 0x180023010 (RtlGetUserPreferredUILanguages.c)
 *     RtlGetSystemPreferredUILanguages @ 0x18004E220 (RtlGetSystemPreferredUILanguages.c)
 *     LdrpMergeLangFallbackLists @ 0x18004F000 (LdrpMergeLangFallbackLists.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     RtlpTraverseParents @ 0x18004E7C0 (RtlpTraverseParents.c)
 *     RtlpFreeTraverseNodes @ 0x18004ED90 (RtlpFreeTraverseNodes.c)
 *     LdrpLangFallbackListAppendNode @ 0x1800505C0 (LdrpLangFallbackListAppendNode.c)
 *     RtlLCIDToCultureName @ 0x1800512D0 (RtlLCIDToCultureName.c)
 *     wcslen @ 0x18012D850 (wcslen.c)
 */

__int64 __fastcall LdrpMergeParentBaseLanguagesToList(_QWORD *a1, _WORD *a2, __int64 a3, __int64 a4, __int16 a5)
{
  int v8; // r14d
  char *Heap_0; // rax
  char *v10; // rdi
  wchar_t *v11; // rbp
  __int16 v12; // bx
  int appended; // esi
  char *v14; // rcx
  LCID v15; // ecx
  wchar_t *Buffer; // rsi
  __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rax
  size_t v22; // rax
  _UNICODE_STRING String; // [rsp+30h] [rbp-38h] BYREF

  a5 = 0;
  v8 = (int)a1;
  String = 0LL;
  if ( !a1 || !*a1 || !a2 || !a3 )
    return 3221225485LL;
  if ( !is_mul_ok(8uLL, 0x2AuLL) )
    return 3221225621LL;
  Heap_0 = (char *)RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8u, 0x150uLL);
  v10 = Heap_0;
  if ( Heap_0 )
  {
    if ( RtlpTraverseParents(a2, (__int64)Heap_0, a3, a4, 0, 42) )
    {
      v11 = (wchar_t *)RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8u, 0xAAuLL);
      if ( v11 )
      {
        v12 = 0;
        appended = 0;
        while ( v12 < 42 )
        {
          if ( v12 )
          {
            v14 = &v10[8 * v12];
            if ( *((_DWORD *)v14 + 1) )
            {
              if ( *(_WORD *)v14 )
              {
                v15 = *(unsigned __int16 *)v14;
                String.Buffer = v11;
                *(_DWORD *)&String.Length = 11141120;
                if ( !RtlLCIDToCultureName(v15, &String) )
                  goto LABEL_19;
                Buffer = String.Buffer;
              }
              else
              {
                v18 = *((__int16 *)v14 + 1);
                if ( (v18 & 0x8000u) != 0LL )
                {
LABEL_19:
                  appended = -1073741595;
                  break;
                }
                v19 = *(_QWORD *)(a3 + 32);
                *(_QWORD *)&String.Length = 0LL;
                v20 = *(__int16 *)(*(_QWORD *)(v19 + 16) + 2 * v18);
                v21 = *(_QWORD *)(v19 + 24);
                Buffer = (wchar_t *)(v21 + 2 * v20);
                if ( Buffer )
                {
                  v22 = 2 * wcslen((const wchar_t *)(v21 + 2 * v20));
                  if ( v22 >= 0xFFFE )
                    LOWORD(v22) = -4;
                  String.Length = v22;
                  String.MaximumLength = v22 + 2;
                }
              }
              appended = LdrpLangFallbackListAppendNode(v8, a3, 0, (int)&a5, Buffer);
              if ( appended < 0 )
                break;
            }
          }
          ++v12;
        }
        RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v11);
        if ( !v10 )
          return (unsigned int)appended;
      }
      else
      {
        appended = -1073741801;
      }
    }
    else
    {
      appended = -1073741823;
    }
    RtlpFreeTraverseNodes(v10);
    return (unsigned int)appended;
  }
  return 3221225495LL;
}
