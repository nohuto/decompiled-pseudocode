/*
 * XREFs of ??1CLockProcessByPid@@QEAA@XZ @ 0x140161A8C
 * Callers:
 *     ?CitpSetCompositionInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x14007D4BC (-CitpSetCompositionInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z.c)
 *     ?CitpSetViewEngagementInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x14007EE6C (-CitpSetViewEngagementInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z.c)
 *     DestroyProcessInfo @ 0x140162224 (DestroyProcessInfo.c)
 *     _RegisterLogonProcess @ 0x14016BF30 (_RegisterLogonProcess.c)
 *     NtMITSetInputDelegationMode @ 0x14016E740 (NtMITSetInputDelegationMode.c)
 *     NtUserCheckProcessSession @ 0x14016ECA0 (NtUserCheckProcessSession.c)
 *     NtUserSetProcessLaunchForegroundPolicy @ 0x1401C0060 (NtUserSetProcessLaunchForegroundPolicy.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x1400A2310 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?_Cleanup@CLockProcessByPid@@AEAAXXZ @ 0x1401A7000 (-_Cleanup@CLockProcessByPid@@AEAAXXZ.c)
 */

void __fastcall CLockProcessByPid::~CLockProcessByPid(CLockProcessByPid *this)
{
  if ( *((_QWORD *)this + 3) )
  {
    if ( (*((_DWORD *)this + 5) & 8) != 0 )
      *((_QWORD *)PtiCurrent() + 48) = *((_QWORD *)this + 6);
    CLockProcessByPid::_Cleanup(this);
  }
}
