/*
 * XREFs of UsbhResetNotifyDownstreamHub @ 0x140051684
 * Callers:
 *     Usbh_HRS_Queued @ 0x14004C960 (Usbh_HRS_Queued.c)
 *     Usbh_HRS_WaitReady @ 0x14004CE3C (Usbh_HRS_WaitReady.c)
 *     UsbhResetNotificationIrpCompletion @ 0x1400514C0 (UsbhResetNotificationIrpCompletion.c)
 * Callees:
 *     Log @ 0x140009B80 (Log.c)
 *     PdoExt @ 0x140016350 (PdoExt.c)
 *     UsbhGetPortData @ 0x1400186A0 (UsbhGetPortData.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     WPP_RECORDER_SF_q @ 0x14003E898 (WPP_RECORDER_SF_q.c)
 *     UsbhSetPdo_FailIo @ 0x140048260 (UsbhSetPdo_FailIo.c)
 */

_DWORD *__fastcall UsbhResetNotifyDownstreamHub(__int64 a1)
{
  unsigned int v2; // edi
  _DWORD *result; // rax
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 PortData; // rax
  __int64 v7; // rbp
  _DWORD *v8; // rbx
  __int64 v9; // rax

  v2 = 1;
  result = FdoExt(a1);
  if ( *((_BYTE *)result + 2938) )
  {
    do
    {
      PortData = UsbhGetPortData(a1, (unsigned __int16)v2, v4, v5);
      v7 = *(_QWORD *)(PortData + 392);
      if ( v7 )
      {
        v8 = PdoExt(*(_QWORD *)(PortData + 392));
        if ( *((_BYTE *)v8 + 2740) )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            WPP_RECORDER_SF_q(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              *((_QWORD *)v8 + 148),
              3u,
              0x18u,
              (__int64)&WPP_e515ed24217c325a0d538c98f1498d1a_Traceguids,
              *((_QWORD *)v8 + 148));
          }
          v9 = *((_QWORD *)v8 + 349);
          if ( v9 )
          {
            *(_QWORD *)(v9 + 56) = 1LL;
            *(_DWORD *)(*((_QWORD *)v8 + 349) + 48LL) = 0;
            IofCompleteRequest(*((PIRP *)v8 + 349), 0);
          }
          UsbhSetPdo_FailIo(v7);
          Log(a1, 2, 1380861000, *((unsigned __int8 *)v8 + 2741), v7);
          *((_BYTE *)v8 + 2741) = 0;
        }
      }
      ++v2;
      result = FdoExt(a1);
    }
    while ( v2 <= *((unsigned __int8 *)result + 2938) );
  }
  return result;
}
