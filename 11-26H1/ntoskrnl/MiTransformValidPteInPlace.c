/*
 * XREFs of MiTransformValidPteInPlace @ 0x140342458
 * Callers:
 *     MiTradeActivePage @ 0x140295898 (MiTradeActivePage.c)
 *     MiTradePageWritePte @ 0x14029F8EC (MiTradePageWritePte.c)
 *     MiInitializeSystemPageTable @ 0x14033AB8C (MiInitializeSystemPageTable.c)
 *     MiShadowTopLevelPxes @ 0x1403422E0 (MiShadowTopLevelPxes.c)
 *     MiMakeLargePageTable @ 0x14052B10C (MiMakeLargePageTable.c)
 *     MiPfnRangeIsZero @ 0x1406E9BA0 (MiPfnRangeIsZero.c)
 *     MiDemoteValidLargePageOneLevel @ 0x1406F259C (MiDemoteValidLargePageOneLevel.c)
 *     MiInitializeDynamicBitmap @ 0x1406F50F4 (MiInitializeDynamicBitmap.c)
 *     MiReplicatePteChangeToProcess @ 0x14070BB80 (MiReplicatePteChangeToProcess.c)
 * Callees:
 *     MiIssueFlushTbEntire @ 0x140250040 (MiIssueFlushTbEntire.c)
 *     MiGetContainingPageTable @ 0x1402D9BF0 (MiGetContainingPageTable.c)
 *     MiWritePteShadow @ 0x14031C28C (MiWritePteShadow.c)
 *     MiTransformValidPteUsingAccessedBit @ 0x140342588 (MiTransformValidPteUsingAccessedBit.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     VslWriteNtPtes @ 0x1405C441C (VslWriteNtPtes.c)
 *     MiWritePteHighLevel @ 0x1406F2B98 (MiWritePteHighLevel.c)
 */

__int64 __fastcall MiTransformValidPteInPlace(
        volatile __int64 *BugCheckParameter4,
        int a2,
        ULONG_PTR a3,
        int a4,
        int a5)
{
  __int64 result; // rax
  unsigned __int64 v10; // r8
  unsigned __int64 ContainingPageTable; // rax
  __int64 v12; // r8
  __int64 v13; // rbx

  result = MiTransformValidPteUsingAccessedBit((_DWORD)BugCheckParameter4, a2, a3, a4, a5);
  if ( !(_DWORD)result )
  {
    if ( (MiFlags & 0x10000) != 0 && KiCrossTlbFlushSupported )
    {
      ContainingPageTable = MiGetContainingPageTable((ULONG_PTR)BugCheckParameter4);
      result = VslWriteNtPtes(ContainingPageTable, ((unsigned int)BugCheckParameter4 >> 3) & 0x1FF, v12, a3);
      if ( (int)result < 0 )
        KeBugCheckEx(0x1Au, 0x51519uLL, (ULONG_PTR)BugCheckParameter4, a3, (int)result);
    }
    else if ( (MiFlags & 0x20000000000LL) != 0 && KeGetCurrentPrcb()->Number < (unsigned int)KeNumberProcessors_0 )
    {
      return MiWritePteHighLevel((_DWORD)BugCheckParameter4, a2, a3, a4, 0LL);
    }
    else
    {
      v13 = a3 | 0x20;
      if ( (MiFlags & 0x8000000) != 0 )
        _mm_lfence();
      _InterlockedExchange64(BugCheckParameter4, v13);
      if ( (unsigned __int64)BugCheckParameter4 >= 0xFFFFF6FB7DBED000uLL
        && (unsigned __int64)BugCheckParameter4 <= 0xFFFFF6FB7DBED7F8uLL )
      {
        MiWritePteShadow();
      }
      return MiIssueFlushTbEntire((_KPROCESS *)2, (volatile _KAFFINITY_EX *)0xFFFFFFFFLL, v10);
    }
  }
  return result;
}
