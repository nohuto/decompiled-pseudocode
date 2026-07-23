/*
 * XREFs of MiMoveModifiedPagesToCompressList @ 0x140512FEC
 * Callers:
 *     MmStoreRegister @ 0x140883A7C (MmStoreRegister.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiTransferSoftwarePte @ 0x140296D90 (MiTransferSoftwarePte.c)
 *     MiInsertPageInList @ 0x1402BFA00 (MiInsertPageInList.c)
 *     MiSafeLockPage @ 0x1402D5780 (MiSafeLockPage.c)
 *     MiUnlinkPageFromListEx @ 0x1402D92D0 (MiUnlinkPageFromListEx.c)
 */

void __fastcall MiMoveModifiedPagesToCompressList(__int64 a1, __int64 a2, __int64 a3)
{
  ULONG_PTR i; // rbx
  __int64 v5; // rbp
  unsigned __int8 v6; // al
  unsigned __int64 v7; // rdi
  int v8; // r9d

  for ( i = *(_QWORD *)(a1 + 4352); i != 0x3FFFFFFFFFLL; i = *(_QWORD *)(a1 + 4352) )
  {
    v5 = 48 * i - 0x220000000000LL;
    v6 = MiSafeLockPage(i, a2, a3);
    v7 = v6;
    if ( v6 != 17 )
    {
      if ( i == *(_QWORD *)(a1 + 4352) )
      {
        MiUnlinkPageFromListEx(48 * i - 0x220000000000LL, 0);
        *(_QWORD *)(v5 + 16) = MiTransferSoftwarePte(
                                 *(_QWORD *)(v5 + 16),
                                 *(_QWORD *)(a1 + 8LL * *(unsigned int *)(a1 + 1300) + 22304),
                                 3u,
                                 0);
        MiInsertPageInList(48 * i - 0x220000000000LL, v8 + 8);
      }
      _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( (unsigned __int8)v7 < 2u )
      {
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v7);
        __writecr8(v7);
      }
    }
  }
}
