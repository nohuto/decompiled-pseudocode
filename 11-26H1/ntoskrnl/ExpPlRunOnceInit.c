/*
 * XREFs of ExpPlRunOnceInit @ 0x1406D0C60
 * Callers:
 *     <none>
 * Callees:
 *     RtlCreateAcl @ 0x1409A8F20 (RtlCreateAcl.c)
 *     RtlAddAccessAllowedAce @ 0x1409E0730 (RtlAddAccessAllowedAce.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140A7C820 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x140A7D920 (RtlCreateSecurityDescriptor.c)
 */

_BOOL8 __fastcall ExpPlRunOnceInit(PRTL_RUN_ONCE a1, PVOID a2, PVOID *a3)
{
  NTSTATUS Acl; // eax

  Acl = RtlCreateAcl((PACL)stru_140E285C0.Spare35, 0x59u, 2u);
  if ( Acl >= 0 )
  {
    Acl = RtlAddAccessAllowedAce(
            (PACL)stru_140E285C0.Spare35,
            2u,
            1u,
            *(PSID *)&RtlpBootStatHandleLock.WaitRegister.Flags);
    if ( Acl >= 0 )
    {
      Acl = RtlCreateSecurityDescriptor(&stru_140E285C0.KernelShadowStackInitial, 1u);
      if ( Acl >= 0 )
      {
        Acl = RtlSetDaclSecurityDescriptor(
                &stru_140E285C0.KernelShadowStackInitial,
                1u,
                (PACL)stru_140E285C0.Spare35,
                0);
        if ( Acl >= 0 )
          Acl = 0;
      }
    }
  }
  return Acl >= 0;
}
