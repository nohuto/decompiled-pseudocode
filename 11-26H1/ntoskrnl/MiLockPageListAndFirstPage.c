/*
 * XREFs of MiLockPageListAndFirstPage @ 0x14036B5A4
 * Callers:
 *     MiGetRepurposedSlabStandbyPage @ 0x14036B420 (MiGetRepurposedSlabStandbyPage.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402BE490 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1402D0030 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiReleasePageListLock @ 0x14036BCB0 (MiReleasePageListLock.c)
 */

__int64 __fastcall MiLockPageListAndFirstPage(volatile LONG *a1, __int64 a2)
{
  char v4; // bp
  __int64 v5; // rsi
  __int64 v6; // rdi
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v12; // [rsp+50h] [rbp+8h] BYREF

  v4 = 0;
  while ( 1 )
  {
    v5 = *(_QWORD *)a1;
    if ( *(_QWORD *)a1 == 0x3FFFFFFFFFLL )
      return -1LL;
    v6 = 48 * v5;
    v12 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v6 - 0x220000000000LL + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v12);
      while ( *(__int64 *)(v6 - 0x220000000000LL + 24) < 0 );
    }
    ExAcquireSpinLockSharedAtDpcLevel(a1 + 8);
    if ( v5 == *(_QWORD *)a1 )
    {
      if ( _interlockedbittestandset64(a1 + 16, 0x3FuLL) )
        goto LABEL_9;
      *(_QWORD *)(a2 + 16) = a1 + 10;
      *(_QWORD *)(a2 + 8) = 0x3FFFFFFFFFLL;
      *(_BYTE *)(a2 + 24) = 1;
      v9 = *(_QWORD *)(v6 - 0x220000000000LL) & 0xFFFFFFFFFFLL;
      if ( v9 != 0x3FFFFFFFFFLL )
      {
        v10 = 48 * v9 - 0x220000000000LL;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
        {
LABEL_9:
          *(_BYTE *)a2 = 1;
          MiReleasePageListLock(a1, a2, v7, v8);
          *(_BYTE *)a2 = 0;
          ExAcquireSpinLockExclusiveAtDpcLevel(a1 + 8);
          return v5;
        }
        *(_QWORD *)(a2 + 40) = v10;
        v4 = 1;
        *(_QWORD *)(a2 + 32) = v9;
      }
      *(_BYTE *)(a2 + 48) = v4;
      *(_BYTE *)a2 = 1;
      return v5;
    }
    ExReleaseSpinLockSharedFromDpcLevel(a1 + 8);
    _InterlockedAnd64((volatile signed __int64 *)(v6 - 0x220000000000LL + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
}
