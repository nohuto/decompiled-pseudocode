/*
 * XREFs of ?VidSchiStallingFlipEntryUnblocked@@YA_NPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@PEAI@Z @ 0x1400472D8
 * Callers:
 *     ?VidSchiProcessDpcVSyncHwFlipQueue@@YAXPEAU_VIDSCH_VSYNC_COOKIE@@@Z @ 0x14001C404 (-VidSchiProcessDpcVSyncHwFlipQueue@@YAXPEAU_VIDSCH_VSYNC_COOKIE@@@Z.c)
 *     VidSchiExecuteMmIoFlip @ 0x140032CC4 (VidSchiExecuteMmIoFlip.c)
 * Callees:
 *     <none>
 */

bool __fastcall VidSchiStallingFlipEntryUnblocked(
        struct _VIDSCH_GLOBAL *a1,
        struct _VIDSCH_PRESENT_INFO *a2,
        struct _VIDSCH_FLIP_QUEUE_ENTRY *a3,
        unsigned int *a4)
{
  int v4; // eax
  unsigned int v6; // r8d
  __int64 i; // rdx
  __int64 v8; // rcx

  v4 = *((_DWORD *)a3 + 288);
  if ( (v4 & 0x40000) != 0 )
  {
    v6 = *((_DWORD *)a1 + 12);
    for ( i = 0LL; (unsigned int)i < v6; i = (unsigned int)(i + 1) )
    {
      v8 = *((_QWORD *)a1 + i + 431);
      if ( v8 && *(_DWORD *)(v8 + 3248) )
      {
        if ( a4 )
          *a4 = i;
        return 0;
      }
    }
  }
  else if ( (v4 & 0x20000) != 0 )
  {
    return *((_DWORD *)a2 + 812) == 0;
  }
  return 1;
}
