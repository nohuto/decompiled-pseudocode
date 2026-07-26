/*
 * XREFs of ?InitializeBase@?$KWaitEventBase@U?$integral_constant@W4_EVENT_TYPE@@$0A@@wistd@@@@IEAAXXZ @ 0x140138C30
 * Callers:
 *     ?ndisStackExpansionAddProcessor@@YAXK@Z @ 0x1400C7E3C (-ndisStackExpansionAddProcessor@@YAXK@Z.c)
 *     DriverEntry @ 0x14018E240 (DriverEntry.c)
 * Callees:
 *     <none>
 */

void __fastcall KWaitEventBase<wistd::integral_constant<enum _EVENT_TYPE,0>>::InitializeBase(struct _KEVENT *a1)
{
  KeInitializeEvent(a1, NotificationEvent, 0);
}
