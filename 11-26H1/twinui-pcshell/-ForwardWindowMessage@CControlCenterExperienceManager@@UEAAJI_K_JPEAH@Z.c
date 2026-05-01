/*
 * XREFs of ?ForwardWindowMessage@CControlCenterExperienceManager@@UEAAJI_K_JPEAH@Z @ 0x18036C1F0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004FBA0 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180074CE0 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?Mirror_IsThreadRTL@@YAHXZ @ 0x180082308 (-Mirror_IsThreadRTL@@YAHXZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??$InputSwitch_PostForwardedInputMessage@_NAEAIAEA_KAEA_J@ControlCenterTelemetry@ControlCenterUITelemetry@@SAX$$QEA_NAEAIAEA_KAEA_J@Z @ 0x18036A1AC (--$InputSwitch_PostForwardedInputMessage@_NAEAIAEA_KAEA_J@ControlCenterTelemetry@ControlCenterUI.c)
 */

__int64 __fastcall CControlCenterExperienceManager::ForwardWindowMessage(
        CControlCenterExperienceManager *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2,
        WPARAM a3,
        LPARAM a4,
        int *a5)
{
  ExperienceManagerUtils *v6; // rcx
  UINT v9; // edi
  HWND v10; // r13
  bool v11; // zf
  UINT v12; // eax
  UINT v13; // eax
  int v14; // r14d
  int v15; // esi
  int IsThreadRTL; // eax
  float v17; // xmm1_4
  float v18; // xmm2_4
  float v19; // xmm1_4
  const char *v20; // r9
  __int64 v21; // rdx
  float v22; // xmm0_4
  int v23; // ecx
  char v25[8]; // [rsp+20h] [rbp-E0h] BYREF
  UINT v26; // [rsp+28h] [rbp-D8h] BYREF
  unsigned __int64 v27; // [rsp+30h] [rbp-D0h] BYREF
  WPARAM v28; // [rsp+38h] [rbp-C8h] BYREF
  BYTE KeyState; // [rsp+40h] [rbp-C0h] BYREF
  char v30; // [rsp+41h] [rbp-BFh]
  wil::details::in1diag3 *retaddr; // [rsp+198h] [rbp+98h]

  v6 = (ExperienceManagerUtils *)*((_QWORD *)this + 9);
  v26 = (unsigned int)a2;
  v28 = a3;
  v9 = (unsigned int)a2;
  v27 = a4;
  if ( !v6 )
  {
    v25[0] = 0;
    ControlCenterUITelemetry::ControlCenterTelemetry::InputSwitch_PostForwardedInputMessage<bool,unsigned int &,unsigned __int64 &,__int64 &>(
      v25,
      (int *)&v26,
      (int *)&v28,
      (int *)&v27);
    return 0LL;
  }
  v10 = (HWND)ExperienceManagerUtils::WindowFromViewWrapper(v6, a2);
  *a5 = 1;
  if ( v9 > 0x200 )
  {
    if ( v9 == 513 || v9 == 514 || v9 == 515 || v9 == 516 || v9 == 517 || v9 == 518 || v9 == 519 || v9 - 520 < 2 )
    {
LABEL_12:
      v14 = (__int16)a4;
      v15 = SWORD1(a4);
      IsThreadRTL = Mirror_IsThreadRTL();
      v17 = *((float *)this + 148);
      v18 = (float)v14;
      if ( IsThreadRTL )
      {
        if ( v18 >= v17 )
        {
          v19 = (float)(v17 + *((float *)this + 150)) - (float)*((int *)this + 173);
LABEL_29:
          if ( v19 >= v18 )
          {
            v22 = *((float *)this + 149);
            if ( (float)v15 >= v22 && (float)(v22 + *((float *)this + 151)) >= (float)v15 )
              goto LABEL_34;
          }
        }
      }
      else if ( v18 >= (float)((float)*((int *)this + 173) + v17) )
      {
        v19 = v17 + *((float *)this + 150);
        goto LABEL_29;
      }
      if ( v9 - 512 > 8 || (v23 = 293, !_bittest(&v23, v9 - 512)) )
      {
        *a5 = 0;
        return 0LL;
      }
LABEL_34:
      if ( v9 == 513 && GetKeyboardState(&KeyState) )
      {
        v30 |= 0x80u;
        SetKeyboardState(&KeyState);
      }
      v25[0] = 1;
      v27 = (unsigned __int16)v14 | (unsigned __int64)((unsigned __int16)v15 << 16);
      ControlCenterUITelemetry::ControlCenterTelemetry::InputSwitch_PostForwardedInputMessage<bool,unsigned int &,unsigned __int64 &,__int64 &>(
        v25,
        (int *)&v26,
        (int *)&v28,
        (int *)&v27);
      if ( !PostMessageW(v10, v9, a3, (unsigned __int16)v14 | (unsigned __int64)((unsigned __int16)v15 << 16)) )
      {
        v21 = 1917LL;
        goto LABEL_26;
      }
      return 0LL;
    }
  }
  else
  {
    if ( v9 == 512 )
      goto LABEL_12;
    if ( v9 > 0xA5 )
    {
      v11 = v9 == 166;
      v12 = v9 - 166;
    }
    else
    {
      if ( v9 == 165 || v9 == 160 )
        goto LABEL_11;
      v12 = v9 - 161;
      v11 = v9 == 161;
    }
    if ( v11 || (v13 = v12 - 1) == 0 || v13 - 1 <= 1 )
    {
LABEL_11:
      v9 += 352;
      v26 = v9;
      goto LABEL_12;
    }
  }
  v25[0] = 1;
  ControlCenterUITelemetry::ControlCenterTelemetry::InputSwitch_PostForwardedInputMessage<bool,unsigned int &,unsigned __int64 &,__int64 &>(
    v25,
    (int *)&v26,
    (int *)&v28,
    (int *)&v27);
  if ( !PostMessageW(v10, v9, a3, a4) )
  {
    v21 = 1923LL;
LABEL_26:
    wil::details::in1diag3::_Log_GetLastError(
      retaddr,
      (void *)v21,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
      v20);
  }
  return 0LL;
}
