/*
 * XREFs of ??0?$set@U_GUID@@UGUIDComparer@PenInterface@@V?$allocator@U_GUID@@@std@@@std@@QEAA@XZ @ 0x180193C28
 * Callers:
 *     ??0PenInterface@@QEAA@PEAX0@Z @ 0x180193C70 (--0PenInterface@@QEAA@PEAX0@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800880DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::set<_GUID,PenInterface::GUIDComparer,std::allocator<_GUID>>::set<_GUID,PenInterface::GUIDComparer,std::allocator<_GUID>>(
        _QWORD *a1)
{
  _QWORD *v2; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  v2 = std::_Allocate<16,std::_Default_allocate_traits>(0x30uLL);
  *v2 = v2;
  v2[1] = v2;
  v2[2] = v2;
  *((_WORD *)v2 + 12) = 257;
  *a1 = v2;
  return a1;
}
