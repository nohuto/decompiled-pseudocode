/*
 * XREFs of TtmpCallSetDisplayState @ 0x1407EB1FC
 * Callers:
 *     TtmpPushTerminalDisplayStateOntoDevice @ 0x1407EB9B0 (TtmpPushTerminalDisplayStateOntoDevice.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     TtmpStartCallout @ 0x1407EBC1C (TtmpStartCallout.c)
 *     TtmpStopCallout @ 0x1407EBDA4 (TtmpStopCallout.c)
 *     TtmiLogError @ 0x1409F66D8 (TtmiLogError.c)
 */

void __fastcall TtmpCallSetDisplayState(int a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rdi
  int v6; // ebx
  _OWORD v7[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v8; // [rsp+50h] [rbp-18h]

  v3 = *(_QWORD *)(a2 + 56);
  if ( v3 )
  {
    memset(v7, 0, sizeof(v7));
    v8 = 0LL;
    TtmpStartCallout((unsigned int)v7, a1, a2, 4, v3, a3);
    v6 = guard_dispatch_icall_no_overrides(*(_QWORD *)(a2 + 24), a3);
    TtmpStopCallout(v7, (unsigned int)v6);
    if ( v6 < 0 )
      TtmiLogError("TtmpCallSetDisplayState", 2398LL, (unsigned int)v6, 0xFFFFFFFFLL);
  }
}
