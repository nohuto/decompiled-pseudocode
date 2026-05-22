/*
 * XREFs of ??$_Assign_counted_range@PEAUDisplayOcclusionRect@@@?$vector@UDisplayOcclusionRect@@V?$allocator@UDisplayOcclusionRect@@@std@@@std@@AEAAXPEAUDisplayOcclusionRect@@_K@Z @ 0x1801A5E18
 * Callers:
 *     ??4?$vector@UDisplayOcclusionRect@@V?$allocator@UDisplayOcclusionRect@@@std@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1801A6214 (--4-$vector@UDisplayOcclusionRect@@V-$allocator@UDisplayOcclusionRect@@@std@@@std@@QEAAAEAV01@AE.c)
 * Callees:
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180075758 (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ?_Calculate_growth@?$vector@UDisplayOcclusionRect@@V?$allocator@UDisplayOcclusionRect@@@std@@@std@@AEBA_K_K@Z @ 0x18013D9D4 (-_Calculate_growth@-$vector@UDisplayOcclusionRect@@V-$allocator@UDisplayOcclusionRect@@@std@@@st.c)
 *     ??$_Copy_memmove_n@PEAUDisplayOcclusionRect@@PEAU1@@std@@YAPEAUDisplayOcclusionRect@@PEAU1@_K0@Z @ 0x1801A5FDC (--$_Copy_memmove_n@PEAUDisplayOcclusionRect@@PEAU1@@std@@YAPEAUDisplayOcclusionRect@@PEAU1@_K0@Z.c)
 *     ??$_Uninitialized_copy_n@PEAUDisplayOcclusionRect@@V?$allocator@UDisplayOcclusionRect@@@std@@@std@@YAPEAUDisplayOcclusionRect@@PEAU1@_K0AEAV?$allocator@UDisplayOcclusionRect@@@0@@Z @ 0x1801A6014 (--$_Uninitialized_copy_n@PEAUDisplayOcclusionRect@@V-$allocator@UDisplayOcclusionRect@@@std@@@st.c)
 *     ?_Buy_raw@?$vector@UDisplayOcclusionRect@@V?$allocator@UDisplayOcclusionRect@@@std@@@std@@AEAAX_K@Z @ 0x1801A68B0 (-_Buy_raw@-$vector@UDisplayOcclusionRect@@V-$allocator@UDisplayOcclusionRect@@@std@@@std@@AEAAX_.c)
 */

__int64 __fastcall std::vector<DisplayOcclusionRect>::_Assign_counted_range<DisplayOcclusionRect *>(
        void **a1,
        char *a2,
        unsigned __int64 a3)
{
  _BYTE *v3; // rbp
  unsigned __int64 v4; // rsi
  __int64 v7; // rdi
  __int64 v8; // r10
  void *v9; // r8
  char *v10; // rcx
  __int64 result; // rax
  unsigned __int64 v12; // rdi

  v3 = *a1;
  v4 = a3;
  if ( a3 <= 0x2E8BA2E8BA2E8BA3LL * (((_BYTE *)a1[2] - (_BYTE *)*a1) >> 4) )
  {
    v12 = 0x2E8BA2E8BA2E8BA3LL * (((_BYTE *)a1[1] - v3) >> 4);
    if ( a3 <= v12 )
    {
      std::_Copy_memmove_n<DisplayOcclusionRect *,DisplayOcclusionRect *>(a2);
      result = (__int64)&v3[176 * v4];
      goto LABEL_11;
    }
    std::_Copy_memmove_n<DisplayOcclusionRect *,DisplayOcclusionRect *>(a2);
    v9 = a1[1];
    v4 -= v12;
    v10 = &a2[176 * v12];
  }
  else
  {
    if ( a3 > 0x1745D1745D1745DLL )
      std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength();
    v7 = std::vector<DisplayOcclusionRect>::_Calculate_growth(a1, a3);
    if ( v3 )
    {
      std::_Deallocate<16>(v3, (struct std::nothrow_t *)(176 * v8));
      *a1 = 0LL;
      a1[1] = 0LL;
      a1[2] = 0LL;
    }
    std::vector<DisplayOcclusionRect>::_Buy_raw(a1, v7);
    v9 = *a1;
    v10 = a2;
  }
  result = std::_Uninitialized_copy_n<DisplayOcclusionRect *>(v10, v4, v9);
LABEL_11:
  a1[1] = (void *)result;
  return result;
}
