/*
 * XREFs of ACPIPccInterruptServiceRoutine @ 0x140064810
 * Callers:
 *     <none>
 * Callees:
 *     AcpiPccAcknowledgePlatformInterrupt @ 0x1400648DC (AcpiPccAcknowledgePlatformInterrupt.c)
 *     AcpiPccIsrIsPlatformNotificationIssued @ 0x1400654A4 (AcpiPccIsrIsPlatformNotificationIssued.c)
 */

char __fastcall ACPIPccInterruptServiceRoutine(__int64 a1, __int64 a2)
{
  char v2; // si
  unsigned int i; // edi
  _BYTE *v5; // rbx

  v2 = 0;
  if ( AcpiPccSubspaces )
  {
    for ( i = 0; i < AcpiPccSubspaceCount; ++i )
    {
      v5 = (_BYTE *)(AcpiPccSubspaces + 824LL * i);
      if ( v5
        && (*v5 == 3 || *v5 == 4)
        && (*((_DWORD *)v5 + 2) & 1) != 0
        && *((_DWORD *)v5 + 3) == 2
        && *((_DWORD *)v5 + 50) == *(_DWORD *)(a2 + 16)
        && (unsigned __int8)AcpiPccIsrIsPlatformNotificationIssued(v5)
        && _InterlockedExchange((volatile __int32 *)v5 + 141, 0) )
      {
        AcpiPccAcknowledgePlatformInterrupt(v5);
        KeInsertQueueDpc((PRKDPC)(v5 + 136), v5, 0LL);
        v2 = 1;
      }
    }
  }
  return v2;
}
