/*
 * XREFs of NtQueryIoRingCapabilities @ 0x14079BDF0
 * Callers:
 *     DifNtQueryIoRingCapabilitiesWrapper @ 0x140687D50 (DifNtQueryIoRingCapabilitiesWrapper.c)
 * Callees:
 *     IopExceptionFilter @ 0x1405CD104 (IopExceptionFilter.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     ProbeForWrite @ 0x140925C90 (ProbeForWrite.c)
 */

NTSTATUS __cdecl NtQueryIoRingCapabilities(SIZE_T IoRingCapabilitiesLength, PVOID IoRingCapabilities)
{
  char PreviousMode; // si

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( (unsigned int)IoRingCapabilitiesLength < 0x14 )
    return -1073741789;
  if ( PreviousMode )
  {
    ProbeForWrite(IoRingCapabilities, (unsigned int)IoRingCapabilitiesLength, 1u);
    RtlWriteULongToUser(IoRingCapabilities, 400);
  }
  else
  {
    *(_DWORD *)IoRingCapabilities = 400;
  }
  if ( PreviousMode )
    RtlWriteULongToUser((_DWORD *)IoRingCapabilities + 1, 9);
  else
    *((_DWORD *)IoRingCapabilities + 1) = 9;
  if ( PreviousMode )
    RtlWriteULongToUser((_DWORD *)IoRingCapabilities + 2, 2);
  else
    *((_DWORD *)IoRingCapabilities + 2) = 2;
  if ( PreviousMode )
    RtlWriteULongToUser((_DWORD *)IoRingCapabilities + 3, 0x10000);
  else
    *((_DWORD *)IoRingCapabilities + 3) = 0x10000;
  if ( PreviousMode )
    RtlWriteULongToUser((_DWORD *)IoRingCapabilities + 4, 0x20000);
  else
    *((_DWORD *)IoRingCapabilities + 4) = 0x20000;
  return 0;
}
