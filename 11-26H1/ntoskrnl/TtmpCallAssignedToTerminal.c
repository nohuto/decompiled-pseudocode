/*
 * XREFs of TtmpCallAssignedToTerminal @ 0x1407E5580
 * Callers:
 *     TtmiSessionDeviceListWorker @ 0x1407E52B0 (TtmiSessionDeviceListWorker.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     TtmpStartCallout @ 0x1407E60BC (TtmpStartCallout.c)
 *     TtmpStopCallout @ 0x1407E6244 (TtmpStopCallout.c)
 *     TtmiLogError @ 0x140A3AAD8 (TtmiLogError.c)
 */

void __fastcall TtmpCallAssignedToTerminal(int a1, __int64 a2)
{
  __int64 v2; // rdi
  int v4; // ebx
  int v5; // [rsp+28h] [rbp-40h]
  _OWORD v6[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v7; // [rsp+50h] [rbp-18h]

  v2 = *(_QWORD *)(a2 + 48);
  if ( v2 )
  {
    v5 = *(_DWORD *)(a2 + 596);
    memset(v6, 0, sizeof(v6));
    v7 = 0LL;
    TtmpStartCallout((unsigned int)v6, a1, a2, 1, v2, v5);
    v4 = guard_dispatch_icall_no_overrides(*(_QWORD *)(a2 + 24), *(unsigned int *)(a2 + 596));
    TtmpStopCallout(v6, (unsigned int)v4);
    if ( v4 < 0 )
      TtmiLogError("TtmpCallAssignedToTerminal", 2338LL, (unsigned int)v4, 0xFFFFFFFFLL);
  }
}
