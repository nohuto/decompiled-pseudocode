/*
 * XREFs of _anonymous_namespace_::_dynamic_initializer_for___currentSequence__ @ 0x1800056B0
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800E95D0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void___::_Buyheadnode_std::allocator_std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void_______ @ 0x1801AD824 (std--_Tree_node_std--pair__anonymous_namespace_--AnimationId_const__unsigned_int__void___--_Buyh.c)
 */

int anonymous_namespace_::_dynamic_initializer_for___currentSequence__()
{
  __int64 v0; // rax
  __int64 v1; // rax

  v0 = std::_Allocate<16,std::_Default_allocate_traits>(0x28uLL);
  *(_QWORD *)v0 = v0;
  *(_QWORD *)(v0 + 8) = v0;
  *(_QWORD *)(v0 + 16) = v0;
  *(_WORD *)(v0 + 24) = 257;
  qword_1803DE498 = v0;
  qword_1803DE4A8 = 0LL;
  qword_1803DE4B0 = 0LL;
  v1 = std::_Allocate<16,std::_Default_allocate_traits>(0x28uLL);
  *(_QWORD *)v1 = v1;
  *(_QWORD *)(v1 + 8) = v1;
  *(_QWORD *)(v1 + 16) = v1;
  *(_WORD *)(v1 + 24) = 257;
  qword_1803DE4A8 = v1;
  xmmword_1803DE4C0 = 0LL;
  *(_QWORD *)&xmmword_1803DE4C0 = std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void___::_Buyheadnode_std::allocator_std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void_______();
  xmmword_1803DE4D0 = 0LL;
  return atexit((void (__cdecl *)())anonymous_namespace_::_dynamic_atexit_destructor_for___currentSequence__);
}
