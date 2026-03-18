/*
 * XREFs of AcpiQueryPciBusInterface @ 0x1400C2130
 * Callers:
 *     ACPIDetectFilterDevices @ 0x14001D41C (ACPIDetectFilterDevices.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x140024510 (ACPIInternalGetDeviceExtension.c)
 *     __security_check_cookie @ 0x1400722F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 *     memset @ 0x140072740 (memset.c)
 *     ACPIInternalSendSynchronousIrp @ 0x1400C27F8 (ACPIInternalSendSynchronousIrp.c)
 */

__int64 __fastcall AcpiQueryPciBusInterface(ULONG_PTR BugCheckParameter3)
{
  __int64 DeviceExtension; // rbx
  __int64 Pool2; // rdi
  struct _DEVICE_OBJECT *AttachedDeviceReference; // r14
  int v5; // esi
  __int64 v7; // rcx
  _QWORD v8[10]; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE v9[256]; // [rsp+88h] [rbp-80h] BYREF

  LODWORD(v8[0]) = 0;
  memset(&v8[1], 0, 0x48uLL);
  memset(v9, 0, sizeof(v9));
  DeviceExtension = ACPIInternalGetDeviceExtension(BugCheckParameter3);
  if ( *(_QWORD *)(DeviceExtension + 80) )
    return 0LL;
  Pool2 = ExAllocatePool2(64LL, 64LL, 1181770561LL);
  if ( Pool2 )
  {
    AttachedDeviceReference = IoGetAttachedDeviceReference(*(PDEVICE_OBJECT *)(DeviceExtension + 784));
    if ( AttachedDeviceReference )
    {
      LOWORD(v8[1]) = 2075;
      v8[2] = &GUID_BUS_INTERFACE_STANDARD;
      LODWORD(v8[3]) = 65600;
      v8[5] = v8;
      v8[4] = Pool2;
      v5 = ACPIInternalSendSynchronousIrp(AttachedDeviceReference);
      ObfDereferenceObject(AttachedDeviceReference);
      if ( v5 >= 0 )
      {
        *(_QWORD *)(DeviceExtension + 80) = Pool2;
        if ( (_InterlockedCompareExchange((volatile signed __int32 *)(DeviceExtension + 88), 0, 0) & 0x100) == 0 )
        {
          _InterlockedExchange((volatile __int32 *)(DeviceExtension + 100), v8[0]);
          _InterlockedOr((volatile signed __int32 *)(DeviceExtension + 88), 0x100u);
        }
        if ( (*(unsigned int (__fastcall **)(_QWORD, _QWORD, _BYTE *, _QWORD, int))(Pool2 + 56))(
               *(_QWORD *)(Pool2 + 8),
               0LL,
               v9,
               0LL,
               26) == 26
          && (v9[14] & 0x7F) == 1
          && v9[25] )
        {
          v7 = v9[25] | v8[0] & 0xFFFF00;
          if ( (_InterlockedCompareExchange((volatile signed __int32 *)(DeviceExtension + 88), 0, 0) & 0x200) == 0 )
          {
            _InterlockedExchange((volatile __int32 *)(DeviceExtension + 104), v7);
            _InterlockedOr((volatile signed __int32 *)(DeviceExtension + 88), 0x200u);
          }
          (*(void (__fastcall **)(__int64))(PmHalDispatchTable + 72))(v7);
        }
        return (unsigned int)v5;
      }
    }
    else
    {
      v5 = -1073741823;
    }
    ExFreePoolWithTag((PVOID)Pool2, 0x46706341u);
    return (unsigned int)v5;
  }
  return 3221225626LL;
}
