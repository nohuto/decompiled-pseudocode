/*
 * XREFs of ?ndisInternalSetRSSv2IndirectionTable@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@GPEAU_PROCESSOR_NUMBER@@U3@G22@Z @ 0x1400AF300
 * Callers:
 *     ?ndisSetMiniportRSSv1ParametersForMiniportV2@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1400B0520 (-ndisSetMiniportRSSv1ParametersForMiniportV2@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST.c)
 * Callees:
 *     ?ndisAreProcessorsEqual@@YAEU_PROCESSOR_NUMBER@@0@Z @ 0x1400AED78 (-ndisAreProcessorsEqual@@YAEU_PROCESSOR_NUMBER@@0@Z.c)
 *     ?ndisEntrySetScanForward@@YAEPEAGPEAU_NDIS_RSS_ENTRY_SET@@@Z @ 0x1400AEE10 (-ndisEntrySetScanForward@@YAEPEAGPEAU_NDIS_RSS_ENTRY_SET@@@Z.c)
 *     ?ndisExecuteRSSv2DirectOid@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAU_NDIS_RSS_DPC_WORKER_CONTEXT@@U_PROCESSOR_NUMBER@@@Z @ 0x1400AEE9C (-ndisExecuteRSSv2DirectOid@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAU_NDIS_RSS_DP.c)
 *     ?ndisMergeRSSv2DirectOidResults@@YAXPEAU_NDIS_RSS_SET_INDIRECTION_ENTRIES@@KPEAU_PROCESSOR_NUMBER@@U2@K11PEAH@Z @ 0x1400AF864 (-ndisMergeRSSv2DirectOidResults@@YAXPEAU_NDIS_RSS_SET_INDIRECTION_ENTRIES@@KPEAU_PROCESSOR_NUMBE.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 */

__int64 __fastcall ndisInternalSetRSSv2IndirectionTable(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_OID_REQUEST *a2,
        unsigned __int16 a3,
        struct _PROCESSOR_NUMBER *a4,
        struct _PROCESSOR_NUMBER a5,
        unsigned __int16 a6,
        struct _PROCESSOR_NUMBER *a7,
        struct _PROCESSOR_NUMBER *a8)
{
  struct _PROCESSOR_NUMBER *v8; // rbx
  struct _PROCESSOR_NUMBER *v9; // r12
  struct _NDIS_RSS_DPC_WORKER_CONTEXT *RssV2Context; // rsi
  unsigned int v11; // r15d
  unsigned __int16 v13; // r8
  __int16 v14; // cx
  __int64 v15; // rdx
  __int64 v16; // rax
  struct _PROCESSOR_NUMBER v17; // edi
  char v18; // r14
  int v19; // r8d
  int v20; // r10d
  __int64 v21; // r11
  int v22; // eax
  NDIS_OBJECT_HEADER Header; // ecx
  unsigned __int16 i; // cx
  struct _PROCESSOR_NUMBER v25; // ebx
  unsigned __int16 v26; // di
  __int64 v27; // r11
  char v28; // r8
  unsigned __int64 v29; // r11
  struct _PROCESSOR_NUMBER *v30; // r9
  int v31; // r8d
  struct _PROCESSOR_NUMBER *v32; // r9
  unsigned int v33; // r10d
  __int16 v34; // r11
  __int64 v35; // r9
  int v36; // ecx
  NDIS_OBJECT_HEADER v37; // r8d
  __int64 v38; // rdx
  __int64 v39; // rax
  int v40; // ecx
  int v41; // r12d
  unsigned __int16 v42; // r10
  int v43; // r8d
  __int16 v44; // r10
  __int64 v45; // r9
  int v46; // edx
  NDIS_OBJECT_HEADER v47; // r8d
  __int64 v48; // rcx
  int v49; // eax
  unsigned int v51; // [rsp+20h] [rbp-91h]
  struct _PROCESSOR_NUMBER v52; // [rsp+40h] [rbp-71h]
  unsigned __int16 v53[2]; // [rsp+48h] [rbp-69h] BYREF
  unsigned __int16 v54; // [rsp+50h] [rbp-61h]
  int v55; // [rsp+58h] [rbp-59h]
  int v56; // [rsp+60h] [rbp-51h] BYREF
  struct _PROCESSOR_NUMBER *v57; // [rsp+68h] [rbp-49h]
  struct _PROCESSOR_NUMBER *v58; // [rsp+70h] [rbp-41h]
  struct _NDIS_MINIPORT_BLOCK *v59; // [rsp+78h] [rbp-39h]
  struct _PROCESSOR_NUMBER *v60; // [rsp+80h] [rbp-31h]
  __int64 v61; // [rsp+88h] [rbp-29h]
  __int128 v62; // [rsp+90h] [rbp-21h] BYREF

