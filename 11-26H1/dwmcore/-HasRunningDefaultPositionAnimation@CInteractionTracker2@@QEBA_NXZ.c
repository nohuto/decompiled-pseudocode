/*
 * XREFs of ?HasRunningDefaultPositionAnimation@CInteractionTracker2@@QEBA_NXZ @ 0x1801D40CC
 * Callers:
 *     ?CheckForIdle@CInteractionTracker2@@AEAAXXZ @ 0x180272600 (-CheckForIdle@CInteractionTracker2@@AEAAXXZ.c)
 *     ?ProcessMousewheelManipulation@CInteractionTracker2@@AEAAXXZ @ 0x180274AC0 (-ProcessMousewheelManipulation@CInteractionTracker2@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CInteractionTracker2::HasRunningDefaultPositionAnimation(CInteractionTracker2 *this)
{
  __int64 v1; // rdx
  bool result; // al

  v1 = *((_QWORD *)this + 98);
  result = 0;
  if ( v1 )
    return *(char *)(v1 + 464) < 0;
  return result;
}
