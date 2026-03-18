/*
 * XREFs of ACPIPccProcessSci @ 0x14005226C
 * Callers:
 *     ACPIInterruptServiceRoutineDPC @ 0x14002DBE0 (ACPIInterruptServiceRoutineDPC.c)
 * Callees:
 *     AcpiPccUnlockSubspace @ 0x140040AA8 (AcpiPccUnlockSubspace.c)
 *     AcpiPccLockSubspace @ 0x14004B9A0 (AcpiPccLockSubspace.c)
 *     AcpiDiagTracePccPlatformInterrupt @ 0x140052364 (AcpiDiagTracePccPlatformInterrupt.c)
 *     AcpiPccCommandComplete @ 0x14006492C (AcpiPccCommandComplete.c)
 *     AcpiPccPlatformNotificationUnsafe @ 0x140064E14 (AcpiPccPlatformNotificationUnsafe.c)
 *     AcpiPccIsInterruptIssued @ 0x140065440 (AcpiPccIsInterruptIssued.c)
 *     AcpiPccIsrIsPlatformNotificationIssued @ 0x1400654A4 (AcpiPccIsrIsPlatformNotificationIssued.c)
 */

__int64 ACPIPccProcessSci()
{
  __int64 v0; // rdx
  unsigned int i; // edi
  _DWORD *v2; // rbx
  __int64 v3; // rdx
  KIRQL v5; // [rsp+30h] [rbp+8h] BYREF

  if ( AcpiPccSciReferenceCount )
  {
    if ( AcpiPccLegacySubspace
      && *(_DWORD *)(AcpiPccLegacySubspace + 560)
      && (unsigned __int8)AcpiPccIsInterruptIssued(AcpiPccLegacySubspace) )
    {
      LOBYTE(v0) = 1;
      AcpiPccCommandComplete(AcpiPccLegacySubspace, v0);
    }
    if ( AcpiPccSubspaces )
    {
      for ( i = 0; i < AcpiPccSubspaceCount; ++i )
      {
        v2 = (_DWORD *)(AcpiPccSubspaces + 824LL * i);
        if ( v2[3] == 1 )
        {
          if ( v2[140] && (unsigned __int8)AcpiPccIsInterruptIssued(AcpiPccSubspaces + 824LL * i) )
          {
            LOBYTE(v3) = 1;
            AcpiPccCommandComplete(v2, v3);
          }
          if ( (unsigned __int8)AcpiPccIsrIsPlatformNotificationIssued(v2) )
          {
            v5 = 0;
            AcpiPccLockSubspace((__int64)v2, &v5);
            AcpiPccPlatformNotificationUnsafe(v2);
            AcpiPccUnlockSubspace((__int64)v2, v5);
          }
        }
      }
    }
  }
  return AcpiDiagTracePccPlatformInterrupt(*(unsigned __int16 *)(*((_QWORD *)AcpiInformation + 1) + 46LL));
}
