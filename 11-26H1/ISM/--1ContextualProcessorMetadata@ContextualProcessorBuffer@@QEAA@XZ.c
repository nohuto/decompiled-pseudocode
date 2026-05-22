/*
 * XREFs of ??1ContextualProcessorMetadata@ContextualProcessorBuffer@@QEAA@XZ @ 0x18001CF2C
 * Callers:
 *     ?AddProcessor@ContextualProcessorBuffer@@UEAAXPEAUIContextualProcessor@@UContextualProcessorInitialState@@@Z @ 0x18001C750 (-AddProcessor@ContextualProcessorBuffer@@UEAAXPEAUIContextualProcessor@@UContextualProcessorInit.c)
 *     ??1?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@QEAA@XZ @ 0x18001CC10 (--1-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContextualProc.c)
 *     ??1ContextualProcessorBuffer@@MEAA@XZ @ 0x18001CC9C (--1ContextualProcessorBuffer@@MEAA@XZ.c)
 *     ??$_Destroy_range@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@YAXPEAUContextualProcessorMetadata@ContextualProcessorBuffer@@QEAU12@AEAV?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@0@@Z @ 0x18001CE04 (--$_Destroy_range@V-$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@st.c)
 *     ??1?$_Uninitialized_backout_al@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@QEAA@XZ @ 0x18001CE40 (--1-$_Uninitialized_backout_al@V-$allocator@UContextualProcessorMetadata@ContextualProcessorBuff.c)
 *     ?_Change_array@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@AEAAXQEAUContextualProcessorMetadata@ContextualProcessorBuffer@@_K1@Z @ 0x18001CE7C (-_Change_array@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UCo.c)
 *     _ContextualProcessorBuffer::AddProcessor_::_1_::dtor$6 @ 0x1801D4C98 (_ContextualProcessorBuffer--AddProcessor_--_1_--dtor$6.c)
 *     _ContextualProcessorBuffer::TryAddProcessorAndContact_::_1_::dtor$6 @ 0x1801D4DC0 (_ContextualProcessorBuffer--TryAddProcessorAndContact_--_1_--dtor$6.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ContextualProcessorBuffer::ContextualProcessorMetadata::~ContextualProcessorMetadata(
        ContextualProcessorBuffer::ContextualProcessorMetadata *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  _QWORD **v4; // rcx
  _QWORD *v5; // rcx
  _QWORD *v6; // rbx
  __int64 v7; // rcx
  _QWORD **v8; // rcx
  _QWORD *v9; // rcx
  _QWORD *v10; // rbx
  __int64 v11; // rcx
  _QWORD **v12; // rcx
  _QWORD *v13; // rcx
  _QWORD *v14; // rbx
  __int64 v15; // rcx

  v2 = *((_QWORD *)this + 26);
  if ( v2 )
  {
    *((_QWORD *)this + 26) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  v3 = *((_QWORD *)this + 21);
  if ( v3 )
  {
    std::_Deallocate<16>(v3, (*((_QWORD *)this + 23) - v3) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 21) = 0LL;
    *((_QWORD *)this + 22) = 0LL;
    *((_QWORD *)this + 23) = 0LL;
  }
  v4 = (_QWORD **)*((_QWORD *)this + 19);
  *v4[1] = 0LL;
  v5 = *v4;
  if ( v5 )
  {
    do
    {
      v6 = (_QWORD *)*v5;
      std::_Deallocate<16>(v5, 24LL);
      v5 = v6;
    }
    while ( v6 );
  }
  std::_Deallocate<16>(*((_QWORD *)this + 19), 24LL);
  v7 = *((_QWORD *)this + 12);
  if ( v7 )
  {
    std::_Deallocate<16>(v7, (*((_QWORD *)this + 14) - v7) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 12) = 0LL;
    *((_QWORD *)this + 13) = 0LL;
    *((_QWORD *)this + 14) = 0LL;
  }
  v8 = (_QWORD **)*((_QWORD *)this + 10);
  *v8[1] = 0LL;
  v9 = *v8;
  if ( v9 )
  {
    do
    {
      v10 = (_QWORD *)*v9;
      std::_Deallocate<16>(v9, 24LL);
      v9 = v10;
    }
    while ( v10 );
  }
  std::_Deallocate<16>(*((_QWORD *)this + 10), 24LL);
  v11 = *((_QWORD *)this + 4);
  if ( v11 )
  {
    std::_Deallocate<16>(v11, (*((_QWORD *)this + 6) - v11) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 4) = 0LL;
    *((_QWORD *)this + 5) = 0LL;
    *((_QWORD *)this + 6) = 0LL;
  }
  v12 = (_QWORD **)*((_QWORD *)this + 2);
  *v12[1] = 0LL;
  v13 = *v12;
  if ( v13 )
  {
    do
    {
      v14 = (_QWORD *)*v13;
      std::_Deallocate<16>(v13, 24LL);
      v13 = v14;
    }
    while ( v14 );
  }
  std::_Deallocate<16>(*((_QWORD *)this + 2), 24LL);
  v15 = *(_QWORD *)this;
  if ( *(_QWORD *)this )
  {
    *(_QWORD *)this = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
}
