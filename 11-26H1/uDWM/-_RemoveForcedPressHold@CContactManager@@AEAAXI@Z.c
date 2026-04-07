/*
 * XREFs of ?_RemoveForcedPressHold@CContactManager@@AEAAXI@Z @ 0x1800A9554
 * Callers:
 *     ?OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z @ 0x18005F274 (-OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z.c)
 * Callees:
 *     ?StopRemoveFromRootNodeAndReleaseNoNULL@CContactManager@@AEAAXPEAVCTouchVisual@@@Z @ 0x18005F0C0 (-StopRemoveFromRootNodeAndReleaseNoNULL@CContactManager@@AEAAXPEAVCTouchVisual@@@Z.c)
 *     ?RemoveAt@?$DynArray@VCIconicBitmapPending@@$0A@@@QEAAJI@Z @ 0x180060188 (-RemoveAt@-$DynArray@VCIconicBitmapPending@@$0A@@@QEAAJI@Z.c)
 */

void __fastcall CContactManager::_RemoveForcedPressHold(CContactManager *this, int a2)
{
  signed int v3; // ebx
  __int64 *v4; // rsi
  __int64 v5; // rdi

  v3 = *((_DWORD *)this + 68) - 1;
  if ( v3 >= 0 )
  {
    v4 = (__int64 *)((char *)this + 248);
    v5 = 16LL * v3;
    do
    {
      if ( *(_DWORD *)(*v4 + v5) == a2 )
      {
        CContactManager::StopRemoveFromRootNodeAndReleaseNoNULL(this, *(struct CTouchVisual **)(*v4 + v5 + 8));
        DynArray<CIconicBitmapPending,0>::RemoveAt(v4, v3);
      }
      v5 -= 16LL;
      --v3;
    }
    while ( v3 >= 0 );
  }
}
