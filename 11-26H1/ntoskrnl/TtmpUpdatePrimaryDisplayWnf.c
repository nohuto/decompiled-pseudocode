/*
 * XREFs of TtmpUpdatePrimaryDisplayWnf @ 0x1407E6314
 * Callers:
 *     TtmpPushTerminalDisplayStateOntoDevice @ 0x1407E5E50 (TtmpPushTerminalDisplayStateOntoDevice.c)
 * Callees:
 *     ZwUpdateWnfStateData @ 0x140727030 (ZwUpdateWnfStateData.c)
 *     TtmpStartCallout @ 0x1407E60BC (TtmpStartCallout.c)
 *     TtmpStopCallout @ 0x1407E6244 (TtmpStopCallout.c)
 */

__int64 __fastcall TtmpUpdatePrimaryDisplayWnf(int *a1, __int64 a2, unsigned int a3)
{
  __int64 result; // rax
  _OWORD v4[2]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v5; // [rsp+60h] [rbp-18h]
  unsigned int v6; // [rsp+90h] [rbp+18h] BYREF

  v6 = a3;
  if ( *(_DWORD *)(a2 + 16) == 1 )
  {
    result = *(unsigned int *)(a2 + 72);
    if ( (result & 1) != 0 )
    {
      memset(v4, 0, sizeof(v4));
      v5 = 0LL;
      TtmpStartCallout((__int64)v4, a1, a2, 6, (__int64)ZwUpdateWnfStateData, a3);
      ZwUpdateWnfStateData((__int64)&WNF_PO_PRIMARY_DISPLAY_VISIBLE_STATE, (__int64)&v6);
      return TtmpStopCallout((__int64)v4, 0);
    }
  }
  return result;
}
