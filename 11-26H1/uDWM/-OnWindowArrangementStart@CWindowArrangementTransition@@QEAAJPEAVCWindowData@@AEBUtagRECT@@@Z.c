/*
 * XREFs of ?OnWindowArrangementStart@CWindowArrangementTransition@@QEAAJPEAVCWindowData@@AEBUtagRECT@@@Z @ 0x180045CD8
 * Callers:
 *     ?OnWindowArrangementStart@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z @ 0x1800E216C (-OnWindowArrangementStart@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AnimateRect@CAcrylicSheet@@QEAAJAEBUtagRECT@@MKUInterpolationParameters@@M@Z @ 0x180042604 (-AnimateRect@CAcrylicSheet@@QEAAJAEBUtagRECT@@MKUInterpolationParameters@@M@Z.c)
 *     ?IsWindowAnimationEnabled@CDesktopManager@@SA_NXZ @ 0x180044858 (-IsWindowAnimationEnabled@CDesktopManager@@SA_NXZ.c)
 *     ?AdjustTargetRect@CAcrylicSheet@@QEAAJPEAUtagRECT@@@Z @ 0x180044A8C (-AdjustTargetRect@CAcrylicSheet@@QEAAJPEAUtagRECT@@@Z.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x180078474 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 */

__int64 __fastcall CWindowArrangementTransition::OnWindowArrangementStart(
        CWindowArrangementTransition *this,
        struct CWindowData *a2,
        const struct tagRECT *a3)
{
  __int64 v3; // rax
  unsigned int v4; // ebx
  __int64 v7; // rsi
  __m128d si128; // xmm7
  struct tagRECT *v9; // r8
  CAcrylicSheet *v10; // rcx
  int v11; // eax
  __int64 v12; // r8
  int v13; // eax
  int v14; // r8d
  __m256i v16; // [rsp+30h] [rbp-B8h]
  __m256i v17; // [rsp+60h] [rbp-88h] BYREF
  __int64 v18; // [rsp+80h] [rbp-68h]
  struct tagRECT v19; // [rsp+90h] [rbp-58h] BYREF

  v3 = *(_QWORD *)this;
  v4 = 0;
  *((_BYTE *)this + 16) = 0;
  v7 = *(_QWORD *)(v3 + 536);
  if ( !v7 )
    goto LABEL_13;
  CDesktopManager::IsWindowAnimationEnabled();
  v16.m256i_i64[0] = 5LL;
  si128 = (__m128d)_mm_load_si128((const __m128i *)&_xmm);
  v19 = *v9;
  *(_OWORD *)&v16.m256i_u64[1] = 0LL;
  v16.m256i_i64[3] = *(_QWORD *)&si128.m128d_f64[0];
  v11 = CAcrylicSheet::AdjustTargetRect(v10, &v19);
  v4 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0x30u, 0LL);
    return v4;
  }
  v17 = v16;
  v18 = *(_OWORD *)&_mm_unpackhi_pd(si128, si128);
  v13 = CAcrylicSheet::AnimateRect(v7, &v19, v12, 0, (__int64)&v17);
  v4 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, 0x31u, 0LL);
  }
  else
  {
LABEL_13:
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    {
      McGenEventWrite_EtwEventWriteTransfer(
        (unsigned int)&Microsoft_Windows_Dwm_Udwm_Provider_Context,
        (unsigned int)&UdwmGlassSheetAnimation_Start,
        (_DWORD)a3,
        1,
        (__int64)&v19);
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
        McGenEventWrite_EtwEventWriteTransfer(
          (unsigned int)&Microsoft_Windows_Dwm_Udwm_Provider_Context,
          (unsigned int)&UdwmRippleAnimation_Start,
          v14,
          1,
          (__int64)&v19);
    }
    *((_QWORD *)this + 1) = *((_QWORD *)a2 + 5);
    *((_BYTE *)this + 16) = 1;
  }
  return v4;
}
