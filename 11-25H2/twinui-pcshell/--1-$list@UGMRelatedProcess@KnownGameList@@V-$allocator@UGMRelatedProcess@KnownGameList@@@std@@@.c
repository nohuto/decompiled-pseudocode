/*
 * XREFs of ??1?$list@UGMRelatedProcess@KnownGameList@@V?$allocator@UGMRelatedProcess@KnownGameList@@@std@@@std@@QEAA@XZ @ 0x1806556FC
 * Callers:
 *     _AutoGameProfile::GetGameRelatedFromGcsData_::_1_::dtor$0 @ 0x1806DCF41 (_AutoGameProfile--GetGameRelatedFromGcsData_--_1_--dtor$0.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180029B4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::list<KnownGameList::GMRelatedProcess>::~list<KnownGameList::GMRelatedProcess>(void **a1)
{
  _QWORD **v1; // rdx
  _QWORD *v3; // rcx
  _QWORD *v4; // rbx

  v1 = (_QWORD **)*a1;
  **((_QWORD **)*a1 + 1) = 0LL;
  v3 = *v1;
  if ( *v1 )
  {
    do
    {
      v4 = (_QWORD *)*v3;
      std::_Deallocate<16,0>(v3, (const struct std::nothrow_t *)0x50);
      v3 = v4;
    }
    while ( v4 );
  }
  std::_Deallocate<16,0>(*a1, (const struct std::nothrow_t *)0x50);
}
