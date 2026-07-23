/*
 * XREFs of VfVolatileApplyDifVerification @ 0x14064B4D4
 * Callers:
 *     NtSetSystemInformation @ 0x140839A80 (NtSetSystemInformation.c)
 * Callees:
 *     VfSuspectDriversAllocateEntry @ 0x140C264A0 (VfSuspectDriversAllocateEntry.c)
 *     VfSuspectDifRemoveEntry @ 0x140C3E874 (VfSuspectDifRemoveEntry.c)
 *     MmEnableOrDisableVerifierForDriver @ 0x140C4C620 (MmEnableOrDisableVerifierForDriver.c)
 */

__int64 __fastcall VfVolatileApplyDifVerification(__int64 a1)
{
  unsigned int v2; // ebx
  __int64 Entry; // rax
  int v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0;
  if ( InitSafeBootMode )
  {
    return (unsigned int)-1073738742;
  }
  else
  {
    Entry = VfSuspectDriversAllocateEntry();
    if ( Entry )
    {
      v2 = MmEnableOrDisableVerifierForDriver(Entry, &v5, 2LL);
      if ( !v5 )
        VfSuspectDifRemoveEntry(a1);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v2;
}
