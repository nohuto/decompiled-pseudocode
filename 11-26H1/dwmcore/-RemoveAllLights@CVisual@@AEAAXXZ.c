/*
 * XREFs of ?RemoveAllLights@CVisual@@AEAAXXZ @ 0x1801D2338
 * Callers:
 *     ??1CVisual@@MEAA@XZ @ 0x18002456C (--1CVisual@@MEAA@XZ.c)
 * Callees:
 *     ?last@?$pointer_buffer_impl@PEAVCResource@@$0A@@detail@@QEBAPEAPEAVCResource@@XZ @ 0x180021E10 (-last@-$pointer_buffer_impl@PEAVCResource@@$0A@@detail@@QEBAPEAPEAVCResource@@XZ.c)
 *     ?erase@?$vector_facade@PEAVCResource@@V?$pointer_buffer_impl@PEAVCResource@@$0A@@detail@@@detail@@QEAA?AV?$basic_iterator@PEAVCResource@@@2@V?$basic_iterator@QEAVCResource@@@2@@Z @ 0x180022F8C (-erase@-$vector_facade@PEAVCResource@@V-$pointer_buffer_impl@PEAVCResource@@$0A@@detail@@@detail.c)
 *     ?begin@?$vector_facade@PEAVCResource@@V?$pointer_buffer_impl@PEAVCResource@@$0A@@detail@@@detail@@QEAA?AV?$basic_iterator@PEAVCResource@@@2@XZ @ 0x1801599D0 (-begin@-$vector_facade@PEAVCResource@@V-$pointer_buffer_impl@PEAVCResource@@$0A@@detail@@@detail.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CVisual::RemoveAllLights(CVisual *this)
{
  _QWORD *v1; // r15
  _QWORD *v3; // r14
  __int64 v4; // rbp
  _QWORD *v5; // r14
  _QWORD *v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 *v10; // r12
  unsigned __int64 v11; // rdi
  unsigned __int64 *v12; // rax
  CVisual **i; // rbx
  CVisual **v14; // [rsp+60h] [rbp+8h] BYREF
  unsigned __int64 v15; // [rsp+68h] [rbp+10h] BYREF
  __int64 v16; // [rsp+70h] [rbp+18h] BYREF

  v1 = (_QWORD *)*((_QWORD *)this + 34);
  v3 = (_QWORD *)*((_QWORD *)this + 33);
  v4 = v1 - v3;
  if ( v4 )
  {
    while ( v3 != v1 )
    {
      (*(void (__fastcall **)(_QWORD, CVisual *))(*(_QWORD *)*v3 + 280LL))(*v3, this);
      v10 = (__int64 *)(*v3 + 32LL);
      v11 = detail::pointer_buffer_impl<CResource *,0>::last(v10);
      v12 = detail::vector_facade<CResource *,detail::pointer_buffer_impl<CResource *,0>>::begin(v10, &v15);
      for ( i = (CVisual **)*v12; i != (CVisual **)v11 && *i != this; ++i )
        ;
      *v12 = (unsigned __int64)i;
      if ( i != (CVisual **)detail::pointer_buffer_impl<CResource *,0>::last(v10) )
      {
        v14 = i;
        detail::vector_facade<CResource *,detail::pointer_buffer_impl<CResource *,0>>::erase(v10, &v16, (__int64 *)&v14);
      }
      ++v3;
    }
    v8 = *((_QWORD *)this + 33);
    if ( v8 != *((_QWORD *)this + 34) )
      *((_QWORD *)this + 34) = v8;
  }
  v5 = (_QWORD *)*((_QWORD *)this + 37);
  v6 = (_QWORD *)*((_QWORD *)this + 36);
  v7 = v5 - v6;
  if ( v7 )
  {
    while ( v6 != v5 )
    {
      (*(void (__fastcall **)(_QWORD, CVisual *))(*(_QWORD *)*v6 + 288LL))(*v6, this);
      ++v6;
    }
    v9 = *((_QWORD *)this + 36);
    if ( v9 != *((_QWORD *)this + 37) )
      *((_QWORD *)this + 37) = v9;
  }
  if ( v7 + v4 )
    (*(void (__fastcall **)(CVisual *, __int64))(*(_QWORD *)this + 80LL))(this, 1LL);
}
