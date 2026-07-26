/*
 * XREFs of ?ndisNblVerifyRxIndication@@YAXPEBU_NET_BUFFER_LIST@@KKKPEBU_NDIS_OBJECT_HEADER@@W4_NDIS_MEDIUM@@@Z @ 0x140075B60
 * Callers:
 *     NdisMIndicateReceiveNetBufferLists @ 0x14002E710 (NdisMIndicateReceiveNetBufferLists.c)
 *     NdisFIndicateReceiveNetBufferLists @ 0x140037E00 (NdisFIndicateReceiveNetBufferLists.c)
 * Callees:
 *     ?ndisParseReceivedNBL@@YAEW4_NDIS_MEDIUM@@PEBU_NET_BUFFER_LIST@@PEAGPEAE@Z @ 0x1400630D0 (-ndisParseReceivedNBL@@YAEW4_NDIS_MEDIUM@@PEBU_NET_BUFFER_LIST@@PEAGPEAE@Z.c)
 *     datapathVerifierReportProblem @ 0x1400A4E14 (datapathVerifierReportProblem.c)
 *     verifySingleRxNbl @ 0x1400A524C (verifySingleRxNbl.c)
 */

void __fastcall ndisNblVerifyRxIndication(
        const struct _NET_BUFFER_LIST *a1,
        unsigned int a2,
        int a3,
        unsigned int a4,
        const struct _NDIS_OBJECT_HEADER *a5,
        enum _NDIS_MEDIUM a6)
{
  unsigned __int64 v6; // rbx
  int v7; // edi
  const struct _NET_BUFFER_LIST *v8; // rsi
  KIRQL CurrentIrql; // al
  __int16 v10; // dx
  char v11; // r13
  int v12; // ebp
  __int16 v13; // r12
  __int16 v14; // r15
  unsigned __int16 v15; // cx
  __int16 v16; // ax
  __int64 v17; // r8
  const struct _NET_BUFFER_LIST *Alignment; // r14
  __int16 v19; // di
  unsigned __int16 v20; // bx
  __int16 v21; // si
  __int16 v22; // ax
  __int16 v23; // ax
  __int16 v24; // [rsp+20h] [rbp-58h]
  unsigned __int16 v25; // [rsp+24h] [rbp-54h] BYREF
  unsigned __int16 v26; // [rsp+28h] [rbp-50h]
  __int16 v28; // [rsp+88h] [rbp+10h] BYREF
  int v29; // [rsp+90h] [rbp+18h]
  unsigned int v30; // [rsp+98h] [rbp+20h]

  v30 = a4;
  v29 = a3;
  v6 = a4;
  v7 = a3;
  v8 = a1;
  if ( a2 > 0x1000000 )
    datapathVerifierReportProblem(0x10uLL, (unsigned __int64)a5, a2);
  if ( (v6 & 1) != 0 && KeGetCurrentIrql() != 2 )
  {
    CurrentIrql = KeGetCurrentIrql();
    datapathVerifierReportProblem(0x20uLL, (unsigned __int64)a5, CurrentIrql);
  }
  if ( (v6 & 0xFFFF00FC) != 0 )
    datapathVerifierReportProblem(1uLL, (unsigned __int64)a5, v6);
  v10 = 0;
  v11 = 0;
  v25 = 0;
  v12 = 0;
  v24 = 0;
  v13 = 0;
  v26 = 0;
  v14 = 0;
  v28 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0LL;
  Alignment = v8;
  if ( v8 )
  {
    v19 = 0;
    v20 = 0;
    v21 = 0;
    do
    {
      ++v12;
      verifySingleRxNbl(Alignment, a5, v17);
      v25 = 0;
      LOBYTE(v28) = 0;
      if ( (unsigned __int8)ndisParseReceivedNBL(a6, Alignment, &v25, (unsigned __int8 *)&v28) && (_BYTE)v28 )
      {
        v13 |= v25;
        v14 |= ~v25;
      }
      else
      {
        v11 = 1;
      }
      v17 = v26;
      v22 = (LODWORD(Alignment->NetBufferListInfo[4]) >> 4) & 0xFFF;
      v20 |= v22;
      v19 |= ~v22;
      v23 = WORD1(Alignment->NetBufferListInfo[14]);
      Alignment = (const struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
      LOWORD(v17) = v23 | v26;
      v26 |= v23;
      v21 |= ~v23;
    }
    while ( Alignment );
    v24 = v19;
    v16 = v19;
    v7 = v29;
    v28 = v21;
    v8 = a1;
    v10 = v28;
    v25 = v20;
    LOWORD(v6) = v30;
    v15 = v25;
  }
  if ( v12 != v7 )
  {
    datapathVerifierReportProblem(4uLL, (unsigned __int64)a5, (unsigned __int64)v8);
    v16 = v24;
    v15 = v25;
    v10 = v28;
    LOWORD(v17) = v26;
  }
  if ( (v6 & 0x100) != 0 && (v13 != ~v14 || v11) )
  {
    datapathVerifierReportProblem(0x21uLL, (unsigned __int64)a5, (unsigned __int64)v8);
    v16 = v24;
    v15 = v25;
    v10 = v28;
    LOWORD(v17) = v26;
  }
  if ( (v6 & 0x200) != 0 && v15 != ~v16 )
  {
    datapathVerifierReportProblem(0x22uLL, (unsigned __int64)a5, (unsigned __int64)v8);
    v10 = v28;
    LOWORD(v17) = v26;
  }
  if ( (v6 & 0x800) != 0 && (_WORD)v17 != ~v10 )
    datapathVerifierReportProblem(0x23uLL, (unsigned __int64)a5, (unsigned __int64)v8);
}
