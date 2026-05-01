/*
 * XREFs of ?IsWindowOwnedBy@CClassicWindowManager@@AEAA_NPEAUIClassicWindow@@0@Z @ 0x18012883C
 * Callers:
 *     CClassicWindowManager::ForEachWindow__lambda_ee517389c6e8518757eb9a59c851a0bc___ @ 0x1802EBEA8 (CClassicWindowManager--ForEachWindow__lambda_ee517389c6e8518757eb9a59c851a0bc___.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall CClassicWindowManager::IsWindowOwnedBy(
        CClassicWindowManager *this,
        struct IClassicWindow *a2,
        struct IClassicWindow *a3)
{
  struct IClassicWindow **v5; // rax
  struct IClassicWindow *v6; // rbx
  __int64 v7; // rax
  struct IClassicWindow **v8; // rax
  struct IClassicWindow *v9; // rdi
  struct IClassicWindow *v10; // rcx

  v5 = (struct IClassicWindow **)(*(__int64 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)a2 + 96LL))(a2);
  v6 = *v5;
  if ( *v5 )
    (*(void (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v6 + 8LL))(*v5);
  while ( v6 && a2 != v6 )
  {
    v7 = *(_QWORD *)v6;
    if ( v6 == a3 )
    {
      (*(void (__fastcall **)(struct IClassicWindow *))(v7 + 16))(v6);
      return 1;
    }
    v8 = (struct IClassicWindow **)(*(__int64 (__fastcall **)(struct IClassicWindow *))(v7 + 96))(v6);
    v9 = *v8;
    if ( v6 != *v8 )
    {
      if ( v9 )
        (*(void (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v9 + 8LL))(*v8);
      v10 = v6;
      v6 = v9;
      (*(void (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v10 + 16LL))(v10);
    }
  }
  if ( v6 )
    (*(void (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v6 + 16LL))(v6);
  return 0;
}
