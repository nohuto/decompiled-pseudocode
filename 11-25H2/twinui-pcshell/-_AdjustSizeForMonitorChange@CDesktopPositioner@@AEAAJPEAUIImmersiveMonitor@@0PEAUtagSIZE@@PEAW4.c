/*
 * XREFs of ?_AdjustSizeForMonitorChange@CDesktopPositioner@@AEAAJPEAUIImmersiveMonitor@@0PEAUtagSIZE@@PEAW4TRY_POSITION_VIEW_FLAGS@@@Z @ 0x1804F0B68
 * Callers:
 *     ?_GetRectAndFlagsFromPresentationArgs@CDesktopPositioner@@AEAAJPEAUIPresentationRequestedArgs@@UtagRECT@@PEAU3@PEAW4TRY_POSITION_VIEW_FLAGS@@PEAPEAUIImmersiveMonitor@@@Z @ 0x18023E7C4 (-_GetRectAndFlagsFromPresentationArgs@CDesktopPositioner@@AEAAJPEAUIPresentationRequestedArgs@@U.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetScaleFactorForRect@@YA?AW4DEVICE_SCALE_FACTOR@@AEBUtagRECT@@@Z @ 0x1802CC798 (-GetScaleFactorForRect@@YA-AW4DEVICE_SCALE_FACTOR@@AEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDesktopPositioner::_AdjustSizeForMonitorChange(
        CDesktopPositioner *this,
        struct IImmersiveMonitor *a2,
        struct IImmersiveMonitor *a3,
        struct tagSIZE *a4,
        enum TRY_POSITION_VIEW_FLAGS *a5)
{
  __int64 (__fastcall *v7)(struct IImmersiveMonitor *, struct tagRECT *); // rax
  int v8; // ebx
  __int64 v9; // rdx
  __int64 v11; // rax
  int ScaleFactorForRect; // ebx
  int v13; // eax
  int v14; // edi
  LONG v15; // eax
  LONG cy; // ecx
  struct tagRECT v17; // [rsp+20h] [rbp-48h] BYREF
  struct tagRECT v18; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v7 = *(__int64 (__fastcall **)(struct IImmersiveMonitor *, struct tagRECT *))(*(_QWORD *)a2 + 88LL);
  v17 = 0LL;
  v8 = v7(a2, &v17);
  if ( v8 < 0 )
  {
    v9 = 3197LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)v8);
    return (unsigned int)v8;
  }
  v11 = *(_QWORD *)a3;
  v18 = 0LL;
  v8 = (*(__int64 (__fastcall **)(struct IImmersiveMonitor *, struct tagRECT *))(v11 + 88))(a3, &v18);
  if ( v8 < 0 )
  {
    v9 = 3200LL;
    goto LABEL_3;
  }
  ScaleFactorForRect = GetScaleFactorForRect(&v17);
  v13 = GetScaleFactorForRect(&v18);
  v14 = v13;
  if ( v13 != ScaleFactorForRect )
  {
    v15 = MulDiv(a4->cx, v13, ScaleFactorForRect);
    cy = a4->cy;
    a4->cx = v15;
    a4->cy = MulDiv(cy, v14, ScaleFactorForRect);
    *(_DWORD *)a5 |= 0xCu;
  }
  return 0LL;
}
