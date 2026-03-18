/*
 * XREFs of VfFaultsSetParameters @ 0x140C34AA4
 * Callers:
 *     NtSetSystemInformation @ 0x140833840 (NtSetSystemInformation.c)
 * Callees:
 *     PsSetCreateProcessNotifyRoutine @ 0x1407FCCC0 (PsSetCreateProcessNotifyRoutine.c)
 *     VfSetVerifierInformation @ 0x140C2083C (VfSetVerifierInformation.c)
 *     VfFaultsAddAllApps @ 0x140C3441C (VfFaultsAddAllApps.c)
 *     VfFaultsAddAllTags @ 0x140C344D0 (VfFaultsAddAllTags.c)
 *     VfFaultsRemoveAllApps @ 0x140C34968 (VfFaultsRemoveAllApps.c)
 *     VfFaultsRemoveAllTags @ 0x140C34A00 (VfFaultsRemoveAllTags.c)
 */

__int64 __fastcall VfFaultsSetParameters(__int64 a1)
{
  int v2; // edi
  int v3; // eax
  unsigned int v4; // eax
  unsigned int v5; // eax
  int v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = MmVerifierData | 4;
  v2 = VfSetVerifierInformation((unsigned int *)&v7, 4u, 1);
  if ( v2 >= 0 )
  {
    if ( !ViFaultsProcessNotifyRoutineSet )
    {
      PsSetCreateProcessNotifyRoutine((PCREATE_PROCESS_NOTIFY_ROUTINE)VfCreateProcessCallback, 0);
      ViFaultsProcessNotifyRoutineSet = 1;
    }
    if ( *(_DWORD *)(a1 + 4) )
      VfFaultInjectionMaxProbability = *(_DWORD *)(a1 + 4);
    v3 = *(_DWORD *)a1;
    if ( !*(_DWORD *)a1 )
    {
      VfFaultInjectionMaxProbability = 10000;
      v3 = 600;
    }
    VfFaultInjectionProbability = v3;
    VfFaultsRemoveAllTags();
    VfFaultsRemoveAllApps();
    v4 = *(unsigned __int16 *)(a1 + 24);
    if ( !(_WORD)v4 || (v2 = VfFaultsAddAllApps(*(unsigned __int16 **)(a1 + 32), v4 >> 1), v2 >= 0) )
    {
      v5 = *(unsigned __int16 *)(a1 + 8);
      if ( (_WORD)v5 )
        return (unsigned int)VfFaultsAddAllTags(*(unsigned __int16 **)(a1 + 16), v5 >> 1);
    }
  }
  return (unsigned int)v2;
}
