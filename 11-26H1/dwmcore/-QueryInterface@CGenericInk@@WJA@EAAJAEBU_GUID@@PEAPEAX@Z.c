/*
 * XREFs of ?QueryInterface@CGenericInk@@WJA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180249A70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CGenericInk::QueryInterface(__int64 a1, _QWORD *a2, volatile signed __int32 **a3)
{
  return CVisualGroup::QueryInterface((volatile signed __int32 *)(a1 - 144), a2, a3);
}
