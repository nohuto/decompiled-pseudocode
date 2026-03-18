/*
 * XREFs of WheaRemoveErrorSourceDeviceDriver @ 0x140847DC0
 * Callers:
 *     <none>
 * Callees:
 *     WheaGetErrorSource @ 0x1403DE800 (WheaGetErrorSource.c)
 *     WheaLogInternalEvent @ 0x1403DFEC0 (WheaLogInternalEvent.c)
 *     RtlStringCchCopyA @ 0x14048D1D8 (RtlStringCchCopyA.c)
 *     WheapErrDescIsDeviceDriver @ 0x1406D5664 (WheapErrDescIsDeviceDriver.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     WheaRemoveErrorSource @ 0x1408479F0 (WheaRemoveErrorSource.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
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
