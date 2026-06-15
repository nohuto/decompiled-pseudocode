/*
 * XREFs of ?Unlock@CAudioServiceModule@@UEAAJXZ @ 0x1800DADD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioServiceModule::Unlock(CAudioServiceModule *this)
{
  return (unsigned int)_InterlockedDecrement((volatile signed __int32 *)this + 3);
}
