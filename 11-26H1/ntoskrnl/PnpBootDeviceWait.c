/*
 * XREFs of PnpBootDeviceWait @ 0x1405DADA4
 * Callers:
 *     IopMountBootLayerCallout @ 0x140CC3D20 (IopMountBootLayerCallout.c)
 *     IopInitializeBootDrivers @ 0x140CC5374 (IopInitializeBootDrivers.c)
 *     PipWaitCriticalDevices @ 0x140CC9754 (PipWaitCriticalDevices.c)
 *     VhdInitialize @ 0x140D08C34 (VhdInitialize.c)
 *     IopMountCompositeLayer @ 0x140D09874 (IopMountCompositeLayer.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x1402461A0 (KeDelayExecutionThread.c)
 *     HeadlessKernelAddLogEntry @ 0x1404E6FF8 (HeadlessKernelAddLogEntry.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     PnpLogBootFailuresSel @ 0x1405DCA20 (PnpLogBootFailuresSel.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     IopOpenRegistryKeyEx @ 0x1409DC0A0 (IopOpenRegistryKeyEx.c)
 *     IopGetRegistryValue @ 0x140A11398 (IopGetRegistryValue.c)
 *     RtlFreeAnsiString @ 0x140A169F0 (RtlFreeAnsiString.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpBootDeviceWait(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  int v4; // edi
  ULONG_PTR BugCheckParameter4; // r14
  unsigned int v8; // ebx
  int RegistryValue; // esi
  int v10; // eax
  ULONG_PTR v11; // rbx
  PVOID P; // [rsp+30h] [rbp-30h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+38h] [rbp-28h] BYREF
  _QWORD v15[3]; // [rsp+48h] [rbp-18h] BYREF
  HANDLE Handle; // [rsp+A0h] [rbp+40h] BYREF

  v4 = 0;
  BugCheckParameter4 = a2;
  P = 0LL;
  Handle = 0LL;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  v15[1] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\PnP";
  v15[0] = 7209068LL;
  v8 = 0;
  RegistryValue = IopOpenRegistryKeyEx(&Handle, 0LL, v15, 131097LL);
  if ( RegistryValue >= 0 )
  {
    RegistryValue = IopGetRegistryValue(Handle);
    if ( RegistryValue >= 0 )
    {
      if ( *((_DWORD *)P + 3) == 4 )
      {
        v8 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
        if ( v8 >= 0xC8 )
        {
          if ( v8 > 0x2BF20 )
            v8 = 180000;
        }
        else
        {
          v8 = 0;
        }
      }
      else
      {
        RegistryValue = -1073741823;
      }
      ExFreePoolWithTag(P, 0);
    }
    ZwClose(Handle);
  }
  P = (PVOID)-2000000LL;
  if ( RegistryValue >= 0 )
    v4 = v8;
  while ( 1 )
  {
    RtlFreeAnsiString(&UnicodeString);
    v10 = guard_dispatch_icall_no_overrides(a1, a4);
    v11 = v10;
    if ( v10 >= 0 )
      break;
    if ( v4 <= 0 )
    {
      HeadlessKernelAddLogEntry();
      PnpLogBootFailuresSel();
      KeBugCheckEx(0x7Bu, (ULONG_PTR)&UnicodeString, v11, 0LL, BugCheckParameter4);
    }
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&P);
    v4 -= 200;
  }
  RtlFreeAnsiString(&UnicodeString);
  return 0LL;
}
