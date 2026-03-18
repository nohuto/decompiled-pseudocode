/*
 * XREFs of MiTransferSoftwarePte @ 0x140297830
 * Callers:
 *     MiOutSwapWorkingSetPte @ 0x140296850 (MiOutSwapWorkingSetPte.c)
 *     MiHandleForkValidPrivatePte @ 0x14030ADC0 (MiHandleForkValidPrivatePte.c)
 *     MiRewriteTrimPteAsDemandZero @ 0x14031B000 (MiRewriteTrimPteAsDemandZero.c)
 *     MiDecommitAddToList @ 0x140323520 (MiDecommitAddToList.c)
 *     MiDecommitHandleTransitionPte @ 0x14033DDD4 (MiDecommitHandleTransitionPte.c)
 *     MiDeleteTransitionPte @ 0x14033E7F0 (MiDeleteTransitionPte.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x14033F350 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiDecommitHandlePageFileFormatPte @ 0x140360BD0 (MiDecommitHandlePageFileFormatPte.c)
 *     MiReservePageFileSpaceForPage @ 0x1403676AC (MiReservePageFileSpaceForPage.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x140404DD0 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MiFindFreePageFileSpace @ 0x140405E3C (MiFindFreePageFileSpace.c)
 *     MiStoreWriteModifiedPagePostIssue @ 0x140408014 (MiStoreWriteModifiedPagePostIssue.c)
 *     MiStoreWriteModifiedPagePrepare @ 0x1404091C0 (MiStoreWriteModifiedPagePrepare.c)
 *     MiStoreWriteProcessFailedPages @ 0x140409734 (MiStoreWriteProcessFailedPages.c)
 *     MiWriteComplete @ 0x14040A870 (MiWriteComplete.c)
 *     MiMoveModifiedPagesToCompressList @ 0x14051957C (MiMoveModifiedPagesToCompressList.c)
 *     MiDiscardPteTransitionPage @ 0x1405287F0 (MiDiscardPteTransitionPage.c)
 * Callees:
 *     MiMakePageFilePte @ 0x140298DD0 (MiMakePageFilePte.c)
 */

unsigned __int64 __fastcall MiTransferSoftwarePte(__int64 a1, __int64 a2, unsigned int a3, char a4)
{
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rdx
  unsigned __int64 result; // rax
  __int64 v9; // r11
  char v10; // dl
  int v11; // r8d
  __int64 PageFilePte; // rdx
  unsigned __int64 v13; // rcx
  __int64 v14; // rdx
  _KPROCESS *Process; // r11
  unsigned __int64 KernelWaitTime; // r11
  __int64 v17; // r8
  _QWORD v18[3]; // [rsp+20h] [rbp-18h] BYREF

  v18[0] = a1;
  v5 = a1;
  v6 = a3;
  if ( (unsigned __int64)v18 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v18 <= 0xFFFFF6FB7DBED7F8uLL )
  {
    v14 = a1;
    if ( (a1 & 1) != 0 && ((a1 & 0x20) == 0 || (a1 & 0x42) == 0) && (MiFlags & 0x1800000) != 0 )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( Process->AddressPolicy != 1 )
      {
        KernelWaitTime = Process[2].KernelWaitTime;
        if ( KernelWaitTime )
        {
          v17 = *(_QWORD *)(KernelWaitTime + 8 * (((unsigned __int64)v18 >> 3) & 0x1FF));
          if ( (v17 & 0x20) != 0 )
            v14 = a1 | 0x20;
          v5 = v14 | 0x42;
          if ( (v17 & 0x42) == 0 )
            v5 = v14;
        }
      }
    }
  }
  v7 = -65537LL;
  if ( (v5 & 0x400) != 0 )
    v7 = -5LL;
  v18[0] = v5 & v7;
  if ( (a1 & 0x400) != 0 || (a4 & 4) != 0 )
    result = v18[0];
  else
    result = v18[0] & 0xFFFFFFFFFFFFFFF3uLL;
  if ( a2 )
  {
    v9 = *(unsigned __int16 *)(a2 + 172);
    if ( result )
    {
      if ( qword_140E2D740 )
      {
        v10 = result;
        v11 = qword_140E2D748 & result;
        LODWORD(result) = result & 0xFFFFFFEF;
        if ( (v10 & 0x10) == 0 )
          LODWORD(result) = v11;
      }
      PageFilePte = (unsigned int)result | (unsigned __int64)(v6 << 32);
      if ( qword_140E2D740 )
      {
        if ( (qword_140E2D740 & PageFilePte) != 0 )
          PageFilePte |= 0x10uLL;
        else
          PageFilePte |= qword_140E2D740;
      }
    }
    else
    {
      PageFilePte = MiMakePageFilePte((unsigned int)v6);
    }
    result = (v9 << 12) ^ (PageFilePte ^ (v9 << 12)) & 0xFFFFFFFFFFFF0FFFuLL;
    v13 = result;
    if ( (a4 & 1) != 0 )
    {
      result |= 8uLL;
      v13 = result;
    }
    if ( (a4 & 2) != 0 )
      return v13 | 4;
  }
  return result;
}
