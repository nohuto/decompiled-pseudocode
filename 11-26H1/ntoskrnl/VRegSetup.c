/*
 * XREFs of VRegSetup @ 0x1408AB680
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PspStorageAllocSlot @ 0x140805414 (PspStorageAllocSlot.c)
 *     VrpInitializeLoadedDifferencingHives @ 0x1408AC3E8 (VrpInitializeLoadedDifferencingHives.c)
 *     ObSetSecurityObjectByPointer @ 0x1408F2970 (ObSetSecurityObjectByPointer.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x140917A20 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     IoCreateDevice @ 0x14091B9C0 (IoCreateDevice.c)
 *     RtlpQueryRegistryValues @ 0x140A10184 (RtlpQueryRegistryValues.c)
 *     ObCreateObjectTypeEx @ 0x140A67030 (ObCreateObjectTypeEx.c)
 */

__int64 __fastcall VRegSetup(PDRIVER_OBJECT DriverObject)
{
  NTSTATUS v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // r8
  struct _KLOCK_ENTRIES *v8; // r9
  __int64 result; // rax
  ULONG DeviceCharacteristics; // [rsp+20h] [rbp-69h]
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-49h] BYREF
  UNICODE_STRING SourceString; // [rsp+50h] [rbp-39h] BYREF
  __int16 Src; // [rsp+60h] [rbp-29h] BYREF
  char v14; // [rsp+62h] [rbp-27h]
  int v15; // [rsp+68h] [rbp-21h]
  int v16; // [rsp+6Ch] [rbp-1Dh]
  int v17; // [rsp+70h] [rbp-19h]
  int v18; // [rsp+74h] [rbp-15h]
  int v19; // [rsp+78h] [rbp-11h]
  int v20; // [rsp+7Ch] [rbp-Dh]
  int v21; // [rsp+84h] [rbp-5h]
  int v22; // [rsp+88h] [rbp-1h]
  __int64 (__fastcall *v23)(); // [rsp+A8h] [rbp+1Fh]

  DestinationString = 0LL;
  SourceString = 0LL;
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_140E0A5C0, 0LL, 0LL);
  RtlpQueryRegistryValues(
    -2147483646,
    (int)L"Session Manager\\Configuration Manager",
    (int)&VrpRegistryValuesTable,
    0,
    DeviceCharacteristics,
    1);
  RtlInitUnicodeString(&DestinationString, L"\\Device\\VRegDriver");
  v2 = IoCreateDevice(
         DriverObject,
         0,
         &DestinationString,
         0x22u,
         0x100u,
         0,
         (PDEVICE_OBJECT *)&WheapPfaLock.ExtendedFeatureDisableMask);
  if ( v2 < 0 )
    KeBugCheckEx(0x51u, 0x1EuLL, v2, 1uLL, 0LL);
  WheapPfaLock.KernelShadowStackInitial = DriverObject;
  gLoadedDiffHivesLock.StackLimit = 0LL;
  v3 = ObSetSecurityObjectByPointer(WheapPfaLock.ExtendedFeatureDisableMask, 12LL, &VrpHardCodedSdBlob);
  if ( v3 < 0 )
    KeBugCheckEx(0x51u, 0x1EuLL, v3, 2uLL, 0LL);
  *(_DWORD *)(WheapPfaLock.ExtendedFeatureDisableMask + 48) &= ~0x80u;
  DriverObject->DriverUnload = (PDRIVER_UNLOAD)VrpRegistryUnload;
  DriverObject->MajorFunction[0] = (PDRIVER_DISPATCH)&VrpRegistryDispatch;
  DriverObject->MajorFunction[2] = (PDRIVER_DISPATCH)&VrpRegistryDispatch;
  DriverObject->MajorFunction[14] = (PDRIVER_DISPATCH)&VrpIoctlDeviceDispatch;
  RtlInitUnicodeString(&SourceString, L"VRegConfigurationContext");
  memset_0(&Src, 0, 0x78uLL);
  v14 |= 4u;
  Src = 120;
  v16 = 0x20000;
  v17 = 0x20000;
  v18 = 0x20000;
  v15 = 256;
  v19 = 983040;
  v20 = 983040;
  v23 = VrpJobContextDelete;
  v21 = 1;
  v22 = 96;
  v4 = ObCreateObjectTypeEx(&SourceString, &Src, (__int64)&WheapPfaLock.KernelShadowStackLimit);
  if ( v4 < 0 )
    KeBugCheckEx(0x51u, 0x1EuLL, v4, 4uLL, 0LL);
  v5 = VrpInitializeLoadedDifferencingHives();
  if ( v5 < 0 )
    KeBugCheckEx(0x51u, 0x1EuLL, v5, 5uLL, 0LL);
  result = PspStorageAllocSlot((ULONG *)&gLoadedDiffHivesLock.QuantumTarget, v6, v7, v8);
  if ( (int)result < 0 )
    KeBugCheckEx(0x51u, 0x1EuLL, (int)result, 6uLL, 0LL);
  return result;
}
