/*
 * XREFs of USBDInternal_QueryUsbVerifierSettings @ 0x140019A48
 * Callers:
 *     USBD_CreateHandle @ 0x140019E3C (USBD_CreateHandle.c)
 * Callees:
 *     USBDInternal_BuildServicePath @ 0x14001976C (USBDInternal_BuildServicePath.c)
 *     _guard_dispatch_icall @ 0x14001C6E0 (_guard_dispatch_icall.c)
 *     memset @ 0x14001CAC0 (memset.c)
 */

void __fastcall USBDInternal_QueryUsbVerifierSettings(__int64 a1, __int64 a2, ULONG a3)
{
  __int64 v4; // r13
  struct _DRIVER_OBJECT *v5; // rcx
  PVOID v6; // r14
  PVOID SystemRoutineAddress; // rax
  PVOID v10; // r12
  int v11; // eax
  int v12; // eax
  _QWORD *PoolWithTag; // rax
  _QWORD *v14; // rsi
  __int64 v15; // rax
  HANDLE v16; // rdi
  PVOID v17; // rax
  int v18; // eax
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-20h] BYREF
  struct _UNICODE_STRING SystemRoutineName; // [rsp+40h] [rbp-10h] BYREF
  PVOID P; // [rsp+90h] [rbp+40h] BYREF
  HANDLE Handle; // [rsp+98h] [rbp+48h] BYREF

  v4 = a2 + 72;
  v5 = *(struct _DRIVER_OBJECT **)(a1 + 8);
  v6 = 0LL;
  P = 0LL;
  Handle = 0LL;
  DestinationString = 0LL;
  *(_DWORD *)(a2 + 72) = MmIsDriverVerifying(v5);
  RtlInitUnicodeString(&DestinationString, L"IoOpenDriverRegistryKey");
  SystemRoutineAddress = MmGetSystemRoutineAddress(&DestinationString);
  v10 = SystemRoutineAddress;
  if ( SystemRoutineAddress )
  {
    v11 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64, _QWORD, HANDLE *))SystemRoutineAddress)(
            *(_QWORD *)(a1 + 8),
            0LL,
            1LL,
            0LL,
            &Handle);
    if ( v11 < 0 )
    {
      if ( g_EnableDbgPrints )
        DbgPrintEx(0x4Du, 0, "IoOpenDriverRegistryKey failed with 0x%x\n", v11);
      goto LABEL_19;
    }
    goto LABEL_6;
  }
  v12 = USBDInternal_BuildServicePath(a1, &P, a3);
  v6 = P;
  if ( v12 >= 0 )
  {
LABEL_6:
    PoolWithTag = ExAllocatePoolWithTag(PoolType, 0x1C0uLL, a3);
    v14 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x1C0uLL);
      v14[3] = v4;
      *v14 = USBD_VerifierSettingsCallback;
      v14[2] = L"UsbVerifierEnabled";
      *((_DWORD *)v14 + 8) = 4;
      *((_DWORD *)v14 + 12) = 4;
      v14[5] = v4;
      v14[9] = L"UsbVerifierFailRegistration";
      v14[10] = a2 + 76;
      v14[12] = a2 + 76;
      v14[7] = USBD_VerifierSettingsCallback;
      *((_DWORD *)v14 + 22) = 4;
      *((_DWORD *)v14 + 26) = 4;
      v14[16] = L"UsbVerifierFailChainedMdlSupport";
      v14[17] = a2 + 80;
      v14[19] = a2 + 80;
      v14[14] = USBD_VerifierSettingsCallback;
      *((_DWORD *)v14 + 36) = 4;
      *((_DWORD *)v14 + 40) = 4;
      v14[23] = L"UsbVerifierFailStaticStreamSupport";
      v14[24] = a2 + 84;
      v14[26] = a2 + 84;
      v14[21] = USBD_VerifierSettingsCallback;
      *((_DWORD *)v14 + 50) = 4;
      *((_DWORD *)v14 + 54) = 4;
      v14[30] = L"UsbVerifierStaticStreamCountOverride";
      v14[31] = a2 + 88;
      v14[33] = a2 + 88;
      v14[28] = USBD_VerifierSettingsCallback;
      *((_DWORD *)v14 + 64) = 4;
      *((_DWORD *)v14 + 68) = 4;
      v14[37] = L"UsbVerifierFailEnableStaticStreams";
      v14[38] = a2 + 92;
      v14[40] = a2 + 92;
      v14[35] = USBD_VerifierSettingsCallback;
      *((_DWORD *)v14 + 78) = 4;
      *((_DWORD *)v14 + 82) = 4;
      v14[44] = L"UsbVerifierFailSecureTransferSupport";
      v15 = a2 + 160;
      v14[42] = USBD_VerifierSettingsCallback;
      v16 = v6;
      *((_DWORD *)v14 + 92) = 4;
      *((_DWORD *)v14 + 96) = 4;
      v14[45] = v15;
      v14[47] = v15;
      if ( v10 )
        v16 = Handle;
      SystemRoutineName = 0LL;
      RtlInitUnicodeString(&SystemRoutineName, L"RtlQueryRegistryValuesEx");
      v17 = MmGetSystemRoutineAddress(&SystemRoutineName);
      if ( !v17 )
        v17 = RtlQueryRegistryValues;
      v18 = ((__int64 (__fastcall *)(_QWORD, HANDLE, _QWORD *, _QWORD, _QWORD))v17)(
              v10 != 0LL ? 0x40000000 : 1,
              v16,
              v14,
              0LL,
              0LL);
      if ( v18 < 0 && g_EnableDbgPrints )
        DbgPrintEx(0x4Du, 0, "RtlQueryRegistrySettings failed, ignoring this error0x%x\n", v18);
      ExFreePoolWithTag(v14, a3);
    }
    else if ( g_EnableDbgPrints )
    {
      DbgPrintEx(0x4Du, 0, "ExAllocatePoolWithTag for USBDInternal_QueryUsbVerifierSettings failed\n");
    }
  }
  if ( v6 )
    ExFreePoolWithTag(v6, a3);
LABEL_19:
  if ( Handle )
    ZwClose(Handle);
}
