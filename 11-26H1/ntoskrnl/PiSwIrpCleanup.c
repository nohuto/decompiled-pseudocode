/*
 * XREFs of PiSwIrpCleanup @ 0x140A8C048
 * Callers:
 *     PiSwDispatch @ 0x140A8C570 (PiSwDispatch.c)
 *     PiSwIrpStartCreateWorker @ 0x140A8CB08 (PiSwIrpStartCreateWorker.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     IofCompleteRequest @ 0x1403FA1C0 (IofCompleteRequest.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     McTemplateK0zzd_EtwWriteTransfer @ 0x140498338 (McTemplateK0zzd_EtwWriteTransfer.c)
 *     McTemplateK0zz_EtwWriteTransfer @ 0x1405278A0 (McTemplateK0zz_EtwWriteTransfer.c)
 *     _wcsnicmp @ 0x140538B30 (_wcsnicmp.c)
 *     McTemplateK0zzzd_EtwWriteTransfer @ 0x1405DECE8 (McTemplateK0zzzd_EtwWriteTransfer.c)
 *     PiCMDeleteDeviceWorker @ 0x1407B38B4 (PiCMDeleteDeviceWorker.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x14095A580 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PiSwLock @ 0x1409AFD6C (PiSwLock.c)
 *     PiSwCloseDevice @ 0x140A8C244 (PiSwCloseDevice.c)
 *     PiSwCloseDescendants @ 0x140A8DCF8 (PiSwCloseDescendants.c)
 *     PiSwFindSwDevice @ 0x140B25E48 (PiSwFindSwDevice.c)
 */

void __fastcall PiSwIrpCleanup(__int64 a1, __int64 a2, __int64 a3)
{
  IRP *v3; // rsi
  __int64 v5; // rax
  char v6; // di
  wchar_t *v7; // rbp
  __int64 SwDevice; // rax
  _QWORD *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // r8
  const wchar_t *v13; // r9
  const wchar_t *v14; // r8
  const wchar_t *v15; // rdx
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-18h] BYREF

  v3 = 0LL;
  DestinationString = 0LL;
  if ( (byte_140EF412C & 0x40) != 0 )
    McTemplateK0zz_EtwWriteTransfer(
      a1,
      (const EVENT_DESCRIPTOR *)KMPnPEvt_SwDevice_IrpClose_Start,
      a3,
      *(const wchar_t **)(a1 + 8),
      *(const wchar_t **)(a1 + 16));
  PiSwLock();
  if ( !*(_DWORD *)(a1 + 180) )
    goto LABEL_12;
  v5 = *(_QWORD *)(a1 + 112);
  v6 = 0;
  while ( 1 )
  {
    v7 = *(wchar_t **)(v5 + 8);
    if ( wcsnicmp(v7, L"SWD\\", 4uLL) )
      break;
    SwDevice = PiSwFindSwDevice(v7);
    if ( !SwDevice )
      goto LABEL_12;
    if ( !*(_DWORD *)(SwDevice + 180) && (*(_DWORD *)(SwDevice + 4) & 2) == 0 )
      goto LABEL_13;
    v5 = *(_QWORD *)(SwDevice + 112);
  }
  RtlInitUnicodeString(&DestinationString, v7);
  v9 = PnpDeviceObjectFromDeviceInstanceWithTag((__int64)&DestinationString, 0x746C6644u);
  if ( v9 )
    ObfDereferenceObject(v9);
  else
LABEL_12:
    v6 = 1;
LABEL_13:
  v10 = *(_QWORD *)(a1 + 144);
  if ( v10 && _InterlockedExchange64((volatile __int64 *)(v10 + 104), 0LL) )
  {
    v3 = *(IRP **)(a1 + 144);
    *(_QWORD *)(a1 + 144) = 0LL;
  }
  *(_DWORD *)(a1 + 4) &= ~1u;
  if ( v6 )
  {
    PiSwCloseDescendants(a1 + 72, 0LL);
    PiSwCloseDevice(a1);
  }
  ExReleaseResourceLite(&PiSwLockObj);
  KeLeaveCriticalRegion();
  if ( v6 && (*(_DWORD *)(a1 + 204) & 1) != 0 )
  {
    v11 = *(_WORD *)(a1 + 72) <= 2u ? 3221226078LL : (unsigned int)PiCMDeleteDeviceWorker(*(PCWSTR *)(a1 + 80));
    if ( (byte_140EF412C & 0x40) != 0 )
    {
      v13 = &word_140B8A320;
      v14 = &word_140B8A320;
      v15 = &word_140B8A320;
      if ( *(_QWORD *)(a1 + 80) )
        v14 = *(const wchar_t **)(a1 + 80);
      if ( *(_QWORD *)(a1 + 16) )
        v15 = *(const wchar_t **)(a1 + 16);
      if ( *(_QWORD *)(a1 + 8) )
        v13 = *(const wchar_t **)(a1 + 8);
      McTemplateK0zzzd_EtwWriteTransfer(
        v11,
        (const EVENT_DESCRIPTOR *)KMPnPEvt_SwDevice_UninstallDevice,
        (__int64)v14,
        v13,
        v15,
        v14,
        v11);
    }
  }
  if ( v3 )
  {
    v3->IoStatus.Status = -1073741536;
    v3->IoStatus.Information = 0LL;
    IofCompleteRequest(v3, 0);
  }
  if ( (byte_140EF412C & 0x40) != 0 )
    McTemplateK0zzd_EtwWriteTransfer(
      v11,
      (__int64)KMPnPEvt_SwDevice_IrpClose_Stop,
      v12,
      *(const wchar_t **)(a1 + 8),
      *(const wchar_t **)(a1 + 16),
      v6);
}
