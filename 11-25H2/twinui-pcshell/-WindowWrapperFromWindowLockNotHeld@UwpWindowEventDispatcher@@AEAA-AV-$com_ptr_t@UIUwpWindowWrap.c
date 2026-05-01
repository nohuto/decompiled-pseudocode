/*
 * XREFs of ?WindowWrapperFromWindowLockNotHeld@UwpWindowEventDispatcher@@AEAA?AV?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@PEAUHWND__@@@Z @ 0x18016A128
 * Callers:
 *     ?GetViewFromHwnd@UwpWindowEventDispatcher@@UEAAJPEAUHWND__@@PEAPEAUINtUserViewWrapper@@@Z @ 0x18016A0A0 (-GetViewFromHwnd@UwpWindowEventDispatcher@@UEAAJPEAUHWND__@@PEAPEAUINtUserViewWrapper@@@Z.c)
 *     ?OnShellHookMessage@UwpWindowEventDispatcher@@UEAAJ_K_J@Z @ 0x18024D520 (-OnShellHookMessage@UwpWindowEventDispatcher@@UEAAJ_K_J@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 *__fastcall UwpWindowEventDispatcher::WindowWrapperFromWindowLockNotHeld(
        RTL_SRWLOCK *a1,
        __int64 *a2,
        __int64 a3)
{
  RTL_SRWLOCK *v6; // rbp
  __int64 *Ptr; // rdi
  __int64 *v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rbx

  v6 = a1 + 61;
  AcquireSRWLockShared(a1 + 61);
  *a2 = 0LL;
  Ptr = (__int64 *)a1[48].Ptr;
  v8 = (__int64 *)a1[49].Ptr;
  while ( Ptr != v8 )
  {
    if ( *Ptr && a3 == (*(int (__fastcall **)(__int64))(*(_QWORD *)*Ptr + 256LL))(*Ptr) )
    {
      v9 = *Ptr;
      v10 = *a2;
      *a2 = *Ptr;
      if ( v9 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
      if ( v10 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      break;
    }
    ++Ptr;
  }
  if ( v6 )
    ReleaseSRWLockShared(v6);
  return a2;
}
