/*
 * XREFs of ?MNGetPopupBoundsRect@@YAXV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z @ 0x140175E24
 * Callers:
 *     ?xxxMNPositionHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x140175A04 (-xxxMNPositionHierarchy@@YAIAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUt.c)
 *     xxxMenuWindowProc @ 0x140242410 (xxxMenuWindowProc.c)
 *     xxxMNOpenHierarchy @ 0x14024D400 (xxxMNOpenHierarchy.c)
 *     ?MNCheckScroll@@YAHAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@AEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagMONITOR@@@Z @ 0x140288E04 (-MNCheckScroll@@YAHAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@AEBV-$SmartObjStackRef@UtagMENU@@@@PE.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x14000EBC4 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     GetMonitorRectForDpi @ 0x14002F7BC (GetMonitorRectForDpi.c)
 *     ?GetWindowCompositedDpiContext@@YAKPEBUtagWND@@@Z @ 0x140031410 (-GetWindowCompositedDpiContext@@YAKPEBUtagWND@@@Z.c)
 *     SubtractRect @ 0x14003ECCC (SubtractRect.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x14011F33C (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     ?GetMonitorMenuRectForDpi@@YA?AUtagRECT@@PEBUtagMONITOR@@G@Z @ 0x1401766F4 (-GetMonitorMenuRectForDpi@@YA-AUtagRECT@@PEBUtagMONITOR@@G@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

_QWORD *__fastcall MNGetPopupBoundsRect(__int64 a1, __int64 a2, struct tagRECT *a3, int a4)
{
  unsigned int WindowCompositedDpiContext; // eax
  int **v9; // rax
  unsigned int v10; // eax
  int **v11; // rax
  __int64 v12; // rax
  __int64 v13; // rcx
  unsigned int CurrentThreadDpiAwarenessContext; // esi
  __int64 v15; // rcx
  __int64 v16; // rdx
  struct tagRECT v18; // [rsp+20h] [rbp-40h] BYREF
  struct tagRECT v19; // [rsp+30h] [rbp-30h] BYREF
  struct tagRECT v20; // [rsp+40h] [rbp-20h] BYREF

  WindowCompositedDpiContext = GetWindowCompositedDpiContext(*(const struct tagWND **)(**(_QWORD **)a1 + 16LL));
  GetMonitorRectForDpi((__m128i *)&v18, a2, (WindowCompositedDpiContext >> 8) & 0x1FF);
  v9 = *(int ***)a1;
  v20 = v18;
  if ( **v9 < 0 )
  {
    v10 = GetWindowCompositedDpiContext(*(const struct tagWND **)(**(_QWORD **)a1 + 16LL));
    GetMonitorMenuRectForDpi(&v18, (const struct tagMONITOR *)a2, (v10 >> 8) & 0x1FF);
  }
  v11 = *(int ***)a1;
  v19 = v18;
  if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)*v11 + 2) + 40LL) + 288LL) & 0xF) == 2
    || (v12 = ValidateHmonitorNoRip(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(**(_QWORD **)a1 + 16LL) + 40LL) + 256LL)),
        (*(_QWORD *)&v18.left = v12) == 0LL)
    || v12 == a2 )
  {
    if ( a4 )
      goto LABEL_13;
LABEL_14:
    *a3 = v19;
    return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(a1);
  }
  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v13);
  if ( ***(int ***)a1 >= 0 || IsRectEmptyInl((const struct tagRECT *)(a2 + 112)) )
    v16 = *(_QWORD *)(a2 + 40) + 28LL;
  else
    v16 = v15;
  PhysicalToLogicalDPIRect(&v19, v16, CurrentThreadDpiAwarenessContext, &v18);
  if ( !a4 )
    goto LABEL_14;
  PhysicalToLogicalDPIRect(&v20, *(_QWORD *)(a2 + 40) + 28LL, CurrentThreadDpiAwarenessContext, &v18);
LABEL_13:
  SubtractRect((__int64)a3, (__int64)&v20, (__int64)&v19);
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(a1);
}
