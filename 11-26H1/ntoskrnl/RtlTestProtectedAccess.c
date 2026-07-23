/*
 * XREFs of RtlTestProtectedAccess @ 0x140A85B14
 * Callers:
 *     NtSetInformationThread @ 0x14094C4F0 (NtSetInformationThread.c)
 *     EtwCheckSecurityLoggerAccess @ 0x140A8599C (EtwCheckSecurityLoggerAccess.c)
 *     PspProcessOpen @ 0x140A859D0 (PspProcessOpen.c)
 *     PspGetProcessProtectionRequirementsFromImage @ 0x140ADA3F4 (PspGetProcessProtectionRequirementsFromImage.c)
 *     PspValidateCreateProcessProtection @ 0x140B1DB84 (PspValidateCreateProcessProtection.c)
 *     PopBlackBoxUpdate @ 0x140B76EF4 (PopBlackBoxUpdate.c)
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlTestProtectedAccess(PS_PROTECTION Source, PS_PROTECTION Target)
{
  int v3; // eax

  if ( (Target.Level & 7) == 0 )
    return 1;
  if ( (unsigned __int8)(Source.Level & 7) < (unsigned __int8)(Target.Level & 7) )
    return 0;
  v3 = *((_DWORD *)&RtlProtectedAccess + 3 * ((unsigned __int64)Source.Level >> 4));
  return _bittest(&v3, Target.Level >> 4);
}
