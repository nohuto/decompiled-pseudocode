/*
 * XREFs of MiReplicatePteChangeToProcess @ 0x14070BB80
 * Callers:
 *     MiReplicatePteChange @ 0x140528570 (MiReplicatePteChange.c)
 * Callees:
 *     MiMapPageInHyperSpaceWorker @ 0x140287EE0 (MiMapPageInHyperSpaceWorker.c)
 *     MiPteHasShadow @ 0x1403011E0 (MiPteHasShadow.c)
 *     MiShadowTopLevelPxes @ 0x1403422E0 (MiShadowTopLevelPxes.c)
 *     MiTransformValidPteInPlace @ 0x140342458 (MiTransformValidPteInPlace.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14040DF60 (MiUnmapPageInHyperSpaceWorker.c)
 *     MI_GET_DIRECTORY_FRAME_FROM_PROCESS_PDE @ 0x1406F2468 (MI_GET_DIRECTORY_FRAME_FROM_PROCESS_PDE.c)
 */

void __fastcall MiReplicatePteChangeToProcess(__int64 a1, ULONG_PTR a2)
{
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rax
  ULONG_PTR v6; // rdx
  unsigned __int64 v7; // rsi
  volatile __int64 *v8; // r10
  _KPROCESS *v9; // rax
  ULONG_PTR v10; // r8
  __int64 v11; // r9
  unsigned __int64 KernelWaitTime; // rax
  __int64 v13; // rax

  v4 = MI_GET_DIRECTORY_FRAME_FROM_PROCESS_PDE(a1, a2);
  v5 = MiMapPageInHyperSpaceWorker(v4, 0LL, 0x80000000);
  v6 = *(_QWORD *)a2;
  v7 = v5;
  v8 = (volatile __int64 *)(v5 + 8 * ((a2 >> 3) & 0x1FF));
  if ( a2 >= 0xFFFFF6FB7DBED000uLL
    && a2 <= 0xFFFFF6FB7DBED7F8uLL
    && (v6 & 1) != 0
    && ((v6 & 0x20) == 0 || (v6 & 0x42) == 0) )
  {
    v9 = MiPteHasShadow();
    if ( v9 )
    {
      KernelWaitTime = v9[2].KernelWaitTime;
      if ( KernelWaitTime )
      {
        v13 = *(_QWORD *)(KernelWaitTime + 8 * v11);
        if ( (v13 & 0x20) != 0 )
          v10 |= 0x20uLL;
        v6 = v10 | 0x42;
        if ( (v13 & 0x42) == 0 )
          v6 = v10;
      }
    }
  }
  if ( v6 != *v8 )
  {
    if ( (v6 & 1) != 0 && (*v8 & 1) != 0 )
      MiTransformValidPteInPlace(v8, a2, v6, 96, 3);
    else
      *v8 = v6;
  }
  MiUnmapPageInHyperSpaceWorker(v7, 0x11u, 0x80000000);
  MiShadowTopLevelPxes(a1, a2, 1);
}
