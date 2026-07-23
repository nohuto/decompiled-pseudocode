/*
 * XREFs of PiPdcActivate @ 0x140A1987C
 * Callers:
 *     PnpActivatePdcForDeviceEvent @ 0x140A19D10 (PnpActivatePdcForDeviceEvent.c)
 *     IopProcessInvalidateBusRelationsRequest @ 0x140B3BC20 (IopProcessInvalidateBusRelationsRequest.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PiPdcActivate(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  _DWORD v3[2]; // [rsp+40h] [rbp-40h] BYREF
  __int64 v4; // [rsp+48h] [rbp-38h]
  __int64 v5; // [rsp+50h] [rbp-30h]
  __int128 v6; // [rsp+58h] [rbp-28h]
  __int128 v7; // [rsp+68h] [rbp-18h]
  int v8; // [rsp+A0h] [rbp+20h] BYREF
  __int64 v9; // [rsp+A8h] [rbp+28h] BYREF

  result = 0LL;
  v8 = 0;
  v9 = 0LL;
  if ( PnpPdcClientHandle )
  {
    v5 = a2;
    v3[0] = 1;
    v3[1] = 60;
    v6 = 0LL;
    v4 = 2LL;
    v7 = 0LL;
    Pdcv2ActivationClientActivate(PnpPdcClientHandle, v3, 0LL, 1LL, a1, 0, &v9, &v8);
    return v9;
  }
  return result;
}
