/*
 * XREFs of ??1?$vector@EV?$allocator@E@std@@@std@@QEAA@XZ @ 0x1805E3444
 * Callers:
 *     __anonymous_namespace_::TryGetFilePublisher_::_1_::dtor$0 @ 0x1806FEA98 (__anonymous_namespace_--TryGetFilePublisher_--_1_--dtor$0.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180285A90 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<unsigned char>::~vector<unsigned char>(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    std::_Deallocate<16>(v2, (struct std::nothrow_t *)(*(_QWORD *)(a1 + 16) - (_QWORD)v2));
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
