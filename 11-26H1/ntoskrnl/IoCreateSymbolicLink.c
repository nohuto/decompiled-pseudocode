/*
 * XREFs of IoCreateSymbolicLink @ 0x140AB6690
 * Callers:
 *     DifIoCreateSymbolicLinkWrapper @ 0x14065EC50 (DifIoCreateSymbolicLinkWrapper.c)
 *     IopCreateArcName @ 0x140B1EBE8 (IopCreateArcName.c)
 *     IopCreateArcNamesCd @ 0x140CC26E4 (IopCreateArcNamesCd.c)
 *     WmipDriverEntry @ 0x140CE6560 (WmipDriverEntry.c)
 *     IopMountCimfsLayer @ 0x140D0970C (IopMountCimfsLayer.c)
 *     RamdiskCreateSymbolicLink @ 0x140D09F60 (RamdiskCreateSymbolicLink.c)
 * Callees:
 *     IoCreateSymbolicLink2 @ 0x140AB66D0 (IoCreateSymbolicLink2.c)
 */

NTSTATUS __stdcall IoCreateSymbolicLink(PUNICODE_STRING SymbolicLinkName, PUNICODE_STRING DeviceName)
{
  _QWORD v3[5]; // [rsp+20h] [rbp-28h] BYREF

  memset(v3, 0, 20);
  *(UNICODE_STRING *)&v3[1] = *DeviceName;
  return IoCreateSymbolicLink2(SymbolicLinkName, v3);
}
