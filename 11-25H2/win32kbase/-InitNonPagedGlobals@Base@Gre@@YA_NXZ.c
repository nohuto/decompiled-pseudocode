/*
 * XREFs of ?InitNonPagedGlobals@Base@Gre@@YA_NXZ @ 0x140157598
 * Callers:
 *     InitializeGre @ 0x1402EC79C (InitializeGre.c)
 * Callees:
 *     ?Win32AllocPoolImpl@@YAPEAX_K0K@Z @ 0x140026954 (-Win32AllocPoolImpl@@YAPEAX_K0K@Z.c)
 *     ??0BaseGlobalsNonPaged@Base@Gre@@QEAA@XZ @ 0x140158434 (--0BaseGlobalsNonPaged@Base@Gre@@QEAA@XZ.c)
 */

bool __fastcall Gre::Base::InitNonPagedGlobals(Gre::Base *this)
{
  Gre::Base::BaseGlobalsNonPaged **v1; // rdi
  Gre::Base::BaseGlobalsNonPaged *v2; // rax
  Gre::Base::BaseGlobalsNonPaged *v3; // rbx

  v1 = *(Gre::Base::BaseGlobalsNonPaged ***)(W32GetSessionState(this) + 88);
  v2 = (Gre::Base::BaseGlobalsNonPaged *)Win32AllocPoolImpl(64LL, 0x788uLL, 0x6D657347u);
  v3 = v2;
  if ( v2 )
  {
    Gre::Base::BaseGlobalsNonPaged::BaseGlobalsNonPaged(v2);
    LOBYTE(v2) = 1;
    *v1 = v3;
  }
  return (char)v2;
}
