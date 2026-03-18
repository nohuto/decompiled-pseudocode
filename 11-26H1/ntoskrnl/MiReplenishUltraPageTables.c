/*
 * XREFs of MiReplenishUltraPageTables @ 0x1402F445C
 * Callers:
 *     MiCreateUltraThreadContextHelper @ 0x1402F2710 (MiCreateUltraThreadContextHelper.c)
 *     MiCreateUltraThreadContext @ 0x1402F45F0 (MiCreateUltraThreadContext.c)
 *     MiBackgroundZeroComplete @ 0x1404A543C (MiBackgroundZeroComplete.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021AA80 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 *     MiPageToNode @ 0x140289710 (MiPageToNode.c)
 *     MiReleaseNonPagedResources @ 0x14028C070 (MiReleaseNonPagedResources.c)
 *     MiReleaseFreshPage @ 0x140292190 (MiReleaseFreshPage.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402DED10 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiAcquireNonPagedResources @ 0x1402F4A50 (MiAcquireNonPagedResources.c)
 *     MiGetUltraPage @ 0x14033A1B0 (MiGetUltraPage.c)
 *     MiInitializePageColorBase @ 0x14036FE20 (MiInitializePageColorBase.c)
 *     MiSimpleInsertPage @ 0x1403C5100 (MiSimpleInsertPage.c)
 */

void __fastcall MiReplenishUltraPageTables(unsigned int a1, unsigned int a2)
{
  __int64 v2; // rbx
  __int64 v4; // rdi
  __int64 v5; // rbp
  volatile LONG *v6; // rdi
  KIRQL v7; // si
  ULONG_PTR UltraPage; // rax
  ULONG_PTR v9; // r14
  __int64 v10; // rdx
  __int64 v11; // r8
  _OWORD v12[2]; // [rsp+20h] [rbp-28h] BYREF

  v2 = a1;
  v12[0] = 0LL;
  MiInitializePageColorBase(0LL, 3LL, a1 + 1, v12);
  v4 = *(_QWORD *)(384 * v2 + qword_140E2D6B8 + 376);
  v5 = v4 + 840;
  if ( *(_QWORD *)(v4 + 856) < 0x100uLL )
  {
    v6 = (volatile LONG *)(v4 + 872);
    if ( (a2 & 4) != 0 )
    {
      v7 = 17;
      ExAcquireSpinLockExclusiveAtDpcLevel(v6);
    }
    else
    {
      v7 = ExAcquireSpinLockExclusive(v6);
    }
    if ( *(_QWORD *)(v5 + 16) >= 0x100uLL )
    {
LABEL_16:
      if ( v7 == 17 )
        ExReleaseSpinLockExclusiveFromDpcLevel(v6);
      else
        ExReleaseSpinLockExclusive(v6, v7);
    }
    else
    {
      while ( 1 )
      {
        if ( v7 == 17 )
          ExReleaseSpinLockExclusiveFromDpcLevel(v6);
        else
          ExReleaseSpinLockExclusive(v6, v7);
        if ( (int)MiAcquireNonPagedResources(&MiSystemPartition, 1LL, 0LL, 0LL) < 0 )
          break;
        UltraPage = MiGetUltraPage(v12, a2);
        v9 = UltraPage;
        if ( UltraPage == -1LL )
          goto LABEL_19;
        if ( (unsigned int)MiPageToNode(UltraPage) != (_DWORD)v2 )
        {
          MiReleaseFreshPage(48 * v9 - 0x220000000000LL, v10, v11);
LABEL_19:
          MiReleaseNonPagedResources((__int64)&MiSystemPartition, 1LL);
          return;
        }
        if ( v7 == 17 )
          ExAcquireSpinLockExclusiveAtDpcLevel(v6);
        else
          ExAcquireSpinLockExclusive(v6);
        MiSimpleInsertPage(v5, v9, 2LL);
        if ( *(_QWORD *)(v5 + 16) >= 0x100uLL )
          goto LABEL_16;
      }
    }
  }
}
