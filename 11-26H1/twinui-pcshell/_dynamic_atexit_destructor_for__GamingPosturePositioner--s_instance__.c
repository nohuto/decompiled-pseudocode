/*
 * XREFs of _dynamic_atexit_destructor_for__GamingPosturePositioner::s_instance__ @ 0x180709280
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 dynamic_atexit_destructor_for__GamingPosturePositioner::s_instance__()
{
  return wil::com_ptr_t<GamingPosturePositioner,wil::err_exception_policy>::~com_ptr_t<GamingPosturePositioner,wil::err_exception_policy>(&GamingPosturePositioner::s_instance);
}
