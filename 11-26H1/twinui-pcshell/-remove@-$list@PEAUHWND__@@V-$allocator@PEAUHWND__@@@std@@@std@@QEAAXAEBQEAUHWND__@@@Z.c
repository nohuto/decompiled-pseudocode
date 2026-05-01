/*
 * XREFs of ?remove@?$list@PEAUHWND__@@V?$allocator@PEAUHWND__@@@std@@@std@@QEAAXAEBQEAUHWND__@@@Z @ 0x180568968
 * Callers:
 *     ?OnApplicationViewChanged@CVirtualDesktopSoftLandingHandler@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1801F3DC0 (-OnApplicationViewChanged@CVirtualDesktopSoftLandingHandler@@UEAAJPEAUIApplicationView@@W4APPLIC.c)
 * Callees:
 *     ??1_List_node_remove_op@?$list@PEAUHWND__@@V?$allocator@PEAUHWND__@@@std@@@std@@QEAA@XZ @ 0x1802C2A94 (--1_List_node_remove_op@-$list@PEAUHWND__@@V-$allocator@PEAUHWND__@@@std@@@std@@QEAA@XZ.c)
 */

void __fastcall std::list<HWND__ *>::remove(__int64 a1, _QWORD *a2)
{
  __int64 **v2; // r9
  __int64 *v4; // r8
  __int64 *v5; // rdx
  _QWORD *v6; // rcx
  _QWORD *v7; // rax
  __int64 v8; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+28h] [rbp-20h] BYREF
  __int64 *v10; // [rsp+30h] [rbp-18h]

  v2 = *(__int64 ***)a1;
  v8 = a1;
  v9 = 0LL;
  v10 = &v9;
  v4 = *v2;
  if ( *v2 != (__int64 *)v2 )
  {
    do
    {
      v5 = (__int64 *)*v4;
      if ( v4[2] == *a2 )
      {
        --*(_QWORD *)(a1 + 8);
        v6 = (_QWORD *)*v4;
        *v4 = 0LL;
        v7 = (_QWORD *)v4[1];
        *v7 = v6;
        v6[1] = v7;
        *v10 = (__int64)v4;
        a1 = v8;
        v10 = v4;
      }
      v4 = v5;
    }
    while ( v5 != (__int64 *)v2 );
  }
  std::list<HWND__ *>::_List_node_remove_op::~_List_node_remove_op((__int64)&v8);
}
