/*
 * XREFs of ??1?$vector_facade@UNodesDataBookmark@CExpression@@V?$buffer_impl@UNodesDataBookmark@CExpression@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x18010D380
 * Callers:
 *     ?CalculateValueWorkerImpl@CExpression@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x180109990 (-CalculateValueWorkerImpl@CExpression@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 *     ?ValidateNodes@CExpression@@AEAAJIPEBEPEAI@Z @ 0x18010CEB8 (-ValidateNodes@CExpression@@AEAAJIPEBEPEAI@Z.c)
 * Callees:
 *     ?clear_region@?$vector_facade@UNodesDataBookmark@CExpression@@V?$buffer_impl@UNodesDataBookmark@CExpression@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18010CADC (-clear_region@-$vector_facade@UNodesDataBookmark@CExpression@@V-$buffer_impl@UNodesDataBookmark@.c)
 */

int __fastcall detail::vector_facade<CExpression::NodesDataBookmark,detail::buffer_impl<CExpression::NodesDataBookmark,16,1,detail::liberal_expansion_policy>>::~vector_facade<CExpression::NodesDataBookmark,detail::buffer_impl<CExpression::NodesDataBookmark,16,1,detail::liberal_expansion_policy>>(
        __int64 *a1)
{
  __int64 v2; // r8
  void *v3; // rdi
  int result; // eax
  bool v5; // zf
  HANDLE ProcessHeap; // rax

  v2 = (a1[1] - *a1) >> 3;
  if ( v2 )
    detail::vector_facade<CExpression::NodesDataBookmark,detail::buffer_impl<CExpression::NodesDataBookmark,16,1,detail::liberal_expansion_policy>>::clear_region(
      a1,
      0LL,
      v2);
  v3 = (void *)*a1;
  result = (_DWORD)a1 + 24;
  v5 = *a1 == (_QWORD)(a1 + 3);
  *a1 = 0LL;
  if ( v5 )
    v3 = 0LL;
  if ( v3 )
  {
    ProcessHeap = GetProcessHeap();
    return HeapFree(ProcessHeap, 0, v3);
  }
  return result;
}
