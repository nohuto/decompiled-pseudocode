/*
 * XREFs of LdrpMergeParentBaseLanguagesToList @ 0x180003400
 * Callers:
 *     RtlGetSystemPreferredUILanguages @ 0x180002AF0 (RtlGetSystemPreferredUILanguages.c)
 *     LdrpMergeLangFallbackLists @ 0x1800038D0 (LdrpMergeLangFallbackLists.c)
 *     RtlGetUserPreferredUILanguages @ 0x180038AA0 (RtlGetUserPreferredUILanguages.c)
 * Callees:
 *     RtlpTraverseParents @ 0x180003090 (RtlpTraverseParents.c)
 *     RtlpFreeTraverseNodes @ 0x180003660 (RtlpFreeTraverseNodes.c)
 *     LdrpLangFallbackListAppendNode @ 0x180004E90 (LdrpLangFallbackListAppendNode.c)
 *     RtlLCIDToCultureName @ 0x180005BA0 (RtlLCIDToCultureName.c)
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     wcslen @ 0x18012DAE0 (wcslen.c)
 */

__int64 __fastcall LdrpMergeParentBaseLanguagesToList(_QWORD *a1, _WORD *a2, __int64 a3, __int64 a4, __int16 a5)
{
  int v8; // r14d
  __int64 Heap_0; // rax
  __int64 v10; // rdi
  wchar_t *v11; // rbp
  __int16 v12; // bx
  int appended; // esi
  unsigned __int16 *v14; // rcx
  __int64 v15; // rcx
  wchar_t *String; // rsi
  __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rax
  size_t v22; // rax
  wchar_t *v23[2]; // [rsp+30h] [rbp-38h] BYREF

  a5 = 0;
  v8 = (int)a1;
  *(_OWORD *)v23 = 0LL;
  if ( !a1 || !*a1 || !a2 || !a3 )
    return 3221225485LL;
  if ( !is_mul_ok(8uLL, 0x2AuLL) )
    return 3221225621LL;
  Heap_0 = RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8LL, 336LL);
  v10 = Heap_0;
  if ( Heap_0 )
  {
    if ( RtlpTraverseParents(a2, Heap_0, a3, a4, 0, 42) )
    {
      v11 = (wchar_t *)RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8LL, 170LL);
      if ( v11 )
      {
        v12 = 0;
        appended = 0;
        while ( v12 < 42 )
        {
          if ( v12 )
          {
            v14 = (unsigned __int16 *)(v10 + 8LL * v12);
            if ( *((_DWORD *)v14 + 1) )
            {
              if ( *v14 )
              {
                v15 = *v14;
                v23[1] = v11;
                LODWORD(v23[0]) = 11141120;
                if ( !(unsigned __int8)RtlLCIDToCultureName(v15, v23) )
                  goto LABEL_19;
                String = v23[1];
              }
              else
              {
                v18 = (__int16)v14[1];
                if ( (v18 & 0x8000u) != 0LL )
                {
LABEL_19:
                  appended = -1073741595;
                  break;
                }
                v19 = *(_QWORD *)(a3 + 32);
                v23[0] = 0LL;
                v20 = *(__int16 *)(*(_QWORD *)(v19 + 16) + 2 * v18);
                v21 = *(_QWORD *)(v19 + 24);
                String = (wchar_t *)(v21 + 2 * v20);
                if ( String )
                {
                  v22 = 2 * wcslen((const wchar_t *)(v21 + 2 * v20));
                  if ( v22 >= 0xFFFE )
                    LOWORD(v22) = -4;
                  LOWORD(v23[0]) = v22;
                  WORD1(v23[0]) = v22 + 2;
                }
              }
              appended = LdrpLangFallbackListAppendNode(v8, a3, 0, (int)&a5, String);
              if ( appended < 0 )
                break;
            }
          }
          ++v12;
        }
        RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0LL, v11);
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
