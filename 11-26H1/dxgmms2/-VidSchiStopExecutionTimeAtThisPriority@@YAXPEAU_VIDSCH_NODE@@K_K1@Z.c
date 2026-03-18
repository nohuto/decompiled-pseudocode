/*
 * XREFs of ?VidSchiStopExecutionTimeAtThisPriority@@YAXPEAU_VIDSCH_NODE@@K_K1@Z @ 0x140026CDC
 * Callers:
 *     VidSchiProcessDpcPreemptedPacket @ 0x1400271BC (VidSchiProcessDpcPreemptedPacket.c)
 *     VidSchiProcessDpcCompletedPacket @ 0x140027C1C (VidSchiProcessDpcCompletedPacket.c)
 *     VidSchiProcessDpcSystemRequest @ 0x140028570 (VidSchiProcessDpcSystemRequest.c)
 *     VidSchiSetPriorityContext @ 0x140046788 (VidSchiSetPriorityContext.c)
 * Callees:
 *     McTemplateK0pqxq_EtwWriteTransfer @ 0x140026DD0 (McTemplateK0pqxq_EtwWriteTransfer.c)
 */

void __fastcall VidSchiStopExecutionTimeAtThisPriority(unsigned __int64 a1, int a2, __int64 a3, unsigned __int64 a4)
{
  struct _VIDSCH_NODE *v6; // rsi
  __int64 v7; // rdi
  unsigned __int64 *v8; // rbx
  unsigned __int64 v9; // r8
  __int64 v10; // rdx

  v6 = (struct _VIDSCH_NODE *)a1;
  v7 = gulPriorityToYieldPriorityBand[a2];
  if ( (_DWORD)v7 )
  {
    v8 = (unsigned __int64 *)(a1 + 2088 + 8 * v7);
    do
    {
      if ( *(v8 - 8) )
      {
        v9 = a3 + *v8 - *(v8 - 4);
        *(v8 - 4) = 0LL;
        *v8 = v9;
        if ( (byte_14008A201 & 2) != 0 )
        {
          if ( is_mul_ok(v9, 0x989680uLL) )
          {
            v10 = v9 * (unsigned __int128)0x989680uLL % a4;
            v9 = v9 * (unsigned __int128)0x989680uLL / a4;
          }
          else
          {
            a1 = v9 / a4;
            v10 = 10000000 * (v9 % a4) % a4;
            LODWORD(v9) = 10000000 * (v9 / a4) + 10000000 * (v9 % a4) / a4;
          }
          McTemplateK0pqxq_EtwWriteTransfer(
            a1,
            v10,
            v9,
            *(_QWORD *)(*((_QWORD *)v6 + 3) + 16LL),
            v7,
            v9,
            *((_WORD *)v6 + 2));
        }
      }
      --v8;
      LODWORD(v7) = v7 - 1;
    }
    while ( (_DWORD)v7 );
  }
}
