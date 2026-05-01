/*
 * XREFs of ?GetRootSwitchableOwner@CClassicWindowManager@@UEAAJPEAUIClassicWindowExternal@@PEAPEAUHWND__@@@Z @ 0x180131520
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CClassicWindowManager::GetRootSwitchableOwner(
        CClassicWindowManager *this,
        struct IClassicWindowExternal *a2,
        HWND *a3)
{
  __int64 v4; // rsi
  __int64 v5; // rcx
  __int64 v6; // rbx
  _QWORD *v7; // rax
  __int64 v8; // rdi
  unsigned int v9; // edi
  __int64 v11; // rcx
  _QWORD *v12; // rax
  __int64 v13; // r14
  __int64 v14; // rcx
  __int64 v15; // [rsp+40h] [rbp+8h] BYREF
  __int64 v16; // [rsp+48h] [rbp+10h]

  *a3 = 0LL;
  v15 = 0LL;
  (**(void (__fastcall ***)(struct IClassicWindowExternal *, GUID *, __int64 *))a2)(
    a2,
    &GUID_f35c2c7c_f4ba_416d_9028_9bf3fab447bb,
    &v15);
  v4 = *(_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 24LL))(v15);
  v16 = v4;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  v5 = v15;
  if ( v15 )
  {
    v15 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v6 = v4;
  v15 = v4;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  v7 = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 96LL))(v4);
  v8 = *v7;
  if ( *v7 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v8 + 8LL))(*v7);
  while ( v8 )
  {
    if ( v6 != v8 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
      v11 = v6;
      v6 = v8;
      if ( v11 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    v12 = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 96LL))(v8);
    v13 = *v12;
    if ( v8 != *v12 )
    {
      if ( v13 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v13 + 8LL))(*v12);
      v14 = v8;
      v8 = v13;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    }
  }
  v15 = v6;
  if ( v6 != v4 )
    *a3 = (HWND)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 24LL))(v6);
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v9 = *a3 == 0LL ? 0x80070490 : 0;
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return v9;
}
