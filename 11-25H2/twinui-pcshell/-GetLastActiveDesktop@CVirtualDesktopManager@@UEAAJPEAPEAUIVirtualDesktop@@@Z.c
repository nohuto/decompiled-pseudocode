/*
 * XREFs of ?GetLastActiveDesktop@CVirtualDesktopManager@@UEAAJPEAPEAUIVirtualDesktop@@@Z @ 0x18052FE00
 * Callers:
 *     ?GetLastActiveDesktop@CVirtualDesktopManager@@WBI@EAAJPEAPEAUIVirtualDesktop@@@Z @ 0x18052FE90 (-GetLastActiveDesktop@CVirtualDesktopManager@@WBI@EAAJPEAPEAUIVirtualDesktop@@@Z.c)
 * Callees:
 *     ??$copy_to@UIVirtualDesktop@@@?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAUIVirtualDesktop@@@Z @ 0x18013E52C (--$copy_to@UIVirtualDesktop@@@-$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QE.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVirtualDesktopManager::GetLastActiveDesktop(
        CVirtualDesktopManager *this,
        struct IVirtualDesktop **a2)
{
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  if ( a2 )
    *a2 = 0LL;
  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)this + 19) + 24LL))(*((_QWORD *)this + 19), &SRWLock);
  if ( *((_QWORD *)this + 23) )
  {
    wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>::copy_to<IVirtualDesktop>((__int64 *)this + 23, a2);
    if ( SRWLock )
      ReleaseSRWLockShared(SRWLock);
    return 0LL;
  }
  else
  {
    if ( SRWLock )
      ReleaseSRWLockShared(SRWLock);
    return 2147500037LL;
  }
}
