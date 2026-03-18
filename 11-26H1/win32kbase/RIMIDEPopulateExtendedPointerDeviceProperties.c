/*
 * XREFs of RIMIDEPopulateExtendedPointerDeviceProperties @ 0x14020AD00
 * Callers:
 *     RIMIDECreatePointerDeviceInfo @ 0x140207AC4 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

void __fastcall RIMIDEPopulateExtendedPointerDeviceProperties(__int64 a1, __int64 a2)
{
  __int128 v3; // xmm1
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  _OWORD v8[6]; // [rsp+20h] [rbp-68h] BYREF

  if ( (*(_DWORD *)(a1 + 168) & 0x2000) == 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 357);
  if ( *(_DWORD *)(a2 + 24) == 7 )
  {
    memset(v8, 0, sizeof(v8));
    v3 = v8[1];
    *(_OWORD *)(a2 + 268) = v8[0];
    v4 = v8[2];
    *(_OWORD *)(a2 + 284) = v3;
    v5 = v8[3];
    *(_OWORD *)(a2 + 300) = v4;
    v6 = v8[4];
    *(_OWORD *)(a2 + 316) = v5;
    v7 = v8[5];
    *(_OWORD *)(a2 + 332) = v6;
    *(_OWORD *)(a2 + 348) = v7;
    *(_DWORD *)(a2 + 308) = 50;
    *(_DWORD *)(a2 + 312) = 25;
  }
}
