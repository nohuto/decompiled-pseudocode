/*
 * XREFs of _DrvSetDisplayConfig_::_2_::_AUTO::__AUTO @ 0x1401BE804
 * Callers:
 *     DrvSetDisplayConfig @ 0x140175E80 (DrvSetDisplayConfig.c)
 *     _DrvSetDisplayConfig_::_2_::_AUTO::_scalar_deleting_destructor_ @ 0x1401F4920 (_DrvSetDisplayConfig_--_2_--_AUTO--_scalar_deleting_destructor_.c)
 * Callees:
 *     ??1AUTO_TGO@@MEAA@XZ @ 0x14002D790 (--1AUTO_TGO@@MEAA@XZ.c)
 *     ?FreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x14002DDE8 (-FreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

void __fastcall DrvSetDisplayConfig_::_2_::_AUTO::__AUTO(AUTO_TGO *this, __int64 a2)
{
  bool v2; // zf
  __int64 DxgkWin32kInterface; // rax
  __int64 v5; // rdx
  __int64 v6; // rdx
  void *v7; // rcx

  v2 = *((_BYTE *)this + 72) == 0;
  *(_QWORD *)this = &off_14025ECB0;
  if ( !v2 )
  {
    DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(this, a2);
    if ( (*(int (**)(void))(DxgkWin32kInterface + 280))() < 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 15406;
    }
  }
  FreePathsModality(*((PVOID *)this + 6), a2);
  FreePathsModality(*((PVOID *)this + 7), v5);
  FreePathsModality(*((PVOID *)this + 8), v6);
  v7 = (void *)*((_QWORD *)this + 10);
  if ( v7 )
    ObfDereferenceObject(v7);
  AUTO_TGO::~AUTO_TGO(this);
}
