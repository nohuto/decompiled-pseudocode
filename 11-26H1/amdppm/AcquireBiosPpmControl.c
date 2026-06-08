/*
 * XREFs of AcquireBiosPpmControl @ 0x140008B04
 * Callers:
 *     ProcessSystemSleepStateNotify @ 0x140008B90 (ProcessSystemSleepStateNotify.c)
 *     ProcLibDeviceStart @ 0x14002E514 (ProcLibDeviceStart.c)
 * Callees:
 *     <none>
 */

char __fastcall AcquireBiosPpmControl(__int64 a1)
{
  int v1; // eax

  if ( (*(_DWORD *)(a1 + 280) & 0x7F070) != 0 && dword_1400155B0 && byte_1400155B5 )
    __outbyte(dword_1400155B0, byte_1400155B5);
  v1 = *(_DWORD *)(a1 + 280);
  if ( (v1 & 0x70000000) != 0 )
  {
    if ( dword_1400155B0 )
    {
      LOBYTE(v1) = byte_1400155B4;
      if ( byte_1400155B4 )
        __outbyte(dword_1400155B0, byte_1400155B4);
    }
  }
  return v1;
}
