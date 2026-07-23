/*
 * XREFs of ExUnlockHandleTableEntry @ 0x140A4DFE0
 * Callers:
 *     IopCheckHandleForRevocation @ 0x1405CE320 (IopCheckHandleForRevocation.c)
 *     ObAuditInheritedHandleProcedure @ 0x1407C5130 (ObAuditInheritedHandleProcedure.c)
 *     ObpShutdownCloseHandleProcedure @ 0x1407C6250 (ObpShutdownCloseHandleProcedure.c)
 *     EtwpObjectHandleEnumCallback @ 0x140835860 (EtwpObjectHandleEnumCallback.c)
 *     PsLookupProcessByProcessId @ 0x1408F5AA0 (PsLookupProcessByProcessId.c)
 *     ObCloseHandleTableEntry2 @ 0x14092AF00 (ObCloseHandleTableEntry2.c)
 *     AlpcpSendMessage @ 0x14098E2D0 (AlpcpSendMessage.c)
 *     AlpcpLookupMessage @ 0x14098FA50 (AlpcpLookupMessage.c)
 *     NtAlpcImpersonateClientOfPort @ 0x140992370 (NtAlpcImpersonateClientOfPort.c)
 *     ExDupHandleTable @ 0x1409BD030 (ExDupHandleTable.c)
 *     PsLookupThreadByThreadId @ 0x140A0FD60 (PsLookupThreadByThreadId.c)
 *     PspThreadFromTicket @ 0x140A227F0 (PspThreadFromTicket.c)
 *     ExQueryProcessHandleInformation @ 0x140A4DD2C (ExQueryProcessHandleInformation.c)
 *     NtAlertThreadByThreadIdEx @ 0x140A4E1B0 (NtAlertThreadByThreadIdEx.c)
 *     NtAlertThreadByThreadId @ 0x140A6A8B0 (NtAlertThreadByThreadId.c)
 * Callees:
 *     ExfUnblockPushLock @ 0x1404C83A0 (ExfUnblockPushLock.c)
 */

int __fastcall ExUnlockHandleTableEntry(__int64 a1, volatile signed __int64 *a2)
{
  volatile __int64 *v2; // rcx
  volatile __int64 v3; // rax
  signed __int32 v5[10]; // [rsp+0h] [rbp-28h] BYREF

  _InterlockedIncrement64(a2);
  v2 = (volatile __int64 *)(a1 + 48);
  _InterlockedOr(v5, 0);
  v3 = *v2;
  if ( *v2 )
    LODWORD(v3) = ExfUnblockPushLock(v2, 0LL);
  return v3;
}
