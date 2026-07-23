/*
 * XREFs of PiPnpRtlGetDeviceStatus @ 0x140A85340
 * Callers:
 *     <none>
 * Callees:
 *     ZwPlugPlayControl @ 0x14072A780 (ZwPlugPlayControl.c)
 */

NTSTATUS __fastcall PiPnpRtlGetDeviceStatus(__int64 a1, __int128 *a2, _DWORD *a3, _DWORD *a4, _DWORD *a5, int a6)
{
  __int128 v8; // xmm0
  NTSTATUS result; // eax
  __int128 PnPControlData; // [rsp+20h] [rbp-30h] BYREF
  __int64 v11; // [rsp+30h] [rbp-20h]
  int v12; // [rsp+38h] [rbp-18h]
  int v13; // [rsp+3Ch] [rbp-14h]
  __int64 v14; // [rsp+40h] [rbp-10h]

  if ( !a2 || !a3 || !a4 || !a5 )
    return -1073741811;
  v8 = *a2;
  v14 = 0LL;
  PnPControlData = v8;
  v11 = 0LL;
  v12 = 0;
  v13 = a6;
  result = ZwPlugPlayControl(PlugPlayControlDeviceStatus, &PnPControlData, 0x28u);
  if ( result >= 0 )
  {
    *a3 = HIDWORD(v11);
    *a4 = v12;
    *a5 = v14;
  }
  return result;
}
