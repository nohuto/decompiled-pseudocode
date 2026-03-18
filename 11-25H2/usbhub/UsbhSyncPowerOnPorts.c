/*
 * XREFs of UsbhSyncPowerOnPorts @ 0x14002D264
 * Callers:
 *     UsbhFdoSetD0Cold @ 0x14002C4AC (UsbhFdoSetD0Cold.c)
 *     UsbhFinishStart @ 0x140046F2C (UsbhFinishStart.c)
 * Callees:
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     UsbhWait @ 0x140014114 (UsbhWait.c)
 *     Log @ 0x14001C5D0 (Log.c)
 *     UsbhSetPortPower @ 0x14003E270 (UsbhSetPortPower.c)
 *     WPP_RECORDER_SF_ @ 0x14003E860 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x14003E938 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhSyncPowerOnPorts(__int64 a1)
{
  int v2; // ebx
  unsigned __int16 v3; // si

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
    UsbhWait(a1, dword_14006F594);
  Log(a1, 8, 1934643031, v2, 0LL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      22,
      (__int64)&WPP_17d2bee9f04934815023b5c023c5576c_Traceguids,
      v2);
  return (unsigned int)v2;
}
