/*
 * XREFs of sub_140059050 @ 0x140059050
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall sub_140059050(struct _KDPC *Dpc, _QWORD *DeferredContext, PVOID SystemArgument1, PVOID SystemArgument2)
{
  __int64 v4; // rcx

  v4 = DeferredContext[8];
  if ( *(_BYTE *)(v4 + 105) )
  {
    *(_BYTE *)(v4 + 105) = 0;
    IoInvalidateDeviceRelations(*(PDEVICE_OBJECT *)(v4 + 32), BusRelations);
  }
}
