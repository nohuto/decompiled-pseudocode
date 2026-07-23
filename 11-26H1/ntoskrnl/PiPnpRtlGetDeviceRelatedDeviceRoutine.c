/*
 * XREFs of PiPnpRtlGetDeviceRelatedDeviceRoutine @ 0x140AA75F0
 * Callers:
 *     <none>
 * Callees:
 *     ZwPlugPlayControl @ 0x14072A780 (ZwPlugPlayControl.c)
 */

NTSTATUS __fastcall PiPnpRtlGetDeviceRelatedDeviceRoutine(
        __int64 a1,
        __int128 *a2,
        int a3,
        __int64 a4,
        int a5,
        _DWORD *a6,
        int a7)
{
  __int128 v7; // xmm0
  NTSTATUS result; // eax
  __int128 PnPControlData; // [rsp+20h] [rbp-38h] BYREF
  int v10; // [rsp+30h] [rbp-28h]
  int v11; // [rsp+34h] [rbp-24h]
  __int64 v12; // [rsp+38h] [rbp-20h]
  int v13; // [rsp+40h] [rbp-18h]
  int v14; // [rsp+44h] [rbp-14h]

  if ( !a2 || !a6 || a7 )
    return -1073741811;
  v7 = *a2;
  v10 = a3;
  v11 = 0;
  v14 = 0;
  PnPControlData = v7;
  v12 = a4;
  v13 = a5;
  result = ZwPlugPlayControl(PlugPlayControlGetRelatedDevice, &PnPControlData, 0x28u);
  *a6 = v13 + 1;
  return result;
}
