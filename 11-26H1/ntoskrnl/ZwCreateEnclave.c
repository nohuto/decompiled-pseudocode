/*
 * XREFs of ZwCreateEnclave @ 0x1407249B0
 * Callers:
 *     DifZwCreateEnclaveWrapper @ 0x14069EBC0 (DifZwCreateEnclaveWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwCreateEnclave(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
