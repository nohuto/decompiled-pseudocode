/*
 * XREFs of NdisDeregisterDeviceEx @ 0x1400753C0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x14000BC50 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 */

void __stdcall NdisDeregisterDeviceEx(NDIS_HANDLE NdisDeviceHandle)
{
  char *v2; // rcx
  char v3; // al
  KSPIN_LOCK *v4; // rdi
  KIRQL v5; // al
  NDIS_HANDLE *v6; // r9
  NDIS_HANDLE *v7; // rdx
  __int64 v8; // rdi
  KSPIN_LOCK *v9; // rcx

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      1,
      115,
      (struct _GUID *)&WPP_7bde6af50eab317a73c01e14d588f0c1_Traceguids,
      (char)NdisDeviceHandle);
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  v2 = (char *)*((_QWORD *)NdisDeviceHandle + 3);
  v3 = *v2;
  if ( *v2 == 2 )
  {
    v4 = (KSPIN_LOCK *)(v2 + 392);
    v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v2 + 49);
    v6 = (NDIS_HANDLE *)*((_QWORD *)NdisDeviceHandle + 1);
    if ( v6[1] == (char *)NdisDeviceHandle + 8 )
    {
      v7 = (NDIS_HANDLE *)*((_QWORD *)NdisDeviceHandle + 2);
      if ( *v7 == (char *)NdisDeviceHandle + 8 )
      {
LABEL_17:
        v9 = v4;
        goto LABEL_18;
      }
    }
    goto LABEL_10;
  }
  if ( v3 == 4 )
  {
    v4 = (KSPIN_LOCK *)(v2 + 40);
LABEL_8:
    v5 = KeAcquireSpinLockRaiseToDpc(v4);
    v6 = (NDIS_HANDLE *)*((_QWORD *)NdisDeviceHandle + 1);
    if ( v6[1] != (char *)NdisDeviceHandle + 8 )
      goto LABEL_10;
    v7 = (NDIS_HANDLE *)*((_QWORD *)NdisDeviceHandle + 2);
    if ( *v7 != (char *)NdisDeviceHandle + 8 )
      goto LABEL_10;
    goto LABEL_17;
  }
  if ( v3 != 17 )
  {
    if ( v3 != -86 )
      goto LABEL_19;
    v4 = (KSPIN_LOCK *)((char *)IoGetDriverObjectExtension(**((PDRIVER_OBJECT **)v2 + 1), (PVOID)0x4E4D4944) + 392);
    goto LABEL_8;
  }
  v8 = *((_QWORD *)v2 + 470);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v8 + 392));
  v6 = (NDIS_HANDLE *)*((_QWORD *)NdisDeviceHandle + 1);
  if ( v6[1] != (char *)NdisDeviceHandle + 8
    || (v7 = (NDIS_HANDLE *)*((_QWORD *)NdisDeviceHandle + 2), *v7 != (char *)NdisDeviceHandle + 8) )
  {
LABEL_10:
    __fastfail(3u);
  }
  v9 = (KSPIN_LOCK *)(v8 + 392);
LABEL_18:
  *v7 = v6;
  v6[1] = v7;
  KeReleaseSpinLock(v9, v5);
LABEL_19:
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  IoDeleteSymbolicLink((PUNICODE_STRING)NdisDeviceHandle + 18);
  IoDeleteDevice(*((PDEVICE_OBJECT *)NdisDeviceHandle + 4));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      1,
      116,
      (struct _GUID *)&WPP_7bde6af50eab317a73c01e14d588f0c1_Traceguids,
      (char)NdisDeviceHandle);
}
