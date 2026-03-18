/*
 * XREFs of ?QueryInterface@CPrimitiveGroup@@WFA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802499E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CPrimitiveGroup::QueryInterface(__int64 a1, _QWORD *a2, volatile signed __int32 **a3)
{
  return CVisualGroup::QueryInterface((volatile signed __int32 *)(a1 - 80), a2, a3);
}
