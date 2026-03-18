/*
 * XREFs of ?PerformInputActions@InteractiveControlDevice@@QEAAXPEAVInteractiveControlInput@@I@Z @ 0x1402FD39C
 * Callers:
 *     ?QueueAndGenerateInput@InteractiveControlDevice@@QEAAJPEAXK@Z @ 0x140258CA4 (-QueueAndGenerateInput@InteractiveControlDevice@@QEAAJPEAXK@Z.c)
 * Callees:
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x14013DB10 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     GetUserHandedness @ 0x14023BD40 (GetUserHandedness.c)
 *     ?CreateDeadzone@InteractiveControlDevice@@QEAAJXZ @ 0x1402FC900 (-CreateDeadzone@InteractiveControlDevice@@QEAAJXZ.c)
 *     ?DestroyDeadzone@InteractiveControlDevice@@QEAAJXZ @ 0x1402FCCD8 (-DestroyDeadzone@InteractiveControlDevice@@QEAAJXZ.c)
 *     ?DetectPressAndHoldGesture@InteractiveControlDevice@@QEAAXPEAVInteractiveControlInput@@I@Z @ 0x1402FCD34 (-DetectPressAndHoldGesture@InteractiveControlDevice@@QEAAXPEAVInteractiveControlInput@@I@Z.c)
 *     ?SendHapticFeedbackOutput@InteractiveControlDevice@@QEAAJAEBU_SIMPLEHAPTICCTRL_FEEDBACK_DATA@@@Z @ 0x1402FD600 (-SendHapticFeedbackOutput@InteractiveControlDevice@@QEAAJAEBU_SIMPLEHAPTICCTRL_FEEDBACK_DATA@@@Z.c)
 */

void __fastcall InteractiveControlDevice::PerformInputActions(
        InteractiveControlDevice *this,
        struct InteractiveControlInput *a2,
        unsigned int a3)
{
  int v3; // esi
  __int64 UserSessionState; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int16 v14; // [rsp+30h] [rbp-10h] BYREF
  __int16 v15; // [rsp+32h] [rbp-Eh]
  int v16; // [rsp+34h] [rbp-Ch]
  __int64 v17; // [rsp+38h] [rbp-8h]

  v3 = a3 & 0x40;
  if ( (a3 & 0x200) != 0 || (a3 & 0x40) != 0 )
  {
    UserSessionState = W32GetUserSessionState(this, a2);
    CInputGlobals::UpdateInputGlobals(
      *(_QWORD *)(UserSessionState + 3056),
      (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
     * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
      4LL);
  }
  InteractiveControlDevice::DetectPressAndHoldGesture(this, a2, a3);
  if ( v3 )
  {
    v14 = *((_WORD *)this + 196);
    v15 = 0;
    v16 = 0;
    v17 = 1LL;
    InteractiveControlDevice::SendHapticFeedbackOutput(this, (const struct _SIMPLEHAPTICCTRL_FEEDBACK_DATA *)&v14);
  }
  if ( (a3 & 0x80u) != 0
    && !*((_DWORD *)this + 15)
    && *((_DWORD *)InteractiveControlManager::Instance(v9, v8) + 21)
    && !*((_DWORD *)this + 16) )
  {
    v14 = *((_WORD *)this + 197);
    v15 = 0;
    v16 = 0;
    v17 = 1LL;
    InteractiveControlDevice::SendHapticFeedbackOutput(this, (const struct _SIMPLEHAPTICCTRL_FEEDBACK_DATA *)&v14);
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
      v10 = *((_QWORD *)this + 30);
      if ( v10 )
      {
        v11 = *((_QWORD *)this + 43);
        if ( v11 != -1 )
          RIMUpdatePointerDeviceDeadzoneOrigin(v10 + 72, v11, *((_QWORD *)a2 + 8));
      }
      if ( (a3 & 0x400) != 0 )
        goto LABEL_21;
    }
    if ( (a3 & 0x800) != 0 )
    {
LABEL_21:
      v12 = *((_QWORD *)this + 30);
      if ( v12 )
      {
        v13 = *((_QWORD *)this + 43);
        if ( v13 != -1 )
          RIMActivatePointerDeviceDeadzone(v12 + 72, v13, (*((_DWORD *)a2 + 18) >> 1) & 1);
      }
    }
  }
}
