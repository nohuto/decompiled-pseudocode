/*
 * XREFs of VidSchSignalPagingFences @ 0x14010A330
 * Callers:
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1400E78B8 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 * Callees:
 *     VidSchSignalSyncObjectsFromCpu @ 0x1400069F0 (VidSchSignalSyncObjectsFromCpu.c)
 *     VidSchSignalSyncObjectsFromGpu @ 0x14000F5A0 (VidSchSignalSyncObjectsFromGpu.c)
 */

__int64 __fastcall VidSchSignalPagingFences(
        __int64 a1,
        struct _VIDSCH_SYNC_OBJECT **a2,
        unsigned __int64 *a3,
        __int64 a4,
        unsigned int a5,
        char a6)
{
  int v8; // r8d
  _QWORD *v9; // rdx
  __int64 *v10; // r9
  unsigned int v11; // ebx
  __int64 v12; // rax
  __int64 v14; // r9

  v8 = 0;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0;
  if ( !*(_BYTE *)(a1 + 63) )
  {
    if ( a5 == -1 )
    {
      v8 = *(_DWORD *)(a1 + 84);
      v12 = 328LL;
      if ( a6 )
        v12 = 352LL;
      v10 = *(__int64 **)(v12 + a1);
    }
    else
    {
      v8 = 1;
      v14 = 8LL * a5;
      if ( a6 )
        v10 = (__int64 *)(*(_QWORD *)(a1 + 352) + v14);
      else
        v10 = (__int64 *)(*(_QWORD *)(a1 + 328) + v14);
    }
    return VidSchSignalSyncObjectsFromGpu(v11, (unsigned __int64)v9, v8, v10, 1u, (__int64)a2, 0, a3, 0);
  }
  v9 = *(_QWORD **)(a1 + 344);
  if ( *v9 )
  {
    if ( a5 == -1 )
    {
      v11 = *(_DWORD *)(a1 + 84);
    }
    else
    {
      v11 = 1;
      v9 += a5;
    }
    return VidSchSignalSyncObjectsFromGpu(v11, (unsigned __int64)v9, v8, v10, 1u, (__int64)a2, 0, a3, 0);
  }
  return VidSchSignalSyncObjectsFromCpu(1u, a2, 0, a3);
}
