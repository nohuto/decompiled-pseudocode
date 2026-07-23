/*
 * XREFs of RtlpHpHeapSetInterceptor @ 0x180158150
 * Callers:
 *     RtlpHpHeapCreate @ 0x180104964 (RtlpHpHeapCreate.c)
 *     RtlpSetHeapDebuggingInformation @ 0x1801453D0 (RtlpSetHeapDebuggingInformation.c)
 * Callees:
 *     <none>
 */

void __fastcall RtlpHpHeapSetInterceptor(__int64 a1, int a2)
{
  *(_DWORD *)(a1 + 24) = a2;
  if ( a2 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 20), 0x20u);
  else
    _InterlockedAnd((volatile signed __int32 *)(a1 + 20), 0xFFFFFFDF);
}
