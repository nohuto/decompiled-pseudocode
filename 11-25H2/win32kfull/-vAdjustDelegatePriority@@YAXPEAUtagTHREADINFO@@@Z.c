/*
 * XREFs of ?vAdjustDelegatePriority@@YAXPEAUtagTHREADINFO@@@Z @ 0x140120EA4
 * Callers:
 *     ?PostHidNotification@@YAHPEAUtagPROCESS_HID_REQUEST@@PEAUDEVICEINFO@@I_K@Z @ 0x14011F61C (-PostHidNotification@@YAHPEAUtagPROCESS_HID_REQUEST@@PEAUDEVICEINFO@@I_K@Z.c)
 *     EditionPostInputMessage @ 0x14011FA60 (EditionPostInputMessage.c)
 *     EditionPostMouseMoveToQ @ 0x14011FD80 (EditionPostMouseMoveToQ.c)
 *     AdjustPwndPtiPqForDelegation @ 0x1401203DC (AdjustPwndPtiPqForDelegation.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x14012A960 (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 * Callees:
 *     <none>
 */

void __fastcall vAdjustDelegatePriority(struct tagTHREADINFO *a1)
{
  __int64 v1; // rax
  __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx

  v1 = *((_QWORD *)a1 + 170);
  if ( (v1 & 0x2000) != 0 && (v1 & 0x4000) == 0 )
  {
    v3 = *(_QWORD *)(W32GetUserGdiSessionState() + 40);
    if ( PsGetCurrentProcess() == v3
      || (unsigned __int8)IsInputThread()
      || a1 == *(struct tagTHREADINFO **)(W32GetUserSessionState(v5, v4) + 18824) )
    {
      if ( (unsigned __int8)SetThreadBasePriority(*(_QWORD *)a1, 13LL) )
        *((_QWORD *)a1 + 170) |= 0x4000uLL;
    }
  }
}
