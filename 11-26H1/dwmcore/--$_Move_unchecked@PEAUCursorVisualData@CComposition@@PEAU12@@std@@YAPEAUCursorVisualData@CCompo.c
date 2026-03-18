/*
 * XREFs of ??$_Move_unchecked@PEAUCursorVisualData@CComposition@@PEAU12@@std@@YAPEAUCursorVisualData@CComposition@@PEAU12@00@Z @ 0x180229444
 * Callers:
 *     ?erase@?$vector@UCursorVisualData@CComposition@@V?$allocator@UCursorVisualData@CComposition@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UCursorVisualData@CComposition@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UCursorVisualData@CComposition@@@std@@@std@@@2@@Z @ 0x18022B8E4 (-erase@-$vector@UCursorVisualData@CComposition@@V-$allocator@UCursorVisualData@CComposition@@@st.c)
 * Callees:
 *     ??4?$com_ptr_t@VIBitmapLock@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1801044B4 (--4-$com_ptr_t@VIBitmapLock@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall std::_Move_unchecked<CComposition::CursorVisualData *,CComposition::CursorVisualData *>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rsi

  if ( a1 != a2 )
  {
    v5 = a1 + 16;
    do
    {
      v6 = *(_QWORD *)(v5 - 8);
      v7 = *(_QWORD *)(a3 + 8);
      *(_QWORD *)(a3 + 8) = v6;
      if ( v6 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
      if ( v7 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      *(_DWORD *)(a3 + 16) = *(_DWORD *)v5;
      *(_BYTE *)(a3 + 20) = *(_BYTE *)(v5 + 4);
      wil::com_ptr_t<IBitmapLock,wil::err_returncode_policy>::operator=((__int64 *)(a3 + 24), (__int64 *)(v5 + 8));
      v5 += 32LL;
      a3 += 32LL;
    }
    while ( v5 - 16 != a2 );
  }
  return a3;
}
