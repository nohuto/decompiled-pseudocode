/*
 * XREFs of ViErrorFinishReport @ 0x140C37B38
 * Callers:
 *     ViErrorReport1 @ 0x14064927C (ViErrorReport1.c)
 *     ViErrorReport10 @ 0x140649300 (ViErrorReport10.c)
 *     ViErrorReport4 @ 0x140649394 (ViErrorReport4.c)
 *     ViErrorReport6 @ 0x140649438 (ViErrorReport6.c)
 *     ViGenericVerifyIrpStackDownward @ 0x140C283A0 (ViGenericVerifyIrpStackDownward.c)
 *     ViGenericVerifyNewIrp @ 0x140C28670 (ViGenericVerifyNewIrp.c)
 *     VfIoDeleteDevice @ 0x140C366D0 (VfIoDeleteDevice.c)
 *     VfIoDetachDevice @ 0x140C36800 (VfIoDetachDevice.c)
 *     VfErrorReport7 @ 0x140C3797C (VfErrorReport7.c)
 *     VfErrorReport8 @ 0x140C37A14 (VfErrorReport8.c)
 *     VerifierNtCreateFile @ 0x140C45EE0 (VerifierNtCreateFile.c)
 *     VerifierNtReadFile @ 0x140C46090 (VerifierNtReadFile.c)
 *     VerifierNtWriteFile @ 0x140C461E0 (VerifierNtWriteFile.c)
 * Callees:
 *     VfUtilDbgPrint @ 0x140532380 (VfUtilDbgPrint.c)
 *     DbgPrompt @ 0x14061B080 (DbgPrompt.c)
 *     CarReportRuleViolationFromNt @ 0x140C31F2C (CarReportRuleViolationFromNt.c)
 *     VfErrorStoreTriageInformation @ 0x140C37A9C (VfErrorStoreTriageInformation.c)
 *     ViErrorIsBreakDisabled @ 0x140C37C60 (ViErrorIsBreakDisabled.c)
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
              result = 16LL * v9;
              if ( *(_DWORD *)((char *)&ViErrorDescriptions + result) == (_DWORD)v4 )
              {
                _InterlockedOr((volatile signed __int32 *)((char *)&ViErrorDescriptions + result + 4), 1u);
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
