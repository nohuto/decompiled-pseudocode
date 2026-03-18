/*
 * XREFs of ?vAdjustDelegatePriority@@YAXPEAUtagTHREADINFO@@@Z @ 0x140055DDC
 * Callers:
 *     ?PostHidNotification@@YAHPEAUtagPROCESS_HID_REQUEST@@PEAUDEVICEINFO@@I_K@Z @ 0x140054290 (-PostHidNotification@@YAHPEAUtagPROCESS_HID_REQUEST@@PEAUDEVICEINFO@@I_K@Z.c)
 *     AdjustPwndPtiPqForDelegation @ 0x14005527C (AdjustPwndPtiPqForDelegation.c)
 *     NtUserScheduleDispatchNotification @ 0x140055AF0 (NtUserScheduleDispatchNotification.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1400932CC (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     PostPointerEventMessage @ 0x1401F1830 (PostPointerEventMessage.c)
 * Callees:
 *     <none>
 */

void __fastcall vAdjustDelegatePriority(struct tagTHREADINFO *a1)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx

  if ( (*((_DWORD *)a1 + 340) & 0x6000) == 0x2000LL )
  {
    v2 = *(_QWORD *)(W32GetUserGdiSessionState(a1) + 40);
    if ( PsGetCurrentProcess(v3) == v2
      || (unsigned __int8)IsInputThread()
      || a1 == *(struct tagTHREADINFO **)(W32GetUserSessionState(v5, v4) + 18872) )
    {
      if ( (unsigned __int8)SetThreadBasePriority(*(_QWORD *)a1, 13LL) )
        *((_QWORD *)a1 + 170) |= 0x4000uLL;
    }
  }
}
