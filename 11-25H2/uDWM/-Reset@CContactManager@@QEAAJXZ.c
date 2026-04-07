/*
 * XREFs of ?Reset@CContactManager@@QEAAJXZ @ 0x180029F68
 * Callers:
 *     ?NotifyDesktopSwitch@CContactManager@@QEAAJ_K@Z @ 0x18002985C (-NotifyDesktopSwitch@CContactManager@@QEAAJ_K@Z.c)
 *     ??1CContactManager@@QEAA@XZ @ 0x1800AA398 (--1CContactManager@@QEAA@XZ.c)
 * Callees:
 *     ?StopRemoveFromRootNodeAndReleaseNoNULL@CContactManager@@AEAAXPEAVCTouchVisual@@@Z @ 0x18002AFAC (-StopRemoveFromRootNodeAndReleaseNoNULL@CContactManager@@AEAAXPEAVCTouchVisual@@@Z.c)
 *     ?RemoveAt@?$DynArray@UCTouchContact@@$0A@@@QEAAJI@Z @ 0x18002B6D4 (-RemoveAt@-$DynArray@UCTouchContact@@$0A@@@QEAAJI@Z.c)
 *     ?RemoveAt@?$DynArray@UCPenContact@@$0A@@@QEAAJI@Z @ 0x18002D0FC (-RemoveAt@-$DynArray@UCPenContact@@$0A@@@QEAAJI@Z.c)
 *     ?RemoveAt@?$DynArray@PEAVCAnimationComponent@@$0A@@@QEAAJI@Z @ 0x180059084 (-RemoveAt@-$DynArray@PEAVCAnimationComponent@@$0A@@@QEAAJI@Z.c)
 *     ?RemoveAt@?$DynArray@VCIconicBitmapPending@@$0A@@@QEAAJI@Z @ 0x18007FFC8 (-RemoveAt@-$DynArray@VCIconicBitmapPending@@$0A@@@QEAAJI@Z.c)
 *     ?RemoveAt@?$DynArray@UCStationaryAnimation@@$0A@@@QEAAJI@Z @ 0x180087500 (-RemoveAt@-$DynArray@UCStationaryAnimation@@$0A@@@QEAAJI@Z.c)
 */

__int64 __fastcall CContactManager::Reset(CContactManager *this)
{
  char *v3; // rdi
  CContactManager *v4; // rcx
  CContactManager *v5; // rcx
  CContactManager *v6; // rcx
  CContactManager *v7; // rcx
  CContactManager *v8; // rcx
  char *v9; // rdi
  CContactManager *v10; // rcx

  while ( *((_DWORD *)this + 36) )
  {
    CContactManager::StopRemoveFromRootNodeAndReleaseNoNULL(
      this,
      *(struct CTouchVisual **)(*((_QWORD *)this + 15) + 16LL));
    DynArray<CStationaryAnimation,0>::RemoveAt((char *)this + 120, 0LL);
  }
  if ( *((_DWORD *)this + 20) )
  {
    v3 = (char *)this + 56;
    do
    {
      CContactManager::StopRemoveFromRootNodeAndReleaseNoNULL(this, *(struct CTouchVisual **)(*(_QWORD *)v3 + 48LL));
      CContactManager::StopRemoveFromRootNodeAndReleaseNoNULL(v4, *(struct CTouchVisual **)(*(_QWORD *)v3 + 56LL));
      CContactManager::StopRemoveFromRootNodeAndReleaseNoNULL(v5, *(struct CTouchVisual **)(*(_QWORD *)v3 + 72LL));
      CContactManager::StopRemoveFromRootNodeAndReleaseNoNULL(v6, *(struct CTouchVisual **)(*(_QWORD *)v3 + 80LL));
      CContactManager::StopRemoveFromRootNodeAndReleaseNoNULL(v7, *(struct CTouchVisual **)(*(_QWORD *)v3 + 64LL));
      CContactManager::StopRemoveFromRootNodeAndReleaseNoNULL(v8, *(struct CTouchVisual **)(*(_QWORD *)v3 + 88LL));
      DynArray<CTouchContact,0>::RemoveAt((char *)this + 56, 0LL);
    }
    while ( *((_DWORD *)this + 20) );
  }
  while ( *((_DWORD *)this + 44) )
  {
    CContactManager::StopRemoveFromRootNodeAndReleaseNoNULL(this, **((struct CTouchVisual ***)this + 19));
    DynArray<CAnimationComponent *,0>::RemoveAt((char *)this + 152, 0LL);
  }
  if ( *((_DWORD *)this + 28) )
  {
    v9 = (char *)this + 88;
    do
    {
      CContactManager::StopRemoveFromRootNodeAndReleaseNoNULL(this, *(struct CTouchVisual **)(*(_QWORD *)v9 + 8LL));
      CContactManager::StopRemoveFromRootNodeAndReleaseNoNULL(v10, *(struct CTouchVisual **)(*(_QWORD *)v9 + 16LL));
      DynArray<CPenContact,0>::RemoveAt((char *)this + 88, 0LL);
    }
    while ( *((_DWORD *)this + 28) );
  }
  while ( *((_DWORD *)this + 68) )
  {
    CContactManager::StopRemoveFromRootNodeAndReleaseNoNULL(
      this,
      *(struct CTouchVisual **)(*((_QWORD *)this + 31) + 8LL));
    DynArray<CIconicBitmapPending,0>::RemoveAt((char *)this + 248, 0LL);
  }
  while ( *((_DWORD *)this + 76) )
  {
    CContactManager::StopRemoveFromRootNodeAndReleaseNoNULL(
      this,
      *(struct CTouchVisual **)(*((_QWORD *)this + 35) + 8LL));
    DynArray<CIconicBitmapPending,0>::RemoveAt((char *)this + 280, 0LL);
  }
  CContactManager::StopRemoveFromRootNodeAndReleaseNoNULL(this, *((struct CTouchVisual **)this + 39));
  *((_QWORD *)this + 39) = 0LL;
  return 0LL;
}
