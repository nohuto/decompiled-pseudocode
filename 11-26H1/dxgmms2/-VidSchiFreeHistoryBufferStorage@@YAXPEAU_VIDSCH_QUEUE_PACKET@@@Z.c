/*
 * XREFs of ?VidSchiFreeHistoryBufferStorage@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x140045214
 * Callers:
 *     VidSchiProcessDpcCompletedPacket @ 0x140027C1C (VidSchiProcessDpcCompletedPacket.c)
 *     VidSchiDiscardQueuePacket @ 0x1400EA710 (VidSchiDiscardQueuePacket.c)
 * Callees:
 *     <none>
 */

void __fastcall VidSchiFreeHistoryBufferStorage(struct _VIDSCH_QUEUE_PACKET *a1)
{
  char *v2; // rcx
  char *v3; // rcx

  v2 = (char *)*((_QWORD *)a1 + 34);
  if ( v2 != (char *)a1 + 208 )
    ExFreePoolWithTag(v2, 0);
  v3 = (char *)*((_QWORD *)a1 + 78);
  if ( v3 != (char *)a1 + 176 )
    ExFreePoolWithTag(v3, 0);
  *((_QWORD *)a1 + 34) = 0LL;
  *((_QWORD *)a1 + 78) = 0LL;
}
