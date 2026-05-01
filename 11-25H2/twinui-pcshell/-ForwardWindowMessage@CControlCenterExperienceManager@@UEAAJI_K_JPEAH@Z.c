/*
 * XREFs of ?ForwardWindowMessage@CControlCenterExperienceManager@@UEAAJI_K_JPEAH@Z @ 0x180364FE0
 * Callers:
 *     <none>
 * Callees:
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18002EB20 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180093874 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Mirror_IsThreadRTL@@YAHXZ @ 0x1801B8A5C (-Mirror_IsThreadRTL@@YAHXZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??$InputSwitch_PostForwardedInputMessage@_NAEAIAEA_KAEA_J@ControlCenterTelemetry@ControlCenterUITelemetry@@SAX$$QEA_NAEAIAEA_KAEA_J@Z @ 0x1803630AC (--$InputSwitch_PostForwardedInputMessage@_NAEAIAEA_KAEA_J@ControlCenterTelemetry@ControlCenterUI.c)
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
  float v16; // xmm6_4
  float v17; // xmm2_4
  bool v18; // cf
  float v19; // xmm1_4
  int v20; // ecx
  const char *v21; // r9
  __int64 v22; // rdx
  float v23; // xmm1_4
  char v25[8]; // [rsp+20h] [rbp-E0h] BYREF
  UINT v26; // [rsp+28h] [rbp-D8h] BYREF
  unsigned __int64 v27; // [rsp+30h] [rbp-D0h] BYREF
  WPARAM v28; // [rsp+38h] [rbp-C8h] BYREF
  BYTE KeyState; // [rsp+40h] [rbp-C0h] BYREF
  char v30; // [rsp+41h] [rbp-BFh]
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+A8h]

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
      v16 = (float)v14;
      if ( (unsigned int)Mirror_IsThreadRTL() )
      {
        v17 = *((float *)this + 148);
        if ( v16 >= v17 )
        {
          v18 = (float)((float)(v17 + *((float *)this + 150)) - (float)*((int *)this + 173)) < (float)v14;
LABEL_15:
          if ( !v18 )
          {
            v19 = *((float *)this + 149);
            if ( (float)v15 >= v19 && (float)(v19 + *((float *)this + 151)) >= (float)v15 )
              goto LABEL_20;
          }
        }
      }
      else
      {
        v23 = *((float *)this + 148);
        if ( v16 >= (float)((float)*((int *)this + 173) + v23) )
        {
          v18 = (float)(v23 + *((float *)this + 150)) < (float)v14;
          goto LABEL_15;
        }
      }
      if ( v9 - 512 > 8 || (v20 = 293, !_bittest(&v20, v9 - 512)) )
      {
        *a5 = 0;
        return 0LL;
      }
LABEL_20:
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
        v22 = 1917LL;
LABEL_36:
        wil::details::in1diag3::_Log_GetLastError(
          retaddr,
          (void *)v22,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
          v21);
        return 0LL;
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
    v22 = 1923LL;
    goto LABEL_36;
  }
  return 0LL;
}
