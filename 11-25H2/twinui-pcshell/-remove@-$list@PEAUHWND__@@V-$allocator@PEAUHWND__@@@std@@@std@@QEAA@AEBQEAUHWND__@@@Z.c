/*
 * XREFs of ?remove@?$list@PEAUHWND__@@V?$allocator@PEAUHWND__@@@std@@@std@@QEAA@AEBQEAUHWND__@@@Z @ 0x1802A317C
 * Callers:
 *     ?OnApplicationViewChanged@CVirtualDesktopSoftLandingHandler@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1801FE9E0 (-OnApplicationViewChanged@CVirtualDesktopSoftLandingHandler@@UEAAJPEAUIApplicationView@@W4APPLIC.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180029B4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::list<HWND__ *>::remove(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r9
  _QWORD *v3; // rcx
  _QWORD **v5; // r10
  _QWORD *v6; // r8
  _QWORD *v7; // rdx
  _QWORD *v8; // rcx
  _QWORD *v9; // rax
  _QWORD *v10; // rbx
  _QWORD *v12; // [rsp+28h] [rbp-20h] BYREF
  _QWORD *v13; // [rsp+30h] [rbp-18h]

  v2 = a1;
  v3 = 0LL;
  v12 = 0LL;
  v13 = &v12;
  v5 = *(_QWORD ***)v2;
  v6 = **(_QWORD ***)v2;
  if ( v6 != *(_QWORD **)v2 )
  {
    do
    {
      v7 = (_QWORD *)*v6;
      if ( v6[2] == *a2 )
      {
        --*(_QWORD *)(v2 + 8);
        v8 = (_QWORD *)*v6;
        *v6 = 0LL;
        v9 = (_QWORD *)v6[1];
        *v9 = v8;
        v8[1] = v9;
        *v13 = v6;
        v2 = a1;
        v13 = v6;
      }
      v6 = v7;
    }
    while ( v7 != v5 );
    v3 = v12;
  }
  if ( v3 )
  {
    do
    {
      v10 = (_QWORD *)*v3;
      std::_Deallocate<16,0>(v3, (const struct std::nothrow_t *)0x18);
      v3 = v10;
    }
    while ( v10 );
  }
}
