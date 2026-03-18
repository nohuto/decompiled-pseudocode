/*
 * XREFs of ZwAlpcConnectPort @ 0x14069C0A0
 * Callers:
 *     DifZwAlpcConnectPortWrapper @ 0x14062FC70 (DifZwAlpcConnectPortWrapper.c)
 *     SepRmLsaConnectRequest @ 0x140A4F304 (SepRmLsaConnectRequest.c)
 *     DbgkRegisterErrorPort @ 0x140A80BEC (DbgkRegisterErrorPort.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAlpcConnectPort(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
