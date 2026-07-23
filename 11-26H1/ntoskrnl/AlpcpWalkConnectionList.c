/*
 * XREFs of AlpcpWalkConnectionList @ 0x140AFD7FC
 * Callers:
 *     AlpcpDisconnectPort @ 0x1408F1508 (AlpcpDisconnectPort.c)
 * Callees:
 *     AlpcpLockBlobExclusive @ 0x1408F10DC (AlpcpLockBlobExclusive.c)
 *     AlpcpUnlockBlobUncachedExclusive @ 0x1408F1140 (AlpcpUnlockBlobUncachedExclusive.c)
 */

void __fastcall AlpcpWalkConnectionList(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  _QWORD **v4; // rsi
  _QWORD *i; // rdi

  v4 = (_QWORD **)(*(_QWORD *)(a1 + 16) + 24LL);
  for ( i = *v4; i != v4; i = (_QWORD *)*i )
  {
    AlpcpLockBlobExclusive((__int64)(i - 3), a2, a3, a4);
    AlpcpUnlockBlobUncachedExclusive((__int64)(i - 3));
  }
}
