/*
 * XREFs of VfNotifyOfHibernate @ 0x140C25624
 * Callers:
 *     PopInvokeSystemStateHandler @ 0x140C04104 (PopInvokeSystemStateHandler.c)
 * Callees:
 *     VfDisableHalVerifier @ 0x1405332A4 (VfDisableHalVerifier.c)
 *     VfIsVerifierExtensionEnabled @ 0x14064072C (VfIsVerifierExtensionEnabled.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall VfNotifyOfHibernate(char a1)
{
  int IsVerifierExtensionEnabled; // eax
  __int64 v2; // rdx
  __int64 v3; // rcx
  int v4; // r8d

  if ( a1 )
  {
    if ( ViVerifyDma )
    {
      ViEnableAfterHibernate = 1;
      VfDisableHalVerifier();
    }
  }
  else
  {
    if ( !ViEnableAfterHibernate )
      return;
    ViVerifyDma = 1;
    ViEnableAfterHibernate = 0;
  }
  IsVerifierExtensionEnabled = VfIsVerifierExtensionEnabled();
  if ( IsVerifierExtensionEnabled == v4 )
  {
    if ( ViFnExtensionHiberFunc )
      guard_dispatch_icall_no_overrides(v3, v2);
  }
}
