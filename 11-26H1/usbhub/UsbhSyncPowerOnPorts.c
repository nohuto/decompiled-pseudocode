/*
 * XREFs of UsbhSyncPowerOnPorts @ 0x140031538
 * Callers:
 *     UsbhFdoSetD0Cold @ 0x140030750 (UsbhFdoSetD0Cold.c)
 *     UsbhFinishStart @ 0x140046A70 (UsbhFinishStart.c)
 * Callees:
 *     Log @ 0x140009B80 (Log.c)
 *     UsbhWait @ 0x14000C584 (UsbhWait.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhSetPortPower @ 0x14003DD14 (UsbhSetPortPower.c)
 *     WPP_RECORDER_SF_ @ 0x14003E310 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x14003E3EC (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhSyncPowerOnPorts(__int64 a1)
{
  int v2; // ebx
  unsigned __int16 v3; // si
  int v5; // [rsp+28h] [rbp-20h]

  v2 = 0;
  FdoExt(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      21,
      (__int64)&WPP_17d2bee9f04934815023b5c023c5576c_Traceguids);
  v3 = 1;
  if ( !*((_BYTE *)FdoExt(a1) + 2938) )
    goto LABEL_8;
  do
  {
    v2 = UsbhSetPortPower(a1, v3);
    if ( (v2 & 0xC0000000) == 0xC0000000 )
      break;
    ++v3;
  }
  while ( v3 <= *((unsigned __int8 *)FdoExt(a1) + 2938) );
  if ( v2 >= 0 )
LABEL_8:
    UsbhWait(a1, dword_1400705F4);
  Log(a1, 8, 1934643031, v2, 0LL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v5 = v2;
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      22,
      (__int64)&WPP_17d2bee9f04934815023b5c023c5576c_Traceguids,
      v5);
  }
  return (unsigned int)v2;
}
