/*
 * XREFs of ?ndisStartDeviceWorkItem@@YAXPEAX@Z @ 0x140004BE0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisStartDeviceSynchronous@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1400053C0 (-ndisStartDeviceSynchronous@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x14000BC50 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 */

void __fastcall ndisStartDeviceWorkItem(_QWORD *P)
{
  struct _NDIS_MINIPORT_BLOCK *v1; // rbx
  struct _IRP *v3; // rdi

  v1 = (struct _NDIS_MINIPORT_BLOCK *)P[4];
  v3 = (struct _IRP *)P[5];
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  v3->IoStatus.Status = ndisStartDeviceSynchronous(v1, v3);
  IofCompleteRequest(v3, 0);
  ExFreePoolWithTag(P, 0);
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
}
