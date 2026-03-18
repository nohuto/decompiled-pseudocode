/*
 * XREFs of WheaRegChangeNotifyCallback @ 0x1407B9290
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     __report_rangecheckfailure @ 0x1404F290C (__report_rangecheckfailure.c)
 *     wcstombs @ 0x1404FDD50 (wcstombs.c)
 *     WheaLogInternalEvent @ 0x1406520E0 (WheaLogInternalEvent.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     WheapScanRegistryForPolicyChanges @ 0x1407B9598 (WheapScanRegistryForPolicyChanges.c)
 *     WheapPfaReset @ 0x1407B9C34 (WheapPfaReset.c)
 *     NtNotifyChangeMultipleKeys @ 0x140937870 (NtNotifyChangeMultipleKeys.c)
 *     WheapPropagatePolicyToHal @ 0x140AA44AC (WheapPropagatePolicyToHal.c)
 */

LONG WheaRegChangeNotifyCallback()
{
  char v0; // si
  __int64 i; // rbx
  __int64 v2; // rdi
  int *v3; // rax
  const wchar_t *v4; // rdx
  char v6; // [rsp+60h] [rbp-21h]
  _DWORD Src[8]; // [rsp+68h] [rbp-19h] BYREF
  char Dest[16]; // [rsp+88h] [rbp+7h] BYREF
  __int128 v9; // [rsp+98h] [rbp+17h]
  int v10; // [rsp+A8h] [rbp+27h]
  int v11; // [rsp+ACh] [rbp+2Bh]

  memset_0(Src, 0, 0x48uLL);
  v6 = 1;
  if ( (int)NtNotifyChangeMultipleKeys(
              WheapDispatchPtr.NextDevice,
              0,
              0,
              0,
              (__int64)&WheapDispatchPtr.Vpb,
              1LL,
              (__int64)&WheapDispatchPtr.Queue.ListEntry.Blink,
              4,
              0,
              0LL,
              0,
              v6) < 0 )
    _InterlockedExchange((volatile __int32 *)&WheapDispatchPtr.DriverObject, 1);
  KeWaitForSingleObject(&WheapDispatchPtr.AttachedDevice, Executive, 0, 0, 0LL);
  WheapScanRegistryForPolicyChanges();
  v0 = 0;
  for ( i = 0LL; (unsigned int)i < 0x16; i = (unsigned int)(i + 1) )
  {
    if ( WheapRegPolicyTableChanged[i] )
    {
      if ( (unsigned int)i >= 0x16uLL )
        _report_rangecheckfailure();
      WheapRegPolicyTableChanged[i] = 0;
      if ( (unsigned int)(i - 2) <= 3 )
        v0 = 1;
      WheapPropagatePolicyToHal((unsigned int)i);
      Src[3] = 0;
      v2 = 4LL * (unsigned int)i;
      *(_OWORD *)Dest = 0LL;
      v9 = 0LL;
      Src[0] = 1733060695;
      v3 = *(int **)((char *)&off_140E09458 + v2 * 8);
      v4 = (&WheaRegPolicyTable)[v2];
      Src[1] = 1;
      Src[2] = 72;
      Src[5] = -2147483550;
      Src[4] = 1280201291;
      Src[6] = 2;
      Src[7] = 40;
      v10 = i;
      v11 = *v3;
      wcstombs(Dest, v4, 0x1FuLL);
      WheaLogInternalEvent(Src);
    }
  }
  if ( v0 )
    WheapPfaReset();
  return KeSetEvent((PRKEVENT)&WheapDispatchPtr.AttachedDevice, 0, 0);
}
