/*
 * XREFs of SleepstudyHelperDestroyBlockerBuilder @ 0x140A89960
 * Callers:
 *     SleepstudyHelperCreateBlockerFromGuid @ 0x14043D400 (SleepstudyHelperCreateBlockerFromGuid.c)
 *     SleepstudyHelperCreateBlockerFromComponent @ 0x1407E43C0 (SleepstudyHelperCreateBlockerFromComponent.c)
 *     SleepstudyHelper_RegisterPdoWithParentGuid @ 0x1407E4560 (SleepstudyHelper_RegisterPdoWithParentGuid.c)
 *     SleepstudyHelper_RegisterPdoWithParentHandle @ 0x1407E4640 (SleepstudyHelper_RegisterPdoWithParentHandle.c)
 *     SleepstudyHelper_RegisterPdoWithParentPdo @ 0x140A88BC0 (SleepstudyHelper_RegisterPdoWithParentPdo.c)
 *     SleepstudyHelperCreateBlockerFromDevice @ 0x140A88DA0 (SleepstudyHelperCreateBlockerFromDevice.c)
 *     PopPowerRequestStatsCreateSleepstudyBlocker @ 0x140A89424 (PopPowerRequestStatsCreateSleepstudyBlocker.c)
 *     SleepstudyHelperBuildBlocker @ 0x140A89550 (SleepstudyHelperBuildBlocker.c)
 *     SleepstudyHelper_RegisterComponentEx @ 0x140B3D0C0 (SleepstudyHelper_RegisterComponentEx.c)
 *     PopUserShutdownInitializeSleepstudyDiagnostics @ 0x140CD1618 (PopUserShutdownInitializeSleepstudyDiagnostics.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x140477290 (CmpFreeTransientPoolWithTag.c)
 *     SshpDereferenceBlocker @ 0x14049BA90 (SshpDereferenceBlocker.c)
 */

__int64 __fastcall SleepstudyHelperDestroyBlockerBuilder(__int64 *a1)
{
  unsigned int v1; // ebx
  __int64 v3; // rax
  void *v4; // rcx
  ULONG v5; // esi
  void *v6; // rcx
  void *v7; // rcx
  KSPIN_LOCK *v8; // rcx

  v1 = 0;
  if ( a1 )
  {
    v3 = *a1;
    v4 = (void *)a1[7];
    v5 = *(_DWORD *)(v3 + 24);
    if ( v4 )
    {
      *((_DWORD *)a1 + 12) = 0;
      CmpFreeTransientPoolWithTag(v4, v5);
      a1[7] = 0LL;
    }
    v6 = (void *)a1[8];
    if ( v6 )
      CmpFreeTransientPoolWithTag(v6, v5);
    v7 = (void *)a1[9];
    if ( v7 )
      CmpFreeTransientPoolWithTag(v7, v5);
    v8 = (KSPIN_LOCK *)a1[10];
    if ( v8 )
      SshpDereferenceBlocker(v8, 1, 1);
    CmpFreeTransientPoolWithTag(a1, v5);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v1;
}
