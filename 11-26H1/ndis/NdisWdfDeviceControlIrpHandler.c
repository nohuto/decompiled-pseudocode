/*
 * XREFs of NdisWdfDeviceControlIrpHandler @ 0x14007C150
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisDeviceControlHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x140010100 (-ndisDeviceControlHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     Feature_NDPQualityWinter26__private_IsEnabledDeviceUsageNoInline @ 0x140094BEC (Feature_NDPQualityWinter26__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall NdisWdfDeviceControlIrpHandler(struct _IRP *a1)
{
  void *FsContext; // rdi
  int v3; // edx
  unsigned int v5; // ebx

  FsContext = a1->Tail.Overlay.CurrentStackLocation->FileObject->FsContext;
  if ( !(unsigned int)Feature_NDPQualityWinter26__private_IsEnabledDeviceUsageNoInline() )
    return ndisDeviceControlHandler(
             *(struct _DEVICE_OBJECT **)FsContext,
             *((struct _NDIS_MINIPORT_BLOCK **)FsContext + 1),
             a1);
  if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)FsContext + 11) )
  {
    v5 = ndisDeviceControlHandler(
           *(struct _DEVICE_OBJECT **)FsContext,
           *((struct _NDIS_MINIPORT_BLOCK **)FsContext + 1),
           a1);
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)FsContext + 11);
    return v5;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v3) = 2;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v3,
        13,
        124,
        (struct _GUID *)&WPP_7bde6af50eab317a73c01e14d588f0c1_Traceguids,
        (char)FsContext);
    }
    a1->IoStatus.Status = -1071448040;
    IofCompleteRequest(a1, 2);
    return 3223519256LL;
  }
}
