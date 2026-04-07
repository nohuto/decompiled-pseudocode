/*
 * XREFs of ?Reset@CContactManager@@QEAAJXZ @ 0x18005EF08
 * Callers:
 *     ?NotifyDesktopSwitch@CContactManager@@QEAAJ_K@Z @ 0x18005EE98 (-NotifyDesktopSwitch@CContactManager@@QEAAJ_K@Z.c)
 *     ??1CContactManager@@QEAA@XZ @ 0x1800A84D4 (--1CContactManager@@QEAA@XZ.c)
 * Callees:
 *     ?RemoveAt@?$DynArray@UCPenContact@@$0A@@@QEAAJI@Z @ 0x180013144 (-RemoveAt@-$DynArray@UCPenContact@@$0A@@@QEAAJI@Z.c)
 *     ?RemoveAt@?$DynArray@PEAVCAnimationComponent@@$0A@@@QEAAJI@Z @ 0x18003D848 (-RemoveAt@-$DynArray@PEAVCAnimationComponent@@$0A@@@QEAAJI@Z.c)
 *     ?StopRemoveFromRootNodeAndReleaseNoNULL@CContactManager@@AEAAXPEAVCTouchVisual@@@Z @ 0x18005F0C0 (-StopRemoveFromRootNodeAndReleaseNoNULL@CContactManager@@AEAAXPEAVCTouchVisual@@@Z.c)
 *     ?RemoveAt@?$DynArray@UCTouchContact@@$0A@@@QEAAJI@Z @ 0x18005F198 (-RemoveAt@-$DynArray@UCTouchContact@@$0A@@@QEAAJI@Z.c)
 *     ?RemoveAt@?$DynArray@UCStationaryAnimation@@$0A@@@QEAAJI@Z @ 0x1800600F0 (-RemoveAt@-$DynArray@UCStationaryAnimation@@$0A@@@QEAAJI@Z.c)
 *     ?RemoveAt@?$DynArray@VCIconicBitmapPending@@$0A@@@QEAAJI@Z @ 0x180060188 (-RemoveAt@-$DynArray@VCIconicBitmapPending@@$0A@@@QEAAJI@Z.c)
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
    DynArray<CAnimationComponent *,0>::RemoveAt((__int64 *)this + 19, 0);
  }
  if ( *((_DWORD *)this + 28) )
  {
    v9 = (char *)this + 88;
    do
    {
      CContactManager::StopRemoveFromRootNodeAndReleaseNoNULL(this, *(struct CTouchVisual **)(*(_QWORD *)v9 + 8LL));
      CContactManager::StopRemoveFromRootNodeAndReleaseNoNULL(v10, *(struct CTouchVisual **)(*(_QWORD *)v9 + 16LL));
      DynArray<CPenContact,0>::RemoveAt((__int64 *)this + 11, 0);
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
