/*
 * XREFs of ?MNGetPopupBoundsRect@@YAXV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z @ 0x1401597F0
 * Callers:
 *     xxxMNOpenHierarchy @ 0x14016D6F0 (xxxMNOpenHierarchy.c)
 *     xxxMenuWindowProc @ 0x140183030 (xxxMenuWindowProc.c)
 *     ?xxxMNPositionHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1401A73E0 (-xxxMNPositionHierarchy@@YAIAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUt.c)
 *     ?MNCheckScroll@@YAHAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@AEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagMONITOR@@@Z @ 0x140266DC0 (-MNCheckScroll@@YAHAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@AEBV-$SmartObjStackRef@UtagMENU@@@@PE.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x140045B70 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1400503E8 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     GetMonitorRectForDpi @ 0x140091044 (GetMonitorRectForDpi.c)
 *     ?GetWindowCompositedDpiContext@@YAKPEBUtagWND@@@Z @ 0x140091370 (-GetWindowCompositedDpiContext@@YAKPEBUtagWND@@@Z.c)
 *     SubtractRect @ 0x140157E1C (SubtractRect.c)
 *     ?GetMonitorMenuRectForDpi@@YA?AUtagRECT@@PEBUtagMONITOR@@G@Z @ 0x140159A60 (-GetMonitorMenuRectForDpi@@YA-AUtagRECT@@PEBUtagMONITOR@@G@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

_QWORD *__fastcall MNGetPopupBoundsRect(__int64 a1, __int64 a2, struct tagRECT *a3, int a4)
{
  unsigned int WindowCompositedDpiContext; // eax
  __int64 v9; // rdx
  int **v10; // rax
  unsigned int v11; // eax
  struct tagRECT *v12; // rax
  struct tagRECT v13; // xmm0
  int **v14; // rax
  __int64 v15; // rax
  __int64 v16; // rcx
  unsigned int CurrentThreadDpiAwarenessContext; // esi
  __int64 v18; // rcx
  _QWORD *v19; // rdi
  _QWORD v21[2]; // [rsp+20h] [rbp-39h] BYREF
  __m128i v22; // [rsp+30h] [rbp-29h] BYREF
  struct tagRECT v23; // [rsp+40h] [rbp-19h] BYREF
  struct tagRECT v24; // [rsp+50h] [rbp-9h] BYREF
  __m128i v25; // [rsp+60h] [rbp+7h] BYREF
  __m128i v26; // [rsp+70h] [rbp+17h] BYREF

  WindowCompositedDpiContext = GetWindowCompositedDpiContext(*(const struct tagWND **)(**(_QWORD **)a1 + 16LL));
  GetMonitorRectForDpi(&v22, a2, (WindowCompositedDpiContext >> 8) & 0x1FF);
  v10 = *(int ***)a1;
  v25 = v22;
  if ( **v10 >= 0 )
  {
    v12 = (struct tagRECT *)&v26;
    v26 = v22;
  }
  else
  {
    v11 = GetWindowCompositedDpiContext(*(const struct tagWND **)(**(_QWORD **)a1 + 16LL));
    GetMonitorMenuRectForDpi(&v24, (const struct tagMONITOR *)a2, (v11 >> 8) & 0x1FF);
    v12 = &v24;
  }
  v13 = *v12;
  v14 = *(int ***)a1;
  v23 = v13;
  if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)*v14 + 2) + 40LL) + 288LL) & 0xF) == 2
    || (v15 = ValidateHmonitorNoRip(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(**(_QWORD **)a1 + 16LL) + 40LL) + 256LL), v9),
        (v21[0] = v15) == 0LL)
    || v15 == a2 )
  {
    if ( a4 )
      goto LABEL_14;
LABEL_15:
    *a3 = v23;
    return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(a1, v9);
  }
  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v16);
  if ( ***(int ***)a1 >= 0 || IsRectEmptyInl((const struct tagRECT *)(a2 + 112)) )
  {
    v19 = (_QWORD *)(a2 + 40);
    PhysicalToLogicalDPIRect(&v23, *v19 + 28LL, CurrentThreadDpiAwarenessContext, v21);
  }
  else
  {
    PhysicalToLogicalDPIRect(&v23, v18, CurrentThreadDpiAwarenessContext, v21);
    v19 = (_QWORD *)(a2 + 40);
  }
  if ( !a4 )
    goto LABEL_15;
  PhysicalToLogicalDPIRect(&v25, *v19 + 28LL, CurrentThreadDpiAwarenessContext, v21);
LABEL_14:
  SubtractRect((__int64)a3, v25.m128i_i32, &v23.left);
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(a1, v9);
}
