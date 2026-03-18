/*
 * XREFs of ?TryReadyForCurrentFrame@CSuperWetInkManager@@AEAAJPEAUSuperWetStroke@1@PEA_N@Z @ 0x1801BA598
 * Callers:
 *     ?TryRegisterSuperWetForDrawLocal@CSuperWetInkManager@@AEAAJPEAVCSuperWetSource@@PEAVCDrawingContext@@_NPEA_N@Z @ 0x180126260 (-TryRegisterSuperWetForDrawLocal@CSuperWetInkManager@@AEAAJPEAVCSuperWetSource@@PEAVCDrawingCont.c)
 *     ?ScheduleScribblesForRenderTarget@CSuperWetInkManager@@QEAAJPEAVIMonitorTarget@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801BA72C (-ScheduleScribblesForRenderTarget@CSuperWetInkManager@@QEAAJPEAVIMonitorTarget@@AEBV-$TMilRect@I.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CheckLocalComputeScribbleSupport@CSuperWetInkManager@@AEAAJAEBUSuperWetStroke@1@PEA_N@Z @ 0x1801BA9A4 (-CheckLocalComputeScribbleSupport@CSuperWetInkManager@@AEAAJAEBUSuperWetStroke@1@PEA_N@Z.c)
 *     ?ResolveTarget@SuperWetStroke@CSuperWetInkManager@@QEBAJPEAPEAVIMonitorTarget@@@Z @ 0x1801BAB30 (-ResolveTarget@SuperWetStroke@CSuperWetInkManager@@QEBAJPEAPEAVIMonitorTarget@@@Z.c)
 *     ?DeactivateCurrentSource@CSuperWetInkManager@@AEAAXXZ @ 0x18021DEF0 (-DeactivateCurrentSource@CSuperWetInkManager@@AEAAXXZ.c)
 *     ?EnsureLocalSuperWetResources@CSuperWetInkManager@@AEAAJPEAVIMonitorTarget@@PEA_N@Z @ 0x180230334 (-EnsureLocalSuperWetResources@CSuperWetInkManager@@AEAAJPEAVIMonitorTarget@@PEA_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSuperWetInkManager::TryReadyForCurrentFrame(
        CSuperWetInkManager *this,
        struct CSuperWetInkManager::SuperWetStroke *a2,
        bool *a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // eax
  CSuperWetInkManager *v9; // rcx
  int v11; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  bool v13; // [rsp+50h] [rbp+18h] BYREF
  struct IMonitorTarget *v14; // [rsp+58h] [rbp+20h] BYREF

  *a3 = 0;
  v13 = 0;
  v6 = CSuperWetInkManager::CheckLocalComputeScribbleSupport(this, a2, &v13);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x22F,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\globalsuperwetinkmanager.cpp",
      (const char *)(unsigned int)v6);
    return v7;
  }
  if ( v13 )
  {
    v14 = 0LL;
    v8 = CSuperWetInkManager::SuperWetStroke::ResolveTarget(a2, &v14);
    v7 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x238,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\globalsuperwetinkmanager.cpp",
        (const char *)(unsigned int)v8);
      if ( v14 )
        (*(void (__fastcall **)(struct IMonitorTarget *))(*(_QWORD *)v14 + 16LL))(v14);
      return v7;
    }
    v13 = 0;
    v11 = CSuperWetInkManager::EnsureLocalSuperWetResources(v9, v14, &v13);
    v7 = v11;
    if ( v11 == -2005270523 )
    {
      CSuperWetInkManager::s_lostDevice = 1;
    }
    else if ( v11 >= 0 )
    {
      v7 = 0;
      if ( v13 )
      {
        *((_BYTE *)a2 + 96) = 1;
        *a3 = 1;
      }
      goto LABEL_15;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x246,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\globalsuperwetinkmanager.cpp",
      (const char *)(unsigned int)v11);
LABEL_15:
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v14);
    return v7;
  }
  CSuperWetInkManager::DeactivateCurrentSource(this);
  return 0LL;
}
