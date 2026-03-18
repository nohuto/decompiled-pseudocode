/*
 * XREFs of _SURFREF::vTryDeleteSurface_::_8_::_lambda_1_::_lambda_invoker_cdecl_ @ 0x1401EE0F0
 * Callers:
 *     <none>
 * Callees:
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140025488 (--0SURFREF@@QEAA@PEAUHSURF__@@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x1400546C0 (--1SURFREF@@QEAA@XZ.c)
 *     ?bDeleteSurface@SURFREF@@QEAAHAEAUSESSION_GLOBALS@Base@Gre@@H@Z @ 0x140181878 (-bDeleteSurface@SURFREF@@QEAAHAEAUSESSION_GLOBALS@Base@Gre@@H@Z.c)
 */

void __fastcall SURFREF::vTryDeleteSurface_::_8_::_lambda_1_::_lambda_invoker_cdecl_(void *a1, HSURF a2, void *a3)
{
  struct Gre::Base::SESSION_GLOBALS *v4; // rdi
  __int64 *v5[7]; // [rsp+20h] [rbp-38h] BYREF

  v4 = *(struct Gre::Base::SESSION_GLOBALS **)(W32GetSessionState(a1) + 88);
  SURFREF::SURFREF((SURFREF *)v5, a2, v4);
  if ( v5[4] )
    SURFREF::bDeleteSurface(v5, v4, 0);
  SURFREF::~SURFREF((unsigned int **)v5);
}
