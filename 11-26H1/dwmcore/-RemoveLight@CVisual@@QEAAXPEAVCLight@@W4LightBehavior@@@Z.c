/*
 * XREFs of ?RemoveLight@CVisual@@QEAAXPEAVCLight@@W4LightBehavior@@@Z @ 0x180260E88
 * Callers:
 *     ??1CLight@@MEAA@XZ @ 0x180264280 (--1CLight@@MEAA@XZ.c)
 *     ?SetExclusions@CLight@@QEAAJAEBV?$span@PEAVCVisual@@$0?0@gsl@@@Z @ 0x180264C20 (-SetExclusions@CLight@@QEAAJAEBV-$span@PEAVCVisual@@$0-0@gsl@@@Z.c)
 *     ?SetTargets@CLight@@QEAAJAEBV?$span@PEAVCVisual@@$0?0@gsl@@@Z @ 0x180264CC8 (-SetTargets@CLight@@QEAAJAEBV-$span@PEAVCVisual@@$0-0@gsl@@@Z.c)
 * Callees:
 *     ?last@?$pointer_buffer_impl@PEAVCResource@@$0A@@detail@@QEBAPEAPEAVCResource@@XZ @ 0x180021E10 (-last@-$pointer_buffer_impl@PEAVCResource@@$0A@@detail@@QEBAPEAPEAVCResource@@XZ.c)
 *     ?erase@?$vector_facade@PEAVCResource@@V?$pointer_buffer_impl@PEAVCResource@@$0A@@detail@@@detail@@QEAA?AV?$basic_iterator@PEAVCResource@@@2@V?$basic_iterator@QEAVCResource@@@2@@Z @ 0x180022F8C (-erase@-$vector_facade@PEAVCResource@@V-$pointer_buffer_impl@PEAVCResource@@$0A@@detail@@@detail.c)
 *     ?push_back@?$vector_facade@PEAVCResource@@V?$pointer_buffer_impl@PEAVCResource@@$0A@@detail@@@detail@@QEAAX$$QEAPEAVCResource@@@Z @ 0x180024DAC (-push_back@-$vector_facade@PEAVCResource@@V-$pointer_buffer_impl@PEAVCResource@@$0A@@detail@@@de.c)
 *     ?erase@?$vector@PEAVCLight@@V?$allocator@PEAVCLight@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PEAVCLight@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@PEAVCLight@@@std@@@std@@@2@@Z @ 0x1800FC340 (-erase@-$vector@PEAVCLight@@V-$allocator@PEAVCLight@@@std@@@std@@QEAA-AV-$_Vector_iterator@V-$_V.c)
 *     ?begin@?$vector_facade@PEAVCResource@@V?$pointer_buffer_impl@PEAVCResource@@$0A@@detail@@@detail@@QEAA?AV?$basic_iterator@PEAVCResource@@@2@XZ @ 0x1801599D0 (-begin@-$vector_facade@PEAVCResource@@V-$pointer_buffer_impl@PEAVCResource@@$0A@@detail@@@detail.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CVisual::RemoveLight(_QWORD *a1, __int64 a2, int a3)
{
  char v3; // bp
  _QWORD **v6; // rcx
  _QWORD *k; // r8
  __int64 *v8; // rsi
  unsigned __int64 v9; // rbp
  unsigned __int64 *v10; // rax
  _QWORD *m; // rbx
  __int64 v12; // r14
  _QWORD *i; // rbx
  _QWORD *j; // rax
  _QWORD v15[5]; // [rsp+20h] [rbp-28h] BYREF
  _QWORD *v16; // [rsp+68h] [rbp+20h] BYREF

  v3 = 0;
  if ( a3 )
  {
    v12 = (__int64)(a1 + 36);
    for ( i = (_QWORD *)a1[36]; i != (_QWORD *)a1[37]; ++i )
    {
      if ( *i == a2 )
      {
        for ( j = (_QWORD *)a1[33]; j != (_QWORD *)a1[34]; ++j )
        {
          if ( *j == a2 )
          {
            v16 = a1;
            detail::vector_facade<CResource *,detail::pointer_buffer_impl<CResource *,0>>::push_back(
              (__int64 *)(a2 + 32),
              &v16);
            v3 = 1;
            break;
          }
        }
        std::vector<CLight *>::erase(v12, &v16, (__int64)i);
        if ( v3 )
        {
LABEL_22:
          (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 80LL))(a1, 5LL);
          (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 80LL))(a1, 1LL);
        }
        return;
      }
    }
  }
  else
  {
    v6 = (_QWORD **)(a1 + 33);
    for ( k = *v6; k != (_QWORD *)a1[34]; ++k )
    {
      if ( *k == a2 )
      {
        std::vector<CLight *>::erase((__int64)v6, &v16, (__int64)k);
        v8 = (__int64 *)(a2 + 32);
        v9 = detail::pointer_buffer_impl<CResource *,0>::last(v8);
        v10 = detail::vector_facade<CResource *,detail::pointer_buffer_impl<CResource *,0>>::begin(
                v8,
                (unsigned __int64 *)&v16);
        for ( m = (_QWORD *)*v10; m != (_QWORD *)v9 && (_QWORD *)*m != a1; ++m )
          ;
        *v10 = (unsigned __int64)m;
        if ( m != (_QWORD *)detail::pointer_buffer_impl<CResource *,0>::last(v8) )
        {
          v16 = m;
          detail::vector_facade<CResource *,detail::pointer_buffer_impl<CResource *,0>>::erase(v8, v15, (__int64 *)&v16);
          goto LABEL_22;
        }
        return;
      }
    }
  }
}
