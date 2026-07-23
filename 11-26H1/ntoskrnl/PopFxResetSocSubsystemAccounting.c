/*
 * XREFs of PopFxResetSocSubsystemAccounting @ 0x1407D0DEC
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x140421FC8 (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     PopFxBugCheck @ 0x1403BAB64 (PopFxBugCheck.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     PopFxLookupSocSubsystemsByPlatformIdleState @ 0x140A427E8 (PopFxLookupSocSubsystemsByPlatformIdleState.c)
 */

__int64 __fastcall PopFxResetSocSubsystemAccounting(__int64 a1)
{
  int v1; // ecx
  unsigned int v2; // ebx
  int v4; // [rsp+40h] [rbp+18h] BYREF
  int v5; // [rsp+44h] [rbp+1Ch]

  v2 = 0;
  if ( PopFxLookupSocSubsystemsByPlatformIdleState(a1) )
  {
    v4 = v1;
    v5 = 0;
    if ( !(unsigned __int8)guard_dispatch_icall_no_overrides(38LL, (__int64)&v4) )
      PopFxBugCheck(0x605uLL, 0x26uLL, qword_140E676E8, 0LL);
  }
  else
  {
    return (unsigned int)-1073741585;
  }
  return v2;
}
