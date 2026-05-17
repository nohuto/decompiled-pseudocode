/*
 * XREFs of EtwpAcquireGuidEntryExclusive @ 0x180102F40
 * Callers:
 *     EtwDeliverDataBlock @ 0x1800525B0 (EtwDeliverDataBlock.c)
 *     EtwpUpdateEnableInfoAndCallback @ 0x180058090 (EtwpUpdateEnableInfoAndCallback.c)
 *     EtwpEventApiCallback @ 0x180058350 (EtwpEventApiCallback.c)
 *     EtwpRegisterGuidsApiCallback @ 0x180059160 (EtwpRegisterGuidsApiCallback.c)
 *     EtwpDereferenceUmGuidEntry @ 0x18006D3C8 (EtwpDereferenceUmGuidEntry.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 */

void *__fastcall EtwpAcquireGuidEntryExclusive(__int64 a1, __int64 a2)
{
  void *result; // rax

  RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a1 + 40), a2);
  result = NtCurrentTeb()->ClientId.UniqueThread;
  *(_DWORD *)(a1 + 48) = (_DWORD)result;
  return result;
}
