/*
 * XREFs of ?TargetBufferedFrames@CManipulationManager@@IEAAXIPEAXK@Z @ 0x1801128DC
 * Callers:
 *     ?TargetFrameInput@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z @ 0x1801136A4 (-TargetFrameInput@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CManipulationManager::TargetBufferedFrames(
        CManipulationManager *this,
        int a2,
        void *a3,
        unsigned int a4)
{
  int v5; // eax
  __int64 v7; // r10
  __int64 v9; // r11
  unsigned int v10; // edx
  __int64 v11; // r8
  __int64 v12; // rcx

  v5 = *((_DWORD *)this + 58) - 1;
  v7 = v5;
  if ( v5 >= 0 )
  {
    while ( 1 )
    {
      v9 = *((_QWORD *)this + 28);
      v10 = 0;
      v11 = *(_QWORD *)(v9 + 8 * v7);
      if ( a4 < *(_DWORD *)(v11 + 16) && *(_DWORD *)(248LL * a4 + v11 + 372) == a2 )
      {
        v10 = a4;
      }
      else
      {
        while ( v10 < *(_DWORD *)(v11 + 16) )
        {
          if ( *(_DWORD *)(248LL * v10 + v11 + 372) == a2 )
          {
            a4 = v10;
            goto LABEL_11;
          }
          ++v10;
        }
        if ( v10 == *(_DWORD *)(v11 + 16) )
          return;
      }
LABEL_11:
      v12 = 248LL * v10;
      if ( *(_QWORD *)(v12 + v11 + 392) == -1LL )
      {
        *(_QWORD *)(v12 + v11 + 392) = a3;
        *(_BYTE *)(*(_QWORD *)(v9 + 8 * v7--) + 176LL) |= 1u;
        if ( v7 >= 0 )
          continue;
      }
      return;
    }
  }
}
