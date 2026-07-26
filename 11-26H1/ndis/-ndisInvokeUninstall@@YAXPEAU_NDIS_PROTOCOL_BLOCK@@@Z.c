/*
 * XREFs of ?ndisInvokeUninstall@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x140143154
 * Callers:
 *     ndisHandleProtocolUnloadNotification @ 0x1400A5D78 (ndisHandleProtocolUnloadNotification.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

void __fastcall ndisInvokeUninstall(struct _NDIS_PROTOCOL_BLOCK *a1)
{
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      1,
      104,
      (struct _GUID *)&WPP_1e356a0c3ca735481fb26761a46e734e_Traceguids,
      (char)a1);
  a1->UninstallHandler();
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      1,
      105,
      (struct _GUID *)&WPP_1e356a0c3ca735481fb26761a46e734e_Traceguids,
      (char)a1);
}
