/*
 * XREFs of AcquireBiosPpmControl @ 0x140005EEC
 * Callers:
 *     ProcessSystemSleepStateNotify @ 0x14000B610 (ProcessSystemSleepStateNotify.c)
 *     ProcLibDeviceStart @ 0x140032614 (ProcLibDeviceStart.c)
 * Callees:
 *     <none>
 */

char __fastcall AcquireBiosPpmControl(__int64 a1)
{
  int v1; // eax

  if ( (*(_DWORD *)(a1 + 280) & 0x7F070) != 0 && dword_140019180 && byte_140019185 )
    __outbyte(dword_140019180, byte_140019185);
  v1 = *(_DWORD *)(a1 + 280);
  if ( (v1 & 0x70000000) != 0 )
  {
    if ( dword_140019180 )
    {
      LOBYTE(v1) = byte_140019184;
      if ( byte_140019184 )
        __outbyte(dword_140019180, byte_140019184);
    }
  }
  return v1;
}
