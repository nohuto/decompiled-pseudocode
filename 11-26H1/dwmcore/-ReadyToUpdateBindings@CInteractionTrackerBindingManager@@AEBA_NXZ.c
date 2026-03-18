/*
 * XREFs of ?ReadyToUpdateBindings@CInteractionTrackerBindingManager@@AEBA_NXZ @ 0x18027889C
 * Callers:
 *     ?TryCleanTrackers@CInteractionTrackerBindingManager@@QEAAXXZ @ 0x180279094 (-TryCleanTrackers@CInteractionTrackerBindingManager@@QEAAXXZ.c)
 * Callees:
 *     ?IsCleanReady@CInteractionTracker2@@AEAA_NI@Z @ 0x180274020 (-IsCleanReady@CInteractionTracker2@@AEAA_NI@Z.c)
 */

char __fastcall CInteractionTrackerBindingManager::ReadyToUpdateBindings(CInteractionTrackerBindingManager *this)
{
  CInteractionTracker2 **v1; // rbp
  CInteractionTracker2 **v3; // rbx
  char v4; // di

  v1 = (CInteractionTracker2 **)*((_QWORD *)this + 20);
  v3 = (CInteractionTracker2 **)*((_QWORD *)this + 19);
  v4 = 1;
  if ( 0xAAAAAAAAAAAAAAABuLL * (v1 - v3) )
  {
    while ( v3 != v1 )
    {
      if ( !CInteractionTracker2::IsCleanReady(*v3, *((_DWORD *)this + 36))
        || !CInteractionTracker2::IsCleanReady(v3[1], *((_DWORD *)this + 36)) )
      {
        return 0;
      }
      v3 += 3;
    }
  }
  return v4;
}
