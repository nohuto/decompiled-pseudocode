/*
 * XREFs of UserGlobalAtomTableCallout @ 0x1401AAD60
 * Callers:
 *     RealInternalRemoveProp @ 0x1400485B0 (RealInternalRemoveProp.c)
 *     W32CalloutDispatchWorker @ 0x140120DDC (W32CalloutDispatchWorker.c)
 *     DeleteStringPropertyAtoms @ 0x1401AAE70 (DeleteStringPropertyAtoms.c)
 * Callees:
 *     ReferenceWindowStation @ 0x140108B6C (ReferenceWindowStation.c)
 *     Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline @ 0x140118E28 (Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline.c)
 *     ?GetJobProcessAtomTable@Win32JobObject@@YA_NPEAPEAX@Z @ 0x1401CF10C (-GetJobProcessAtomTable@Win32JobObject@@YA_NPEAPEAX@Z.c)
 *     ?UserGlobalAtomTableCallout_Old@@YAPEAXXZ @ 0x1401D80E8 (-UserGlobalAtomTableCallout_Old@@YAPEAXXZ.c)
 */

void *UserGlobalAtomTableCallout()
{
  void **v0; // rdx
  void *result; // rax
  __int64 v2; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessWin32WindowStation; // rax
  __int64 v5; // r8
  void *v6; // [rsp+40h] [rbp+8h] BYREF
  __int64 v7; // [rsp+48h] [rbp+10h] BYREF

  if ( !(unsigned int)Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline() )
    return UserGlobalAtomTableCallout_Old();
  v6 = 0LL;
  if ( !Win32JobObject::GetJobProcessAtomTable((Win32JobObject *)&v6, v0) )
    return 0LL;
  result = v6;
  if ( v6 )
    return result;
  v7 = 0LL;
  CurrentProcess = PsGetCurrentProcess(v2);
  ProcessWin32WindowStation = PsGetProcessWin32WindowStation(CurrentProcess);
  if ( (int)ReferenceWindowStation((__int64)KeGetCurrentThread(), ProcessWin32WindowStation, v5, (__int64)&v7) >= 0 )
    return *(void **)(v7 + 136);
  else
    return 0LL;
}
