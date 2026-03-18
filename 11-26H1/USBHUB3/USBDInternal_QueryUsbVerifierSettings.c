/*
 * XREFs of USBDInternal_QueryUsbVerifierSettings @ 0x140043F8C
 * Callers:
 *     USBD_CreateHandle @ 0x140044304 (USBD_CreateHandle.c)
 * Callees:
 *     USBDInternal_BuildServicePath @ 0x140043BFC (USBDInternal_BuildServicePath.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 *     memset @ 0x140046BC0 (memset.c)
 */

void __fastcall USBDInternal_QueryUsbVerifierSettings(__int64 a1, __int64 a2)
{
  __int64 v3; // r12
  struct _DRIVER_OBJECT *v4; // rcx
  PVOID v5; // r14
  PVOID SystemRoutineAddress; // rax
  PVOID v8; // r15
  int v9; // eax
  int v10; // eax
  _QWORD *PoolWithTag; // rax
  _QWORD *v12; // rsi
  __int64 v13; // rax
  HANDLE v14; // rdi
  PVOID v15; // rax
  int v16; // eax
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-20h] BYREF
  struct _UNICODE_STRING SystemRoutineName; // [rsp+40h] [rbp-10h] BYREF
  PVOID P; // [rsp+80h] [rbp+30h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp+38h] BYREF

  v3 = a2 + 72;
  v4 = *(struct _DRIVER_OBJECT **)(a1 + 8);
  v5 = 0LL;
  P = 0LL;
  Handle = 0LL;
  DestinationString = 0LL;
  *(_DWORD *)(a2 + 72) = MmIsDriverVerifying(v4);
  RtlInitUnicodeString(&DestinationString, L"IoOpenDriverRegistryKey");
  SystemRoutineAddress = MmGetSystemRoutineAddress(&DestinationString);
  v8 = SystemRoutineAddress;
  if ( SystemRoutineAddress )
  {
    v9 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64, _QWORD, HANDLE *))SystemRoutineAddress)(
           *(_QWORD *)(a1 + 8),
           0LL,
           1LL,
           0LL,
           &Handle);
    if ( v9 < 0 )
    {
      if ( g_EnableDbgPrints )
        DbgPrintEx(0x4Du, 0, "IoOpenDriverRegistryKey failed with 0x%x\n", v9);
      goto LABEL_19;
    }
    goto LABEL_6;
  }
  v10 = USBDInternal_BuildServicePath(a1, &P);
  v5 = P;
  if ( v10 >= 0 )
  {
LABEL_6:
    PoolWithTag = ExAllocatePoolWithTag(PoolType, 0x1C0uLL, 0x68334855u);
    v12 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x1C0uLL);
      v12[3] = v3;
      *v12 = USBD_VerifierSettingsCallback;
      v12[2] = L"UsbVerifierEnabled";
      *((_DWORD *)v12 + 8) = 4;
      *((_DWORD *)v12 + 12) = 4;
      v12[5] = v3;
      v12[9] = L"UsbVerifierFailRegistration";
      v12[10] = a2 + 76;
      v12[12] = a2 + 76;
      v12[7] = USBD_VerifierSettingsCallback;
      *((_DWORD *)v12 + 22) = 4;
      *((_DWORD *)v12 + 26) = 4;
      v12[16] = L"UsbVerifierFailChainedMdlSupport";
      v12[17] = a2 + 80;
      v12[19] = a2 + 80;
      v12[14] = USBD_VerifierSettingsCallback;
      *((_DWORD *)v12 + 36) = 4;
      *((_DWORD *)v12 + 40) = 4;
      v12[23] = L"UsbVerifierFailStaticStreamSupport";
      v12[24] = a2 + 84;
      v12[26] = a2 + 84;
      v12[21] = USBD_VerifierSettingsCallback;
      *((_DWORD *)v12 + 50) = 4;
      *((_DWORD *)v12 + 54) = 4;
      v12[30] = L"UsbVerifierStaticStreamCountOverride";
      v12[31] = a2 + 88;
      v12[33] = a2 + 88;
      v12[28] = USBD_VerifierSettingsCallback;
      *((_DWORD *)v12 + 64) = 4;
      *((_DWORD *)v12 + 68) = 4;
      v12[37] = L"UsbVerifierFailEnableStaticStreams";
      v12[38] = a2 + 92;
      v12[40] = a2 + 92;
      v12[35] = USBD_VerifierSettingsCallback;
      *((_DWORD *)v12 + 78) = 4;
      *((_DWORD *)v12 + 82) = 4;
      v12[44] = L"UsbVerifierFailSecureTransferSupport";
      v13 = a2 + 160;
      v12[42] = USBD_VerifierSettingsCallback;
      v14 = v5;
      *((_DWORD *)v12 + 92) = 4;
      *((_DWORD *)v12 + 96) = 4;
      v12[45] = v13;
      v12[47] = v13;
      if ( v8 )
        v14 = Handle;
      SystemRoutineName = 0LL;
      RtlInitUnicodeString(&SystemRoutineName, L"RtlQueryRegistryValuesEx");
      v15 = MmGetSystemRoutineAddress(&SystemRoutineName);
      if ( !v15 )
        v15 = RtlQueryRegistryValues;
      v16 = ((__int64 (__fastcall *)(_QWORD, HANDLE, _QWORD *, _QWORD, _QWORD))v15)(
              v8 != 0LL ? 0x40000000 : 1,
              v14,
              v12,
              0LL,
              0LL);
      if ( v16 < 0 && g_EnableDbgPrints )
        DbgPrintEx(0x4Du, 0, "RtlQueryRegistrySettings failed, ignoring this error0x%x\n", v16);
      ExFreePoolWithTag(v12, 0x68334855u);
    }
    else if ( g_EnableDbgPrints )
    {
      DbgPrintEx(0x4Du, 0, "ExAllocatePoolWithTag for USBDInternal_QueryUsbVerifierSettings failed\n");
    }
  }
  if ( v5 )
    ExFreePoolWithTag(v5, 0x68334855u);
LABEL_19:
  if ( Handle )
    ZwClose(Handle);
}
