/*
 * XREFs of ?VidSchiGetNumFlipQueueEntriesUsed@@YAIPEAU_VIDSCH_GLOBAL@@I@Z @ 0x14004C5F4
 * Callers:
 *     VidSchCollectDbgInfo @ 0x14011DE00 (VidSchCollectDbgInfo.c)
 * Callees:
 *     ?GetFlipQueue@VIDSCH_FLIP_QUEUE_ITERATOR@@QEAAPEAUVIDSCH_FLIP_QUEUE@@XZ @ 0x14002BF40 (-GetFlipQueue@VIDSCH_FLIP_QUEUE_ITERATOR@@QEAAPEAUVIDSCH_FLIP_QUEUE@@XZ.c)
 */

__int64 __fastcall VidSchiGetNumFlipQueueEntriesUsed(struct _VIDSCH_GLOBAL *a1, int a2)
{
  int v2; // r11d
  unsigned int v3; // r10d
  int v4; // r9d
  struct VIDSCH_FLIP_QUEUE *FlipQueue; // rax
  int v6; // r9d
  unsigned int *v7; // rdx
  __int64 v8; // r8
  unsigned int v9; // eax
  int v10; // ecx
  bool v11; // cl
  unsigned int v12; // eax
  struct _VIDSCH_GLOBAL *v14; // [rsp+20h] [rbp-18h] BYREF
  int v15; // [rsp+28h] [rbp-10h]
  int v16; // [rsp+2Ch] [rbp-Ch]

  v2 = *((_DWORD *)a1 + 40);
  v3 = 0;
  v4 = -1;
  v14 = a1;
  v15 = a2;
  while ( 1 )
  {
    v16 = v4;
    if ( v4 == v2 )
      break;
    FlipQueue = VIDSCH_FLIP_QUEUE_ITERATOR::GetFlipQueue((VIDSCH_FLIP_QUEUE_ITERATOR *)&v14);
    if ( FlipQueue )
    {
      v7 = (unsigned int *)((char *)FlipQueue + 1172);
      v8 = 64LL;
      do
      {
        v9 = *v7;
        v11 = 1;
        if ( *v7 )
        {
          if ( v9 > 0xC || (v10 = 4672, !_bittest(&v10, v9)) )
            v11 = 0;
        }
        v12 = v3 + 1;
        if ( v11 )
          v12 = v3;
        v7 += 350;
        v3 = v12;
        --v8;
      }
      while ( v8 );
    }
    v4 = v6 + 1;
  }
  return v3;
}
