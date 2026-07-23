/*
 * XREFs of EtwpAcquireGuidEntryExclusive @ 0x1801022C0
 * Callers:
 *     EtwDeliverDataBlock @ 0x18003CB30 (EtwDeliverDataBlock.c)
 *     EtwpUpdateEnableInfoAndCallback @ 0x180042610 (EtwpUpdateEnableInfoAndCallback.c)
 *     EtwpEventApiCallback @ 0x1800428D0 (EtwpEventApiCallback.c)
 *     EtwpRegisterGuidsApiCallback @ 0x1800436E0 (EtwpRegisterGuidsApiCallback.c)
 *     EtwpDereferenceUmGuidEntry @ 0x18008D818 (EtwpDereferenceUmGuidEntry.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 */

void *__fastcall EtwpAcquireGuidEntryExclusive(__int64 a1)
{
  void *result; // rax

  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 40));
  result = NtCurrentTeb()->ClientId.UniqueThread;
  *(_DWORD *)(a1 + 48) = (_DWORD)result;
  return result;
}
