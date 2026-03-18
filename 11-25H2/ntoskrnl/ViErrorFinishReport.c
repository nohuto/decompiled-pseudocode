/*
 * XREFs of ViErrorFinishReport @ 0x140B8369C
 * Callers:
 *     ViErrorReport1 @ 0x1406065B4 (ViErrorReport1.c)
 *     ViErrorReport10 @ 0x140606638 (ViErrorReport10.c)
 *     ViErrorReport4 @ 0x1406066CC (ViErrorReport4.c)
 *     ViErrorReport6 @ 0x140606770 (ViErrorReport6.c)
 *     ViGenericVerifyIrpStackDownward @ 0x140B73FC0 (ViGenericVerifyIrpStackDownward.c)
 *     ViGenericVerifyNewIrp @ 0x140B74290 (ViGenericVerifyNewIrp.c)
 *     VfIoDeleteDevice @ 0x140B8224C (VfIoDeleteDevice.c)
 *     VfIoDetachDevice @ 0x140B8237C (VfIoDetachDevice.c)
 *     VfErrorReport7 @ 0x140B834E0 (VfErrorReport7.c)
 *     VfErrorReport8 @ 0x140B83578 (VfErrorReport8.c)
 *     VerifierNtCreateFile @ 0x140B910D0 (VerifierNtCreateFile.c)
 *     VerifierNtReadFile @ 0x140B91280 (VerifierNtReadFile.c)
 *     VerifierNtWriteFile @ 0x140B913D0 (VerifierNtWriteFile.c)
 * Callees:
 *     DbgPrompt @ 0x1405DB5C0 (DbgPrompt.c)
 *     VfUtilDbgPrint @ 0x1406042DC (VfUtilDbgPrint.c)
 *     CarReportRuleViolationFromNt @ 0x140B7D934 (CarReportRuleViolationFromNt.c)
 *     VfErrorStoreTriageInformation @ 0x140B83600 (VfErrorStoreTriageInformation.c)
 *     ViErrorIsBreakDisabled @ 0x140B837C4 (ViErrorIsBreakDisabled.c)
 */

__int64 __fastcall ViErrorFinishReport(int a1, ULONG_PTR a2, ULONG_PTR a3, ULONG_PTR a4)
{
  ULONG_PTR v4; // rdi
  __int64 result; // rax
  unsigned int v9; // ebx
  int v10; // eax
  CHAR Response[2]; // [rsp+40h] [rbp-18h] BYREF

  v4 = a1;
  VfUtilDbgPrint("************************************************************\n\n");
  result = ViErrorIsBreakDisabled((unsigned int)v4);
  v9 = 0;
  if ( !(_DWORD)result )
  {
    if ( (_BYTE)KdDebuggerEnabled && !(_BYTE)KdDebuggerNotPresent )
    {
      v10 = VfErrorStoreTriageInformation(201LL, v4, a2, a3, a4);
      __debugbreak();
      if ( v10 )
        _InterlockedExchange(&VfErrorBugcheckDataReady, 0);
      while ( 1 )
      {
        DbgPrompt("How would you like to proceed: Resume execution, Disable break, or Bugcheck (rdb)? ", Response, 2u);
        result = *(unsigned __int16 *)Response;
        if ( Response[0] == 66 )
          break;
        switch ( Response[0] )
        {
          case 'D':
            goto LABEL_13;
          case 'R':
            return result;
          case 'b':
            goto LABEL_17;
          case 'd':
LABEL_13:
            while ( v9 < 0x3F )
            {
              result = 2LL * v9;
              if ( *((_DWORD *)&ViErrorDescriptions + 4 * v9) == (_DWORD)v4 )
              {
                _InterlockedOr((volatile signed __int32 *)&ViErrorDescriptions + 4 * v9 + 1, 1u);
                return result;
              }
              ++v9;
            }
            return result;
          case 'r':
            return result;
        }
      }
    }
LABEL_17:
    result = (unsigned int)MmVerifierData;
    if ( (MmVerifierData & 0x10) != 0 )
      return CarReportRuleViolationFromNt(201, v4, a2, a3, a4, 4u, a2);
  }
  return result;
}
