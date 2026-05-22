/*
 * XREFs of ??$_Assign_counted_range@PEAUVirtualTouchpadRect@@@?$vector@UVirtualTouchpadRect@@V?$allocator@UVirtualTouchpadRect@@@std@@@std@@AEAAXPEAUVirtualTouchpadRect@@_K@Z @ 0x1801A52E8
 * Callers:
 *     ??4?$vector@UVirtualTouchpadRect@@V?$allocator@UVirtualTouchpadRect@@@std@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1801A5658 (--4-$vector@UVirtualTouchpadRect@@V-$allocator@UVirtualTouchpadRect@@@std@@@std@@QEAAAEAV01@AEBV.c)
 * Callees:
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180075758 (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ?_Calculate_growth@?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@AEBA_K_K@Z @ 0x180097B90 (-_Calculate_growth@-$vector@UINPUT_SPACE_PAYLOAD@@V-$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@.c)
 *     ??$_Copy_memmove_n@PEAUVirtualTouchpadRect@@PEAU1@@std@@YAPEAUVirtualTouchpadRect@@PEAU1@_K0@Z @ 0x1801A5498 (--$_Copy_memmove_n@PEAUVirtualTouchpadRect@@PEAU1@@std@@YAPEAUVirtualTouchpadRect@@PEAU1@_K0@Z.c)
 *     ?_Buy_raw@?$vector@UVirtualTouchpadRect@@V?$allocator@UVirtualTouchpadRect@@@std@@@std@@AEAAX_K@Z @ 0x1801A5CEC (-_Buy_raw@-$vector@UVirtualTouchpadRect@@V-$allocator@UVirtualTouchpadRect@@@std@@@std@@AEAAX_K@.c)
 */

__int64 __fastcall std::vector<VirtualTouchpadRect>::_Assign_counted_range<VirtualTouchpadRect *>(
        char **a1,
        char *a2,
        unsigned __int64 a3)
{
  char *v3; // rbx
  unsigned __int64 v4; // rdi
  unsigned __int64 v7; // rbp
  __int64 v8; // r10
  char *v9; // rcx
  __int64 result; // rax
  unsigned __int64 v11; // r14

  v3 = *a1;
  v4 = a3;
  if ( a3 <= 0xAAAAAAAAAAAAAAABuLL * ((a1[2] - *a1) >> 3) )
  {
    v11 = 0xAAAAAAAAAAAAAAABuLL * ((a1[1] - v3) >> 3);
    if ( a3 > v11 )
    {
      std::_Copy_memmove_n<VirtualTouchpadRect *,VirtualTouchpadRect *>(a2);
      v3 = a1[1];
      v9 = &a2[24 * v11];
      v4 -= v11;
      goto LABEL_8;
    }
  }
  else
  {
    if ( a3 > 0xAAAAAAAAAAAAAAALL )
      std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength();
    v7 = std::vector<INPUT_SPACE_PAYLOAD>::_Calculate_growth(a1, a3);
    if ( v3 )
    {
      std::_Deallocate<16>(v3, (struct std::nothrow_t *)(24 * v8));
      *a1 = 0LL;
      a1[1] = 0LL;
      a1[2] = 0LL;
    }
    std::vector<VirtualTouchpadRect>::_Buy_raw(a1, v7);
    v3 = *a1;
  }
  v9 = a2;
LABEL_8:
  std::_Copy_memmove_n<VirtualTouchpadRect *,VirtualTouchpadRect *>(v9);
  result = 3 * v4;
  a1[1] = &v3[24 * v4];
  return result;
}
