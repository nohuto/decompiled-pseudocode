/*
 * XREFs of ?ndisGetRdmaCapabilities@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x140138990
 * Callers:
 *     ?ndisDeviceControlHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x140010100 (-ndisDeviceControlHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 * Callees:
 *     ?ndisNDKWmiGetAdapterCapabilities@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_NDIS_WMI_NDK_CAPABILITIES@@@Z @ 0x140143564 (-ndisNDKWmiGetAdapterCapabilities@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_NDIS_WMI_NDK_CAPABILITIES@.c)
 */

__int64 __fastcall ndisGetRdmaCapabilities(struct _NDIS_MINIPORT_BLOCK *a1, struct _IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned int Length; // edx
  unsigned int v7; // ecx
  unsigned __int64 v8; // rbx

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  if ( !*((_BYTE *)CurrentStackLocation->FileObject->FsContext + 24) )
    return 3221225506LL;
  if ( !a1->NDKBlock )
    return 3221225659LL;
  Length = CurrentStackLocation->Parameters.Read.Length;
  if ( Length < 0x88 || CurrentStackLocation->Parameters.Create.Options )
    return 3221225485LL;
  v7 = 144;
  if ( Length < 0x90 )
    v7 = 136;
  v8 = v7;
  ndisNDKWmiGetAdapterCapabilities(a1, v7, (struct _NDIS_WMI_NDK_CAPABILITIES *)a2->AssociatedIrp.MasterIrp);
  a2->IoStatus.Information = v8;
  return 0LL;
}
