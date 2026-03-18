/*
 * XREFs of ?NeedsCursorPositionUpdates@CDesktopTree@@QEBA_NPEBVCCursorVisual@@@Z @ 0x1801D7F70
 * Callers:
 *     ?SetNotificationMode@CCursorVisual@@QEAAXXZ @ 0x18018E35C (-SetNotificationMode@CCursorVisual@@QEAAXXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CDesktopTree::NeedsCursorPositionUpdates(CDesktopTree *this, const struct CCursorVisual *a2)
{
  int (__fastcall ****v2)(_QWORD, GUID *, __int64 *); // rbx
  int (__fastcall ****v4)(_QWORD, GUID *, __int64 *); // rdi
  int (__fastcall ***v5)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v6; // rax
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = (int (__fastcall ****)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 306);
  v4 = (int (__fastcall ****)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 307);
  while ( v2 != v4 )
  {
    v5 = *v2;
    v8 = 0LL;
    if ( (**v5)(v5, &GUID_246c9be3_da00_417e_8eb0_aefc3aebe2a9, &v8) < 0 )
    {
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v8);
      return 1;
    }
    v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 72LL))(v8);
    if ( !v6 || *(const struct CCursorVisual **)(v6 + 19136) != a2 )
    {
      if ( v8 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
      return 1;
    }
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v8);
    ++v2;
  }
  return 0;
}
