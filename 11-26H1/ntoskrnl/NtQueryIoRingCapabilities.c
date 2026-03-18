/*
 * XREFs of NtQueryIoRingCapabilities @ 0x1407992C0
 * Callers:
 *     DifNtQueryIoRingCapabilitiesWrapper @ 0x140684170 (DifNtQueryIoRingCapabilitiesWrapper.c)
 * Callees:
 *     IopExceptionFilter @ 0x1405CA834 (IopExceptionFilter.c)
 *     RtlWriteULongToUser @ 0x14077F7A0 (RtlWriteULongToUser.c)
 *     ProbeForWrite @ 0x1408F5D00 (ProbeForWrite.c)
 */

__int64 __fastcall NtQueryIoRingCapabilities(SIZE_T Length, _DWORD *Address)
{
  char PreviousMode; // si

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( (unsigned int)Length < 0x14 )
    return 3221225507LL;
  if ( PreviousMode )
  {
    ProbeForWrite(Address, (unsigned int)Length, 1u);
    RtlWriteULongToUser(Address, 400);
  }
  else
  {
    *Address = 400;
  }
  if ( PreviousMode )
    RtlWriteULongToUser(Address + 1, 9);
  else
    Address[1] = 9;
  if ( PreviousMode )
    RtlWriteULongToUser(Address + 2, 2);
  else
    Address[2] = 2;
  if ( PreviousMode )
    RtlWriteULongToUser(Address + 3, 0x10000);
  else
    Address[3] = 0x10000;
  if ( PreviousMode )
    RtlWriteULongToUser(Address + 4, 0x20000);
  else
    Address[4] = 0x20000;
  return 0LL;
}
