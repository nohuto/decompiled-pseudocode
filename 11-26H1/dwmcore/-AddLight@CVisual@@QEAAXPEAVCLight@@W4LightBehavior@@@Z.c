/*
 * XREFs of ?AddLight@CVisual@@QEAAXPEAVCLight@@W4LightBehavior@@@Z @ 0x18026043C
 * Callers:
 *     ?AppendExclusions@CLight@@QEAAJAEBV?$span@PEAVCVisual@@$0?0@gsl@@@Z @ 0x1802643B4 (-AppendExclusions@CLight@@QEAAJAEBV-$span@PEAVCVisual@@$0-0@gsl@@@Z.c)
 *     ?AppendTargets@CLight@@QEAAJAEBV?$span@PEAVCVisual@@$0?0@gsl@@@Z @ 0x180264440 (-AppendTargets@CLight@@QEAAJAEBV-$span@PEAVCVisual@@$0-0@gsl@@@Z.c)
 * Callees:
 *     ?last@?$pointer_buffer_impl@PEAVCResource@@$0A@@detail@@QEBAPEAPEAVCResource@@XZ @ 0x180021E10 (-last@-$pointer_buffer_impl@PEAVCResource@@$0A@@detail@@QEBAPEAPEAVCResource@@XZ.c)
 *     ?erase@?$vector_facade@PEAVCResource@@V?$pointer_buffer_impl@PEAVCResource@@$0A@@detail@@@detail@@QEAA?AV?$basic_iterator@PEAVCResource@@@2@V?$basic_iterator@QEAVCResource@@@2@@Z @ 0x180022F8C (-erase@-$vector_facade@PEAVCResource@@V-$pointer_buffer_impl@PEAVCResource@@$0A@@detail@@@detail.c)
 *     ?push_back@?$vector_facade@PEAVCResource@@V?$pointer_buffer_impl@PEAVCResource@@$0A@@detail@@@detail@@QEAAX$$QEAPEAVCResource@@@Z @ 0x180024DAC (-push_back@-$vector_facade@PEAVCResource@@V-$pointer_buffer_impl@PEAVCResource@@$0A@@detail@@@de.c)
 *     ?begin@?$vector_facade@PEAVCResource@@V?$pointer_buffer_impl@PEAVCResource@@$0A@@detail@@@detail@@QEAA?AV?$basic_iterator@PEAVCResource@@@2@XZ @ 0x1801599D0 (-begin@-$vector_facade@PEAVCResource@@V-$pointer_buffer_impl@PEAVCResource@@$0A@@detail@@@detail.c)
 *     ??$_Emplace_reallocate@AEBQEAVCPositionedLight@@@?$vector@PEAVCPositionedLight@@V?$allocator@PEAVCPositionedLight@@@std@@@std@@AEAAPEAPEAVCPositionedLight@@QEAPEAV2@AEBQEAV2@@Z @ 0x18023200C (--$_Emplace_reallocate@AEBQEAVCPositionedLight@@@-$vector@PEAVCPositionedLight@@V-$allocator@PEA.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVisual::AddLight(__int64 a1, __int64 *a2, int a3)
{
  __int64 v5; // rcx
  __int64 **v6; // rdx
  __int64 **j; // rax
  __int64 **v8; // rdx
  unsigned __int64 v9; // r14
  unsigned __int64 *v10; // rax
  __int64 *i; // rbx
  __int64 (__fastcall *v12)(__int64, _QWORD, __int64 *); // rbx
  unsigned int v13; // eax
  __int64 v15; // [rsp+40h] [rbp+8h] BYREF
  __int64 *v16; // [rsp+48h] [rbp+10h] BYREF

  v16 = a2;
  v5 = a1 + 288;
  v6 = *(__int64 ***)(v5 + 8);
  if ( a3 )
  {
    if ( v6 == *(__int64 ***)(v5 + 16) )
    {
      std::vector<CPositionedLight *>::_Emplace_reallocate<CPositionedLight * const &>(
        (void **)v5,
        (__int64)v6,
        (__int64 *)&v16);
    }
    else
    {
      *v6 = a2;
      *(_QWORD *)(v5 + 8) += 8LL;
    }
    v9 = detail::pointer_buffer_impl<CResource *,0>::last(a2 + 4);
    v10 = detail::vector_facade<CResource *,detail::pointer_buffer_impl<CResource *,0>>::begin(
            a2 + 4,
            (unsigned __int64 *)&v16);
    for ( i = (__int64 *)*v10; i != (__int64 *)v9 && *i != a1; ++i )
      ;
    *v10 = (unsigned __int64)i;
    if ( i != (__int64 *)detail::pointer_buffer_impl<CResource *,0>::last(a2 + 4) )
    {
      v16 = i;
      detail::vector_facade<CResource *,detail::pointer_buffer_impl<CResource *,0>>::erase(
        a2 + 4,
        &v15,
        (__int64 *)&v16);
    }
  }
  else
  {
    for ( j = *(__int64 ***)v5; j != v6; ++j )
    {
      if ( *j == a2 )
        goto LABEL_7;
    }
    v15 = a1;
    detail::vector_facade<CResource *,detail::pointer_buffer_impl<CResource *,0>>::push_back(a2 + 4, &v15);
LABEL_7:
    v8 = *(__int64 ***)(a1 + 272);
    if ( v8 == *(__int64 ***)(a1 + 280) )
    {
      std::vector<CPositionedLight *>::_Emplace_reallocate<CPositionedLight * const &>(
        (void **)(a1 + 264),
        (__int64)v8,
        (__int64 *)&v16);
    }
    else
    {
      *v8 = a2;
      *(_QWORD *)(a1 + 272) += 8LL;
    }
  }
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 80LL))(a1, 5LL);
  v12 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)a1 + 80LL);
  v13 = (*(__int64 (__fastcall **)(__int64 *))(*a2 + 272))(a2);
  return v12(a1, v13, a2);
}
