/*
 * XREFs of IommupHvGetDeviceSvmCapabilities @ 0x1405A0BD8
 * Callers:
 *     IommupMapDeviceInternal @ 0x14059F814 (IommupMapDeviceInternal.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IommupHvGetDeviceSvmCapabilities(__int64 a1, _QWORD *a2, int *a3)
{
  int v3; // ebx
  __int64 v6; // rax
  __int64 result; // rax
  char v8; // cl
  __int128 v9; // [rsp+20h] [rbp-38h] BYREF

  v3 = 0;
  v9 = 0LL;
  if ( !HalpHvCpuManager )
  {
    v6 = *(_QWORD *)&IommuInterfaceStateChangeCallbackPushLock.CurrentRunTime;
    *a3 = 196608;
    *a2 = v6;
    return 0LL;
  }
  result = guard_dispatch_icall_no_overrides(a1, &v9);
  if ( (int)result >= 0 )
  {
    v8 = v9;
    if ( (v9 & 1) != 0 && DWORD1(v9) >= LODWORD(IommuInterfaceStateChangeCallbackPushLock.KernelStack) )
    {
      *a2 = *(_QWORD *)&IommuInterfaceStateChangeCallbackPushLock.CurrentRunTime + ((unsigned __int64)DWORD2(v9) << 6);
      *a3 = 0;
      if ( (v8 & 2) != 0 )
      {
        v3 = 0x20000;
        *a3 = 0x20000;
      }
      if ( (v8 & 4) != 0 )
        *a3 = v3 | 0x10000;
      return 0LL;
    }
    return 3221225659LL;
  }
  return result;
}
