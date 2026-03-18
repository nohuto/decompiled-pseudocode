/*
 * XREFs of USBDInternal_BuildServicePath @ 0x1400764DC
 * Callers:
 *     USBDInternal_QueryUsbVerifierSettings @ 0x140076168 (USBDInternal_QueryUsbVerifierSettings.c)
 * Callees:
 *     RtlStringCbCatW @ 0x1400ABBF4 (RtlStringCbCatW.c)
 *     memset @ 0x1400ACFC0 (memset.c)
 *     memmove @ 0x1400AD500 (memmove.c)
 */

__int64 __fastcall USBDInternal_BuildServicePath(
        _DEVICE_OBJECT *DeviceObject,
        wchar_t **RelativeServicePath,
        ULONG PoolTag)
{
  _DRIVER_OBJECT *DriverObject; // rbx
  void *v4; // rdi
  unsigned int v7; // ebx
  unsigned int v8; // r13d
  const void *v9; // r14
  PVOID PoolWithTag; // rax
  const wchar_t *v11; // r8
  int v12; // eax
  __int64 result; // rax

  DriverObject = DeviceObject->DriverObject;
  v4 = 0LL;
  if ( DriverObject->DriverName.Length > 0x10u
    && RtlCompareMemory(DriverObject->DriverName.Buffer, L"\\Driver\\", 0x10uLL) == 16 )
  {
    v8 = DriverObject->DriverName.Length - 16;
    v9 = DriverObject->DriverName.Buffer + 8;
    PoolWithTag = ExAllocatePoolWithTag(g_NonPagedPoolType, v8 + 24, PoolTag);
    v4 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, v8 + 24);
      memmove(v4, v9, v8);
      v12 = RtlStringCbCatW((wchar_t *)v4, v8 + 24, v11);
      v7 = v12;
      if ( v12 >= 0 )
      {
        v7 = 0;
      }
      else
      {
        if ( g_EnableDbgPrints )
          DbgPrintEx(0x4Du, 0, "RtlStringCchCatW failed with status 0x%x", v12);
        ExFreePoolWithTag(v4, PoolTag);
        v4 = 0LL;
      }
    }
    else
    {
      v7 = -1073741670;
      if ( g_EnableDbgPrints )
        DbgPrintEx(0x4Du, 0, "Couldnt allocate servicePath of size %d\n", v8 + 24);
    }
  }
  else
  {
    if ( g_EnableDbgPrints )
      DbgPrintEx(0x4Du, 0, "Unexpected Driver name, Drvobj 0x%p\n", DriverObject);
    v7 = -1073741595;
  }
  result = v7;
  *RelativeServicePath = (wchar_t *)v4;
  return result;
}
