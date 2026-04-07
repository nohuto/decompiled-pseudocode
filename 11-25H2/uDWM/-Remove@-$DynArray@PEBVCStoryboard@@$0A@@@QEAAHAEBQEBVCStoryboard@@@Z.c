/*
 * XREFs of ?Remove@?$DynArray@PEBVCStoryboard@@$0A@@@QEAAHAEBQEBVCStoryboard@@@Z @ 0x180050A50
 * Callers:
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18001A2DC (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?RemoveSecondaryWindowRepresentation@CWindowData@@QEAAXPEAVCSecondaryWindowRepresentation@@@Z @ 0x18001DB1C (-RemoveSecondaryWindowRepresentation@CWindowData@@QEAAXPEAVCSecondaryWindowRepresentation@@@Z.c)
 *     ?OnCreateAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z @ 0x180050374 (-OnCreateAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z.c)
 *     ?RegisterBitmapInUse@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@_N@Z @ 0x180054544 (-RegisterBitmapInUse@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@_N@Z.c)
 *     ?StopTrackingStoryboard@CWindowPropertyTracker@@QEAAXPEBVCStoryboard@@@Z @ 0x180058F58 (-StopTrackingStoryboard@CWindowPropertyTracker@@QEAAXPEBVCStoryboard@@@Z.c)
 *     ?NotifyWindowDestruction@CVirtualDesktopThumbnail@@UEAAXPEAVCWindowData@@@Z @ 0x18005A1B0 (-NotifyWindowDestruction@CVirtualDesktopThumbnail@@UEAAXPEAVCWindowData@@@Z.c)
 *     ?HasIconicBitmapChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180083E90 (-HasIconicBitmapChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ZOrder@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z @ 0x1800E8D00 (-ZOrder@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DynArray<CStoryboard const *,0>::Remove(__int64 *a1, __int64 *a2)
{
  unsigned int v2; // r8d
  __int64 v3; // rax
  __int64 v4; // r10
  __int64 v5; // rdx

  v2 = *((_DWORD *)a1 + 6);
  v3 = 0LL;
  v4 = *a1;
  if ( v2 )
  {
    v5 = *a2;
    do
    {
      if ( v5 == *(_QWORD *)(v4 + 8 * v3) )
        break;
      v3 = (unsigned int)(v3 + 1);
    }
    while ( (unsigned int)v3 < v2 );
  }
  if ( (unsigned int)v3 >= v2 )
    return 0LL;
  for ( ; (unsigned int)v3 < v2 - 1; v2 = *((_DWORD *)a1 + 6) )
  {
    *(_QWORD *)(v4 + 8LL * (unsigned int)v3) = *(_QWORD *)(v4 + 8LL * (unsigned int)(v3 + 1));
    LODWORD(v3) = v3 + 1;
  }
  *((_DWORD *)a1 + 6) = v2 - 1;
  return 1LL;
}
