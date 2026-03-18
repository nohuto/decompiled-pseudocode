/*
 * XREFs of ?_Cleanup@CLockProcessByPid@@AEAAXXZ @ 0x1401A4E94
 * Callers:
 *     NtUserDwmValidateWindow @ 0x1401A1B80 (NtUserDwmValidateWindow.c)
 *     ?_AllowSetForegroundWindow@@YA?AW4AllowSetForegroundWindowResult@@KW4AllowSetForegroundWindowPolicy@@@Z @ 0x1401A2F28 (-_AllowSetForegroundWindow@@YA-AW4AllowSetForegroundWindowResult@@KW4AllowSetForegroundWindowPol.c)
 *     ??1CLockProcessByPid@@QEAA@XZ @ 0x1401A37F4 (--1CLockProcessByPid@@QEAA@XZ.c)
 *     ?xxxUserNotifyConsoleApplication@@YAJPEAU_CONSOLE_PROCESS_INFO@@@Z @ 0x1401A4808 (-xxxUserNotifyConsoleApplication@@YAJPEAU_CONSOLE_PROCESS_INFO@@@Z.c)
 *     ?_GetEProcess@CProcessAsPid@@AEBAPEAU_EPROCESS@@XZ @ 0x1401A4BA4 (-_GetEProcess@CProcessAsPid@@AEBAPEAU_EPROCESS@@XZ.c)
 *     ?xxxUserNotifyProcessCreate@@YAJKW4_NotifyProcessCreateHints@@@Z @ 0x1401A5930 (-xxxUserNotifyProcessCreate@@YAJKW4_NotifyProcessCreateHints@@@Z.c)
 *     ?_lambda_invoker_cdecl_@_lambda_02739f59c5c72c5f20f913f1c43e5320_@@CA@PEAX@Z @ 0x14029D3A0 (-_lambda_invoker_cdecl_@_lambda_02739f59c5c72c5f20f913f1c43e5320_@@CA@PEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CLockProcessByPid::_Cleanup(PVOID *this)
{
  PVOID v2; // rcx

  ObfDereferenceObject(this[3]);
  v2 = this[4];
  this[3] = 0LL;
  if ( v2 )
  {
    ZwClose(v2);
    this[4] = 0LL;
  }
}
