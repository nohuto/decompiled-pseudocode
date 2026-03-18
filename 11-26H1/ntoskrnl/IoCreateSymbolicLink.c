/*
 * XREFs of IoCreateSymbolicLink @ 0x140AB52F0
 * Callers:
 *     DifIoCreateSymbolicLinkWrapper @ 0x14065B070 (DifIoCreateSymbolicLinkWrapper.c)
 *     IopCreateArcName @ 0x140B1C9D8 (IopCreateArcName.c)
 *     IopCreateArcNamesCd @ 0x140CBC66C (IopCreateArcNamesCd.c)
 *     WmipDriverEntry @ 0x140CE01C0 (WmipDriverEntry.c)
 *     IopMountCimfsLayer @ 0x140D0336C (IopMountCimfsLayer.c)
 *     IopMountCompositeLayer @ 0x140D034D4 (IopMountCompositeLayer.c)
 *     RamdiskCreateSymbolicLink @ 0x140D03C90 (RamdiskCreateSymbolicLink.c)
 * Callees:
 *     IoCreateSymbolicLink2 @ 0x140AB5330 (IoCreateSymbolicLink2.c)
 */

NTSTATUS __stdcall IoCreateSymbolicLink(PUNICODE_STRING SymbolicLinkName, PUNICODE_STRING DeviceName)
{
  _QWORD v3[5]; // [rsp+20h] [rbp-28h] BYREF

  memset(v3, 0, 20);
  *(UNICODE_STRING *)&v3[1] = *DeviceName;
  return IoCreateSymbolicLink2(SymbolicLinkName, v3);
}
