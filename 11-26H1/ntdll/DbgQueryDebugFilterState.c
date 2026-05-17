/*
 * XREFs of DbgQueryDebugFilterState @ 0x18013BA30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall DbgQueryDebugFilterState(__int64 a1, __int64 a2)
{
  return ZwQueryDebugFilterState(a1, a2);
}
