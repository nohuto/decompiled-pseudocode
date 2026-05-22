/*
 * XREFs of ?QueryInterface@NonPointerProcessor@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18019D010
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NonPointerProcessor::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return NonPointerProcessor::QueryInterface((NonPointerProcessor *)(a1 - 16), a2, a3);
}
