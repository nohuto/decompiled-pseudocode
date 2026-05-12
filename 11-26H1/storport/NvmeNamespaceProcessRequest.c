/*
 * XREFs of NvmeNamespaceProcessRequest @ 0x140109418
 * Callers:
 *     NvmeProcessPendingIo @ 0x14003A190 (NvmeProcessPendingIo.c)
 *     NvmeProcessPendingIoInCompletionDpc @ 0x14011B430 (NvmeProcessPendingIoInCompletionDpc.c)
 *     NvmeProcessPendingIoInSpecifiedGroup @ 0x14011D160 (NvmeProcessPendingIoInSpecifiedGroup.c)
 * Callees:
 *     RaidNtStatusToSrbStatus @ 0x140003A14 (RaidNtStatusToSrbStatus.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     NvmeNamespaceQueueRequest @ 0x14010C2DC (NvmeNamespaceQueueRequest.c)
 *     SetSrbSenseData @ 0x140117078 (SetSrbSenseData.c)
 *     NvmeNamespaceScsiReadWriteRequest @ 0x140118588 (NvmeNamespaceScsiReadWriteRequest.c)
 *     NvmeNamespaceScsiSyncCacheRequest @ 0x140118768 (NvmeNamespaceScsiSyncCacheRequest.c)
 *     NvmeNamespaceScsiUnmapRequest @ 0x14011889C (NvmeNamespaceScsiUnmapRequest.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall NvmeNamespaceProcessRequest(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  int v3; // ebx
  unsigned int v4; // r12d
  __int64 v5; // rdi
  __int64 v7; // rsi
  char *v8; // r9
  char v9; // r11
  unsigned int v10; // r14d
  unsigned int i; // r10d
  __int64 v12; // rcx
  int v13; // ecx
  int v14; // ecx
  __int64 v15; // r9
  char v16; // al
  int v17; // eax
  unsigned int v18; // r14d
  bool v19; // zf
  unsigned __int64 v20; // rcx
  __int64 v21; // rdx
  int *v22; // rax
  const EVENT_DESCRIPTOR *v23; // rdx
  __int64 v24; // rdx
  _BYTE *v25; // r9
  unsigned __int8 v26; // r15
  char v27; // r11
  char v28; // si
  char v29; // r10
  char v30; // r12
  char *v31; // r12
  __int64 v32; // rax
  unsigned __int64 v33; // r13
  __int64 v34; // r8
  int v35; // ecx
  char v36; // r13
  char v37; // cl
  char v38; // r8
  char v39; // al
  char *v40; // r10
  unsigned int v41; // eax
  unsigned __int64 v42; // rcx
  __int64 v43; // rdx
  unsigned int *v44; // rax
  __int64 v45; // rcx
  const EVENT_DESCRIPTOR *v46; // rdx
  __int64 v47; // rdx
  _BYTE *v48; // r9
  unsigned __int8 v49; // r14
  char v50; // r11
  char v51; // si
  char v52; // r10
  char v53; // r15
  char *v54; // r15
  unsigned int v55; // r13d
  unsigned __int64 v56; // r12
  __int64 v57; // r8
  int v58; // ecx
  char v59; // r12
  char v60; // cl
  char v61; // r8
  char v62; // al
  char *v63; // r10
  unsigned int v64; // eax
  __int64 v66; // [rsp+20h] [rbp-49h]
  char v67; // [rsp+60h] [rbp-9h]
  char v68; // [rsp+60h] [rbp-9h]
  char v69; // [rsp+61h] [rbp-8h]
  char v70; // [rsp+61h] [rbp-8h]
  unsigned int v71; // [rsp+64h] [rbp-5h]
  unsigned int v72; // [rsp+64h] [rbp-5h]
  int v73; // [rsp+68h] [rbp-1h]
  GUID v74; // [rsp+70h] [rbp+7h] BYREF

  v3 = 0;
  v4 = a3;
  v5 = a2;
  v7 = *(_QWORD *)(*(_QWORD *)(a2 + 184) + 8LL);
  if ( *(_BYTE *)(v7 + 2) != 40 )
  {
    v8 = (char *)(v7 + 72);
    goto LABEL_23;
  }
  v8 = 0LL;
  v9 = 0;
  if ( !*(_DWORD *)(v7 + 20) )
  {
    v10 = *(_DWORD *)(v7 + 56);
    for ( i = 0; i < v10; ++i )
    {
      v12 = *(unsigned int *)(v7 + 4LL * i + 120);
      if ( (unsigned int)v12 >= 0x80 )
      {
        a3 = *(unsigned int *)(v7 + 16);
        if ( (unsigned int)v12 < (unsigned int)a3 )
        {
          a2 = (unsigned int)v12;
          v13 = *(_DWORD *)(v12 + v7) - 64;
          if ( v13 )
          {
            v14 = v13 - 1;
            if ( v14 )
            {
              if ( v14 == 1 && a2 + 40 <= a3 )
              {
                if ( !*(_DWORD *)(a2 + v7 + 12) )
                  break;
                v15 = v7 + 32;
                goto LABEL_21;
              }
            }
            else if ( a2 + 56 <= a3 )
            {
              v9 = 1;
              if ( !*(_BYTE *)(a2 + v7 + 10) )
                break;
              v8 = (char *)(a2 + v7 + 24);
            }
          }
          else if ( a2 + 40 <= a3 )
          {
            if ( !*(_BYTE *)(a2 + v7 + 10) )
              break;
            v15 = v7 + 24;
LABEL_21:
            v8 = (char *)(a2 + v15);
            break;
          }
          if ( v9 )
            break;
        }
      }
    }
  }
LABEL_23:
  v16 = *v8;
  if ( *v8 == 53 )
  {
    v17 = NvmeNamespaceScsiSyncCacheRequest(a1, v5, v7, (_DWORD)v8, v4);
  }
  else if ( v16 == 66 )
  {
    v17 = NvmeNamespaceScsiUnmapRequest(a1, v5, v7, (_DWORD)v8, v4);
  }
  else
  {
    if ( v16 != 40 && v16 != -120 && v16 != 42 && v16 != -118 )
    {
      LOBYTE(v8) = 32;
      LOBYTE(a3) = 5;
      LOBYTE(a2) = 6;
      SetSrbSenseData(v7, a2, a3, (_DWORD)v8, 0);
      v18 = -1073741808;
      goto LABEL_36;
    }
    v17 = NvmeNamespaceScsiReadWriteRequest(a1, v5, v7, (_DWORD)v8, v4);
  }
  v18 = v17;
  if ( v17 == -2147483631 || v17 == -1073741300 )
  {
    NvmeNamespaceQueueRequest(a1, v5, v4);
    return 259;
  }
  if ( v17 < 0 )
  {
LABEL_36:
    *(_BYTE *)(v7 + 3) = RaidNtStatusToSrbStatus(v18);
    *(_QWORD *)(v5 + 56) = 0LL;
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 120));
    v19 = StorEtwLoggingEnabled == 0;
    *(_BYTE *)(v5 + 141) = -84;
    *(_DWORD *)(v5 + 48) = v18;
    if ( v19 )
      goto LABEL_171;
    v74 = 0LL;
    IoGetActivityIdIrp(v5, &v74);
    v21 = *(_QWORD *)(v5 + 184);
    if ( *(_BYTE *)v21 == 14 )
    {
      if ( (byte_140173442 & 8) != 0 )
      {
        v23 = &EventNonReadWriteRequestComplete;
        goto LABEL_101;
      }
LABEL_171:
      IofCompleteRequest((PIRP)v5, 0);
      return v18;
    }
    if ( *(_BYTE *)v21 != 15 )
    {
      if ( *(_BYTE *)v21 == 27 )
      {
        if ( *(_BYTE *)(v21 + 1) == 7 && !*(_DWORD *)(v21 + 8) )
        {
          if ( (byte_140173442 & 0x40) != 0 )
          {
            v22 = *(int **)(v5 + 56);
            if ( v22 )
              v3 = *v22;
            LODWORD(v66) = v3;
            McTemplateK0pqd_EtwWriteTransfer(v20, v21, &v74, v5, v66, *(_DWORD *)(v5 + 48));
          }
          goto LABEL_171;
        }
        if ( (byte_140173442 & 0x20) != 0 )
        {
          v23 = &EventPnpRequestComplete;
LABEL_101:
          LODWORD(v66) = *(_DWORD *)(v5 + 48);
          McTemplateK0pd_EtwWriteTransfer(v20, v23, &v74, v5, v66);
          goto LABEL_171;
        }
      }
      goto LABEL_171;
    }
    if ( byte_140173441 >= 0 )
      goto LABEL_171;
    v24 = *(_QWORD *)(v21 + 8);
    v25 = 0LL;
    v67 = 0;
    v26 = 0;
    v27 = 0;
    v28 = 0;
    v29 = 0;
    v30 = 0;
    if ( *(_BYTE *)(v24 + 2) == 40 )
    {
      v31 = 0LL;
      v69 = 0;
      if ( *(_DWORD *)(v24 + 20) )
        goto LABEL_171;
      v32 = 0LL;
      v73 = 0;
      v71 = *(_DWORD *)(v24 + 56);
      if ( !v71 )
        goto LABEL_171;
      do
      {
        v20 = *(unsigned int *)(v24 + 4 * v32 + 120);
        if ( (unsigned int)v20 >= 0x80 )
        {
          v33 = *(unsigned int *)(v24 + 16);
          if ( (unsigned int)v20 < (unsigned int)v33 )
          {
            v34 = (unsigned int)v20;
            v35 = *(_DWORD *)(v20 + v24) - 64;
            if ( v35 )
            {
              v20 = (unsigned int)(v35 - 1);
              if ( (_DWORD)v20 )
              {
                if ( (_DWORD)v20 == 1 )
                {
                  v20 = v34 + 40;
                  if ( v34 + 40 <= v33 )
                  {
                    if ( *(_DWORD *)(v34 + v24 + 12) )
                      v31 = (char *)(v34 + v24 + 32);
                    v25 = *(_BYTE **)(v34 + v24 + 24);
LABEL_61:
                    v36 = *(_BYTE *)(v34 + v24 + 8);
                    v26 = *(_BYTE *)(v34 + v24 + 9);
                    goto LABEL_70;
                  }
                }
              }
              else
              {
                v20 = v34 + 56;
                if ( v34 + 56 <= v33 )
                {
                  v69 = 1;
                  if ( *(_BYTE *)(v34 + v24 + 10) )
                    v31 = (char *)(v34 + v24 + 24);
                  v25 = *(_BYTE **)(v34 + v24 + 16);
                  v26 = *(_BYTE *)(v34 + v24 + 9);
                  v67 = *(_BYTE *)(v34 + v24 + 8);
                }
              }
            }
            else
            {
              v20 = v34 + 40;
              if ( v34 + 40 <= v33 )
              {
                if ( *(_BYTE *)(v34 + v24 + 10) )
                  v31 = (char *)(v34 + v24 + 24);
                v25 = *(_BYTE **)(v34 + v24 + 16);
                goto LABEL_61;
              }
            }
            if ( v69 )
              break;
          }
        }
        v32 = (unsigned int)(v73 + 1);
        v73 = v32;
      }
      while ( (unsigned int)v32 < v71 );
      v36 = v67;
LABEL_70:
      if ( !v31 )
        goto LABEL_171;
      v37 = *v31;
      v30 = 0;
    }
    else
    {
      v37 = *(_BYTE *)(v24 + 72);
      v25 = *(_BYTE **)(v24 + 32);
      v26 = *(_BYTE *)(v24 + 11);
      v36 = *(_BYTE *)(v24 + 4);
      if ( *(_BYTE *)(v24 + 2) )
        goto LABEL_171;
    }
    LOBYTE(v20) = v37 - 8;
    if ( (v20 & 0x5D) != 0 )
      goto LABEL_171;
    v38 = *(_BYTE *)(v24 + 3);
    if ( v38 == 1 || !v25 || !v26 )
    {
LABEL_95:
      if ( byte_140173441 < 0 )
      {
        if ( !v30 )
        {
          v29 = 0;
          v28 = 0;
          v27 = 0;
        }
        LODWORD(v66) = *(_DWORD *)(v5 + 48);
        McTemplateK0pduuuuup_EtwWriteTransfer(v20, v24, &v74, v5, v66, v38, v36, v27, v28, v29, v5);
      }
      goto LABEL_171;
    }
    v39 = *v25 & 0x7F;
    if ( v39 == 114 || v39 == 115 )
    {
      v20 = (unsigned __int64)&v25[v26];
      LOBYTE(v24) = 0;
      if ( (unsigned __int64)(v25 + 8) > v20 )
        goto LABEL_93;
      v28 = v25[2];
      v27 = v25[1] & 0xF;
      v29 = v25[3];
    }
    else
    {
      v20 = (unsigned __int64)&v25[v26];
      LOBYTE(v24) = 0;
      if ( (unsigned __int64)(v25 + 8) > v20 )
        goto LABEL_93;
      v40 = v25 + 13;
      v27 = v25[2] & 0xF;
      v41 = v26;
      if ( (unsigned int)(unsigned __int8)v25[7] + 8 <= v26 )
        v41 = (unsigned __int8)v25[7] + 8;
      v20 = (unsigned __int64)&v25[v41];
      if ( (unsigned __int64)v40 <= v20 )
        v28 = v25[12];
      if ( (unsigned __int64)(v25 + 14) > v20 )
        v29 = 0;
      else
        v29 = *v40;
    }
    LOBYTE(v24) = 1;
LABEL_93:
    if ( (_BYTE)v24 )
      v30 = 1;
    goto LABEL_95;
  }
  if ( !v17 )
  {
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 120));
    v19 = StorEtwLoggingEnabled == 0;
    *(_BYTE *)(v5 + 141) = -84;
    *(_DWORD *)(v5 + 48) = 0;
    if ( v19 )
      goto LABEL_170;
    v74 = 0LL;
    IoGetActivityIdIrp(v5, &v74);
    v43 = *(_QWORD *)(v5 + 184);
    if ( *(_BYTE *)v43 == 14 )
    {
      if ( (byte_140173442 & 8) != 0 )
      {
        v46 = &EventNonReadWriteRequestComplete;
        goto LABEL_169;
      }
LABEL_170:
      v18 = 0;
      goto LABEL_171;
    }
    if ( *(_BYTE *)v43 != 15 )
    {
      if ( *(_BYTE *)v43 == 27 )
      {
        if ( *(_BYTE *)(v43 + 1) == 7 && !*(_DWORD *)(v43 + 8) )
        {
          if ( (byte_140173442 & 0x40) != 0 )
          {
            v44 = *(unsigned int **)(v5 + 56);
            if ( v44 )
              v45 = *v44;
            else
              v45 = 0LL;
            LODWORD(v66) = v45;
            McTemplateK0pqd_EtwWriteTransfer(v45, v43, &v74, v5, v66, *(_DWORD *)(v5 + 48));
          }
          goto LABEL_170;
        }
        if ( (byte_140173442 & 0x20) != 0 )
        {
          v46 = &EventPnpRequestComplete;
LABEL_169:
          LODWORD(v66) = *(_DWORD *)(v5 + 48);
          McTemplateK0pd_EtwWriteTransfer(v42, v46, &v74, v5, v66);
          goto LABEL_170;
        }
      }
      goto LABEL_170;
    }
    if ( byte_140173441 >= 0 )
      goto LABEL_170;
    v47 = *(_QWORD *)(v43 + 8);
    v48 = 0LL;
    v68 = 0;
    v49 = 0;
    v50 = 0;
    v51 = 0;
    v52 = 0;
    v53 = 0;
    if ( *(_BYTE *)(v47 + 2) == 40 )
    {
      v54 = 0LL;
      v70 = 0;
      if ( *(_DWORD *)(v47 + 20) )
        goto LABEL_170;
      v55 = 0;
      v72 = *(_DWORD *)(v47 + 56);
      if ( !v72 )
        goto LABEL_170;
      do
      {
        v42 = *(unsigned int *)(v47 + 4LL * v55 + 120);
        if ( (unsigned int)v42 >= 0x80 )
        {
          v56 = *(unsigned int *)(v47 + 16);
          if ( (unsigned int)v42 < (unsigned int)v56 )
          {
            v57 = (unsigned int)v42;
            v58 = *(_DWORD *)(v42 + v47) - 64;
            if ( v58 )
            {
              v42 = (unsigned int)(v58 - 1);
              if ( (_DWORD)v42 )
              {
                if ( (_DWORD)v42 == 1 )
                {
                  v42 = v57 + 40;
                  if ( v57 + 40 <= v56 )
                  {
                    if ( *(_DWORD *)(v57 + v47 + 12) )
                      v54 = (char *)(v57 + v47 + 32);
                    v48 = *(_BYTE **)(v57 + v47 + 24);
LABEL_129:
                    v59 = *(_BYTE *)(v57 + v47 + 8);
                    v49 = *(_BYTE *)(v57 + v47 + 9);
                    goto LABEL_138;
                  }
                }
              }
              else
              {
                v42 = v57 + 56;
                if ( v57 + 56 <= v56 )
                {
                  v70 = 1;
                  if ( *(_BYTE *)(v57 + v47 + 10) )
                    v54 = (char *)(v57 + v47 + 24);
                  v48 = *(_BYTE **)(v57 + v47 + 16);
                  v49 = *(_BYTE *)(v57 + v47 + 9);
                  v68 = *(_BYTE *)(v57 + v47 + 8);
                }
              }
            }
            else
            {
              v42 = v57 + 40;
              if ( v57 + 40 <= v56 )
              {
                if ( *(_BYTE *)(v57 + v47 + 10) )
                  v54 = (char *)(v57 + v47 + 24);
                v48 = *(_BYTE **)(v57 + v47 + 16);
                goto LABEL_129;
              }
            }
            if ( v70 )
              break;
          }
        }
        ++v55;
      }
      while ( v55 < v72 );
      v59 = v68;
LABEL_138:
      if ( !v54 )
        goto LABEL_170;
      v60 = *v54;
      v53 = 0;
    }
    else
    {
      v60 = *(_BYTE *)(v47 + 72);
      v48 = *(_BYTE **)(v47 + 32);
      v49 = *(_BYTE *)(v47 + 11);
      v59 = *(_BYTE *)(v47 + 4);
      if ( *(_BYTE *)(v47 + 2) )
        goto LABEL_170;
    }
    LOBYTE(v42) = v60 - 8;
    if ( (v42 & 0x5D) != 0 )
      goto LABEL_170;
    v61 = *(_BYTE *)(v47 + 3);
    if ( v61 == 1 || !v48 || !v49 )
    {
LABEL_163:
      if ( byte_140173441 < 0 )
      {
        if ( !v53 )
        {
          v52 = 0;
          v51 = 0;
          v50 = 0;
        }
        LODWORD(v66) = *(_DWORD *)(v5 + 48);
        McTemplateK0pduuuuup_EtwWriteTransfer(v42, v47, &v74, v5, v66, v61, v59, v50, v51, v52, v5);
      }
      goto LABEL_170;
    }
    v62 = *v48 & 0x7F;
    if ( v62 == 114 || v62 == 115 )
    {
      v42 = (unsigned __int64)&v48[v49];
      LOBYTE(v47) = 0;
      if ( (unsigned __int64)(v48 + 8) > v42 )
        goto LABEL_161;
      v51 = v48[2];
      v50 = v48[1] & 0xF;
      v52 = v48[3];
    }
    else
    {
      v42 = (unsigned __int64)&v48[v49];
      LOBYTE(v47) = 0;
      if ( (unsigned __int64)(v48 + 8) > v42 )
        goto LABEL_161;
      v63 = v48 + 13;
      v50 = v48[2] & 0xF;
      v64 = v49;
      if ( (unsigned int)(unsigned __int8)v48[7] + 8 <= v49 )
        v64 = (unsigned __int8)v48[7] + 8;
      v42 = (unsigned __int64)&v48[v64];
      if ( (unsigned __int64)v63 <= v42 )
        v51 = v48[12];
      if ( (unsigned __int64)(v48 + 14) > v42 )
        v52 = 0;
      else
        v52 = *v63;
    }
    LOBYTE(v47) = 1;
LABEL_161:
    if ( (_BYTE)v47 )
      v53 = 1;
    goto LABEL_163;
  }
  return v18;
}
