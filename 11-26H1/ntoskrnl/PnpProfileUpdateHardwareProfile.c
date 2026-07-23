/*
 * XREFs of PnpProfileUpdateHardwareProfile @ 0x1407B00DC
 * Callers:
 *     PpProfileCancelTransitioningDock @ 0x1407B0358 (PpProfileCancelTransitioningDock.c)
 *     PpProfileCommitTransitioningDock @ 0x1407B0404 (PpProfileCommitTransitioningDock.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x1402775E0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402782B0 (KeReleaseGuardedMutex.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwSetValueKey @ 0x140728BC0 (ZwSetValueKey.c)
 *     IopExecuteHardwareProfileChange @ 0x1407BB5B0 (IopExecuteHardwareProfileChange.c)
 *     IopOpenRegistryKeyEx @ 0x1409DC0A0 (IopOpenRegistryKeyEx.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpProfileUpdateHardwareProfile(__int64 a1)
{
  __int64 Pool2; // rax
  char *v3; // rdi
  __int64 *v4; // rdx
  char *v5; // rbx
  __int64 v6; // rax
  int v7; // ecx
  unsigned int v8; // ebx
  UNICODE_STRING ValueName; // [rsp+30h] [rbp-10h] BYREF
  HANDLE KeyHandle; // [rsp+68h] [rbp+28h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp+30h] BYREF
  HANDLE v13; // [rsp+78h] [rbp+38h] BYREF

  v13 = 0LL;
  KeyHandle = 0LL;
  Handle = 0LL;
  *(_DWORD *)(&ValueName.MaximumLength + 1) = 0;
  ExAcquireFastMutex(&PiProfileDeviceListLock);
  *(_DWORD *)&ValueName.Length = 8126586;
  ValueName.Buffer = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\IDConfigDB";
  if ( (int)IopOpenRegistryKeyEx(&Handle, 0LL, &ValueName, 131097LL) >= 0 )
  {
    ValueName.Buffer = (wchar_t *)L"CurrentDockInfo";
    *(_DWORD *)&ValueName.Length = 2097182;
    if ( (int)IopOpenRegistryKeyEx(&KeyHandle, Handle, &ValueName, 131103LL) >= 0 )
    {
      ValueName.Buffer = L"EjectableDocks";
      *(_DWORD *)&ValueName.Length = 1966108;
      ZwSetValueKey(KeyHandle, &ValueName, 0, 4u, &PiProfileDeviceCount, 4u);
      ZwClose(KeyHandle);
    }
    ZwClose(Handle);
  }
  Pool2 = ExAllocatePool2(0x40uLL);
  v3 = (char *)Pool2;
  if ( Pool2 )
  {
    v4 = (__int64 *)PiProfileDeviceListHead;
    v5 = (char *)Pool2;
    while ( v4 != &PiProfileDeviceListHead )
    {
      v6 = v4[2];
      if ( v6 )
      {
        *(_QWORD *)v5 = v6;
        v5 += 8;
      }
      v4 = (__int64 *)*v4;
    }
    KeReleaseGuardedMutex(&PiProfileDeviceListLock);
    if ( v5 == v3 )
    {
      *(_QWORD *)v5 = 0LL;
      v5 += 8;
    }
    *(_QWORD *)v5 = 0LL;
    v8 = IopExecuteHardwareProfileChange(v7, (_DWORD)v3, (v5 - v3) >> 3, (unsigned int)&v13, a1);
    if ( v13 )
      ZwClose(v13);
    ExFreePoolWithTag(v3, 0);
  }
  else
  {
    KeReleaseGuardedMutex(&PiProfileDeviceListLock);
    return (unsigned int)-1073741670;
  }
  return v8;
}
