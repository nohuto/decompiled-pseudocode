/*
 * XREFs of StorPortpRegisterDriverProxy @ 0x14011910C
 * Callers:
 *     StorPortExtendedFunction @ 0x140001D50 (StorPortExtendedFunction.c)
 * Callees:
 *     RaidNtStatusToStorStatus @ 0x1400018E8 (RaidNtStatusToStorStatus.c)
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall StorPortpRegisterDriverProxy(__int64 a1, __int64 a2)
{
  int DriverProxyExt; // eax

  if ( CreateDriverProxyExt )
    DriverProxyExt = CreateDriverProxyExt(a1, 0LL, a2);
  else
    DriverProxyExt = -1073741822;
  return RaidNtStatusToStorStatus(DriverProxyExt);
}
