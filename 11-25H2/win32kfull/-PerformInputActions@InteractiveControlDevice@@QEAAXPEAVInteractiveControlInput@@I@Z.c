/*
 * XREFs of ?PerformInputActions@InteractiveControlDevice@@QEAAXPEAVInteractiveControlInput@@I@Z @ 0x1402EDA30
 * Callers:
 *     ?QueueAndGenerateInput@InteractiveControlDevice@@QEAAJPEAXK@Z @ 0x14021E508 (-QueueAndGenerateInput@InteractiveControlDevice@@QEAAJPEAXK@Z.c)
 * Callees:
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x14012FC60 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     GetUserHandedness @ 0x140204B90 (GetUserHandedness.c)
 *     ?CreateDeadzone@InteractiveControlDevice@@QEAAJXZ @ 0x1402ECFCC (-CreateDeadzone@InteractiveControlDevice@@QEAAJXZ.c)
 *     ?DestroyDeadzone@InteractiveControlDevice@@QEAAJXZ @ 0x1402ED384 (-DestroyDeadzone@InteractiveControlDevice@@QEAAJXZ.c)
 *     ?DetectPressAndHoldGesture@InteractiveControlDevice@@QEAAXPEAVInteractiveControlInput@@I@Z @ 0x1402ED3DC (-DetectPressAndHoldGesture@InteractiveControlDevice@@QEAAXPEAVInteractiveControlInput@@I@Z.c)
 *     ?SendHapticFeedbackOutput@InteractiveControlDevice@@QEAAJAEBU_SIMPLEHAPTICCTRL_FEEDBACK_DATA@@@Z @ 0x1402EDCA4 (-SendHapticFeedbackOutput@InteractiveControlDevice@@QEAAJAEBU_SIMPLEHAPTICCTRL_FEEDBACK_DATA@@@Z.c)
 */

void __fastcall InteractiveControlDevice::PerformInputActions(
        InteractiveControlDevice *this,
        struct InteractiveControlInput *a2,
        unsigned int a3)
{
  __int64 UserSessionState; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  _QWORD *v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rdx
  _WORD v13[2]; // [rsp+30h] [rbp-20h] BYREF
  int v14; // [rsp+34h] [rbp-1Ch]
  __int64 v15; // [rsp+38h] [rbp-18h]
  _WORD v16[2]; // [rsp+40h] [rbp-10h] BYREF
  int v17; // [rsp+44h] [rbp-Ch]
  __int64 v18; // [rsp+48h] [rbp-8h]

  if ( (a3 & 0x240) != 0 )
  {
    UserSessionState = W32GetUserSessionState(this, a2);
    CInputGlobals::UpdateInputGlobals(
      *(_QWORD *)(UserSessionState + 3056),
      (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
     * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
      4LL,
      0LL,
      0,
      2);
  }
  InteractiveControlDevice::DetectPressAndHoldGesture(this, a2, a3);
  if ( (a3 & 0x40) != 0 )
  {
    v13[0] = *((_WORD *)this + 196);
    v13[1] = 0;
    v14 = 0;
    v15 = 1LL;
    InteractiveControlDevice::SendHapticFeedbackOutput(this, (const struct _SIMPLEHAPTICCTRL_FEEDBACK_DATA *)v13);
  }
  if ( (a3 & 0x80u) != 0
    && !*((_DWORD *)this + 15)
    && *((_DWORD *)InteractiveControlManager::Instance(v8, v7) + 21)
    && !*((_DWORD *)this + 16) )
  {
    v16[0] = *((_WORD *)this + 197);
    v16[1] = 0;
    v17 = 0;
    v18 = 1LL;
    InteractiveControlDevice::SendHapticFeedbackOutput(this, (const struct _SIMPLEHAPTICCTRL_FEEDBACK_DATA *)v16);
  }
  if ( *((_QWORD *)this + 43) != -1LL )
  {
    if ( (unsigned int)GetUserHandedness() != *((_DWORD *)this + 84) )
    {
      InteractiveControlDevice::DestroyDeadzone(this);
      InteractiveControlDevice::CreateDeadzone(this);
    }
    if ( (a3 & 0x400) != 0 || (a3 & 0x1000) != 0 )
    {
      v9 = (_QWORD *)((char *)this + 240);
      v10 = *((_QWORD *)this + 30);
      if ( v10 )
      {
        v11 = *((_QWORD *)this + 43);
        if ( v11 != -1 )
          RIMUpdatePointerDeviceDeadzoneOrigin(v10 + 72, v11, *((_QWORD *)a2 + 8));
      }
      if ( (a3 & 0x400) != 0 )
      {
LABEL_21:
        if ( *v9 )
        {
          v12 = *((_QWORD *)this + 43);
          if ( v12 != -1 )
            RIMActivatePointerDeviceDeadzone(*v9 + 72LL, v12, (*((_DWORD *)a2 + 18) >> 1) & 1);
        }
        return;
      }
    }
    else
    {
      v9 = (_QWORD *)((char *)this + 240);
    }
    if ( (a3 & 0x800) == 0 )
      return;
    goto LABEL_21;
  }
}
