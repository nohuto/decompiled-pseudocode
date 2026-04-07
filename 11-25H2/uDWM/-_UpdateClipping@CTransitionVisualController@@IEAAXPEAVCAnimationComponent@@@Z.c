/*
 * XREFs of ?_UpdateClipping@CTransitionVisualController@@IEAAXPEAVCAnimationComponent@@@Z @ 0x1800426C0
 * Callers:
 *     ?MorphForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@@Z @ 0x18002445C (-MorphForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@@Z.c)
 *     ?SetupZOrder@CTransitionVisualController@@QEAAJXZ @ 0x18002A18C (-SetupZOrder@CTransitionVisualController@@QEAAJXZ.c)
 * Callees:
 *     ?_SetAnimationClipRegion@CTransitionVisualController@@IEAAJPEAVCVisual@@PEBUtagRECT@@@Z @ 0x180040C44 (-_SetAnimationClipRegion@CTransitionVisualController@@IEAAJPEAVCVisual@@PEBUtagRECT@@@Z.c)
 *     ?GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z @ 0x1800429B8 (-GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z.c)
 *     ?GetBeginRect@CAnimatedTransitionVisual@@UEAAJPEAUtagRECT@@@Z @ 0x180087FF0 (-GetBeginRect@CAnimatedTransitionVisual@@UEAAJPEAUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x18009A7F0 (__security_check_cookie.c)
 *     McTemplateU0pddddq_EtwEventWriteTransfer @ 0x1800D31C4 (McTemplateU0pddddq_EtwEventWriteTransfer.c)
 */

void __fastcall CTransitionVisualController::_UpdateClipping(
        CTransitionVisualController *this,
        struct CAnimationComponent *a2)
{
  int v2; // ecx
  __m128i rcMonitor; // xmm6
  HMONITOR v5; // rax
  __int64 v6; // rcx
  char v7; // al
  int v8; // edx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  CAnimatedTransitionVisual *v12; // rcx
  struct tagRECT v13; // [rsp+48h] [rbp-9h] BYREF
  struct tagRECT v14; // [rsp+58h] [rbp+7h] BYREF
  struct tagMONITORINFO mi; // [rsp+68h] [rbp+17h] BYREF

  v2 = *((_DWORD *)a2 + 17);
  rcMonitor = 0LL;
  v13 = 0LL;
  if ( v2 )
  {
    v10 = v2 - 1;
    if ( !v10 )
    {
      rcMonitor = *(__m128i *)((char *)a2 + 88);
      goto LABEL_4;
    }
    v11 = v10 - 1;
    if ( !v11 )
    {
      rcMonitor = *(__m128i *)((char *)a2 + 104);
      goto LABEL_4;
    }
    if ( v11 != 1 )
      goto LABEL_5;
    v12 = (CAnimatedTransitionVisual *)*((_QWORD *)a2 + 5);
    v14 = 0LL;
    if ( (int)CAnimatedTransitionVisual::GetBeginRect(v12, &v14) >= 0 )
    {
LABEL_13:
      CTransitionVisualController::GetMonitorRectFromRectImpl(&v14, &v13);
      rcMonitor = (__m128i)v13;
      goto LABEL_5;
    }
LABEL_12:
    v14 = *(struct tagRECT *)((char *)a2 + 88);
    goto LABEL_13;
  }
  v5 = MonitorFromWindow(*((HWND *)a2 + 2), 1u);
  mi.cbSize = 40;
  memset(&mi.rcMonitor, 0, 36);
  if ( !GetMonitorInfoW(v5, &mi) )
    goto LABEL_12;
  rcMonitor = (__m128i)mi.rcMonitor;
LABEL_4:
  v13 = (struct tagRECT)rcMonitor;
LABEL_5:
  v6 = *((_QWORD *)a2 + 5);
  if ( !*(_BYTE *)(v6 + 938) )
  {
    v7 = CTransitionVisualController::_SetAnimationClipRegion(
           (CTransitionVisualController *)-v6,
           (CVisualProxy **)((v6 + 8) & -(__int64)(v6 != 0)),
           &v13);
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      McTemplateU0pddddq_EtwEventWriteTransfer(
        v9,
        v8,
        *((_QWORD *)a2 + 2),
        _mm_cvtsi128_si32(rcMonitor),
        _mm_cvtsi128_si32(_mm_srli_si128(rcMonitor, 4)),
        _mm_cvtsi128_si32(_mm_srli_si128(rcMonitor, 8)),
        _mm_cvtsi128_si32(_mm_srli_si128(rcMonitor, 12)),
        v7);
  }
  *(__m128i *)(*((_QWORD *)a2 + 5) + 792LL) = rcMonitor;
}
