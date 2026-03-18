/*
 * XREFs of WheaRegChangeNotifyCallback @ 0x140849930
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 *     WheaLogInternalEvent @ 0x1403DFEC0 (WheaLogInternalEvent.c)
 *     wcstombs @ 0x1405386B0 (wcstombs.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     WheapScanRegistryForPolicyChanges @ 0x140849C2C (WheapScanRegistryForPolicyChanges.c)
 *     WheapPfaReset @ 0x14084A2CC (WheapPfaReset.c)
 *     NtNotifyChangeMultipleKeys @ 0x14097A180 (NtNotifyChangeMultipleKeys.c)
 *     WheapPropagatePolicyToHal @ 0x140B501A0 (WheapPropagatePolicyToHal.c)
 */

LONG WheaRegChangeNotifyCallback()
{
  char v0; // di
  __int64 i; // rbx
  __int64 v2; // rsi
  int *v3; // rax
  const wchar_t *v4; // rdx
  SIZE_T Length; // [rsp+58h] [rbp-29h]
  _DWORD Src[2]; // [rsp+68h] [rbp-19h] BYREF
  __int64 v8; // [rsp+70h] [rbp-11h]
  int v9; // [rsp+78h] [rbp-9h]
  int v10; // [rsp+7Ch] [rbp-5h]
  int v11; // [rsp+80h] [rbp-1h]
  int v12; // [rsp+84h] [rbp+3h]
  char Dest[16]; // [rsp+88h] [rbp+7h] BYREF
  __int128 v14; // [rsp+98h] [rbp+17h]
  int v15; // [rsp+A8h] [rbp+27h]
  int v16; // [rsp+ACh] [rbp+2Bh]

  memset_0(Src, 0, 0x48uLL);
  LODWORD(Length) = 0;
  if ( (int)NtNotifyChangeMultipleKeys(
              *(int *)&CmpCallbackListLock.WaitBlockFill11[128],
              0,
              0,
              0,
              (__int64)&CmpCallbackListLock.WaitBlock[3].Thread,
              1LL,
              &CmpCallbackListLock.WaitBlockFill11[152],
              4,
              0,
              0LL,
              Length,
              1) < 0 )
    _InterlockedExchange((volatile __int32 *)&CmpCallbackListLock.WaitBlockFill11[136], 1);
  KeWaitForSingleObject(&CmpCallbackListLock.WaitBlockFill11[104], Executive, 0, 0, 0LL);
  WheapScanRegistryForPolicyChanges();
  v0 = 0;
  for ( i = 0LL; (unsigned int)i < 0x16; i = (unsigned int)(i + 1) )
  {
    if ( WheapRegPolicyTableChanged[i] )
    {
      WheapRegPolicyTableChanged[i] = 0;
      if ( (unsigned int)(i - 2) <= 3 )
        v0 = 1;
      WheapPropagatePolicyToHal((unsigned int)i);
      v2 = 4LL * (unsigned int)i;
      *(_OWORD *)Dest = 0LL;
      v14 = 0LL;
      Src[0] = 1733060695;
      v3 = *(int **)((char *)&off_140E09398 + v2 * 8);
      v4 = (&WheaRegPolicyTable)[v2];
      Src[1] = 1;
      v8 = 72LL;
      v10 = -2147483550;
      v9 = 1280201291;
      v11 = 2;
      v12 = 40;
      v15 = i;
      v16 = *v3;
      wcstombs(Dest, v4, 0x1FuLL);
      WheaLogInternalEvent(Src);
    }
  }
  if ( v0 )
    WheapPfaReset();
  return KeSetEvent((PRKEVENT)&CmpCallbackListLock.WaitBlockFill11[104], 0, 0);
}
