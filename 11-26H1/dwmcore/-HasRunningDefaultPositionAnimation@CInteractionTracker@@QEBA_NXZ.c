/*
 * XREFs of ?HasRunningDefaultPositionAnimation@CInteractionTracker@@QEBA_NXZ @ 0x18013DF1C
 * Callers:
 *     ?CheckForIdle@CInteractionTracker@@AEAAXXZ @ 0x18013C68C (-CheckForIdle@CInteractionTracker@@AEAAXXZ.c)
 *     ?ProcessMousewheelManipulation@CInteractionTracker@@AEAAXXZ @ 0x18013DCFC (-ProcessMousewheelManipulation@CInteractionTracker@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CInteractionTracker::HasRunningDefaultPositionAnimation(CInteractionTracker *this)
{
  __int64 v1; // rdx
  bool result; // al

  v1 = *((_QWORD *)this + 69);
  result = 0;
  if ( v1 )
    return *(char *)(v1 + 464) < 0;
  return result;
}
