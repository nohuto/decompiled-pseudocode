/*
 * XREFs of ??$_Construct_n@AEBQEAUDisplayOcclusionRect@@AEBQEAU1@@?$vector@UDisplayOcclusionRect@@V?$allocator@UDisplayOcclusionRect@@@std@@@std@@AEAAX_KAEBQEAUDisplayOcclusionRect@@1@Z @ 0x1801A5F30
 * Callers:
 *     ??$?4AEAUDisplayOcclusionContextMessage@@$0A@$0A@@?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@QEAAAEAV01@AEAUDisplayOcclusionContextMessage@@@Z @ 0x1801A5D68 (--$-4AEAUDisplayOcclusionContextMessage@@$0A@$0A@@-$variant@Umonostate@std@@UInputConfigContextM.c)
 * Callees:
 *     ??$_Copy_memmove@PEAW4_Button@@PEAW41@@std@@YAPEAW4_Button@@PEAW41@00@Z @ 0x18002C4AC (--$_Copy_memmove@PEAW4_Button@@PEAW41@@std@@YAPEAW4_Button@@PEAW41@00@Z.c)
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180075758 (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     ??1?$_Tidy_guard@V?$vector@UDisplayOcclusionRect@@V?$allocator@UDisplayOcclusionRect@@@std@@@std@@@std@@QEAA@XZ @ 0x1801A61CC (--1-$_Tidy_guard@V-$vector@UDisplayOcclusionRect@@V-$allocator@UDisplayOcclusionRect@@@std@@@std.c)
 *     ?_Buy_raw@?$vector@UDisplayOcclusionRect@@V?$allocator@UDisplayOcclusionRect@@@std@@@std@@AEAAX_K@Z @ 0x1801A68B0 (-_Buy_raw@-$vector@UDisplayOcclusionRect@@V-$allocator@UDisplayOcclusionRect@@@std@@@std@@AEAAX_.c)
 */

__int64 __fastcall std::vector<DisplayOcclusionRect>::_Construct_n<DisplayOcclusionRect * const &,DisplayOcclusionRect * const &>(
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
    if ( a2 > 0x1745D1745D1745DLL )
      std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength();
    std::vector<DisplayOcclusionRect>::_Buy_raw(a1, a2);
    v7 = (char *)*a1;
    v8 = *a3;
    v9 = *a4;
    std::_Copy_memmove<enum _Button *,enum _Button *>(v8, v9, *a1);
    v11 = 0LL;
    a1[1] = &v7[16 * ((v9 - (__int64)v8) >> 4)];
    return std::_Tidy_guard<std::vector<DisplayOcclusionRect>>::~_Tidy_guard<std::vector<DisplayOcclusionRect>>(&v11);
  }
  return result;
}
