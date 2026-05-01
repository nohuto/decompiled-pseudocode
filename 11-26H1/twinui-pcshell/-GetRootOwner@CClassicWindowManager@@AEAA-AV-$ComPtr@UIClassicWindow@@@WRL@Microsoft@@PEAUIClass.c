/*
 * XREFs of ?GetRootOwner@CClassicWindowManager@@AEAA?AV?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@PEAUIClassicWindow@@@Z @ 0x180164630
 * Callers:
 *     ?EnumerateOwnershipTree@CClassicWindowManager@@UEAAJPEAUIClassicWindowExternal@@PEAKPEAPEAPEAUHWND__@@@Z @ 0x1802EC6D0 (-EnumerateOwnershipTree@CClassicWindowManager@@UEAAJPEAUIClassicWindowExternal@@PEAKPEAPEAPEAUHW.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall CClassicWindowManager::GetRootOwner(__int64 a1, _QWORD *a2, __int64 a3)
{
  _QWORD *v4; // rax
  __int64 v5; // rbx
  __int64 v7; // rcx
  _QWORD *v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rcx

  *a2 = a3;
  if ( a3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a3 + 8LL))(a3);
  v4 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 96LL))(*a2);
  v5 = *v4;
  if ( *v4 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v5 + 8LL))(*v4);
  while ( v5 )
  {
    if ( *a2 != v5 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
      v7 = *a2;
      *a2 = v5;
      if ( v7 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
    v8 = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 96LL))(v5);
    v9 = *v8;
    if ( v5 != *v8 )
    {
      if ( v9 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v9 + 8LL))(*v8);
      v10 = v5;
      v5 = v9;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
  }
  return a2;
}
