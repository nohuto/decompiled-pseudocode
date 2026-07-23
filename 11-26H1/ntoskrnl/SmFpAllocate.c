/*
 * XREFs of SmFpAllocate @ 0x14035EF20
 * Callers:
 *     SmKmStoreHelperCommandProcess @ 0x140384A48 (SmKmStoreHelperCommandProcess.c)
 *     ?SmStMapPhysicalRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z @ 0x14050BB44 (-SmStMapPhysicalRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z.c)
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x14035F0D0 (MmMapLockedPagesSpecifyCache.c)
 *     SmKmAllocateMdlForLock @ 0x140396230 (SmKmAllocateMdlForLock.c)
 *     MmChargeResources @ 0x1403962F0 (MmChargeResources.c)
 *     MmMapLockedPagesWithReservedMapping @ 0x1404AECD0 (MmMapLockedPagesWithReservedMapping.c)
 *     SmpFpWaitForResource @ 0x14064358C (SmpFpWaitForResource.c)
 *     ExAllocatePool3 @ 0x140C16010 (ExAllocatePool3.c)
 */

void *__fastcall SmFpAllocate(volatile LONG *SpinLock, int a2, __int64 a3, __int64 a4, int a5)
{
  void *result; // rax
  void *v9; // rsi
  unsigned int v10; // [rsp+48h] [rbp+10h]

  if ( a2 >= 5 )
  {
    if ( (*(_BYTE *)(a4 + 10) & 5) != 0 )
      result = *(void **)(a4 + 24);
    else
      result = MmMapLockedPagesSpecifyCache((PMDL)a4, 0, MmCached, 0LL, 0, 0x40000010u);
LABEL_6:
    if ( result )
      return result;
    goto LABEL_14;
  }
  if ( a2 == 2 )
  {
    result = (void *)SmKmAllocateMdlForLock(
                       *((_QWORD *)SpinLock + 4),
                       (unsigned __int64)*((unsigned __int16 *)SpinLock + 50) << 12);
    goto LABEL_6;
  }
  if ( a2 == 3 )
  {
    result = (void *)(-(__int64)((unsigned int)MmChargeResources(
                                                 *(_QWORD *)(*((_QWORD *)SpinLock + 4) + 2208LL),
                                                 *((unsigned __int16 *)SpinLock + 51),
                                                 1LL) != 0) & 0xFFFFFFFFFFFFFFF8uLL);
    goto LABEL_6;
  }
  if ( a2 != 4 )
  {
    v10 = 810708339;
    HIBYTE(v10) = a2 + 48;
    result = (void *)ExAllocatePool3(
                       64LL,
                       *((unsigned __int16 *)SpinLock + a2 + 48),
                       v10,
                       &stru_140E27C48.Header.WaitListHead.Blink,
                       1);
    goto LABEL_6;
  }
  result = 0LL;
LABEL_14:
  if ( a5 )
  {
    result = (void *)SmpFpWaitForResource(SpinLock);
    v9 = result;
    if ( a2 >= 5 )
    {
      MmMapLockedPagesWithReservedMapping(result, 0x6D526D73u, (PMDL)a4, MmCached);
      return v9;
    }
  }
  return result;
}
