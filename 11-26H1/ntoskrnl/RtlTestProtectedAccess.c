/*
 * XREFs of RtlTestProtectedAccess @ 0x140A7FCA4
 * Callers:
 *     EtwCheckSecurityLoggerAccess @ 0x140A7FB2C (EtwCheckSecurityLoggerAccess.c)
 *     PspProcessOpen @ 0x140A7FB60 (PspProcessOpen.c)
 *     NtSetInformationThread @ 0x140A833F0 (NtSetInformationThread.c)
 *     PspGetProcessProtectionRequirementsFromImage @ 0x140ADCEA4 (PspGetProcessProtectionRequirementsFromImage.c)
 *     PspValidateCreateProcessProtection @ 0x140B1B974 (PspValidateCreateProcessProtection.c)
 *     PopBlackBoxUpdate @ 0x140B71EFC (PopBlackBoxUpdate.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall RtlTestProtectedAccess(unsigned __int8 a1, unsigned __int8 a2)
{
  int v3; // eax

  if ( (a2 & 7) == 0 )
    return 1;
  if ( (unsigned __int8)(a1 & 7) < (unsigned __int8)(a2 & 7) )
    return 0;
  v3 = *((_DWORD *)&RtlProtectedAccess + 3 * ((unsigned __int64)a1 >> 4));
  return _bittest(&v3, a2 >> 4);
}
