/*
 * XREFs of WheaRemoveErrorSourceDeviceDriver @ 0x14084E090
 * Callers:
 *     <none>
 * Callees:
 *     WheaGetErrorSource @ 0x1403E19F0 (WheaGetErrorSource.c)
 *     WheaLogInternalEvent @ 0x1403E30B0 (WheaLogInternalEvent.c)
 *     RtlStringCchCopyA @ 0x140486D18 (RtlStringCchCopyA.c)
 *     WheapErrDescIsDeviceDriver @ 0x1406D9744 (WheapErrDescIsDeviceDriver.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     WheaRemoveErrorSource @ 0x14084DC80 (WheaRemoveErrorSource.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall WheaRemoveErrorSourceDeviceDriver(unsigned int a1)
{
  unsigned int v2; // ebx
  __int64 ErrorSource; // rdi
  signed __int32 v4; // eax
  void *v5; // rcx
  _DWORD Src[8]; // [rsp+20h] [rbp-50h] BYREF
  char pszDest[16]; // [rsp+40h] [rbp-30h] BYREF
  __int128 v9; // [rsp+50h] [rbp-20h]

  *(_OWORD *)pszDest = 0LL;
  v9 = 0LL;
  v2 = 0;
  ErrorSource = WheaGetErrorSource(a1);
  if ( WheapErrDescIsDeviceDriver(ErrorSource) )
  {
    v4 = _InterlockedCompareExchange((volatile signed __int32 *)(ErrorSource + 152), -1, 0);
    if ( v4 != -1 )
    {
      if ( v4 )
      {
        Src[0] = 1733060695;
        Src[1] = 1;
        Src[3] = 1;
        Src[7] = 32;
        Src[2] = 64;
        Src[5] = -2147483604;
        Src[4] = 1280201291;
        Src[6] = 2;
        RtlStringCchCopyA(pszDest, 0x20uLL, "RemoveErrorSourceDeviceDriver");
        WheaLogInternalEvent(Src);
        return (unsigned int)-1073740024;
      }
      else
      {
        v5 = *(void **)(ErrorSource + 72);
        if ( v5 )
        {
          ExFreePoolWithTag(v5, 0x41454857u);
          ExFreePoolWithTag(*(PVOID *)(ErrorSource + 144), 0x41454857u);
          *(_QWORD *)(ErrorSource + 72) = 0LL;
          *(_QWORD *)(ErrorSource + 144) = 0LL;
        }
        WheaRemoveErrorSource(a1);
        *(_QWORD *)(ErrorSource + 80) = HalSystemVectorDispatchEntry;
        *(_QWORD *)(ErrorSource + 88) = xHalTimerWatchdogStop;
      }
    }
  }
  return v2;
}
