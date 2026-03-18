/*
 * XREFs of MiGetSharedProtosAtDpc @ 0x14046A430
 * Callers:
 *     MiDecommitHandleProtoFormatPte @ 0x140360F60 (MiDecommitHandleProtoFormatPte.c)
 *     MiGetSharedProtos @ 0x140372BD8 (MiGetSharedProtos.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402DC6D0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1402EDFB0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiLocateSessionProtosInSubsection @ 0x14036CFCC (MiLocateSessionProtosInSubsection.c)
 */

__int64 *__fastcall MiGetSharedProtosAtDpc(__int64 a1, unsigned int a2, __int64 a3)
{
  volatile LONG *v3; // rdi
  __int64 *SessionProtosInSubsection; // rbx

  v3 = (volatile LONG *)(a1 + 72);
  ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
  SessionProtosInSubsection = MiLocateSessionProtosInSubsection(a3, a2);
  ExReleaseSpinLockSharedFromDpcLevel(v3);
  return SessionProtosInSubsection;
}
