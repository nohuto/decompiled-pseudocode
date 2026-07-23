/*
 * XREFs of WheaRegChangeNotifyCallback @ 0x14084FC40
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     WheaLogInternalEvent @ 0x1403E30B0 (WheaLogInternalEvent.c)
 *     wcstombs @ 0x14053AB30 (wcstombs.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     WheapScanRegistryForPolicyChanges @ 0x14084FF3C (WheapScanRegistryForPolicyChanges.c)
 *     WheapPfaReset @ 0x1408505DC (WheapPfaReset.c)
 *     NtNotifyChangeMultipleKeys @ 0x14093C190 (NtNotifyChangeMultipleKeys.c)
 *     WheapPropagatePolicyToHal @ 0x140B52A30 (WheapPropagatePolicyToHal.c)
 */

LONG WheaRegChangeNotifyCallback()
{
  char v0; // di
  __int64 i; // rbx
  __int64 v2; // rsi
  int *v3; // rax
  const wchar_t *v4; // rdx
  _DWORD Src[2]; // [rsp+68h] [rbp-19h] BYREF
  __int64 v7; // [rsp+70h] [rbp-11h]
  int v8; // [rsp+78h] [rbp-9h]
  int v9; // [rsp+7Ch] [rbp-5h]
  int v10; // [rsp+80h] [rbp-1h]
  int v11; // [rsp+84h] [rbp+3h]
  char Dest[16]; // [rsp+88h] [rbp+7h] BYREF
  __int128 v13; // [rsp+98h] [rbp+17h]
  int v14; // [rsp+A8h] [rbp+27h]
  int v15; // [rsp+ACh] [rbp+2Bh]

  memset_0(Src, 0, 0x48uLL);
  if ( NtNotifyChangeMultipleKeys(
         CmpContextListLock.WaitBlock[1].Object,
         0,
         0LL,
         0LL,
         (PIO_APC_ROUTINE)&CmpContextListLock.WaitBlockFill11[160],
         (PVOID)1,
         (PIO_STATUS_BLOCK)&CmpContextListLock.WaitBlockFill11[128],
         4u,
         0,
         0LL,
         0,
         1u) < 0 )
    _InterlockedExchange((volatile __int32 *)&CmpContextListLock.WaitBlockFill11[120], 1);
  KeWaitForSingleObject(&CmpContextListLock.WaitBlockFill11[96], Executive, 0, 0, 0LL);
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
      v13 = 0LL;
      Src[0] = 1733060695;
      v3 = *(int **)((char *)&off_140E09398 + v2 * 8);
      v4 = (&WheaRegPolicyTable)[v2];
      Src[1] = 1;
      v7 = 72LL;
      v9 = -2147483550;
      v8 = 1280201291;
      v10 = 2;
      v11 = 40;
      v14 = i;
      v15 = *v3;
      wcstombs(Dest, v4, 0x1FuLL);
      WheaLogInternalEvent(Src);
    }
  }
  if ( v0 )
    WheapPfaReset();
  return KeSetEvent((PRKEVENT)&CmpContextListLock.WaitBlockFill11[96], 0, 0);
}
