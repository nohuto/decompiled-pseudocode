/*
 * XREFs of SmKmAllocateMdlForLock @ 0x140396230
 * Callers:
 *     SmFpAllocate @ 0x14035EF20 (SmFpAllocate.c)
 *     SmKmStoreHelperCommandProcess @ 0x140384A48 (SmKmStoreHelperCommandProcess.c)
 *     SmFpPreAllocate @ 0x1403E9990 (SmFpPreAllocate.c)
 * Callees:
 *     MmChargeResources @ 0x1403962F0 (MmChargeResources.c)
 *     SmAcquireReleaseCharges @ 0x140396390 (SmAcquireReleaseCharges.c)
 *     ExAllocatePool3 @ 0x140C16010 (ExAllocatePool3.c)
 */

__int64 __fastcall SmKmAllocateMdlForLock(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rbx
  unsigned __int64 v5; // rdi
  __int64 Pool3; // rax

  v2 = 0LL;
  if ( (unsigned int)MmChargeResources(*(_QWORD *)(a1 + 2208), a2 >> 12, 3LL) )
  {
    v5 = (a2 + 4095) >> 12;
    Pool3 = ExAllocatePool3(64LL, 8 * v5 + 48, 1280339315LL, &stru_140E27C48.Header.WaitListHead.Blink, 1);
    if ( Pool3 )
    {
      *(_QWORD *)Pool3 = 0LL;
      *(_WORD *)(Pool3 + 10) = 0;
      *(_QWORD *)(Pool3 + 32) = 0LL;
      *(_DWORD *)(Pool3 + 44) = 0;
      v2 = Pool3;
      *(_WORD *)(Pool3 + 8) = 8 * (v5 + 6);
      *(_DWORD *)(Pool3 + 40) = a2;
    }
    else
    {
      SmAcquireReleaseCharges(a1, a2, 3LL, 1LL);
    }
  }
  return v2;
}
