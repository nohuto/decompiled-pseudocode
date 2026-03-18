/*
 * XREFs of Usbh_SetFORCE_PORT_POWER @ 0x140053760
 * Callers:
 *     <none>
 * Callees:
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     WPP_RECORDER_SF_d @ 0x14003E3EC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_S @ 0x140049A2C (WPP_RECORDER_SF_S.c)
 */

_DWORD *__fastcall Usbh_SetFORCE_PORT_POWER(__int64 a1, __int64 a2, int *a3, int a4)
{
  int v7; // ebx
  _DWORD *result; // rax
  __int64 v9; // [rsp+28h] [rbp-20h]

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_S(
        WPP_GLOBAL_Control->DeviceExtension,
        a2,
        (_DWORD)a3,
        12,
        (__int64)&WPP_290dcc7ac903398322657943f635c8d9_Traceguids,
        a2);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LODWORD(v9) = a4;
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        0,
        1u,
        0xDu,
        (__int64)&WPP_290dcc7ac903398322657943f635c8d9_Traceguids,
        v9);
    }
  }
  if ( a4 == 4 && (v7 = *a3, (unsigned int)*a3 <= 0x1F4) )
  {
    result = FdoExt(a1);
    result[759] = v7;
  }
  else
  {
    result = FdoExt(a1);
    result[759] = 0;
  }
  return result;
}
