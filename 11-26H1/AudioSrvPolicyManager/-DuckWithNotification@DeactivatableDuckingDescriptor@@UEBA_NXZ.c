/*
 * XREFs of ?DuckWithNotification@DeactivatableDuckingDescriptor@@UEBA_NXZ @ 0x18003F8B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DeactivatableDuckingDescriptor::DuckWithNotification(DeactivatableDuckingDescriptor *this)
{
  return *(_BYTE *)(*((_QWORD *)this + 1) + 12LL);
}
