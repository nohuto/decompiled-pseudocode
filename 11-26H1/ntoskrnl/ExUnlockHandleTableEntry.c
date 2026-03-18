/*
 * XREFs of ExUnlockHandleTableEntry @ 0x140A33080
 * Callers:
 *     IopCheckHandleForRevocation @ 0x1405CBAB0 (IopCheckHandleForRevocation.c)
 *     ObAuditInheritedHandleProcedure @ 0x1407C20D0 (ObAuditInheritedHandleProcedure.c)
 *     ObpShutdownCloseHandleProcedure @ 0x1407C31F0 (ObpShutdownCloseHandleProcedure.c)
 *     EtwpObjectHandleEnumCallback @ 0x14082F620 (EtwpObjectHandleEnumCallback.c)
 *     PsLookupProcessByProcessId @ 0x1408EF4E0 (PsLookupProcessByProcessId.c)
 *     ObCloseHandleTableEntry2 @ 0x1408FAF70 (ObCloseHandleTableEntry2.c)
 *     ExDupHandleTable @ 0x140971D40 (ExDupHandleTable.c)
 *     AlpcpSendMessage @ 0x1409BD2F0 (AlpcpSendMessage.c)
 *     AlpcpLookupMessage @ 0x1409BEA70 (AlpcpLookupMessage.c)
 *     NtAlpcImpersonateClientOfPort @ 0x1409C1390 (NtAlpcImpersonateClientOfPort.c)
 *     PsLookupThreadByThreadId @ 0x140A10B70 (PsLookupThreadByThreadId.c)
 *     PspThreadFromTicket @ 0x140A191C0 (PspThreadFromTicket.c)
 *     ExQueryProcessHandleInformation @ 0x140A32DCC (ExQueryProcessHandleInformation.c)
 *     NtAlertThreadByThreadIdEx @ 0x140A33250 (NtAlertThreadByThreadIdEx.c)
 *     NtAlertThreadByThreadId @ 0x140A5D8F0 (NtAlertThreadByThreadId.c)
 * Callees:
 *     ExfUnblockPushLock @ 0x1404CE970 (ExfUnblockPushLock.c)
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
