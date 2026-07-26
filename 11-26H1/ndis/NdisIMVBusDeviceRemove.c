/*
 * XREFs of NdisIMVBusDeviceRemove @ 0x14009BB10
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000FFE0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qql @ 0x140023560 (WPP_RECORDER_SF_qql_ea_140023560.c)
 *     ?ndisIMVBusIsValidInput@@YAEPEAXPEBU_NDIS_VBUS_DEVICE_CHARACTERISTICS@@@Z @ 0x14009B61C (-ndisIMVBusIsValidInput@@YAEPEAXPEBU_NDIS_VBUS_DEVICE_CHARACTERISTICS@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NdisIMVBusDeviceRemove(_BYTE *a1, const struct _NDIS_VBUS_DEVICE_CHARACTERISTICS *a2)
{
  unsigned int v4; // ebx
  char v6[4]; // [rsp+38h] [rbp-10h]

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x28u,
      (struct _GUID *)&WPP_901e3e1acd0b36a9ab86c452924f7c21_Traceguids,
      (char)a1,
      a2);
  if ( ndisIMVBusIsValidInput(a1, a2) )
  {
    if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)&WPP_MAIN_CB.DeviceQueue.32) )
    {
      v4 = ((__int64 (__fastcall *)(char *, char *))WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink->Blink)(
             (char *)a2 + 8,
             (char *)a2 + 24);
      ExReleaseRundownProtection((PEX_RUNDOWN_REF)&WPP_MAIN_CB.DeviceQueue.32);
    }
    else
    {
      v4 = -1073741661;
    }
  }
  else
  {
    v4 = -1073741811;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v6 = v4;
    WPP_RECORDER_SF_qql(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x29u,
      (struct _GUID *)&WPP_901e3e1acd0b36a9ab86c452924f7c21_Traceguids,
      (char)a1,
      (char)a2,
      *(_DWORD *)v6);
  }
  return v4;
}
