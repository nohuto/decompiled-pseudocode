/*
 * XREFs of UserGlobalAtomTableCallout @ 0x14009CF40
 * Callers:
 *     RealInternalRemoveProp @ 0x14009CA10 (RealInternalRemoveProp.c)
 *     DeleteStringPropertyAtoms @ 0x14009CB60 (DeleteStringPropertyAtoms.c)
 *     W32CalloutDispatchWorker @ 0x1400DB04C (W32CalloutDispatchWorker.c)
 * Callees:
 *     ReferenceWindowStation @ 0x1400CCA44 (ReferenceWindowStation.c)
 *     IsProcessWin32kLockedOut @ 0x14015D930 (IsProcessWin32kLockedOut.c)
 *     ApiSetIsCurrentProcessWinstaLocked @ 0x1401973A0 (ApiSetIsCurrentProcessWinstaLocked.c)
 *     Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline @ 0x1401A53B4 (Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline.c)
 *     ?GetJobProcessAtomTable@Win32JobObject@@YA_NPEAPEAX@Z @ 0x1401AD054 (-GetJobProcessAtomTable@Win32JobObject@@YA_NPEAPEAX@Z.c)
 *     ?UserGlobalAtomTableCallout_Old@@YAPEAXXZ @ 0x1401B5AC4 (-UserGlobalAtomTableCallout_Old@@YAPEAXXZ.c)
 *     IsModerncoreAtomTableSupported @ 0x14023EF58 (IsModerncoreAtomTableSupported.c)
 *     ModerncoreAtomTable @ 0x14023F134 (ModerncoreAtomTable.c)
 */

void *UserGlobalAtomTableCallout()
{
  void *result; // rax
  void **v1; // rdx
  __int64 v2; // rcx
  _QWORD *CurrentProcessWin32Process; // rax
  __int64 CurrentProcess; // rax
  __int64 ProcessWin32WindowStation; // rax
  __int64 v6; // r8
  void *v7; // [rsp+40h] [rbp+8h] BYREF
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF

  if ( !(unsigned int)Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline() || g_UseOldJobLogic == 1 )
    return UserGlobalAtomTableCallout_Old();
  if ( (int)IsModerncoreAtomTableSupported() < 0 )
  {
    v7 = 0LL;
    if ( Win32JobObject::GetJobProcessAtomTable((Win32JobObject *)&v7, v1) )
    {
      result = v7;
      if ( v7 )
        return result;
      v8 = 0LL;
      CurrentProcess = PsGetCurrentProcess();
      ProcessWin32WindowStation = PsGetProcessWin32WindowStation(CurrentProcess);
      if ( (int)ReferenceWindowStation(KeGetCurrentThread(), ProcessWin32WindowStation, v6, &v8) >= 0 )
        return *(void **)(v8 + 168);
    }
  }
  else if ( !(unsigned __int8)IsProcessWin32kLockedOut(-1LL) )
  {
    CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v2);
    if ( !CurrentProcessWin32Process
      || !*CurrentProcessWin32Process
      || !(unsigned int)ApiSetIsCurrentProcessWinstaLocked() )
    {
      return (void *)ModerncoreAtomTable();
    }
  }
  return 0LL;
}
