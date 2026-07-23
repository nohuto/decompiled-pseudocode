/*
 * XREFs of MiCheckAndUpdateIoAttribution @ 0x14026D4A0
 * Callers:
 *     MiProtoFaultGetProtection @ 0x1402BB1B0 (MiProtoFaultGetProtection.c)
 *     MiValidWriteFaultProcess @ 0x1403A9440 (MiValidWriteFaultProcess.c)
 * Callees:
 *     IoDiskIoAttributionDereference @ 0x14021EF64 (IoDiskIoAttributionDereference.c)
 *     IoReferenceIoAttributionFromThread @ 0x14026C040 (IoReferenceIoAttributionFromThread.c)
 *     MiGetSubsectionFromPte @ 0x140282C30 (MiGetSubsectionFromPte.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

void __fastcall MiCheckAndUpdateIoAttribution(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 SubsectionFromPte; // rax
  struct _KTHREAD *v4; // r8
  __int64 v5; // rsi
  __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // rbp
  unsigned __int64 v9; // rbp
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 16);
  v10 = 0LL;
  SubsectionFromPte = MiGetSubsectionFromPte(v2, a2, KeGetCurrentThread());
  v5 = *(_QWORD *)SubsectionFromPte;
  if ( (*(_DWORD *)(*(_QWORD *)SubsectionFromPte + 56LL) & 0x20) == 0
    && (int)IoReferenceIoAttributionFromThread(v4, &v10) >= 0 )
  {
    v6 = v10;
    if ( v10 == (*(_QWORD *)(v5 + 120) & 0xFFFFFFFFFFFFFFF8uLL) )
    {
      v7 = v10;
    }
    else
    {
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v5 + 72));
      v8 = *(_QWORD *)(v5 + 120);
      *(_QWORD *)(v5 + 120) = v6 & 0xFFFFFFFFFFFFFFF8uLL | v8 & 7;
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v5 + 72));
      v9 = v8 & 0xFFFFFFFFFFFFFFF8uLL;
      if ( !v9 )
        return;
      v7 = v9;
    }
    IoDiskIoAttributionDereference(v7);
  }
}
