/*
 * XREFs of ?v_UnregisterZBandNotification@CImmersiveMode@@UEAAJK@Z @ 0x18023C520
 * Callers:
 *     <none>
 * Callees:
 *     ?Unregister@AgileRegistrationList@@QEAAJK@Z @ 0x180027F5C (-Unregister@AgileRegistrationList@@QEAAJK@Z.c)
 */

__int64 __fastcall CImmersiveMode::v_UnregisterZBandNotification(RTL_SRWLOCK *this, int a2)
{
  AgileRegistrationList::Unregister(this + 20, a2);
  return 0LL;
}
