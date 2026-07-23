/*
 * XREFs of KeAbInitializeDpc @ 0x1405F9E20
 * Callers:
 *     KeAbInitialize @ 0x1405F9D90 (KeAbInitialize.c)
 *     KiInitPrcb @ 0x140BF9C24 (KiInitPrcb.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeAbInitializeDpc(__int64 a1, __int16 a2)
{
  bool v2; // zf
  void *v3; // rax
  __int64 result; // rax

  v2 = (KiAbpGlobalState & 1) == 0;
  v3 = AutoBoost::KiAbpDeferredProcessingWorker;
  *(_DWORD *)(a1 + 37312) = 275;
  *(_QWORD *)(a1 + 37344) = 0LL;
  *(_QWORD *)(a1 + 37368) = 0LL;
  *(_QWORD *)(a1 + 37328) = 0LL;
  if ( v2 )
    v3 = LegacyAutoBoost::KiAbpDeferredProcessingWorker;
  *(_QWORD *)(a1 + 37336) = v3;
  result = *(_QWORD *)(a1 + 37368);
  if ( !result )
  {
    result = 2048LL;
    *(_WORD *)(a1 + 37314) = a2 + 2048;
  }
  return result;
}
