/*
 * XREFs of ??$_Construct_n@AEBQEAUVirtualTouchpadRect@@AEBQEAU1@@?$vector@UVirtualTouchpadRect@@V?$allocator@UVirtualTouchpadRect@@@std@@@std@@AEAAX_KAEBQEAUVirtualTouchpadRect@@1@Z @ 0x1801A53EC
 * Callers:
 *     ??$?4AEAUVirtualTouchpadContextMessage@@$0A@$0A@@?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@QEAAAEAV01@AEAUVirtualTouchpadContextMessage@@@Z @ 0x1801A5238 (--$-4AEAUVirtualTouchpadContextMessage@@$0A@$0A@@-$variant@Umonostate@std@@UInputConfigContextMe.c)
 * Callees:
 *     ??$_Copy_memmove@PEAW4_Button@@PEAW41@@std@@YAPEAW4_Button@@PEAW41@00@Z @ 0x18002C4AC (--$_Copy_memmove@PEAW4_Button@@PEAW41@@std@@YAPEAW4_Button@@PEAW41@00@Z.c)
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180075758 (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     ??1?$_Tidy_guard@V?$vector@UVirtualTouchpadRect@@V?$allocator@UVirtualTouchpadRect@@@std@@@std@@@std@@QEAA@XZ @ 0x1801A5600 (--1-$_Tidy_guard@V-$vector@UVirtualTouchpadRect@@V-$allocator@UVirtualTouchpadRect@@@std@@@std@@.c)
 *     ?_Buy_raw@?$vector@UVirtualTouchpadRect@@V?$allocator@UVirtualTouchpadRect@@@std@@@std@@AEAAX_K@Z @ 0x1801A5CEC (-_Buy_raw@-$vector@UVirtualTouchpadRect@@V-$allocator@UVirtualTouchpadRect@@@std@@@std@@AEAAX_K@.c)
 */

__int64 __fastcall std::vector<VirtualTouchpadRect>::_Construct_n<VirtualTouchpadRect * const &,VirtualTouchpadRect * const &>(
        void **a1,
        unsigned __int64 a2,
        void **a3,
        __int64 *a4)
{
  char *v7; // rsi
  void *v8; // rbx
  __int64 v9; // rdi
  __int64 result; // rax
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  if ( a2 )
  {
    if ( a2 > 0xAAAAAAAAAAAAAAALL )
      std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength();
    std::vector<VirtualTouchpadRect>::_Buy_raw(a1, a2);
    v7 = (char *)*a1;
    v8 = *a3;
    v9 = *a4;
    std::_Copy_memmove<enum _Button *,enum _Button *>(v8, v9, *a1);
    v11 = 0LL;
    a1[1] = &v7[8 * ((v9 - (__int64)v8) >> 3)];
    return std::_Tidy_guard<std::vector<VirtualTouchpadRect>>::~_Tidy_guard<std::vector<VirtualTouchpadRect>>(&v11);
  }
  return result;
}
