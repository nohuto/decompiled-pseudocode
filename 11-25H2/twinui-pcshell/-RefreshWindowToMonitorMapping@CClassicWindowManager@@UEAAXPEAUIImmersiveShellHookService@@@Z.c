/*
 * XREFs of ?RefreshWindowToMonitorMapping@CClassicWindowManager@@UEAAXPEAUIImmersiveShellHookService@@@Z @ 0x1801F3EB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CClassicWindowManager::RefreshWindowToMonitorMapping(
        CClassicWindowManager *this,
        struct IImmersiveShellHookService *a2)
{
  unsigned __int64 v2; // r14
  unsigned __int64 i; // rsi
  __int64 v6; // rcx
  char v7; // bl
  void (__fastcall *v8)(struct IImmersiveShellHookService *, __int64, __int64); // rdi
  __int64 v9; // rcx
  __int64 v10; // rax

  v2 = *((_QWORD *)this + 16);
  for ( i = 0LL; i < v2; ++i )
  {
    v6 = *(_QWORD *)(*((_QWORD *)this + 15) + 8 * i);
    v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 160LL))(v6);
    v8 = *(void (__fastcall **)(struct IImmersiveShellHookService *, __int64, __int64))(*(_QWORD *)a2 + 40LL);
    v9 = *(_QWORD *)(*((_QWORD *)this + 15) + 8 * i);
    v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 24LL))(v9);
    v8(a2, v7 != 0 ? 24LL : 20LL, v10);
  }
}
