/*
 * XREFs of ??1_List_node_remove_op@?$list@PEAUHWND__@@V?$allocator@PEAUHWND__@@@std@@@std@@QEAA@XZ @ 0x1802C2A94
 * Callers:
 *     ?remove@?$list@PEAUHWND__@@V?$allocator@PEAUHWND__@@@std@@@std@@QEAAXAEBQEAUHWND__@@@Z @ 0x180568968 (-remove@-$list@PEAUHWND__@@V-$allocator@PEAUHWND__@@@std@@@std@@QEAAXAEBQEAUHWND__@@@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180285A90 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::list<HWND__ *>::_List_node_remove_op::~_List_node_remove_op(__int64 a1)
{
  _QWORD *v1; // rcx
  _QWORD *v2; // rbx

  v1 = *(_QWORD **)(a1 + 8);
  if ( v1 )
  {
    do
    {
      v2 = (_QWORD *)*v1;
      std::_Deallocate<16>(v1, (struct std::nothrow_t *)0x18);
      v1 = v2;
    }
    while ( v2 );
  }
}
