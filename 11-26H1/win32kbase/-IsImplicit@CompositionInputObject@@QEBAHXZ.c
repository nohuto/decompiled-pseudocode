/*
 * XREFs of ?IsImplicit@CompositionInputObject@@QEBAHXZ @ 0x140159700
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CompositionInputObject::IsImplicit(CompositionInputObject *this)
{
  return *((_DWORD *)this + 46) & 1;
}
