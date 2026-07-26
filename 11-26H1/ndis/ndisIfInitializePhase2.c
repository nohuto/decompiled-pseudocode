/*
 * XREFs of ndisIfInitializePhase2 @ 0x140146FA0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisIfCompartmentSubsystemInitializePhase2@@YAJXZ @ 0x1400CF53C (-ndisIfCompartmentSubsystemInitializePhase2@@YAJXZ.c)
 *     ?ndisIfCompartmentSubsystemInitializePhase3@@YAJXZ @ 0x1400CF9FC (-ndisIfCompartmentSubsystemInitializePhase3@@YAJXZ.c)
 *     ?ndisIfNetworkSubsystemInitializePhase2@@YAJXZ @ 0x1400D2D28 (-ndisIfNetworkSubsystemInitializePhase2@@YAJXZ.c)
 *     ?ndisStopNsiProvider@@YAXXZ @ 0x1400D4698 (-ndisStopNsiProvider@@YAXXZ.c)
 *     ?ndisStartNsiProvider@@YAJXZ @ 0x140147D20 (-ndisStartNsiProvider@@YAJXZ.c)
 *     ?ndisIfNsiClientSubsystemInitialize@@YAJXZ @ 0x140147DCC (-ndisIfNsiClientSubsystemInitialize@@YAJXZ.c)
 *     Ndis::BindRegistry::ReadNetworkInterfaces @ 0x14014C898 (Ndis--BindRegistry--ReadNetworkInterfaces.c)
 */

__int64 __fastcall ndisIfInitializePhase2(PRTL_RUN_ONCE a1, PVOID a2, PVOID *a3)
{
  if ( (int)ndisStartNsiProvider() < 0 )
    return 0LL;
  if ( (int)ndisIfNsiClientSubsystemInitialize() < 0 )
  {
    ndisStopNsiProvider();
    return 0LL;
  }
  ndisIfCompartmentSubsystemInitializePhase2();
  ndisIfNetworkSubsystemInitializePhase2();
  ndisIfCompartmentSubsystemInitializePhase3();
  if ( (int)Ndis::BindRegistry::ReadNetworkInterfaces(0LL) >= 0 )
  {
    if ( *((_BYTE *)qword_14011F6E0 + 96) )
      Ndis::BindRegistry::ReadNetworkInterfaces(1LL);
  }
  return 1LL;
}
