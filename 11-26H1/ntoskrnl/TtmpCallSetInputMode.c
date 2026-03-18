/*
 * XREFs of TtmpCallSetInputMode @ 0x1407E574C
 * Callers:
 *     TtmpPushTerminalState @ 0x1407E5F08 (TtmpPushTerminalState.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     TtmpStartCallout @ 0x1407E60BC (TtmpStartCallout.c)
 *     TtmpStopCallout @ 0x1407E6244 (TtmpStopCallout.c)
 *     TtmiLogError @ 0x140A3AAD8 (TtmiLogError.c)
 */

void __fastcall TtmpCallSetInputMode(int a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rdi
  int v6; // ebx
  _OWORD v7[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v8; // [rsp+50h] [rbp-18h]

  v3 = *(_QWORD *)(a2 + 64);
  if ( v3 )
  {
    memset(v7, 0, sizeof(v7));
    v8 = 0LL;
    TtmpStartCallout((unsigned int)v7, a1, a2, 3, v3, a3);
    v6 = guard_dispatch_icall_no_overrides(*(_QWORD *)(a2 + 24), a3);
    TtmpStopCallout(v7, (unsigned int)v6);
    if ( v6 < 0 )
      TtmiLogError("TtmpCallSetInputMode", 2461LL, (unsigned int)v6, 0xFFFFFFFFLL);
  }
}
