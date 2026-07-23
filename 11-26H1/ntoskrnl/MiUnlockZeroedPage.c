/*
 * XREFs of MiUnlockZeroedPage @ 0x140521994
 * Callers:
 *     MiBackgroundZeroPage @ 0x140456DB4 (MiBackgroundZeroPage.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiDereferenceHugeContext @ 0x1404EFE70 (MiDereferenceHugeContext.c)
 */

void __fastcall MiUnlockZeroedPage(unsigned __int8 *a1, unsigned __int64 *a2)
{
  __int64 v2; // r11
  __int64 v4; // r9
  unsigned __int64 v6; // rax
  char v7; // r10
  __int64 v8; // rdx
  unsigned __int64 v9; // rax
  volatile LONG *v10; // rcx
  unsigned __int64 v11; // rbx

  v2 = *((_QWORD *)a1 + 7);
  v4 = *((_QWORD *)a1 + 6);
  *a2 = 0LL;
  v6 = *(_QWORD *)(v2 + 24);
  if ( (v6 & 0x20) == 0 )
    return;
  if ( v4 && *(_BYTE *)(v4 + 68) )
  {
    v7 = 0;
    v8 = *(_QWORD *)((char *)&stru_140E2ED08.116 + 4) + 8 * ((v6 >> 12) & 0x3FFFFF);
  }
  else
  {
    v7 = 1;
    v8 = 48 * ((v6 >> 12) & 0x3FFFFFFFFFLL) - 0x220000000000LL;
  }
  if ( (v6 & 0x80u) != 0LL )
  {
    *a2 = v6;
    v6 &= ~0x80uLL;
  }
  v9 = v6 & 0xFFFFFFFFFFFFFFFBuLL;
  if ( !v4 || (v9 & 0x40) != 0 )
    v9 &= ~8uLL;
  *(_QWORD *)(v2 + 24) = v9 & 0xFFFFFFFFFFFFFF9FuLL;
  if ( !v7 )
  {
    _InterlockedAnd(
      (volatile signed __int32 *)(*(_QWORD *)&stru_140E2ED08.SystemCallNumber
                                + 4 * ((((v8 - *(_QWORD *)((char *)&stru_140E2ED08.116 + 4)) >> 3) & 0x3FFFFFuLL) >> 5)),
      ~(1 << ((v8 - *(_QWORD *)((char *)&stru_140E2ED08.116 + 4)) >> 3)));
    if ( !v4 )
      return;
    goto LABEL_16;
  }
  if ( v4 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_16:
    if ( (v9 & 1) != 0 || *(_DWORD *)(v4 + 320) == 512 )
      MiDereferenceHugeContext(*((_QWORD *)a1 + 4));
    v10 = (volatile LONG *)(56320LL * *((unsigned int *)a1 + 2) + *(_QWORD *)(*((_QWORD *)a1 + 3) + 16LL) + 14136LL);
    if ( a1[1] == 17 )
      ExReleaseSpinLockExclusiveFromDpcLevel(v10);
    else
      ExReleaseSpinLockExclusive(v10, a1[1]);
    return;
  }
  v11 = *a1;
  _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( (unsigned __int8)v11 < 2u )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v11);
    __writecr8(v11);
  }
}
