/*
 * XREFs of UsbhResetNotifyCompletion @ 0x14004C544
 * Callers:
 *     UsbhFdoSetD0Cold @ 0x140030750 (UsbhFdoSetD0Cold.c)
 * Callees:
 *     Log @ 0x140009B80 (Log.c)
 *     UsbhSetPdo_AllowIo @ 0x140010690 (UsbhSetPdo_AllowIo.c)
 *     PdoExt @ 0x140016350 (PdoExt.c)
 *     UsbhGetPortData @ 0x1400186A0 (UsbhGetPortData.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     WPP_RECORDER_SF_q @ 0x14003E898 (WPP_RECORDER_SF_q.c)
 */

_DWORD *__fastcall UsbhResetNotifyCompletion(__int64 a1)
{
  unsigned int v2; // esi
  _DWORD *result; // rax
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 PortData; // rax
  __int64 v7; // rbp
  _DWORD *v8; // rax
  __int64 v9; // rdx
  _DWORD *v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rcx

  FdoExt(a1)[1316] = 0;
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
        v10 = v8;
        if ( *((_BYTE *)v8 + 2740) )
        {
          if ( *((_QWORD *)v8 + 348) )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                WPP_RECORDER_SF_q(
                  (__int64)WPP_GLOBAL_Control->DeviceExtension,
                  v9,
                  3u,
                  0x14u,
                  (__int64)&WPP_ba2e62575cae3d6a8bb98b5a8ed3568a_Traceguids,
                  a1);
            }
            Log(a1, 4, 1380860721, 0LL, a1);
            UsbhSetPdo_AllowIo(v11, v7);
            *(_DWORD *)(*((_QWORD *)v10 + 348) + 48LL) = 0;
            IofCompleteRequest(*((PIRP *)v10 + 348), 0);
            *((_QWORD *)v10 + 348) = 0LL;
          }
          else if ( (v8[355] & 4) != 0 )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
              && LOWORD(WPP_GLOBAL_Control->DeviceType) )
            {
              WPP_RECORDER_SF_q(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                v9,
                3u,
                0x15u,
                (__int64)&WPP_ba2e62575cae3d6a8bb98b5a8ed3568a_Traceguids,
                a1);
            }
            Log(a1, 4, 1380860722, 0LL, a1);
            UsbhSetPdo_AllowIo(v12, v7);
            *(_DWORD *)(*((_QWORD *)v10 + 349) + 48LL) = 0;
            IofCompleteRequest(*((PIRP *)v10 + 349), 0);
          }
          else if ( v8[196] == 2 )
          {
            *((_BYTE *)v8 + 2741) = 1;
          }
        }
      }
      ++v2;
      result = FdoExt(a1);
    }
    while ( v2 <= *((unsigned __int8 *)result + 2938) );
  }
  return result;
}
