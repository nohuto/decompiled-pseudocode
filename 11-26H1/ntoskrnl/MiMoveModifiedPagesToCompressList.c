/*
 * XREFs of MiMoveModifiedPagesToCompressList @ 0x14051957C
 * Callers:
 *     MmStoreRegister @ 0x14087D67C (MmStoreRegister.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiTransferSoftwarePte @ 0x140297830 (MiTransferSoftwarePte.c)
 *     MiInsertPageInList @ 0x1402DDC40 (MiInsertPageInList.c)
 *     MiSafeLockPage @ 0x1402F3700 (MiSafeLockPage.c)
 *     MiUnlinkPageFromListEx @ 0x1402F7250 (MiUnlinkPageFromListEx.c)
 */

void __fastcall MiMoveModifiedPagesToCompressList(__int64 a1, __int64 a2)
{
  ULONG_PTR i; // rbx
  __int64 v4; // rbp
  unsigned __int8 v5; // al
  unsigned __int64 v6; // rdi
  int v7; // r9d

  for ( i = *(_QWORD *)(a1 + 4352); i != 0x3FFFFFFFFFLL; i = *(_QWORD *)(a1 + 4352) )
  {
    v4 = 48 * i - 0x220000000000LL;
    v5 = MiSafeLockPage(i, a2);
    v6 = v5;
    if ( v5 != 17 )
    {
      if ( i == *(_QWORD *)(a1 + 4352) )
      {
        MiUnlinkPageFromListEx(48 * i - 0x220000000000LL, 0);
        *(_QWORD *)(v4 + 16) = MiTransferSoftwarePte(
                                 *(_QWORD *)(v4 + 16),
                                 *(_QWORD *)(a1 + 8LL * *(unsigned int *)(a1 + 1300) + 22304),
                                 3u,
                                 0);
        MiInsertPageInList(48 * i - 0x220000000000LL, v7 + 8);
      }
      _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( (unsigned __int8)v6 < 2u )
      {
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v6);
        __writecr8(v6);
      }
    }
  }
}
