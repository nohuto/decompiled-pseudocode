/*
 * XREFs of ?OnWindowArrangementStart@CWindowArrangementTransition@@QEAAJPEAVCWindowData@@AEBUtagRECT@@@Z @ 0x180087058
 * Callers:
 *     ?OnWindowArrangementStart@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z @ 0x1800E69A8 (-OnWindowArrangementStart@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AnimateRect@CAcrylicSheet@@QEAAJAEBUtagRECT@@MKUInterpolationParameters@@M@Z @ 0x180038378 (-AnimateRect@CAcrylicSheet@@QEAAJAEBUtagRECT@@MKUInterpolationParameters@@M@Z.c)
 *     ?AdjustTargetRect@CAcrylicSheet@@QEAAJPEAUtagRECT@@@Z @ 0x180038958 (-AdjustTargetRect@CAcrylicSheet@@QEAAJPEAUtagRECT@@@Z.c)
 *     ?IsWindowAnimationEnabled@CDesktopManager@@SA_NXZ @ 0x1800399F0 (-IsWindowAnimationEnabled@CDesktopManager@@SA_NXZ.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x18006E69C (McGenEventWrite_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x18009A7F0 (__security_check_cookie.c)
 */

__int64 __fastcall CWindowArrangementTransition::OnWindowArrangementStart(
        CWindowArrangementTransition *this,
        struct CWindowData *a2,
        const struct tagRECT *a3)
{
  __int64 v3; // rax
  unsigned int v4; // ebx
  __int64 v7; // rsi
  struct tagRECT *v8; // r8
  CAcrylicSheet *v9; // rcx
  int v10; // eax
  __int64 v11; // r8
  int v12; // eax
  __int64 v13; // r8
  __m256i v15; // [rsp+30h] [rbp-B8h] BYREF
  __m256i v16; // [rsp+60h] [rbp-88h] BYREF
  __int64 v17; // [rsp+80h] [rbp-68h]
  struct tagRECT v18; // [rsp+90h] [rbp-58h] BYREF

  v3 = *(_QWORD *)this;
  v4 = 0;
  *((_BYTE *)this + 16) = 0;
  v7 = *(_QWORD *)(v3 + 536);
  if ( !v7 )
    goto LABEL_13;
  CDesktopManager::IsWindowAnimationEnabled();
  v15.m256i_i64[0] = 5LL;
  v18 = *v8;
  memset(&v15.m256i_u64[1], 0, 24);
  v10 = CAcrylicSheet::AdjustTargetRect(v9, &v18);
  v4 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0x30u, 0LL);
    return v4;
  }
  v16 = v15;
  v17 = *(_OWORD *)&_mm_unpackhi_pd((__m128d)_xmm, (__m128d)_xmm);
  v12 = CAcrylicSheet::AnimateRect(v7, &v18, v11, 0, (__int64)&v16);
  v4 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, 0x31u, 0LL);
  }
  else
  {
LABEL_13:
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    {
      McGenEventWrite_EtwEventWriteTransfer(
        Microsoft_Windows_Dwm_Udwm_Provider_Context,
        (__int64)&UdwmGlassSheetAnimation_Start,
        (__int64)a3,
        1LL,
        (__int64)&v18);
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
        McGenEventWrite_EtwEventWriteTransfer(
          Microsoft_Windows_Dwm_Udwm_Provider_Context,
          (__int64)&UdwmRippleAnimation_Start,
          v13,
          1LL,
          (__int64)&v18);
    }
    *((_QWORD *)this + 1) = *((_QWORD *)a2 + 5);
    *((_BYTE *)this + 16) = 1;
  }
  return v4;
}
