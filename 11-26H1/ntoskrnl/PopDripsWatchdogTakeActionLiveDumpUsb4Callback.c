/*
 * XREFs of PopDripsWatchdogTakeActionLiveDumpUsb4Callback @ 0x140616D40
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PopDripsWatchdogTakeActionLiveDumpUsb4Callback(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        __int64 a8)
{
  GUID v9; // [rsp+30h] [rbp-28h] BYREF

  v9 = GUID_PO_DRIPS_USB4_TUNNELS_ACTIVE_LIVE_DUMP_SECONDARY_DATA;
  if ( a8 )
    return guard_dispatch_icall_no_overrides(a1, &v9);
  else
    return 3221225485LL;
}
