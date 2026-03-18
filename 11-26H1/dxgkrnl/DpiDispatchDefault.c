/*
 * XREFs of DpiDispatchDefault @ 0x140085B60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall DpiDispatchDefault(__int64 a1, IRP *a2)
{
  __int64 v2; // rcx
  int v4; // eax

  v2 = *(_QWORD *)(a1 + 64);
  if ( v2
    && *(_DWORD *)(v2 + 16) == 1953656900
    && ((v4 = *(_DWORD *)(v2 + 20), v4 == 2) || v4 == 3)
    && *(_BYTE *)(v2 + 57) )
  {
    ++a2->CurrentLocation;
    ++a2->Tail.Overlay.CurrentStackLocation;
    return IofCallDriver(*(PDEVICE_OBJECT *)(v2 + 160), a2);
  }
  else
  {
    if ( a2->Tail.Overlay.CurrentStackLocation->MajorFunction == 22 )
      PoStartNextPowerIrp(a2);
    a2->IoStatus.Status = -1073741808;
    IofCompleteRequest(a2, 0);
    return -1073741808;
  }
}
