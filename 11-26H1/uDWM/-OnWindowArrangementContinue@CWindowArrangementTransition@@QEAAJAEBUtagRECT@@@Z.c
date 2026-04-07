/*
 * XREFs of ?OnWindowArrangementContinue@CWindowArrangementTransition@@QEAAJAEBUtagRECT@@@Z @ 0x180042BD4
 * Callers:
 *     ?OnWindowArrangementContinue@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z @ 0x180042A8C (-OnWindowArrangementContinue@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AnimateRect@CAcrylicSheet@@QEAAJAEBUtagRECT@@MKUInterpolationParameters@@M@Z @ 0x180042604 (-AnimateRect@CAcrylicSheet@@QEAAJAEBUtagRECT@@MKUInterpolationParameters@@M@Z.c)
 *     ?IsWindowAnimationEnabled@CDesktopManager@@SA_NXZ @ 0x180044858 (-IsWindowAnimationEnabled@CDesktopManager@@SA_NXZ.c)
 *     ?AdjustTargetRect@CAcrylicSheet@@QEAAJPEAUtagRECT@@@Z @ 0x180044A8C (-AdjustTargetRect@CAcrylicSheet@@QEAAJPEAUtagRECT@@@Z.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x180078474 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 */

__int64 __fastcall CWindowArrangementTransition::OnWindowArrangementContinue(
        CWindowArrangementTransition *this,
        const struct tagRECT *a2)
{
  unsigned int v2; // ebx
  int v3; // r8d
  __int64 v4; // rdi
  __m128d si128; // xmm7
  struct tagRECT *v6; // r8
  CAcrylicSheet *v7; // rcx
  int v8; // eax
  __int64 v9; // r8
  int v11; // eax
  __m256i v12; // [rsp+38h] [rbp-49h]
  __m256i v13; // [rsp+68h] [rbp-19h] BYREF
  __int64 v14; // [rsp+88h] [rbp+7h]
  struct tagRECT v15; // [rsp+98h] [rbp+17h] BYREF

  v2 = 0;
  v3 = (int)a2;
  if ( *((_BYTE *)this + 16) )
  {
    v4 = *(_QWORD *)(*(_QWORD *)this + 536LL);
    if ( v4 )
    {
      CDesktopManager::IsWindowAnimationEnabled();
      v12.m256i_i64[0] = 5LL;
      si128 = (__m128d)_mm_load_si128((const __m128i *)&_xmm);
      v15 = *v6;
      *(_OWORD *)&v12.m256i_u64[1] = 0LL;
      v12.m256i_i64[3] = *(_QWORD *)&si128.m128d_f64[0];
      v8 = CAcrylicSheet::AdjustTargetRect(v7, &v15);
      v2 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x53u, 0LL);
        return v2;
      }
      v13 = v12;
      v14 = *(_OWORD *)&_mm_unpackhi_pd(si128, si128);
      v11 = CAcrylicSheet::AnimateRect(v4, &v15, v9, 0, (__int64)&v13);
      v2 = v11;
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0x54u, 0LL);
        return v2;
      }
    }
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      McGenEventWrite_EtwEventWriteTransfer(
        (unsigned int)&Microsoft_Windows_Dwm_Udwm_Provider_Context,
        (unsigned int)&UdwmGlassSheetAnimation_Update,
        v3,
        1,
        (__int64)&v15);
  }
  return v2;
}
