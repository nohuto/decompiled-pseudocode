/*
 * XREFs of ?GetProcessInfo@CLockProcessByPid@@QEBAPEAUtagPROCESSINFO@@XZ @ 0x1401B6B20
 * Callers:
 *     ?CitpSetCompositionInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x14007D4BC (-CitpSetCompositionInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z.c)
 *     ?CitpSetViewEngagementInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x14007EE6C (-CitpSetViewEngagementInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z.c)
 *     _RegisterLogonProcess @ 0x14016BF30 (_RegisterLogonProcess.c)
 *     NtMITSetInputDelegationMode @ 0x14016E740 (NtMITSetInputDelegationMode.c)
 *     NtUserSetProcessLaunchForegroundPolicy @ 0x1401C0060 (NtUserSetProcessLaunchForegroundPolicy.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CLockProcessByPid::GetProcessInfo(CLockProcessByPid *this)
{
  __int64 v1; // rcx
  unsigned __int64 result; // rax

  v1 = *((_QWORD *)this + 3);
  if ( !v1 )
    return 0LL;
  result = PsGetProcessWin32Process(v1);
  if ( result )
    result &= -(__int64)(*(_QWORD *)result != 0LL);
  return result;
}
