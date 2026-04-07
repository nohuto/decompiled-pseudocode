/*
 * XREFs of ?StopTrackingStoryboard@CWindowPropertyTracker@@QEAAXPEBVCStoryboard@@@Z @ 0x18003EFA4
 * Callers:
 *     ?StopWindowTrackingForStoryboard@CAnimationScheduler@@QEAAXPEBVCStoryboard@@@Z @ 0x18003EF94 (-StopWindowTrackingForStoryboard@CAnimationScheduler@@QEAAXPEBVCStoryboard@@@Z.c)
 * Callees:
 *     ?Remove@?$DynArray@PEBVCStoryboard@@$0A@@@QEAAHAEBQEBVCStoryboard@@@Z @ 0x180026F40 (-Remove@-$DynArray@PEBVCStoryboard@@$0A@@@QEAAHAEBQEBVCStoryboard@@@Z.c)
 *     ?_StopTrackingWindowByIndex@CWindowPropertyTracker@@AEAAXH@Z @ 0x18003D7C0 (-_StopTrackingWindowByIndex@CWindowPropertyTracker@@AEAAXH@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CWindowPropertyTracker::StopTrackingStoryboard(
        CWindowPropertyTracker *this,
        const struct CStoryboard *a2)
{
  int v3; // ebx
  signed int v4; // ebx
  __int64 v5; // rdi
  const struct CStoryboard *v6; // [rsp+48h] [rbp+10h] BYREF

  v6 = a2;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v3 = *((_DWORD *)this + 6);
  if ( v3 )
  {
    v4 = v3 - 1;
    if ( v4 >= 0 )
    {
      v5 = 8LL * v4;
      do
      {
        DynArray<CStoryboard const *,0>::Remove((__int64 *)(*(_QWORD *)(v5 + *(_QWORD *)this) + 8LL), (__int64 *)&v6);
        if ( !*(_DWORD *)(*(_QWORD *)(v5 + *(_QWORD *)this) + 32LL) )
          CWindowPropertyTracker::_StopTrackingWindowByIndex(this, v4);
        v5 -= 8LL;
        --v4;
      }
      while ( v4 >= 0 );
    }
  }
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
}
