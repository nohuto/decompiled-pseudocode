/*
 * XREFs of ?OnUndock@PenEventsDispatcherPrincipal@@AEAAXXZ @ 0x180199ED4
 * Callers:
 *     ?OnHotKeyDetected@PenEventsDispatcherPrincipal@@UEAAJIII_K0@Z @ 0x180199B60 (-OnHotKeyDetected@PenEventsDispatcherPrincipal@@UEAAJIII_K0@Z.c)
 *     ?OnPenEventsKernelMessage@PenEventsDispatcherPrincipal@@AEAAXPEBU_MIT_PEN_EVENT_MESSAGE@@@Z @ 0x180199CB0 (-OnPenEventsKernelMessage@PenEventsDispatcherPrincipal@@AEAAXPEBU_MIT_PEN_EVENT_MESSAGE@@@Z.c)
 * Callees:
 *     ?FireEvents@PenEventsDispatcherPrincipal@@AEAAXW4RoutingPolicy@Input@Devices@Internal@Windows@@V?$function@$$A6A_NV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@_N@Z@std@@@Z @ 0x180198E14 (-FireEvents@PenEventsDispatcherPrincipal@@AEAAXW4RoutingPolicy@Input@Devices@Internal@Windows@@V.c)
 */

void __fastcall PenEventsDispatcherPrincipal::OnUndock(PenEventsDispatcherPrincipal *this)
{
  __int64 v1; // rdx
  _QWORD v2[9]; // [rsp+20h] [rbp-48h] BYREF

  v1 = *((unsigned int *)this + 51);
  v2[0] = off_1801F3008;
  v2[7] = v2;
  PenEventsDispatcherPrincipal::FireEvents((__int64)this, v1, (__int64)v2);
}
