/*
 * XREFs of PnpCallDriverEntry @ 0x140A3937C
 * Callers:
 *     IopLoadDriver @ 0x140A3A064 (IopLoadDriver.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     PnpEnableWatchdog @ 0x140A19C80 (PnpEnableWatchdog.c)
 *     PnpDisableWatchdog @ 0x140A1B0D4 (PnpDisableWatchdog.c)
 */

__int64 __fastcall PnpCallDriverEntry(__int64 a1, __int64 a2)
{
  __int64 v4; // r8
  __int64 v5; // rsi
  unsigned int v6; // ebx
  _QWORD v8[5]; // [rsp+20h] [rbp-28h] BYREF

  v8[1] = a1;
  v8[0] = 0LL;
  v4 = *(_QWORD *)(a1 + 48);
  v8[2] = KeGetCurrentThread();
  v5 = PnpEnableWatchdog(5, (__int64)v8, (const UNICODE_STRING *)(v4 + 24));
  v6 = guard_dispatch_icall_no_overrides(a1, a2);
  if ( v5 )
    PnpDisableWatchdog(v5);
  return v6;
}
