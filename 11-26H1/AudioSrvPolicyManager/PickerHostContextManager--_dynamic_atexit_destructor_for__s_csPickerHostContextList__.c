/*
 * XREFs of PickerHostContextManager::_dynamic_atexit_destructor_for__s_csPickerHostContextList__ @ 0x18004E8E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void PickerHostContextManager::_dynamic_atexit_destructor_for__s_csPickerHostContextList__()
{
  DeleteCriticalSection(&PickerHostContextManager::s_csPickerHostContextList);
}
