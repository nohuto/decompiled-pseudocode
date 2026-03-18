/*
 * XREFs of _SURFREF::vTryDeleteSurface_::_8_::_lambda_1_::_lambda_invoker_cdecl_ @ 0x1401C5D70
 * Callers:
 *     <none>
 * Callees:
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x140086F7C (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x14008D2D8 (--1SURFREF@@QEAA@XZ.c)
 *     ?bDeleteSurface@SURFREF@@QEAAHH@Z @ 0x14008D32C (-bDeleteSurface@SURFREF@@QEAAHH@Z.c)
 */

void __fastcall SURFREF::vTryDeleteSurface_::_8_::_lambda_1_::_lambda_invoker_cdecl_(void *a1, __int64 a2, void *a3)
{
  _BYTE v3[32]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v4; // [rsp+40h] [rbp-18h]

  SURFREF::SURFREF((SURFREF *)v3, a2);
  if ( v4 )
    SURFREF::bDeleteSurface((SURFREF *)v3);
  SURFREF::~SURFREF((SURFREF *)v3);
}
