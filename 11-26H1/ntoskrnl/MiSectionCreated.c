/*
 * XREFs of MiSectionCreated @ 0x14047EECC
 * Callers:
 *     MiCreateNewSection @ 0x140A63860 (MiCreateNewSection.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiInitializeNewImageSectionProtos @ 0x1404A7DCC (MiInitializeNewImageSectionProtos.c)
 */

__int64 __fastcall MiSectionCreated(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbp
  volatile LONG *v4; // r15
  __int64 v6; // r12
  int v7; // r14d
  KIRQL v8; // r13
  __int64 *v9; // rdi
  __int64 v10; // rdi
  _QWORD *v11; // rsi
  __int64 v12; // rcx

  v3 = *(_QWORD *)(a1 + 56);
  v4 = (volatile LONG *)(a2 + 72);
  v6 = 0LL;
  v7 = 0;
  v8 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a2 + 72));
  if ( (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 0x2000000) != 0 )
    *(_DWORD *)(a2 + 56) |= 0x200u;
  v9 = *(__int64 **)(v3 + 40);
  if ( (*(_DWORD *)(a2 + 56) & 0x20) != 0 )
  {
    v10 = v9[2];
    v7 = 1;
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v10 + 72));
    *(_QWORD *)(a2 + 80) = *(_QWORD *)(v10 + 80);
  }
  else
  {
    v10 = *v9;
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v10 + 72));
    v6 = *(_QWORD *)(v10 + 80);
  }
  *(_QWORD *)(a2 + 64) = *(_QWORD *)(v10 + 64);
  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E2C940);
  v11 = *(_QWORD **)(v3 + 40);
  if ( v7 )
  {
    v11[2] = a2;
    v11 = 0LL;
  }
  else
  {
    if ( (*(_DWORD *)(a2 + 56) & 0x30000000) != 0 && (*(_DWORD *)a1 & 0x8000) == 0 )
    {
      v12 = *(_QWORD *)(*(_QWORD *)(v3 + 40) + 16LL);
      if ( v12 )
      {
        if ( (*(_DWORD *)(v12 + 56) & 3) != 0 || (*(_DWORD *)(v12 + 56) & 0x30000000) == 0x10000000 )
          *(_DWORD *)(a2 + 56) = *(_DWORD *)(a2 + 56) & 0xCFFFFFFF | 0x20000000;
      }
    }
    *v11 = a2;
    *(_DWORD *)(a2 + 56) &= ~2u;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E2C940);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v10 + 72));
  if ( v8 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v4);
  else
    ExReleaseSpinLockExclusive(v4, v8);
  if ( v7 )
    MiInitializeNewImageSectionProtos(a2, a3);
  else
    KeAbPostRelease((unsigned __int64)v11);
  return v6;
}
