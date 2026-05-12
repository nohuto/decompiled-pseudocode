/*
 * XREFs of sub_14003AA14 @ 0x14003AA14
 * Callers:
 *     sub_140127920 @ 0x140127920 (sub_140127920.c)
 *     sub_1401B34BC @ 0x1401B34BC (sub_1401B34BC.c)
 * Callees:
 *     sub_14003AAE8 @ 0x14003AAE8 (sub_14003AAE8.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

char __fastcall sub_14003AA14(PDEVICE_OBJECT DeviceObject, _DWORD *a2)
{
  char v4; // di
  _DWORD Dst[3]; // [rsp+30h] [rbp-D8h] BYREF
  __int16 v7; // [rsp+3Ch] [rbp-CCh]
  int v8; // [rsp+40h] [rbp-C8h]
  int InputBuffer; // [rsp+50h] [rbp-B8h] BYREF
  __int128 v10; // [rsp+54h] [rbp-B4h]
  int v11; // [rsp+64h] [rbp-A4h]
  __int128 v12; // [rsp+68h] [rbp-A0h]

  *a2 = -1;
  v4 = 0;
  memset_0(Dst, 0, 0xC0uLL);
  InputBuffer = 1214866753;
  v10 = xmmword_1401492F8;
  v11 = 16;
  v12 = xmmword_140149308;
  if ( (int)sub_14003AAE8(DeviceObject, &InputBuffer) >= 0 && Dst[0] == 1114596673 && Dst[2] == 1 && !v7 )
  {
    v4 = 1;
    *a2 = v8;
  }
  return v4;
}
