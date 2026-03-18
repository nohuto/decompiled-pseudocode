/*
 * XREFs of ViErrorFinishReport @ 0x140C31B28
 * Callers:
 *     ViErrorReport1 @ 0x14064569C (ViErrorReport1.c)
 *     ViErrorReport10 @ 0x140645720 (ViErrorReport10.c)
 *     ViErrorReport4 @ 0x1406457B4 (ViErrorReport4.c)
 *     ViErrorReport6 @ 0x140645858 (ViErrorReport6.c)
 *     ViGenericVerifyIrpStackDownward @ 0x140C22390 (ViGenericVerifyIrpStackDownward.c)
 *     ViGenericVerifyNewIrp @ 0x140C22660 (ViGenericVerifyNewIrp.c)
 *     VfIoDeleteDevice @ 0x140C306C0 (VfIoDeleteDevice.c)
 *     VfIoDetachDevice @ 0x140C307F0 (VfIoDetachDevice.c)
 *     VfErrorReport7 @ 0x140C3196C (VfErrorReport7.c)
 *     VfErrorReport8 @ 0x140C31A04 (VfErrorReport8.c)
 *     VerifierNtCreateFile @ 0x140C3FED0 (VerifierNtCreateFile.c)
 *     VerifierNtReadFile @ 0x140C40080 (VerifierNtReadFile.c)
 *     VerifierNtWriteFile @ 0x140C401D0 (VerifierNtWriteFile.c)
 * Callees:
 *     VfUtilDbgPrint @ 0x14052FE80 (VfUtilDbgPrint.c)
 *     DbgPrompt @ 0x140618030 (DbgPrompt.c)
 *     CarReportRuleViolationFromNt @ 0x140C2BF1C (CarReportRuleViolationFromNt.c)
 *     VfErrorStoreTriageInformation @ 0x140C31A8C (VfErrorStoreTriageInformation.c)
 *     ViErrorIsBreakDisabled @ 0x140C31C50 (ViErrorIsBreakDisabled.c)
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
