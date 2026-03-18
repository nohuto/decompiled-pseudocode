/*
 * XREFs of ?HasRunningDefaultScaleAnimation@CInteractionTracker2@@QEBA_NXZ @ 0x180273E70
 * Callers:
 *     ?CheckForIdle@CInteractionTracker2@@AEAAXXZ @ 0x180272600 (-CheckForIdle@CInteractionTracker2@@AEAAXXZ.c)
 *     ?ProcessMousewheelManipulation@CInteractionTracker2@@AEAAXXZ @ 0x180274AC0 (-ProcessMousewheelManipulation@CInteractionTracker2@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CInteractionTracker2::HasRunningDefaultScaleAnimation(CInteractionTracker2 *this)
{
  __int64 v1; // rdx
  bool result; // al

  v1 = *((_QWORD *)this + 99);
  result = 0;
  if ( v1 )
    return *(char *)(v1 + 464) < 0;
  return result;
}
