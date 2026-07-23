/*
 * XREFs of IopAllocateUnicodeString @ 0x1409AFF18
 * Callers:
 *     PiBuildAndOpenDeviceDirectoryPath @ 0x1407A34A4 (PiBuildAndOpenDeviceDirectoryPath.c)
 *     PiCreateServiceKeyUnderPath @ 0x1407A3B6C (PiCreateServiceKeyUnderPath.c)
 *     PiGetDriverMutableStateDirectory @ 0x1407A3DC4 (PiGetDriverMutableStateDirectory.c)
 *     IopBuildGlobalSymbolicLinkString @ 0x1409AA448 (IopBuildGlobalSymbolicLinkString.c)
 *     PipProcessDevNodeTree @ 0x1409AE99C (PipProcessDevNodeTree.c)
 *     PnpConcatenateUnicodeStrings @ 0x1409B1D9C (PnpConcatenateUnicodeStrings.c)
 *     PiDeviceRegistration @ 0x1409B4E08 (PiDeviceRegistration.c)
 *     PiOpenDriverRedirectedStateKey @ 0x140A3FA1C (PiOpenDriverRedirectedStateKey.c)
 *     PiDeferSetInterfaceState @ 0x140B20204 (PiDeferSetInterfaceState.c)
 *     PnpLogVetoInformation @ 0x140B478A4 (PnpLogVetoInformation.c)
 * Callees:
 *     RtlUShortAdd @ 0x14047AFC0 (RtlUShortAdd.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall IopAllocateUnicodeString(__int64 a1, USHORT a2)
{
  _WORD *v2; // rdi
  NTSTATUS v4; // ebx
  __int64 Pool2; // rax

  v2 = (_WORD *)(a1 + 2);
  *(_WORD *)a1 = 0;
  v4 = RtlUShortAdd(a2, 2u, (USHORT *)(a1 + 2));
  if ( v4 >= 0 )
  {
    Pool2 = ExAllocatePool2(0x100uLL);
    *(_QWORD *)(a1 + 8) = Pool2;
    if ( !Pool2 )
    {
      *v2 = 0;
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)v4;
}
