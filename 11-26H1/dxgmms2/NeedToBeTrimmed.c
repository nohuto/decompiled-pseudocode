/*
 * XREFs of NeedToBeTrimmed @ 0x140118F8C
 * Callers:
 *     ?VidMmTrimDmaPool@@YAXPEAUVIDMM_DMA_POOL@@_N@Z @ 0x1400A4288 (-VidMmTrimDmaPool@@YAXPEAUVIDMM_DMA_POOL@@_N@Z.c)
 *     VidMmGetNextBuffersContractedSize @ 0x140118F10 (VidMmGetNextBuffersContractedSize.c)
 * Callees:
 *     McTemplateK0pq_EtwWriteTransfer @ 0x14002551C (McTemplateK0pq_EtwWriteTransfer.c)
 */

char __fastcall NeedToBeTrimmed(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  int v7; // [rsp+20h] [rbp-18h]

  if ( (*(_DWORD *)(a1 + 36) & 8) != 0 )
    return 0;
  if ( *(int *)(a1 + 120) <= qword_14008AA50 )
    v3 = qword_14008AA68;
  else
    v3 = qword_14008AA60;
  if ( qword_14008AA78 > v3 )
  {
    if ( (byte_14008A201 & 1) == 0 )
      return 1;
    v7 = 0;
    goto LABEL_13;
  }
  if ( *(int *)(a1 + 124) <= qword_14008AA20 )
    v4 = qword_14008AA38;
  else
    v4 = qword_14008AA30;
  if ( qword_14008AA48 > v4 )
  {
    if ( (byte_14008A201 & 1) == 0 )
      return 1;
    v7 = 1;
    goto LABEL_13;
  }
  v5 = qword_14008AA00;
  if ( *(int *)(a1 + 128) <= qword_14008A9F0 )
    v5 = qword_14008AA08;
  if ( qword_14008AA18 <= v5 )
    return 0;
  if ( (byte_14008A201 & 1) != 0 )
  {
    v7 = 2;
LABEL_13:
    McTemplateK0pq_EtwWriteTransfer(a1, (const EVENT_DESCRIPTOR *)"R", a3, *(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL), v7);
  }
  return 1;
}
