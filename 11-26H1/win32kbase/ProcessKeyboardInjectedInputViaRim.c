/*
 * XREFs of ProcessKeyboardInjectedInputViaRim @ 0x140124400
 * Callers:
 *     ?ProcessInputNoLock@CKeyboardProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYBOARD_INPUT_DATA@@K_NPEAU_KEYBOARD_VIRTUAL_DEVICE_INFO@@@Z @ 0x140123A88 (-ProcessInputNoLock@CKeyboardProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYB.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048E80 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ApiSetEditionIsGpqForegroundAccessibleExplicit @ 0x140124498 (ApiSetEditionIsGpqForegroundAccessibleExplicit.c)
 *     ProcessKeyboardInjectedInput @ 0x140124B80 (ProcessKeyboardInjectedInput.c)
 *     ?DropInput@Keyboard@InputTraceLogging@@SAXW4DropReason@12@@Z @ 0x14012526C (-DropInput@Keyboard@InputTraceLogging@@SAXW4DropReason@12@@Z.c)
 */

__int64 __fastcall ProcessKeyboardInjectedInputViaRim(__int64 a1, __int64 a2)
{
  unsigned int v3; // edi
  int v5; // ebx
  struct tagTHREADINFO *v6; // rax
  __int64 v8; // [rsp+20h] [rbp-18h] BYREF
  int v9; // [rsp+28h] [rbp-10h]
  __int64 v10; // [rsp+50h] [rbp+18h]

  v3 = *(_DWORD *)(a2 + 388);
  v10 = *(_QWORD *)(a2 + 376);
  v5 = *(_DWORD *)(a2 + 384);
  v6 = PtiCurrent(a1, a2);
  v8 = v10;
  v9 = v5;
  if ( (unsigned int)ApiSetEditionIsGpqForegroundAccessibleExplicit(1LL, v6, &v8, v3) )
    return ProcessKeyboardInjectedInput(a1, a2, 0LL);
  else
    return InputTraceLogging::Keyboard::DropInput(0LL);
}
