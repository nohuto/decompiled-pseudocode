/*
 * XREFs of ExpPlRunOnceInit @ 0x1406CCC30
 * Callers:
 *     <none>
 * Callees:
 *     RtlCreateAcl @ 0x1409D8030 (RtlCreateAcl.c)
 *     RtlAddAccessAllowedAce @ 0x1409F49E0 (RtlAddAccessAllowedAce.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140A6B0F0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x140A6C2F0 (RtlCreateSecurityDescriptor.c)
 */

_BOOL8 __fastcall ExpPlRunOnceInit(PRTL_RUN_ONCE RunOnce, PVOID Parameter, PVOID *Context)
{
  NTSTATUS Acl; // eax

  Acl = RtlCreateAcl((PACL)stru_140E28440.Spare35, 0x59u, 2u);
  if ( Acl >= 0 )
  {
    Acl = RtlAddAccessAllowedAce((PACL)stru_140E28440.Spare35, 2u, 1u, RtlpBootStatHandleLock.StateSaveArea);
    if ( Acl >= 0 )
    {
      Acl = RtlCreateSecurityDescriptor(&stru_140E28440.KernelShadowStackInitial, 1u);
      if ( Acl >= 0 )
      {
        Acl = RtlSetDaclSecurityDescriptor(
                &stru_140E28440.KernelShadowStackInitial,
                1u,
                (PACL)stru_140E28440.Spare35,
                0);
        if ( Acl >= 0 )
          Acl = 0;
      }
    }
  }
  return Acl >= 0;
}
