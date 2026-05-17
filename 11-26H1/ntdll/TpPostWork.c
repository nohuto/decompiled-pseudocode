/*
 * XREFs of TpPostWork @ 0x180067FB0
 * Callers:
 *     RtlpFcCallChangeCallbacks @ 0x180014374 (RtlpFcCallChangeCallbacks.c)
 *     LdrpQueueWork @ 0x180067B50 (LdrpQueueWork.c)
 *     RtlRegisterFeatureConfigurationChangeNotification @ 0x18006E9E0 (RtlRegisterFeatureConfigurationChangeNotification.c)
 *     RtlRaiseCustomSystemEventTrigger @ 0x1801493F0 (RtlRaiseCustomSystemEventTrigger.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TpPostWork(__int64 a1, _PEB_LDR_DATA *Ldr, __int64 a3)
{
  int v3; // eax

  if ( !a1 )
    return TppRaiseInvalidParameter(a1, Ldr, a3);
  v3 = *(_DWORD *)(a1 + 168);
  if ( (v3 & 0x10000) != 0 )
    return TppRaiseInvalidParameter(a1, Ldr, a3);
  if ( (v3 & 0x20000) != 0 )
    return TppRaiseInvalidParameter(a1, Ldr, a3);
  if ( *(__int64 (__fastcall ***)())(a1 + 8) != TppWorkpCleanupGroupMemberVFuncs )
    return TppRaiseInvalidParameter(a1, Ldr, a3);
  Ldr = NtCurrentPeb()->Ldr;
  if ( Ldr->ShutdownInProgress )
    return TppRaiseInvalidParameter(a1, Ldr, a3);
  else
    return TppWorkPost(a1);
}
