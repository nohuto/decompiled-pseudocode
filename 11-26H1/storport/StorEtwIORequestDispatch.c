/*
 * XREFs of StorEtwIORequestDispatch @ 0x1400036E4
 * Callers:
 *     RaDriverScsiIrp @ 0x140003DF0 (RaDriverScsiIrp.c)
 *     RaUnitScsiIrp @ 0x140004D30 (RaUnitScsiIrp.c)
 *     RaidUnitSubmitIrpRequest @ 0x140021420 (RaidUnitSubmitIrpRequest.c)
 *     StorUnitStartBypassIo @ 0x1400AB260 (StorUnitStartBypassIo.c)
 * Callees:
 *     StRtlIoStorInfoGetNvCachePriority @ 0x140032F90 (StRtlIoStorInfoGetNvCachePriority.c)
 *     McTemplateK0puxipu_EtwWriteTransfer @ 0x1400AFDE4 (McTemplateK0puxipu_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

char __fastcall StorEtwIORequestDispatch(__int64 a1)
{
  __int64 v1; // r15
  __int64 v2; // rbx
  unsigned int v3; // r13d
  char v5; // si
  char v6; // r12
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // r8
  int NvCachePriority; // eax
  int v11; // r15d
  char *v12; // rdx
  unsigned int v13; // edi
  __int64 v14; // r11
  unsigned __int64 v15; // r10
  __int64 v16; // r9
  int v17; // ecx
  __int64 v18; // rdx
  char v19; // dl
  __int64 v20; // r8
  unsigned __int8 v22; // [rsp+50h] [rbp-30h] BYREF
  char v23; // [rsp+51h] [rbp-2Fh]
  int v24; // [rsp+54h] [rbp-2Ch]
  __int64 v25; // [rsp+58h] [rbp-28h]
  __int128 v26; // [rsp+60h] [rbp-20h] BYREF

  v1 = *(_QWORD *)(a1 + 184);
  v22 = -1;
  v2 = 0LL;
  v3 = 0;
  v25 = 0LL;
  v24 = 0;
  v5 = 0;
  v26 = 0LL;
  v6 = 0;
  LOBYTE(v7) = 0;
  IoGetActivityIdIrp(a1, &v26);
  LOBYTE(v8) = *(_BYTE *)v1;
  if ( *(_BYTE *)v1 != 15 )
  {
    if ( (_BYTE)v8 == 3 )
    {
      v5 = 40;
    }
    else
    {
      if ( (_BYTE)v8 != 4 )
      {
LABEL_44:
        v20 = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(v1 + 40) + 64LL) + 932LL);
        if ( (_DWORD)v20 )
        {
          v2 /= v20;
          v3 /= (unsigned int)v20;
        }
        v19 = -1;
        goto LABEL_47;
      }
      v5 = 42;
    }
    v3 = *(_DWORD *)(v1 + 8);
    LOBYTE(v7) = a1;
    v2 = *(_QWORD *)(v1 + 24);
    goto LABEL_44;
  }
  v9 = *(_QWORD *)(*(_QWORD *)(a1 + 184) + 8LL);
  LOBYTE(NvCachePriority) = *(_BYTE *)(v9 + 2);
  if ( (_BYTE)NvCachePriority != 40 )
  {
    v6 = *(_BYTE *)(v9 + 10);
    v12 = (char *)(v9 + 72);
    v5 = *(_BYTE *)(v9 + 72);
    v11 = *(unsigned __int8 *)(v9 + 2);
    v7 = *(_QWORD *)(v9 + 56);
    goto LABEL_27;
  }
  v11 = *(_DWORD *)(v9 + 20);
  v12 = 0LL;
  v23 = 0;
  if ( v11 )
    goto LABEL_25;
  v13 = *(_DWORD *)(v9 + 56);
  v14 = 0LL;
  if ( !v13 )
    goto LABEL_23;
  while ( 1 )
  {
    v8 = *(unsigned int *)(v9 + 4 * v14 + 120);
    if ( (unsigned int)v8 >= 0x80 )
    {
      v15 = *(unsigned int *)(v9 + 16);
      if ( (unsigned int)v8 < (unsigned int)v15 )
        break;
    }
LABEL_18:
    v14 = (unsigned int)(v14 + 1);
    if ( (unsigned int)v14 >= v13 )
      goto LABEL_23;
  }
  v16 = (unsigned int)v8;
  v17 = *(_DWORD *)(v8 + v9) - 64;
  if ( v17 )
  {
    LODWORD(v8) = v17 - 1;
    if ( (_DWORD)v8 )
    {
      if ( (_DWORD)v8 == 1 )
      {
        LODWORD(v8) = v16 + 40;
        if ( v16 + 40 <= v15 )
        {
          if ( !*(_DWORD *)(v16 + v9 + 12) )
            goto LABEL_23;
          v18 = v9 + 32;
          goto LABEL_22;
        }
      }
    }
    else
    {
      LODWORD(v8) = v16 + 56;
      if ( v16 + 56 <= v15 )
      {
        v6 = *(_BYTE *)(v16 + v9 + 10);
        v23 = 1;
        if ( !v6 )
          goto LABEL_23;
        v12 = (char *)(v16 + v9 + 24);
      }
    }
    goto LABEL_17;
  }
  LODWORD(v8) = v16 + 40;
  if ( v16 + 40 > v15 )
  {
LABEL_17:
    if ( v23 )
      goto LABEL_23;
    goto LABEL_18;
  }
  v6 = *(_BYTE *)(v16 + v9 + 10);
  if ( !v6 )
    goto LABEL_23;
  v18 = v9 + 24;
LABEL_22:
  v12 = (char *)(v16 + v18);
LABEL_23:
  if ( v12 )
    v5 = *v12;
LABEL_25:
  v7 = *(_QWORD *)(v9 + 104);
LABEL_27:
  if ( v12 )
  {
    if ( v6 == 16 )
    {
      HIBYTE(v25) = v12[2];
      BYTE6(v25) = v12[3];
      BYTE5(v25) = v12[4];
      BYTE4(v25) = v12[5];
      BYTE3(v25) = v12[6];
      BYTE2(v25) = v12[7];
      BYTE1(v25) = v12[8];
      LOBYTE(v25) = v12[9];
      HIBYTE(v24) = v12[10];
      BYTE2(v24) = v12[11];
      BYTE1(v24) = v12[12];
      LOBYTE(NvCachePriority) = v12[13];
    }
    else
    {
      BYTE3(v25) = v12[2];
      BYTE2(v25) = v12[3];
      BYTE1(v25) = v12[4];
      LOBYTE(v25) = v12[5];
      BYTE1(v24) = v12[7];
      LOBYTE(NvCachePriority) = v12[8];
    }
    LOBYTE(v2) = v25;
    LOBYTE(v24) = NvCachePriority;
    LOBYTE(v3) = NvCachePriority;
  }
  if ( v7 )
  {
    NvCachePriority = StRtlIoStorInfoGetNvCachePriority(v7, &v22);
    LODWORD(v8) = v22;
    if ( NvCachePriority < 0 )
      LODWORD(v8) = 255;
    v19 = v8;
  }
  else
  {
    v19 = -1;
  }
  if ( !v11 )
  {
LABEL_47:
    if ( ((v5 - 8) & 0x5F) != 0 )
    {
      LOBYTE(NvCachePriority) = v5 - 10;
      if ( ((v5 - 10) & 0x5F) == 0 )
      {
        NvCachePriority = *(_DWORD *)(a1 + 16);
        if ( (NvCachePriority & 0x42) != 0 )
        {
          if ( (byte_140173441 & 0x10) != 0 )
            LOBYTE(NvCachePriority) = McTemplateK0puxipu_EtwWriteTransfer(
                                        v8,
                                        (unsigned int)&EventPagingWriteRequest,
                                        (unsigned int)&v26,
                                        a1,
                                        v5,
                                        v3,
                                        v2,
                                        v7,
                                        v19);
        }
        else if ( (byte_140173441 & 4) != 0 )
        {
          LOBYTE(NvCachePriority) = McTemplateK0puxipu_EtwWriteTransfer(
                                      v8,
                                      (unsigned int)&EventWriteRequest,
                                      (unsigned int)&v26,
                                      a1,
                                      v5,
                                      v3,
                                      v2,
                                      v7,
                                      v19);
        }
      }
    }
    else
    {
      NvCachePriority = *(_DWORD *)(a1 + 16);
      if ( (NvCachePriority & 0x42) != 0 )
      {
        if ( (byte_140173441 & 8) != 0 )
          LOBYTE(NvCachePriority) = McTemplateK0puxipu_EtwWriteTransfer(
                                      v8,
                                      (unsigned int)&EventPagingReadRequest,
                                      (unsigned int)&v26,
                                      a1,
                                      v5,
                                      v3,
                                      v2,
                                      v7,
                                      v19);
      }
      else if ( (byte_140173441 & 2) != 0 )
      {
        LOBYTE(NvCachePriority) = McTemplateK0puxipu_EtwWriteTransfer(
                                    v8,
                                    (unsigned int)&EventReadRequest,
                                    (unsigned int)&v26,
                                    a1,
                                    v5,
                                    v3,
                                    v2,
                                    v7,
                                    v19);
      }
    }
  }
  return NvCachePriority;
}
