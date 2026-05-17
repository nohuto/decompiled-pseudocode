/*
 * XREFs of RtlpHpHeapSetInterceptor @ 0x180158280
 * Callers:
 *     RtlpHpHeapCreate @ 0x18008DE64 (RtlpHpHeapCreate.c)
 *     RtlpSetHeapDebuggingInformation @ 0x180145520 (RtlpSetHeapDebuggingInformation.c)
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
