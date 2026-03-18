/*
 * XREFs of TtmpCallSetDisplayState @ 0x14075946C
 * Callers:
 *     TtmpPushTerminalDisplayStateOntoDevice @ 0x140759C18 (TtmpPushTerminalDisplayStateOntoDevice.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     TtmpStartCallout @ 0x140759E84 (TtmpStartCallout.c)
 *     TtmpStopCallout @ 0x14075A004 (TtmpStopCallout.c)
 *     TtmiLogError @ 0x140A2DC20 (TtmiLogError.c)
 */

void __fastcall TtmpCallSetDisplayState(int a1, __int64 a2, int a3)
{
  __int64 v3; // rdi
  int v5; // ebx
  _OWORD v6[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v7; // [rsp+50h] [rbp-18h]

  v3 = *(_QWORD *)(a2 + 56);
  if ( v3 )
  {
    memset(v6, 0, sizeof(v6));
    v7 = 0LL;
    TtmpStartCallout((unsigned int)v6, a1, a2, 4, v3, a3);
    v5 = guard_dispatch_icall_no_overrides(*(_QWORD *)(a2 + 24));
    TtmpStopCallout(v6, (unsigned int)v5);
    if ( v5 < 0 )
      TtmiLogError("TtmpCallSetDisplayState", 2440LL, (unsigned int)v5, 0xFFFFFFFFLL);
  }
}
