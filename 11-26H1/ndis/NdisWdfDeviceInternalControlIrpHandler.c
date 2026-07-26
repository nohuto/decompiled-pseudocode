/*
 * XREFs of NdisWdfDeviceInternalControlIrpHandler @ 0x1400966C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     Feature_NDPQualityWinter26__private_IsEnabledDeviceUsageNoInline @ 0x140094BEC (Feature_NDPQualityWinter26__private_IsEnabledDeviceUsageNoInline.c)
 *     ?ndisDeviceInternalDispatch@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1400A9914 (-ndisDeviceInternalDispatch@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 */

__int64 __fastcall NdisWdfDeviceInternalControlIrpHandler(struct _IRP *a1)
{
  char *FsContext; // rbx
  int v3; // edx
  unsigned int v4; // ebx
  unsigned int v6; // eax
  struct _EX_RUNDOWN_REF *v7; // rcx

  FsContext = (char *)a1->Tail.Overlay.CurrentStackLocation->FileObject->FsContext;
  if ( !(unsigned int)Feature_NDPQualityWinter26__private_IsEnabledDeviceUsageNoInline() )
    return ndisDeviceInternalDispatch(
             *(struct _DEVICE_OBJECT **)FsContext,
             *((struct _NDIS_MINIPORT_BLOCK **)FsContext + 1),
             a1);
  if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)FsContext + 11) )
  {
    v6 = ndisDeviceInternalDispatch(
           *(struct _DEVICE_OBJECT **)FsContext,
           *((struct _NDIS_MINIPORT_BLOCK **)FsContext + 1),
           a1);
    v7 = (struct _EX_RUNDOWN_REF *)(FsContext + 88);
    v4 = v6;
    ExReleaseRundownProtection(v7);
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
        125,
        (struct _GUID *)&WPP_7bde6af50eab317a73c01e14d588f0c1_Traceguids,
        (char)FsContext);
    }
    v4 = -1071448040;
    a1->IoStatus.Status = -1071448040;
    IofCompleteRequest(a1, 2);
  }
  return v4;
}
