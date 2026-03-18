/*
 * XREFs of ?VidSchiGetNumHistoryLayersUsed@@YAIPEAU_VIDSCH_GLOBAL@@I@Z @ 0x14004C094
 * Callers:
 *     VidSchCollectDbgInfo @ 0x14011DE00 (VidSchCollectDbgInfo.c)
 * Callees:
 *     ?GetFlipQueue@VIDSCH_FLIP_QUEUE_ITERATOR@@QEAAPEAUVIDSCH_FLIP_QUEUE@@XZ @ 0x14002BF40 (-GetFlipQueue@VIDSCH_FLIP_QUEUE_ITERATOR@@QEAAPEAUVIDSCH_FLIP_QUEUE@@XZ.c)
 */

__int64 __fastcall VidSchiGetNumHistoryLayersUsed(struct _VIDSCH_GLOBAL *a1, int a2)
{
  unsigned int v2; // esi
  int v3; // ebx
  struct VIDSCH_FLIP_QUEUE *FlipQueue; // rax
  _DWORD **v6; // rdi
  __int64 v7; // rbp
  unsigned int v8; // eax
  int v9; // ecx
  struct _VIDSCH_GLOBAL *v11; // [rsp+20h] [rbp-18h] BYREF
  int v12; // [rsp+28h] [rbp-10h]
  int v13; // [rsp+2Ch] [rbp-Ch]

  v2 = 0;
  v11 = a1;
  v3 = -1;
  v12 = a2;
  while ( 1 )
  {
    v13 = v3;
    if ( v3 == *((_DWORD *)a1 + 40) )
      break;
    FlipQueue = VIDSCH_FLIP_QUEUE_ITERATOR::GetFlipQueue((VIDSCH_FLIP_QUEUE_ITERATOR *)&v11);
    if ( FlipQueue )
    {
      v6 = (_DWORD **)((char *)FlipQueue + 1312);
      v7 = 64LL;
      do
      {
        v8 = *((_DWORD *)v6 - 35);
        if ( v8 )
        {
          if ( v8 > 0xC || (v9 = 4672, !_bittest(&v9, v8)) )
            v2 += RtlNumberOfSetBitsUlongPtr(**v6 & 0x3FF);
        }
        v6 += 175;
        --v7;
      }
      while ( v7 );
    }
    ++v3;
  }
  return v2;
}