  v8 = a7;
  v9 = a4;
  RssV2Context = a1->RssV2Context;
  v11 = a3;
  v54 = a6;
  v58 = a4;
  v13 = 0;
  v59 = a1;
  v14 = v11;
  v57 = a7;
  v60 = a8;
  v56 = 0;
  v62 = 0LL;
  if ( (unsigned __int16)v11 > 0x3Fu )
  {
    v15 = (unsigned __int16)(((unsigned __int16)(v11 - 64) >> 6) + 1);
    do
    {
      v16 = v13++;
      *((_QWORD *)&v62 + v16) = -1LL;
      v14 -= 64;
      --v15;
    }
    while ( v15 );
  }
  if ( v14 )
    *((_QWORD *)&v62 + v13) = (1LL << v14) - 1;
  v17 = a5;
  v18 = 0;
  *(_QWORD *)((char *)RssV2Context + 68) = 1311177LL;
  *((_QWORD *)RssV2Context + 10) = 20LL;
  *((_DWORD *)RssV2Context + 19) = 24;
  v52 = a5;
  v52.Reserved = 0;
  if ( !ndisAreProcessorsEqual(a5, *a8) )
  {
    v22 = *(_DWORD *)(&a2->Reserved2 + 1);
    Header = a2[1].Header;
    *(_DWORD *)v53 = v19;
    *((_DWORD *)RssV2Context + 22) = v22;
    HIBYTE(v53[1]) = v21;
    *(_DWORD *)((char *)RssV2Context + 102) = *(_DWORD *)v53;
    *((_DWORD *)RssV2Context + 24) = 2;
    *((_WORD *)RssV2Context + 50) = v21;
    *((NDIS_OBJECT_HEADER *)RssV2Context + 23) = Header;
    *((_DWORD *)RssV2Context + 27) = 259;
    *((_DWORD *)RssV2Context + 21) = v20;
  }
LABEL_8:
  for ( i = v21; i < 2u; i += v20 )
  {
    if ( *((_QWORD *)&v62 + i) != v21 )
    {
      v53[0] = -1;
      v25 = v52;
      if ( ndisEntrySetScanForward(v53, (struct _NDIS_RSS_ENTRY_SET *)&v62) )
      {
        v26 = v54;
        do
        {
          v27 = v53[0];
          if ( v18 == 1 )
          {
            v18 = 0;
            v52 = v9[v53[0]];
            v52.Reserved = 0;
            v25 = v52;
            *((_DWORD *)RssV2Context + 21) = 0;
          }
          if ( ndisAreProcessorsEqual(v25, v9[v27]) )
          {
            v30 = v57;
            *((_QWORD *)&v62 + (v29 >> 6)) &= ~(1LL << (v28 & 0x3F));
            if ( !ndisAreProcessorsEqual(v30[(unsigned int)v29 % v26], v25) )
            {
              v35 = *((unsigned int *)RssV2Context + 21);
              v36 = *(_DWORD *)(&a2->Reserved2 + 1);
              v55 = v31;
              v37 = a2[1].Header;
              v38 = 3 * v35;
              HIBYTE(v55) = 0;
              *((_DWORD *)RssV2Context + 2 * v38 + 22) = v36;
              v39 = 3 * v35;
              *(_DWORD *)((char *)RssV2Context + 8 * v38 + 102) = v55;
              v40 = v35 + 1;
              v32 = v57;
              *((_DWORD *)RssV2Context + 2 * v39 + 24) = 0;
              *((_WORD *)RssV2Context + 4 * v38 + 50) = v34;
              *((NDIS_OBJECT_HEADER *)RssV2Context + 2 * v38 + 23) = v37;
              *((_DWORD *)RssV2Context + 2 * v38 + 27) = 259;
              *((_DWORD *)RssV2Context + 21) = v40;
            }
            if ( v26 > (unsigned __int16)v11 )
            {
              v41 = v33 / v11;
              v42 = 1;
              if ( v41 > 1 )
              {
                do
                {
                  v61 = (unsigned __int16)(v34 + v42 * v11);
                  if ( !ndisAreProcessorsEqual(v32[v61], v25) )
                  {
                    v45 = *((unsigned int *)RssV2Context + 21);
                    v46 = *(_DWORD *)(&a2->Reserved2 + 1);
                    v55 = v43;
                    v47 = a2[1].Header;
                    v48 = 3 * v45;
                    HIBYTE(v55) = 0;
                    *((_DWORD *)RssV2Context + 2 * v48 + 22) = v46;
                    *((_DWORD *)RssV2Context + 6 * v45 + 24) = 0;
                    *((_WORD *)RssV2Context + 4 * v48 + 50) = v61;
                    *(_DWORD *)((char *)RssV2Context + 8 * v48 + 102) = v55;
                    v49 = v45 + 1;
                    v32 = v57;
                    *((NDIS_OBJECT_HEADER *)RssV2Context + 2 * v48 + 23) = v47;
                    *((_DWORD *)RssV2Context + 2 * v48 + 27) = 259;
                    *((_DWORD *)RssV2Context + 21) = v49;
                  }
                  v42 = v44 + 1;
                }
                while ( v42 < v41 );
                v26 = v54;
              }
              v9 = v58;
            }
          }
        }
        while ( ndisEntrySetScanForward(v53, (struct _NDIS_RSS_ENTRY_SET *)&v62) );
        v17 = a5;
      }
      ndisExecuteRSSv2DirectOid(v59, a2, (struct _KDPC *)RssV2Context, v25);
      v8 = v57;
      ndisMergeRSSv2DirectOidResults(
        (struct _NDIS_RSS_DPC_WORKER_CONTEXT *)((char *)RssV2Context + 68),
        v11,
        v9,
        v17,
        v51,
        v57,
        v60,
        &v56);
      LOWORD(v20) = 1;
      v21 = 0LL;
      v18 = 1;
      v52.Reserved = 1;
      goto LABEL_8;
    }
  }
  if ( !v18 )
  {
    ndisExecuteRSSv2DirectOid(v59, a2, (struct _KDPC *)RssV2Context, v52);
    ndisMergeRSSv2DirectOidResults(
      (struct _NDIS_RSS_DPC_WORKER_CONTEXT *)((char *)RssV2Context + 68),
      v11,
      v9,
      v17,
      v51,
      v8,
      v60,
      &v56);
  }
  return (unsigned int)v56;
}
