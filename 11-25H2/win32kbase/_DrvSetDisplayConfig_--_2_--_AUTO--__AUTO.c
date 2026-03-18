/*
 * XREFs of _DrvSetDisplayConfig_::_2_::_AUTO::__AUTO @ 0x1401C9A2C
 * Callers:
 *     DrvSetDisplayConfig @ 0x14013C960 (DrvSetDisplayConfig.c)
 *     _DrvSetDisplayConfig_::_2_::_AUTO::_scalar_deleting_destructor_ @ 0x1401C9CA0 (_DrvSetDisplayConfig_--_2_--_AUTO--_scalar_deleting_destructor_.c)
 * Callees:
 *     ??1AUTO_TGO@@MEAA@XZ @ 0x140112D38 (--1AUTO_TGO@@MEAA@XZ.c)
 *     ?FreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x140112D64 (-FreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

void __fastcall DrvSetDisplayConfig_::_2_::_AUTO::__AUTO(AUTO_TGO *this)
{
  bool v1; // zf
  __int64 DxgkWin32kInterface; // rax
  void *v4; // rcx

  v1 = *((_BYTE *)this + 72) == 0;
  *(_QWORD *)this = &off_140257BC8;
  if ( !v1 )
  {
    DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(this);
    if ( (*(int (**)(void))(DxgkWin32kInterface + 280))() < 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 15558;
    }
  }
  FreePathsModality(*((char **)this + 6));
  FreePathsModality(*((char **)this + 7));
  FreePathsModality(*((char **)this + 8));
  v4 = (void *)*((_QWORD *)this + 10);
  if ( v4 )
    ObfDereferenceObject(v4);
  AUTO_TGO::~AUTO_TGO(this);
}
