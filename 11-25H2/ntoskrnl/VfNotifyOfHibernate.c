/*
 * XREFs of VfNotifyOfHibernate @ 0x140B77648
 * Callers:
 *     PopInvokeSystemStateHandler @ 0x140B5541C (PopInvokeSystemStateHandler.c)
 * Callees:
 *     VfIsVerifierExtensionEnabled @ 0x14060422C (VfIsVerifierExtensionEnabled.c)
 *     VfDisableHalVerifier @ 0x140604C58 (VfDisableHalVerifier.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall VfNotifyOfHibernate(char a1)
{
  int IsVerifierExtensionEnabled; // eax
  __int64 v2; // rcx
  int v3; // r8d

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
  if ( IsVerifierExtensionEnabled == v3 )
  {
    if ( ViFnExtensionHiberFunc )
      guard_dispatch_icall_no_overrides(v2);
  }
}
