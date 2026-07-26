/*
 * XREFs of ?ndisNblVerifyTxIndication@@YAXPEBU_NET_BUFFER_LIST@@KKPEBU_NDIS_OBJECT_HEADER@@@Z @ 0x140026740
 * Callers:
 *     NdisFSendNetBufferLists @ 0x140025020 (NdisFSendNetBufferLists.c)
 *     NdisSendNetBufferLists @ 0x140037160 (NdisSendNetBufferLists.c)
 * Callees:
 *     datapathVerifierReportProblem @ 0x1400A4E14 (datapathVerifierReportProblem.c)
 *     verifySingleTxNbl @ 0x1400A5280 (verifySingleTxNbl.c)
 */

void __fastcall ndisNblVerifyTxIndication(
        const struct _NET_BUFFER_LIST *a1,
        unsigned int a2,
        unsigned int a3,
        const struct _NDIS_OBJECT_HEADER *a4)
{
  unsigned __int64 v4; // rbx
  KIRQL CurrentIrql; // al
  __int16 v8; // si
  const struct _NET_BUFFER_LIST *Alignment; // r14
  __int16 i; // bp
  __int16 v11; // ax

  v4 = a3;
  if ( a2 > 0x1000000 )
    datapathVerifierReportProblem(0x10uLL, (unsigned __int64)a4, a2);
  if ( (v4 & 1) != 0 && KeGetCurrentIrql() != 2 )
  {
    CurrentIrql = KeGetCurrentIrql();
    datapathVerifierReportProblem(0x20uLL, (unsigned __int64)a4, CurrentIrql);
  }
  if ( (v4 & 0xFFFFFFC8) != 0 )
    datapathVerifierReportProblem(1uLL, (unsigned __int64)a4, v4);
  v8 = 0;
  Alignment = a1;
  for ( i = 0; Alignment; i |= ~v11 )
  {
    verifySingleTxNbl((unsigned __int64)Alignment, (unsigned __int64)a4);
    v11 = WORD1(Alignment->NetBufferListInfo[14]);
    Alignment = (const struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
    v8 |= v11;
  }
  if ( (v4 & 4) != 0 && v8 != ~i )
    datapathVerifierReportProblem(0x23uLL, (unsigned __int64)a4, (unsigned __int64)a1);
}
