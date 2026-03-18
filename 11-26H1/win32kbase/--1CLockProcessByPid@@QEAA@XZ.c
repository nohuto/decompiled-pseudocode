/*
 * XREFs of ??1CLockProcessByPid@@QEAA@XZ @ 0x1401C5030
 * Callers:
 *     ?CitpSetCompositionInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x1400D5A60 (-CitpSetCompositionInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z.c)
 *     ?CitpSetViewEngagementInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x1401B6FE8 (-CitpSetViewEngagementInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z.c)
 *     NtMITSetInputDelegationMode @ 0x1401B9F60 (NtMITSetInputDelegationMode.c)
 *     DestroyProcessInfo @ 0x1401CA2F4 (DestroyProcessInfo.c)
 *     ?SetUIRestrictions@Win32JobObject@@YAXPEAU_JOBOBJECT_BASIC_PROCESS_ID_LIST@@@Z @ 0x1401CF664 (-SetUIRestrictions@Win32JobObject@@YAXPEAU_JOBOBJECT_BASIC_PROCESS_ID_LIST@@@Z.c)
 *     _RegisterLogonProcess @ 0x1401D98D0 (_RegisterLogonProcess.c)
 *     NtUserCheckProcessSession @ 0x1401E2390 (NtUserCheckProcessSession.c)
 *     NtUserSetProcessLaunchForegroundPolicy @ 0x1401E8E40 (NtUserSetProcessLaunchForegroundPolicy.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048E80 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?_Cleanup@CLockProcessByPid@@AEAAXXZ @ 0x1401CA218 (-_Cleanup@CLockProcessByPid@@AEAAXXZ.c)
 */

void __fastcall CLockProcessByPid::~CLockProcessByPid(CLockProcessByPid *this, __int64 a2)
{
  if ( *((_QWORD *)this + 3) )
  {
    if ( (*((_DWORD *)this + 5) & 8) != 0 )
      *((_QWORD *)PtiCurrent((__int64)this, a2) + 47) = *((_QWORD *)this + 6);
    CLockProcessByPid::_Cleanup(this);
  }
}
