/*
 * XREFs of RaidAdapterSurpriseRemovalIrp @ 0x1401B8714
 * Callers:
 *     RaidAdapterPnpIrp @ 0x1400355D8 (RaidAdapterPnpIrp.c)
 * Callees:
 *     RaCallMiniportAdapterControl @ 0x14000EF30 (RaCallMiniportAdapterControl.c)
 *     RaidIsAdapterControlSupported @ 0x140010D4C (RaidIsAdapterControlSupported.c)
 *     RaForwardIrp @ 0x140037074 (RaForwardIrp.c)
 *     _tlgCreate1Sz_wchar_t @ 0x14003F144 (_tlgCreate1Sz_wchar_t.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14003F280 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     RaidAdapterDisableDeviceInterface @ 0x14004A524 (RaidAdapterDisableDeviceInterface.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     RaidAdapterDisableMFNDInterface @ 0x140060F64 (RaidAdapterDisableMFNDInterface.c)
 *     RaidAdapterDisableNonPoFxMiniportInterface @ 0x140060F9C (RaidAdapterDisableNonPoFxMiniportInterface.c)
 *     RaidAdapterDisableRpmbInterface @ 0x140061040 (RaidAdapterDisableRpmbInterface.c)
 *     RaidAdapterMarkChildrenMissing @ 0x1400642F0 (RaidAdapterMarkChildrenMissing.c)
 *     RaidReleaseAdapterRemoveLockAndWait @ 0x14006DC48 (RaidReleaseAdapterRemoveLockAndWait.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     RaidAdapterReleaseResources @ 0x140185C48 (RaidAdapterReleaseResources.c)
 */

NTSTATUS __fastcall RaidAdapterSurpriseRemovalIrp(__int64 a1, IRP *a2)
{
  int v2; // r13d
  int v3; // r12d
  char v4; // r15
  __int32 v7; // esi
  __int64 v8; // rcx
  const wchar_t *v10; // rdx
  const wchar_t *v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  ULONG Status; // [rsp+20h] [rbp-B9h]
  char v16; // [rsp+30h] [rbp-A9h] BYREF
  char v17; // [rsp+31h] [rbp-A8h] BYREF
  char v18; // [rsp+32h] [rbp-A7h] BYREF
  int v19; // [rsp+34h] [rbp-A5h] BYREF
  int v20; // [rsp+38h] [rbp-A1h] BYREF
  GUID v21; // [rsp+40h] [rbp-99h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v22; // [rsp+50h] [rbp-89h] BYREF
  __int64 v23; // [rsp+70h] [rbp-69h]
  __int64 v24; // [rsp+78h] [rbp-61h]
  int *v25; // [rsp+80h] [rbp-59h]
  __int64 v26; // [rsp+88h] [rbp-51h]
  char v27[16]; // [rsp+90h] [rbp-49h] BYREF
  char *v28; // [rsp+A0h] [rbp-39h]
  __int64 v29; // [rsp+A8h] [rbp-31h]
  char v30[16]; // [rsp+B0h] [rbp-29h] BYREF
  char *v31; // [rsp+C0h] [rbp-19h]
  __int64 v32; // [rsp+C8h] [rbp-11h]
  char *v33; // [rsp+D0h] [rbp-9h]
  __int64 v34; // [rsp+D8h] [rbp-1h]
  int *v35; // [rsp+E0h] [rbp+7h]
  __int64 v36; // [rsp+E8h] [rbp+Fh]

  v2 = *(_DWORD *)(a1 + 56);
  v3 = 0;
  v4 = 0;
  v7 = _InterlockedExchange((volatile __int32 *)(a1 + 88), 5);
  if ( (unsigned int)(v7 - 5) > 1 )
  {
    RaidAdapterDisableDeviceInterface(a1);
    RaidAdapterDisableMFNDInterface(a1);
    RaidAdapterDisableNonPoFxMiniportInterface((struct _UNICODE_STRING *)a1);
    RaidAdapterDisableRpmbInterface(a1);
    if ( RaidIsAdapterControlSupported(a1 + 376, 16) )
    {
      v3 = RaCallMiniportAdapterControl(a1 + 376);
      v4 = 1;
    }
    RaidReleaseAdapterRemoveLockAndWait(a1);
    RaidAdapterMarkChildrenMissing(a1);
    RaidAdapterReleaseResources(a1, (__int64)a2);
  }
  if ( StorEtwLoggingEnabled )
  {
    v21 = 0LL;
    IoGetActivityIdIrp(a2, &v21);
    if ( (byte_140173442 & 0x20) != 0 )
    {
      Status = a2->IoStatus.Status;
      McTemplateK0pd_EtwWriteTransfer(v8, &EventPnpRequestComplete, &v21, a2, Status);
    }
  }
  if ( (unsigned int)dword_140172178 > 5
    && (qword_140172188 & 0x400000000000LL) != 0
    && (qword_140172190 & 0x400000000000LL) == qword_140172190 )
  {
    v10 = *(const wchar_t **)(a1 + 4784);
    v23 = a1 + 5128;
    v24 = 16LL;
    v25 = &v19;
    v19 = v2;
    v26 = 4LL;
    tlgCreate1Sz_wchar_t((__int64)v27, v10);
    v11 = *(const wchar_t **)(a1 + 4792);
    v16 = *(_BYTE *)(a1 + 4340);
    v28 = &v16;
    v29 = 1LL;
    tlgCreate1Sz_wchar_t((__int64)v30, v11);
    v17 = v7;
    v31 = &v17;
    v32 = 1LL;
    v33 = &v18;
    v35 = &v20;
    v18 = v4;
    v34 = 1LL;
    v20 = v3;
    v36 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer(v12, (unsigned __int8 *)dword_1401600A4, v13, v14, 0xAu, &v22);
  }
  return RaForwardIrp(*(struct _DEVICE_OBJECT **)(a1 + 24), a2);
}
