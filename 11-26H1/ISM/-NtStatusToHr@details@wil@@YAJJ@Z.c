/*
 * XREFs of ?NtStatusToHr@details@wil@@YAJJ@Z @ 0x180095C24
 * Callers:
 *     ?CheckCapability@DragManagerClientProxy@@AEAAJXZ @ 0x18004CDEC (-CheckCapability@DragManagerClientProxy@@AEAAJXZ.c)
 *     ?CheckCapability@ShellGesturesClientProxy@@AEAAJXZ @ 0x18004D528 (-CheckCapability@ShellGesturesClientProxy@@AEAAJXZ.c)
 *     ??$ReportFailure_NtStatus@$00@details@wil@@YAJPEAXIPEBD110J@Z @ 0x180082318 (--$ReportFailure_NtStatus@$00@details@wil@@YAJPEAXIPEBD110J@Z.c)
 *     ?RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z @ 0x18009FB10 (-RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z.c)
 *     ??$ReportFailure_NtStatus@$02@details@wil@@YAJPEAXIPEBD110J@Z @ 0x1800AB310 (--$ReportFailure_NtStatus@$02@details@wil@@YAJPEAXIPEBD110J@Z.c)
 *     ??$ReportFailure_NtStatus@$01@details@wil@@YAJPEAXIPEBD110J@Z @ 0x1800D317C (--$ReportFailure_NtStatus@$01@details@wil@@YAJPEAXIPEBD110J@Z.c)
 *     ?ReadFeatureReport@SpatialRimDevice@SpatialInteractions@Internal@Windows@@UEAAJEPEAEK@Z @ 0x1800E0100 (-ReadFeatureReport@SpatialRimDevice@SpatialInteractions@Internal@Windows@@UEAAJEPEAEK@Z.c)
 *     ??$ReportFailure_NtStatus@$0A@@details@wil@@YAJPEAXIPEBD110J@Z @ 0x1801331E8 (--$ReportFailure_NtStatus@$0A@@details@wil@@YAJPEAXIPEBD110J@Z.c)
 *     ?FindTransducerConnectedInputReport@PenInterface@@AEAAJPEAU_HIDP_PREPARSED_DATA@@PEAE@Z @ 0x180193F10 (-FindTransducerConnectedInputReport@PenInterface@@AEAAJPEAU_HIDP_PREPARSED_DATA@@PEAE@Z.c)
 *     ?QueryHapticsSupport@CompliantHapticInterface@@AEAAJXZ @ 0x18019E14C (-QueryHapticsSupport@CompliantHapticInterface@@AEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall wil::details::NtStatusToHr(wil::details *this)
{
  int v1; // ebx
  __int64 result; // rax

  v1 = (int)this;
  if ( (int)this >= 0 )
    return 0LL;
  if ( (_DWORD)this == -1073741801 )
    return 2147942414LL;
  if ( !wil::details::g_pfnRtlNtStatusToDosErrorNoTeb )
    return v1 | 0x10000000u;
  result = wil::details::g_pfnRtlNtStatusToDosErrorNoTeb();
  if ( !(_DWORD)result || (_DWORD)result == 317 )
    return v1 | 0x10000000u;
  if ( (int)result > 0 )
    return (unsigned __int16)result | 0x80070000;
  return result;
}
