/*
 * XREFs of ?DecrementUniqueness@GdiHandleManager@Cxx@@UEAAXPEAVOBJECT@@@Z @ 0x140057A70
 * Callers:
 *     <none>
 * Callees:
 *     ?_IncrementOrDecrementUniqueness@GdiHandleManager@Cxx@@AEAAXPEAVOBJECT@@_N@Z @ 0x140057EA8 (-_IncrementOrDecrementUniqueness@GdiHandleManager@Cxx@@AEAAXPEAVOBJECT@@_N@Z.c)
 */

void __fastcall Cxx::GdiHandleManager::DecrementUniqueness(Cxx::GdiHandleManager *this, struct OBJECT *a2)
{
  Cxx::GdiHandleManager::_IncrementOrDecrementUniqueness(this, a2, 0);
}
