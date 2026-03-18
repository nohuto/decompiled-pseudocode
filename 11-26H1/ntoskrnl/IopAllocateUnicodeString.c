/*
 * XREFs of IopAllocateUnicodeString @ 0x14090DDE8
 * Callers:
 *     PiBuildAndOpenDeviceDirectoryPath @ 0x1407A0964 (PiBuildAndOpenDeviceDirectoryPath.c)
 *     PiCreateServiceKeyUnderPath @ 0x1407A102C (PiCreateServiceKeyUnderPath.c)
 *     PiGetDriverMutableStateDirectory @ 0x1407A1284 (PiGetDriverMutableStateDirectory.c)
 *     PipProcessDevNodeTree @ 0x14090C86C (PipProcessDevNodeTree.c)
 *     PnpConcatenateUnicodeStrings @ 0x14090FC6C (PnpConcatenateUnicodeStrings.c)
 *     PiDeviceRegistration @ 0x140912D28 (PiDeviceRegistration.c)
 *     IopBuildGlobalSymbolicLinkString @ 0x1409D9558 (IopBuildGlobalSymbolicLinkString.c)
 *     PiOpenDriverRedirectedStateKey @ 0x140A2DDCC (PiOpenDriverRedirectedStateKey.c)
 *     PiDeferSetInterfaceState @ 0x140B1E180 (PiDeferSetInterfaceState.c)
 *     PnpLogVetoInformation @ 0x140B45874 (PnpLogVetoInformation.c)
 * Callees:
 *     RtlUShortAdd @ 0x140481650 (RtlUShortAdd.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
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
