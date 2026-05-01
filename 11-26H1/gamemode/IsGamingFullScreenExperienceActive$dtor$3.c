/*
 * XREFs of IsGamingFullScreenExperienceActive$dtor$3 @ 0x180010651
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IsGamingFullScreenExperienceActive_dtor_3(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IImmersiveShellBroker,wil::err_exception_policy>::~com_ptr_t<IImmersiveShellBroker,wil::err_exception_policy>((__int64 *)(a2 + 88));
}
