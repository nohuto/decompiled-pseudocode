/*
 * XREFs of KseDsCompletionHookForStartDevice @ 0x140601220
 * Callers:
 *     <none>
 * Callees:
 *     KsepDsEventPnpStartDevice @ 0x1404F6170 (KsepDsEventPnpStartDevice.c)
 */

char __fastcall KseDsCompletionHookForStartDevice(__int64 a1, __int64 a2)
{
  return KsepDsEventPnpStartDevice(*(_QWORD *)(a1 + 8), a1, a2, *(_DWORD *)(a2 + 48));
}
