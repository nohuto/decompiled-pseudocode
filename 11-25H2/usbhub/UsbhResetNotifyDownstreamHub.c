/*
 * XREFs of UsbhResetNotifyDownstreamHub @ 0x140051194
 * Callers:
 *     Usbh_HRS_Queued @ 0x14004CD8C (Usbh_HRS_Queued.c)
 *     Usbh_HRS_WaitReady @ 0x14004D268 (Usbh_HRS_WaitReady.c)
 *     UsbhResetNotificationIrpCompletion @ 0x140050FD0 (UsbhResetNotificationIrpCompletion.c)
 * Callees:
 *     PdoExt @ 0x140004330 (PdoExt.c)
 *     UsbhGetPortData @ 0x140008540 (UsbhGetPortData.c)
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     Log @ 0x14001C5D0 (Log.c)
 *     WPP_RECORDER_SF_q @ 0x14003EDC0 (WPP_RECORDER_SF_q.c)
 *     UsbhSetPdo_FailIo @ 0x140048710 (UsbhSetPdo_FailIo.c)
 */

_DWORD *__fastcall UsbhResetNotifyDownstreamHub(__int64 a1)
{
  unsigned int v2; // edi
  _DWORD *result; // rax
  __int64 PortData; // rax
  __int64 v5; // rbp
  _DWORD *v6; // rbx
  __int64 v7; // rax

  v2 = 1;
  result = FdoExt(a1);
  if ( *((_BYTE *)result + 2938) )
  {
    do
    {
      PortData = UsbhGetPortData(a1, v2);
      v5 = *(_QWORD *)(PortData + 392);
      if ( v5 )
      {
        v6 = PdoExt(*(_QWORD *)(PortData + 392));
        if ( *((_BYTE *)v6 + 2740) )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            WPP_RECORDER_SF_q(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              *((_QWORD *)v6 + 148),
              3u,
              0x18u,
              (__int64)&WPP_3a1d82179740321a06fbc3767bd9e9e7_Traceguids,
              *((_QWORD *)v6 + 148));
          }
          v7 = *((_QWORD *)v6 + 349);
          if ( v7 )
          {
            *(_QWORD *)(v7 + 56) = 1LL;
            *(_DWORD *)(*((_QWORD *)v6 + 349) + 48LL) = 0;
            IofCompleteRequest(*((PIRP *)v6 + 349), 0);
          }
          UsbhSetPdo_FailIo(v5);
          Log(a1, 2, 1380861000, *((unsigned __int8 *)v6 + 2741), v5);
          *((_BYTE *)v6 + 2741) = 0;
        }
      }
      ++v2;
      result = FdoExt(a1);
    }
    while ( v2 <= *((unsigned __int8 *)result + 2938) );
  }
  return result;
}
