/*
 * XREFs of NvmeNamespaceCompleteNvmRequest @ 0x140102130
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     McTemplateK0qjzshqusssuuuqqqqqq_EtwWriteTransfer @ 0x1401001F8 (McTemplateK0qjzshqusssuuuqqqqqq_EtwWriteTransfer.c)
 *     NvmeMapStatus @ 0x140100B88 (NvmeMapStatus.c)
 *     NvmeNamespaceQueueRequest @ 0x14010C2DC (NvmeNamespaceQueueRequest.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

void __fastcall NvmeNamespaceCompleteNvmRequest(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        _QWORD *P)
{
  int v6; // ebx
  unsigned int v7; // r10d
  unsigned __int8 v10; // r12
  unsigned int v12; // r8d
  unsigned int i; // ecx
  __int64 v14; // rdx
  __int64 v15; // r15
  void *v16; // rcx
  unsigned int v17; // r8d
  unsigned int v18; // r8d
  unsigned int j; // ecx
  __int64 v20; // rdx
  int v21; // eax
  char v22; // al
  unsigned __int16 v23; // r9
  const char *v24; // r11
  __int64 v25; // r8
  __int64 v26; // r9
  bool v27; // zf
  unsigned __int64 v28; // rcx
  __int64 v29; // rdx
  int *v30; // rax
  const EVENT_DESCRIPTOR *v31; // rdx
  __int64 v32; // rdx
  char v33; // r12
  _BYTE *v34; // r9
  unsigned __int8 v35; // bp
  char v36; // r10
  char v37; // si
  char v38; // r11
  char v39; // r14
  char *v40; // r14
  unsigned int v41; // r13d
  unsigned __int64 v42; // r15
  __int64 v43; // r8
  int v44; // ecx
  char v45; // cl
  char v46; // r8
  char v47; // al
  char *v48; // r11
  unsigned int v49; // eax
  __int64 v50; // [rsp+20h] [rbp-F8h]
  __int64 v51; // [rsp+28h] [rbp-F0h]
  __int64 v52; // [rsp+30h] [rbp-E8h]
  __int64 v53; // [rsp+38h] [rbp-E0h]
  __int64 v54; // [rsp+40h] [rbp-D8h]
  __int64 v55; // [rsp+48h] [rbp-D0h]
  char v56; // [rsp+B0h] [rbp-68h]
  unsigned int v58; // [rsp+B4h] [rbp-64h]
  GUID v59; // [rsp+B8h] [rbp-60h] BYREF

  v6 = 0;
  v7 = a4;
  *(_QWORD *)&v59.Data1 = *(_QWORD *)(a1 + 128);
  v10 = 4;
  if ( *(_BYTE *)(a5 + 668) )
    v10 = *(_BYTE *)(a5 + 668);
  if ( *(_BYTE *)(a2 + 2) == 40 )
  {
    v12 = *(_DWORD *)(a2 + 56);
    if ( v12 )
    {
      for ( i = 0; i < v12; ++i )
      {
        v14 = *(unsigned int *)(a2 + 4LL * i + 120);
        if ( (unsigned int)v14 >= 0x80 && (unsigned int)v14 < *(_DWORD *)(a2 + 16) )
        {
          v15 = a2 + v14;
          if ( *(_DWORD *)(a2 + v14) == 67 )
            goto LABEL_12;
        }
      }
    }
  }
  v15 = 0LL;
LABEL_12:
  if ( P )
  {
    if ( (unsigned __int8)*(_DWORD *)(v15 + 16) == 9 && (*(_DWORD *)(v15 + 60) & 4) != 0 )
    {
      *(_QWORD *)(a2 + 64) = P[1];
      *(_DWORD *)(a2 + 60) = *((_DWORD *)P + 4);
      a3 = *P;
      v16 = (void *)P[3];
      v17 = 16 * *((_DWORD *)P + 5);
      if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 128) + 400LL) + 184LL) & 0x2000) != 0 && v17 <= 0x1000 )
        ExFreePoolWithTag(v16, 0x52436152u);
      else
        MmFreeContiguousMemorySpecifyCache(v16, v17, MmCached);
    }
    ExFreePoolWithTag(P, 0x4D4E6152u);
    v7 = a4;
  }
  if ( *(_BYTE *)(a2 + 2) == 40 )
  {
    v18 = *(_DWORD *)(a2 + 56);
    if ( v18 )
    {
      for ( j = 0; j < v18; ++j )
      {
        v20 = *(unsigned int *)(a2 + 4LL * j + 120);
        if ( (unsigned int)v20 >= 0x80 && (unsigned int)v20 < *(_DWORD *)(a2 + 16) )
        {
          v21 = *(_DWORD *)(v20 + a2);
          if ( v21 == 64 || (unsigned int)(v21 - 65) <= 1 )
          {
            *(_DWORD *)(a2 + 20) = 0;
            break;
          }
        }
      }
    }
  }
  v22 = *(_BYTE *)(a2 + 3);
  if ( v22 == 37 || v22 == 14 )
  {
    v26 = *(_QWORD *)(a3 + 184);
    *(_QWORD *)(v26 + 32) = (unsigned int)(*(_DWORD *)(v26 + 32) + 1);
    if ( *(_DWORD *)(v26 + 32) <= (unsigned int)v10 )
    {
      NvmeNamespaceQueueRequest(a5, a3, v7);
      return;
    }
    NvmeMapStatus(a2);
    _InterlockedIncrement64((volatile signed __int64 *)(a5 + 192));
  }
  else
  {
    NvmeMapStatus(a2);
    if ( (*(_BYTE *)(a2 + 3) & 0x3F) != 1 )
    {
      _InterlockedIncrement64((volatile signed __int64 *)(a5 + 192));
      if ( (byte_14017344A & 1) != 0 )
      {
        v23 = *(_WORD *)(v15 + 86);
        v24 = (const char *)&dword_140154ADC;
        v25 = v23;
        if ( *(_QWORD *)(a1 + 752) )
          v24 = *(const char **)(a1 + 752);
        LOWORD(v25) = v23 >> 1;
        McTemplateK0qjzshqusssuuuqqqqqq_EtwWriteTransfer(
          a1 + 841,
          a1 + 800,
          v25,
          *(_DWORD *)(*(_QWORD *)&v59.Data1 + 56LL),
          *(_QWORD *)&v59.Data1 + 1048LL,
          *(const wchar_t **)(*(_QWORD *)&v59.Data1 + 1032LL),
          *(const char **)(a1 + 792),
          *(_WORD *)(a1 + 4),
          *(_DWORD *)(a5 + 56),
          *(_BYTE *)(a1 + 744),
          v24,
          (const char *)(a1 + 800),
          (const char *)(a1 + 841),
          *(_BYTE *)(v15 + 16),
          (v23 >> 9) & 7,
          v23 >> 1,
          *(_DWORD *)(v15 + 56),
          *(_DWORD *)(v15 + 60),
          *(_DWORD *)(v15 + 64),
          *(_DWORD *)(v15 + 68),
          *(_DWORD *)(v15 + 72),
          *(_DWORD *)(v15 + 76));
      }
    }
  }
  ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a5 + 120));
  v27 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a3 + 141) = -84;
  *(_DWORD *)(a3 + 48) = 0;
  if ( v27 )
    goto LABEL_106;
  v59 = 0LL;
  IoGetActivityIdIrp(a3, &v59);
  v29 = *(_QWORD *)(a3 + 184);
  if ( *(_BYTE *)v29 == 14 )
  {
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_106;
    v31 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
    goto LABEL_105;
  }
  if ( *(_BYTE *)v29 != 15 )
  {
    if ( *(_BYTE *)v29 != 27 )
      goto LABEL_106;
    if ( *(_BYTE *)(v29 + 1) == 7 && !*(_DWORD *)(v29 + 8) )
    {
      if ( (byte_140173442 & 0x40) != 0 )
      {
        v30 = *(int **)(a3 + 56);
        if ( v30 )
          v6 = *v30;
        LODWORD(v51) = *(_DWORD *)(a3 + 48);
        LODWORD(v50) = v6;
        McTemplateK0pqd_EtwWriteTransfer(v28, v29, &v59, a3, v50, v51);
      }
      goto LABEL_106;
    }
    if ( (byte_140173442 & 0x20) == 0 )
      goto LABEL_106;
    v31 = &EventPnpRequestComplete;
LABEL_105:
    LODWORD(v50) = *(_DWORD *)(a3 + 48);
    McTemplateK0pd_EtwWriteTransfer(v28, v31, &v59, a3, v50);
    goto LABEL_106;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_106;
  v32 = *(_QWORD *)(v29 + 8);
  v33 = 0;
  v34 = 0LL;
  v35 = 0;
  v36 = 0;
  v37 = 0;
  v38 = 0;
  v39 = 0;
  if ( *(_BYTE *)(v32 + 2) == 40 )
  {
    v40 = 0LL;
    v56 = 0;
    if ( *(_DWORD *)(v32 + 20) )
      goto LABEL_106;
    v41 = 0;
    v58 = *(_DWORD *)(v32 + 56);
    if ( !v58 )
      goto LABEL_106;
    while ( 1 )
    {
      v28 = *(unsigned int *)(v32 + 4LL * v41 + 120);
      if ( (unsigned int)v28 >= 0x80 )
      {
        v42 = *(unsigned int *)(v32 + 16);
        if ( (unsigned int)v28 < (unsigned int)v42 )
        {
          v43 = (unsigned int)v28;
          v44 = *(_DWORD *)(v28 + v32) - 64;
          if ( v44 )
          {
            v28 = (unsigned int)(v44 - 1);
            if ( (_DWORD)v28 )
            {
              if ( (_DWORD)v28 == 1 )
              {
                v28 = v43 + 40;
                if ( v43 + 40 <= v42 )
                {
                  if ( *(_DWORD *)(v43 + v32 + 12) )
                    v40 = (char *)(v43 + v32 + 32);
                  v34 = *(_BYTE **)(v43 + v32 + 24);
                  goto LABEL_76;
                }
              }
            }
            else
            {
              v28 = v43 + 56;
              if ( v43 + 56 <= v42 )
              {
                v56 = 1;
                if ( *(_BYTE *)(v43 + v32 + 10) )
                  v40 = (char *)(v43 + v32 + 24);
                v33 = *(_BYTE *)(v43 + v32 + 8);
                v34 = *(_BYTE **)(v43 + v32 + 16);
                v35 = *(_BYTE *)(v43 + v32 + 9);
              }
            }
          }
          else
          {
            v28 = v43 + 40;
            if ( v43 + 40 <= v42 )
            {
              if ( *(_BYTE *)(v43 + v32 + 10) )
                v40 = (char *)(v43 + v32 + 24);
              v34 = *(_BYTE **)(v43 + v32 + 16);
LABEL_76:
              v35 = *(_BYTE *)(v43 + v32 + 9);
              v33 = *(_BYTE *)(v43 + v32 + 8);
LABEL_77:
              if ( v40 )
              {
                v45 = *v40;
                v39 = 0;
                goto LABEL_80;
              }
              goto LABEL_106;
            }
          }
          if ( v56 )
            goto LABEL_77;
        }
      }
      if ( ++v41 >= v58 )
        goto LABEL_77;
    }
  }
  v45 = *(_BYTE *)(v32 + 72);
  v34 = *(_BYTE **)(v32 + 32);
  v35 = *(_BYTE *)(v32 + 11);
  v33 = *(_BYTE *)(v32 + 4);
  if ( *(_BYTE *)(v32 + 2) )
    goto LABEL_106;
LABEL_80:
  LOBYTE(v28) = v45 - 8;
  if ( (v28 & 0x5D) == 0 )
  {
    v46 = *(_BYTE *)(v32 + 3);
    if ( v46 == 1 || !v34 || !v35 )
    {
LABEL_99:
      if ( byte_140173441 < 0 )
      {
        if ( !v39 )
        {
          v38 = 0;
          v37 = 0;
          v36 = 0;
        }
        LOBYTE(v55) = v38;
        LOBYTE(v54) = v37;
        LOBYTE(v53) = v36;
        LOBYTE(v52) = v33;
        LOBYTE(v51) = v46;
        LODWORD(v50) = *(_DWORD *)(a3 + 48);
        McTemplateK0pduuuuup_EtwWriteTransfer(v28, v32, &v59, a3, v50, v51, v52, v53, v54, v55, a3);
      }
      goto LABEL_106;
    }
    v47 = *v34 & 0x7F;
    if ( v47 == 114 || v47 == 115 )
    {
      v28 = (unsigned __int64)&v34[v35];
      LOBYTE(v32) = 0;
      if ( (unsigned __int64)(v34 + 8) > v28 )
        goto LABEL_97;
      v37 = v34[2];
      v36 = v34[1] & 0xF;
      v38 = v34[3];
    }
    else
    {
      v28 = (unsigned __int64)&v34[v35];
      LOBYTE(v32) = 0;
      if ( (unsigned __int64)(v34 + 8) > v28 )
        goto LABEL_97;
      v48 = v34 + 13;
      v36 = v34[2] & 0xF;
      v49 = v35;
      if ( (unsigned int)(unsigned __int8)v34[7] + 8 <= v35 )
        v49 = (unsigned __int8)v34[7] + 8;
      v28 = (unsigned __int64)&v34[v49];
      if ( (unsigned __int64)v48 <= v28 )
        v37 = v34[12];
      if ( (unsigned __int64)(v34 + 14) > v28 )
        v38 = 0;
      else
        v38 = *v48;
    }
    LOBYTE(v32) = 1;
LABEL_97:
    if ( (_BYTE)v32 )
      v39 = 1;
    goto LABEL_99;
  }
LABEL_106:
  IofCompleteRequest((PIRP)a3, 0);
}
