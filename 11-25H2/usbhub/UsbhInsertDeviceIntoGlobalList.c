/*
 * XREFs of UsbhInsertDeviceIntoGlobalList @ 0x14005C81C
 * Callers:
 *     UsbhReset2Complete @ 0x14001BA40 (UsbhReset2Complete.c)
 * Callees:
 *     PdoExt @ 0x140004330 (PdoExt.c)
 */

__int64 __fastcall UsbhInsertDeviceIntoGlobalList(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rax
  __int16 v6; // [rsp+20h] [rbp-28h]
  __int16 v7; // [rsp+28h] [rbp-20h]

  v4 = PdoExt(a2);
  if ( (v4[355] & 0x200) == 0 )
    return 1LL;
  v7 = *((_WORD *)v4 + 705);
  v6 = *((_WORD *)v4 + 704);
  return USBD_AddDeviceToGlobalList(a2, a1, *((unsigned __int16 *)v4 + 714), 0LL, v6, v7, v4 + 532);
}
