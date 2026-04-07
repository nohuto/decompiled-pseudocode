/*
 * XREFs of _dynamic_atexit_destructor_for__CFallbackBitmapSource::s_instance__ @ 0x1800E9EB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int dynamic_atexit_destructor_for__CFallbackBitmapSource::s_instance__()
{
  return wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&CFallbackBitmapSource::s_instance);
}
