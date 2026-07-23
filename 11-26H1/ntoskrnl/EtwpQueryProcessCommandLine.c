/*
 * XREFs of EtwpQueryProcessCommandLine @ 0x1409D37CC
 * Callers:
 *     EtwTimLogBlockNonCetBinaries @ 0x140830640 (EtwTimLogBlockNonCetBinaries.c)
 *     EtwTimLogControlProtectionUserModeReturnMismatch @ 0x140830A20 (EtwTimLogControlProtectionUserModeReturnMismatch.c)
 *     EtwTimLogProhibitLowILImageMap @ 0x140831238 (EtwTimLogProhibitLowILImageMap.c)
 *     EtwTimLogRedirectionTrustPolicy @ 0x140831560 (EtwTimLogRedirectionTrustPolicy.c)
 *     EtwTimLogUserCetSetContextIpValidationFailure @ 0x1408320EC (EtwTimLogUserCetSetContextIpValidationFailure.c)
 *     EtwpBuildProcessEvent @ 0x1408FBCAC (EtwpBuildProcessEvent.c)
 *     EtwTraceAppStateChange @ 0x1409CF9F8 (EtwTraceAppStateChange.c)
 *     EtwQueryProcessTelemetryInfo @ 0x1409D1C14 (EtwQueryProcessTelemetryInfo.c)
 *     EtwTimLogProhibitChildProcessCreation @ 0x1409D3A08 (EtwTimLogProhibitChildProcessCreation.c)
 *     EtwpTimLogMitigationForProcess @ 0x140B1E7FC (EtwpTimLogMitigationForProcess.c)
 *     EtwTimLogProhibitNonMicrosoftBinaries @ 0x140B27C0C (EtwTimLogProhibitNonMicrosoftBinaries.c)
 *     SepLogUnmatchedSessionFlagImpersonationAttempt @ 0x140B59DAC (SepLogUnmatchedSessionFlagImpersonationAttempt.c)
 * Callees:
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpQueryProcessCommandLine(__int64 a1, __int64 a2)
{
  __int64 *v3; // r15
  _WORD *v4; // r14
  __int64 ULong64FromUser; // rax
  __int64 v6; // rbx
  __int16 ULongFromUser; // di
  volatile void *v8; // rax
  unsigned __int16 v9; // di
  unsigned __int16 v10; // ax
  __int64 Pool2; // rax
  __int64 v12; // rcx
  volatile void *Address[2]; // [rsp+20h] [rbp-58h]

  *(_OWORD *)Address = 0LL;
  *(_WORD *)a2 = 0;
  v3 = (__int64 *)(a2 + 8);
  v4 = *(_WORD **)(a2 + 8);
  ULong64FromUser = RtlReadULong64FromUser((volatile void *)(*(_QWORD *)(a1 + 736) + 32LL));
  if ( ULong64FromUser )
  {
    v6 = ULong64FromUser + 112;
    ULongFromUser = RtlReadULongFromUser((unsigned int *)(ULong64FromUser + 112));
    v8 = (volatile void *)RtlReadULong64FromUser((volatile void *)(v6 + 8));
    Address[1] = v8;
    v9 = ULongFromUser & 0xFFFE;
    if ( v9 )
    {
      if ( v8 )
      {
        ProbeForRead(v8, v9, 2u);
        if ( v9 > 0x800u )
          v9 = 2048;
      }
      else
      {
        v9 = 0;
      }
    }
  }
  else
  {
    v9 = 0;
  }
  if ( v9 )
  {
    v10 = *(_WORD *)(a2 + 2);
    if ( v10 )
    {
      if ( v9 >= v10 )
        v9 = *(_WORD *)(a2 + 2);
    }
    else
    {
      Pool2 = ExAllocatePool2(0x100uLL);
      v4 = (_WORD *)Pool2;
      if ( !Pool2 )
        return (unsigned int)-1073741670;
      *v3 = Pool2;
      *(_WORD *)(a2 + 2) = v9;
    }
    RtlCopyFromUser(v4, (void *)Address[1], v9);
    if ( v9 >> 1 )
    {
      v12 = v9 >> 1;
      do
      {
        if ( !*v4 )
          *v4 = 32;
        ++v4;
        --v12;
      }
      while ( v12 );
    }
    *(_WORD *)a2 = v9;
  }
  return 0;
}
