/*
 * XREFs of VidSchReportAdapter @ 0x140119A10
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     VidSchiSchedulerNodeToDriverEngine @ 0x1400379BC (VidSchiSchedulerNodeToDriverEngine.c)
 *     VidSchiSchedulerNodeToDriverNode @ 0x140038370 (VidSchiSchedulerNodeToDriverNode.c)
 *     McTemplateK0ppp_EtwWriteTransfer @ 0x14003EE84 (McTemplateK0ppp_EtwWriteTransfer.c)
 *     McTemplateK0pqqqqqqqqppp_EtwWriteTransfer @ 0x140043428 (McTemplateK0pqqqqqqqqppp_EtwWriteTransfer.c)
 *     McTemplateK0pqqtttt_EtwWriteTransfer @ 0x140046074 (McTemplateK0pqqtttt_EtwWriteTransfer.c)
 *     McTemplateK0ppqpttqpqp_EtwWriteTransfer @ 0x14004B800 (McTemplateK0ppqpttqpqp_EtwWriteTransfer.c)
 *     McTemplateK0pppp_EtwWriteTransfer @ 0x14005623C (McTemplateK0pppp_EtwWriteTransfer.c)
 */

__int64 __fastcall VidSchReportAdapter(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r15
  __int64 v5; // r13
  unsigned int i; // r14d
  __int64 v7; // rax
  _QWORD *v8; // rcx
  __int64 v9; // rsi
  unsigned int v10; // edx
  char v11; // r11
  int v12; // r9d
  int v13; // ecx
  __int64 v15; // r9
  __int64 v16; // rcx
  unsigned int v17; // r14d
  __int64 v18; // rcx
  _QWORD *v19; // rsi
  unsigned int k; // esi
  __int64 v21; // rdx
  unsigned int j; // r14d
  __int64 v23; // rsi
  unsigned int v24; // edx
  char v25; // al
  char v26; // r9
  __int64 v27; // rcx
  __int64 v28; // r9
  unsigned int v29; // edx
  char v30; // al
  char v31; // r9
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // r9
  __int64 v35; // [rsp+28h] [rbp-49h]
  __int64 v36; // [rsp+30h] [rbp-41h]
  __int64 v37; // [rsp+38h] [rbp-39h]
  __int64 v38; // [rsp+40h] [rbp-31h]
  __int64 v39; // [rsp+48h] [rbp-29h]
  __int64 v40; // [rsp+50h] [rbp-21h]

  if ( a1 )
  {
    v4 = *(_QWORD *)(a1 + 264);
    if ( v4 )
    {
      if ( bTracingEnabled )
      {
        a3 = *(_QWORD *)(a1 + 16);
        a2 = *(_DWORD *)(v4 + 56) >> 2;
        if ( (byte_14008A201 & 8) != 0 )
        {
          v37 = *(_QWORD *)(a1 + 264);
          McTemplateK0ppqpttqpqp_EtwWriteTransfer((*(_DWORD *)(v4 + 56) >> 1) & 1, &EventReportDevice, a3, 0LL, a3);
        }
      }
    }
    v5 = *(_QWORD *)(a1 + 320);
    if ( v5 )
    {
      if ( bTracingEnabled )
      {
        a3 = *(_DWORD *)(v5 + 56) >> 2;
        if ( (byte_14008A201 & 8) != 0 )
        {
          v37 = *(_QWORD *)(a1 + 320);
          McTemplateK0ppqpttqpqp_EtwWriteTransfer(
            (*(_DWORD *)(v5 + 56) >> 1) & 1,
            &EventReportDevice,
            (*(_DWORD *)(v5 + 56) & 4) != 0,
            0LL,
            *(_QWORD *)(a1 + 16));
        }
      }
    }
    for ( i = 0; i < *(_DWORD *)(a1 + 88); ++i )
    {
      v7 = *(_QWORD *)(a1 + 696);
      a3 = *(unsigned int *)(a1 + 768);
      a2 = i;
      v8 = (_QWORD *)(v7 + 8LL * i);
      if ( i >= (unsigned int)a3 )
        v8 = *(_QWORD **)(a1 + 696);
      if ( *v8 )
      {
        if ( i < (unsigned int)a3 )
          v7 += 8LL * i;
        v9 = *(_QWORD *)(*(_QWORD *)v7 + 32LL);
        if ( v9 )
        {
          if ( bTracingEnabled )
          {
            VidSchiSchedulerNodeToDriverEngine(a1, *(_DWORD *)(v9 + 88));
            a3 = (unsigned int)VidSchiSchedulerNodeToDriverNode(a1, v10);
            v13 = v12 != 0 ? 5 : 1;
            a2 = v13 | (2 * ((*(_DWORD *)(*(_QWORD *)(v9 + 104) + 56LL) >> 4) & 1u));
            if ( (byte_14008A201 & 8) != 0 )
              McTemplateK0pqqqqqqqqppp_EtwWriteTransfer(
                v13,
                (const EVENT_DESCRIPTOR *)" ",
                a3,
                v4,
                a3,
                v11,
                0,
                0,
                0,
                0,
                0,
                v13 | (2 * ((*(_DWORD *)(*(_QWORD *)(v9 + 104) + 56LL) & 0x10) != 0)),
                v9);
          }
          if ( (byte_14008A201 & 1) != 0 )
          {
            v15 = *(_QWORD *)(v9 + 56);
            if ( !v15 || (*(_DWORD *)(v9 + 112) & 0x40) != 0 )
              v15 = v9;
            LODWORD(v40) = *(unsigned __int8 *)(a1 + 7077);
            LODWORD(v39) = *(unsigned __int8 *)(a1 + 7079);
            LODWORD(v38) = *(unsigned __int8 *)(a1 + 7078);
            LODWORD(v37) = *(unsigned __int8 *)(a1 + 7076);
            LODWORD(v36) = *(_DWORD *)(v9 + 412);
            LODWORD(v35) = *(_DWORD *)(v9 + 408);
            McTemplateK0pqqtttt_EtwWriteTransfer(
              *(unsigned __int8 *)(a1 + 7077),
              *(unsigned __int8 *)(a1 + 7079),
              *(unsigned __int8 *)(a1 + 7078),
              v15,
              v35,
              v36,
              v37,
              v38,
              v39,
              v40);
          }
        }
      }
    }
    if ( *(_QWORD *)(a1 + 328) )
    {
      for ( j = 0; j < *(_DWORD *)(a1 + 84); ++j )
      {
        v23 = *(_QWORD *)(*(_QWORD *)(a1 + 328) + 8LL * j);
        if ( v23 )
        {
          if ( bTracingEnabled )
          {
            VidSchiSchedulerNodeToDriverEngine(a1, *(_DWORD *)(v23 + 88));
            v25 = VidSchiSchedulerNodeToDriverNode(a1, v24);
            v27 = *(_QWORD *)(v23 + 104);
            a2 = (2 * ((*(_DWORD *)(v27 + 56) >> 4) & 1)) | 1u;
            if ( (byte_14008A201 & 8) != 0 )
              McTemplateK0pqqqqqqqqppp_EtwWriteTransfer(
                v27,
                (const EVENT_DESCRIPTOR *)" ",
                a3,
                v5,
                v25,
                v26,
                0,
                0,
                0,
                0,
                0,
                (2 * ((*(_DWORD *)(v27 + 56) & 0x10) != 0)) | 1,
                v23);
          }
          if ( (byte_14008A201 & 1) != 0 )
          {
            v28 = *(_QWORD *)(v23 + 56);
            if ( !v28 || (*(_DWORD *)(v23 + 112) & 0x40) != 0 )
              v28 = v23;
            LODWORD(v40) = *(unsigned __int8 *)(a1 + 7077);
            LODWORD(v39) = *(unsigned __int8 *)(a1 + 7079);
            LODWORD(v38) = *(unsigned __int8 *)(a1 + 7078);
            LODWORD(v37) = *(unsigned __int8 *)(a1 + 7076);
            LODWORD(v36) = *(_DWORD *)(v23 + 412);
            LODWORD(v35) = *(_DWORD *)(v23 + 408);
            McTemplateK0pqqtttt_EtwWriteTransfer(
              *(unsigned __int8 *)(a1 + 7077),
              *(unsigned __int8 *)(a1 + 7079),
              *(unsigned __int8 *)(a1 + 7078),
              v28,
              v35,
              v36,
              v37,
              v38,
              v39,
              v40);
          }
        }
      }
    }
    if ( *(_QWORD *)(a1 + 336) )
    {
      v17 = 0;
      if ( *(_DWORD *)(a1 + 84) )
      {
        while ( 1 )
        {
          v18 = v17;
          v19 = *(_QWORD **)(*(_QWORD *)(a1 + 336) + 8LL * v17);
          if ( v19 )
          {
            if ( !bTracingEnabled )
              goto LABEL_56;
            VidSchiSchedulerNodeToDriverEngine(a1, *(unsigned __int16 *)(v19[2] + 4LL));
            v30 = VidSchiSchedulerNodeToDriverNode(a1, v29);
            v32 = v19[1];
            a2 = (2 * ((*(_DWORD *)(v32 + 56) >> 4) & 1)) | 1u;
            if ( (byte_14008A201 & 8) != 0 )
              break;
          }
LABEL_32:
          if ( ++v17 >= *(_DWORD *)(a1 + 84) )
            goto LABEL_24;
        }
        McTemplateK0pqqqqqqqqppp_EtwWriteTransfer(
          v32,
          (const EVENT_DESCRIPTOR *)" ",
          a3,
          v5,
          v30,
          v31,
          0,
          0,
          0,
          0,
          0,
          (2 * ((*(_DWORD *)(v32 + 56) & 0x10) != 0)) | 1,
          v19);
LABEL_56:
        if ( (byte_14008A201 & 8) != 0 )
          McTemplateK0pppp_EtwWriteTransfer(v18, a2, a3, v19, v19, v19[6], v19[4]);
        goto LABEL_32;
      }
    }
LABEL_24:
    if ( *(_QWORD *)(a1 + 344) )
    {
      for ( k = 0; k < *(_DWORD *)(a1 + 84); ++k )
      {
        v21 = *(_QWORD *)(*(_QWORD *)(a1 + 344) + 8LL * k);
        if ( v21 && bTracingEnabled )
        {
          v33 = *(_QWORD *)(v21 + 40);
          v34 = *(_QWORD *)(v33 + 24);
          if ( !v34 || (*(_DWORD *)(v33 + 56) & 0x40) != 0 )
            v34 = *(_QWORD *)(v21 + 40);
          if ( (byte_14008A201 & 8) != 0 )
            McTemplateK0ppp_EtwWriteTransfer(v33, &EventReportHwQueue, a3, v34, 0LL, v21);
        }
      }
    }
    return 0LL;
  }
  else
  {
    WdLogSingleEntry1(1LL, -1073741811LL);
    WdLogGlobalForLineNumber = 2189;
    DxgkLogInternalTriageEvent(v16, 0x40000LL);
    return 3221225485LL;
  }
}
