/*
 * XREFs of VfVolatileApplyDifVerification @ 0x1406088A4
 * Callers:
 *     NtSetSystemInformation @ 0x1408E97E0 (NtSetSystemInformation.c)
 * Callees:
 *     MmEnableOrDisableVerifierForDriver @ 0x140B72CF0 (MmEnableOrDisableVerifierForDriver.c)
 *     VfSuspectDifRemoveEntry @ 0x140B8A660 (VfSuspectDifRemoveEntry.c)
 *     VfSuspectDriversAllocateEntry @ 0x140B8A6C0 (VfSuspectDriversAllocateEntry.c)
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
