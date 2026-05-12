/*
 * XREFs of NvmeAdapterGetHostGatewayByHandle @ 0x14019B214
 * Callers:
 *     NvmeAdapterDeviceControlIrp @ 0x1401BE838 (NvmeAdapterDeviceControlIrp.c)
 * Callees:
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     NvmeAdapterGetHostGateway @ 0x1400D8CFC (NvmeAdapterGetHostGateway.c)
 *     NvmeAdapterHostGatewayAcquireRundown @ 0x1400D8F28 (NvmeAdapterHostGatewayAcquireRundown.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int64 __fastcall NvmeAdapterGetHostGatewayByHandle(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  int v3; // ebx
  __int64 v6; // rax
  int v7; // ebp
  _QWORD *HostGateway; // rax
  unsigned __int64 v9; // rsi
  _DWORD *v10; // r15
  __int128 *v11; // rcx
  __int64 v12; // rdx
  _OWORD *v13; // rax
  __int128 v14; // xmm0
  bool v15; // zf
  unsigned __int64 v16; // rcx
  __int64 v17; // rdx
  int *v18; // rax
  const EVENT_DESCRIPTOR *v19; // rdx
  __int64 v20; // rdx
  _BYTE *v21; // r9
  unsigned __int8 v22; // r14
  char v23; // r11
  char v24; // si
  char v25; // r10
  char v26; // r15
  char *v27; // r15
  unsigned int v28; // r13d
  unsigned __int64 v29; // r12
  __int64 v30; // r8
  int v31; // ecx
  char v32; // r12
  char v33; // cl
  char v34; // r8
  char v35; // al
  char *v36; // r10
  unsigned int v37; // eax
  char v39; // [rsp+60h] [rbp-58h]
  char v40; // [rsp+61h] [rbp-57h]
  unsigned int v41; // [rsp+64h] [rbp-54h]
  GUID v42; // [rsp+68h] [rbp-50h] BYREF

  v2 = *(_QWORD *)(a2 + 184);
  v3 = 0;
  *(_QWORD *)(a2 + 56) = 0LL;
  if ( (*(_BYTE *)(a1 + 144) & 1) != 0 && *(_QWORD *)(a1 + 608) )
  {
    v6 = *(_QWORD *)(a2 + 24);
    if ( v6 && *(_DWORD *)(v2 + 16) >= 0x10u && *(_WORD *)v6 == 1 && *(_WORD *)(v6 + 2) == 16 )
    {
      if ( *(_DWORD *)(v2 + 8) >= 0x140u )
      {
        HostGateway = NvmeAdapterGetHostGateway(a1, (_QWORD *)(*(_QWORD *)(v6 + 8) ^ a1));
        v9 = (unsigned __int64)HostGateway;
        if ( HostGateway )
        {
          v7 = NvmeAdapterHostGatewayAcquireRundown((__int64)HostGateway);
          if ( v7 >= 0 )
          {
            v10 = *(_DWORD **)(a2 + 24);
            memset_0(v10, 0, *(unsigned int *)(v2 + 8));
            *v10 = 20971521;
            v11 = (__int128 *)(v9 + 72);
            v12 = 2LL;
            *((_QWORD *)v10 + 1) = v9 ^ a1;
            v10[5] = *(_DWORD *)(v9 + 4);
            v10[6] = *(_DWORD *)(v9 + 8);
            v13 = v10 + 7;
            do
            {
              v14 = *v11;
              v11 += 8;
              *v13 = v14;
              v13 += 8;
              *(v13 - 7) = *(v11 - 7);
              *(v13 - 6) = *(v11 - 6);
              *(v13 - 5) = *(v11 - 5);
              *(v13 - 4) = *(v11 - 4);
              *(v13 - 3) = *(v11 - 3);
              *(v13 - 2) = *(v11 - 2);
              *(v13 - 1) = *(v11 - 1);
              --v12;
            }
            while ( v12 );
            *(_OWORD *)(v10 + 71) = *(_OWORD *)(v9 + 328);
            *(_OWORD *)(v10 + 75) = *(_OWORD *)(v9 + 344);
            ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v9 + 56));
            *(_QWORD *)(a2 + 56) = *((unsigned __int16 *)v10 + 1);
          }
        }
        else
        {
          v7 = -1073741275;
        }
      }
      else
      {
        v7 = -1073741789;
      }
    }
    else
    {
      v7 = -1073741811;
    }
  }
  else
  {
    v7 = -1073741637;
  }
  v15 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v7;
  if ( !v15 )
  {
    v42 = 0LL;
    IoGetActivityIdIrp(a2, &v42);
    v17 = *(_QWORD *)(a2 + 184);
    if ( *(_BYTE *)v17 == 14 )
    {
      if ( (byte_140173442 & 8) == 0 )
        goto LABEL_83;
      v19 = &EventNonReadWriteRequestComplete;
      goto LABEL_82;
    }
    if ( *(_BYTE *)v17 != 15 )
    {
      if ( *(_BYTE *)v17 != 27 )
        goto LABEL_83;
      if ( *(_BYTE *)(v17 + 1) == 7 && !*(_DWORD *)(v17 + 8) )
      {
        if ( (byte_140173442 & 0x40) != 0 )
        {
          v18 = *(int **)(a2 + 56);
          if ( v18 )
            v3 = *v18;
          McTemplateK0pqd_EtwWriteTransfer(v16, v17, &v42, a2, v3, *(_DWORD *)(a2 + 48));
        }
        goto LABEL_83;
      }
      if ( (byte_140173442 & 0x20) == 0 )
        goto LABEL_83;
      v19 = &EventPnpRequestComplete;
LABEL_82:
      McTemplateK0pd_EtwWriteTransfer(v16, v19, &v42, a2, *(_DWORD *)(a2 + 48));
      goto LABEL_83;
    }
    if ( byte_140173441 >= 0 )
      goto LABEL_83;
    v20 = *(_QWORD *)(v17 + 8);
    v21 = 0LL;
    v39 = 0;
    v22 = 0;
    v23 = 0;
    v24 = 0;
    v25 = 0;
    v26 = 0;
    if ( *(_BYTE *)(v20 + 2) != 40 )
    {
      v33 = *(_BYTE *)(v20 + 72);
      v21 = *(_BYTE **)(v20 + 32);
      v22 = *(_BYTE *)(v20 + 11);
      v32 = *(_BYTE *)(v20 + 4);
      if ( *(_BYTE *)(v20 + 2) )
        goto LABEL_83;
LABEL_57:
      LOBYTE(v16) = v33 - 8;
      if ( (v16 & 0x5D) != 0 )
        goto LABEL_83;
      v34 = *(_BYTE *)(v20 + 3);
      if ( v34 == 1 || !v21 || !v22 )
        goto LABEL_76;
      v35 = *v21 & 0x7F;
      if ( v35 == 114 || v35 == 115 )
      {
        v16 = (unsigned __int64)&v21[v22];
        LOBYTE(v20) = 0;
        if ( (unsigned __int64)(v21 + 8) > v16 )
          goto LABEL_74;
        v24 = v21[2];
        v23 = v21[1] & 0xF;
        v25 = v21[3];
      }
      else
      {
        v16 = (unsigned __int64)&v21[v22];
        LOBYTE(v20) = 0;
        if ( (unsigned __int64)(v21 + 8) > v16 )
          goto LABEL_74;
        v36 = v21 + 13;
        v23 = v21[2] & 0xF;
        v37 = v22;
        if ( (unsigned int)(unsigned __int8)v21[7] + 8 <= v22 )
          v37 = (unsigned __int8)v21[7] + 8;
        v16 = (unsigned __int64)&v21[v37];
        if ( (unsigned __int64)v36 <= v16 )
          v24 = v21[12];
        if ( (unsigned __int64)(v21 + 14) > v16 )
          v25 = 0;
        else
          v25 = *v36;
      }
      LOBYTE(v20) = 1;
LABEL_74:
      if ( (_BYTE)v20 )
        v26 = 1;
LABEL_76:
      if ( byte_140173441 < 0 )
      {
        if ( !v26 )
        {
          v25 = 0;
          v24 = 0;
          v23 = 0;
        }
        McTemplateK0pduuuuup_EtwWriteTransfer(v16, v20, &v42, a2, *(_DWORD *)(a2 + 48), v34, v32, v23, v24, v25, a2);
      }
      goto LABEL_83;
    }
    v27 = 0LL;
    v40 = 0;
    if ( !*(_DWORD *)(v20 + 20) )
    {
      v28 = 0;
      v41 = *(_DWORD *)(v20 + 56);
      if ( v41 )
      {
        do
        {
          v16 = *(unsigned int *)(v20 + 4LL * v28 + 120);
          if ( (unsigned int)v16 >= 0x80 )
          {
            v29 = *(unsigned int *)(v20 + 16);
            if ( (unsigned int)v16 < (unsigned int)v29 )
            {
              v30 = (unsigned int)v16;
              v31 = *(_DWORD *)(v16 + v20) - 64;
              if ( v31 )
              {
                v16 = (unsigned int)(v31 - 1);
                if ( (_DWORD)v16 )
                {
                  if ( (_DWORD)v16 == 1 )
                  {
                    v16 = v30 + 40;
                    if ( v30 + 40 <= v29 )
                    {
                      if ( *(_DWORD *)(v30 + v20 + 12) )
                        v27 = (char *)(v30 + v20 + 32);
                      v21 = *(_BYTE **)(v30 + v20 + 24);
LABEL_42:
                      v32 = *(_BYTE *)(v30 + v20 + 8);
                      v22 = *(_BYTE *)(v30 + v20 + 9);
                      goto LABEL_51;
                    }
                  }
                }
                else
                {
                  v16 = v30 + 56;
                  if ( v30 + 56 <= v29 )
                  {
                    v40 = 1;
                    if ( *(_BYTE *)(v30 + v20 + 10) )
                      v27 = (char *)(v30 + v20 + 24);
                    v21 = *(_BYTE **)(v30 + v20 + 16);
                    v22 = *(_BYTE *)(v30 + v20 + 9);
                    v39 = *(_BYTE *)(v30 + v20 + 8);
                  }
                }
              }
              else
              {
                v16 = v30 + 40;
                if ( v30 + 40 <= v29 )
                {
                  if ( *(_BYTE *)(v30 + v20 + 10) )
                    v27 = (char *)(v30 + v20 + 24);
                  v21 = *(_BYTE **)(v30 + v20 + 16);
                  goto LABEL_42;
                }
              }
              if ( v40 )
                break;
            }
          }
          ++v28;
        }
        while ( v28 < v41 );
        v32 = v39;
LABEL_51:
        if ( v27 )
        {
          v33 = *v27;
          v26 = 0;
          goto LABEL_57;
        }
      }
    }
  }
LABEL_83:
  IofCompleteRequest((PIRP)a2, 0);
  return (unsigned int)v7;
}
