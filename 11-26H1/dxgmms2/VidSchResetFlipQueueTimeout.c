/*
 * XREFs of VidSchResetFlipQueueTimeout @ 0x14009BCF8
 * Callers:
 *     VidSchRestartAdapter @ 0x1400C3950 (VidSchRestartAdapter.c)
 *     VidSchiCheckHwProgress @ 0x1400C4FC0 (VidSchiCheckHwProgress.c)
 * Callees:
 *     ?GetFlipQueue@VIDSCH_FLIP_QUEUE_ITERATOR@@QEAAPEAUVIDSCH_FLIP_QUEUE@@XZ @ 0x14002BF40 (-GetFlipQueue@VIDSCH_FLIP_QUEUE_ITERATOR@@QEAAPEAUVIDSCH_FLIP_QUEUE@@XZ.c)
 */

void __fastcall VidSchResetFlipQueueTimeout(__int64 a1)
{
  unsigned int v1; // r9d
  __int64 v2; // r10
  int v3; // r11d
  int i; // eax
  struct VIDSCH_FLIP_QUEUE *FlipQueue; // rax
  int v6; // r11d
  __int64 v7; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v8; // [rsp+28h] [rbp-10h]
  int v9; // [rsp+2Ch] [rbp-Ch]

  v1 = 0;
  v2 = a1;
  if ( *(_DWORD *)(a1 + 48) )
  {
    v7 = a1;
    do
    {
      v3 = -1;
      v8 = v1;
      for ( i = -1; ; i = v3 )
      {
        v9 = v3;
        if ( i == *(_DWORD *)(v2 + 160) )
          break;
        FlipQueue = VIDSCH_FLIP_QUEUE_ITERATOR::GetFlipQueue((VIDSCH_FLIP_QUEUE_ITERATOR *)&v7);
        if ( FlipQueue )
        {
          *(_DWORD *)FlipQueue &= ~1u;
          *((_DWORD *)VIDSCH_FLIP_QUEUE_ITERATOR::GetFlipQueue((VIDSCH_FLIP_QUEUE_ITERATOR *)&v7) + 11) = 0;
        }
        v3 = v6 + 1;
      }
      ++v1;
    }
    while ( v1 < *(_DWORD *)(v2 + 48) );
  }
}
