/*
 * XREFs of NvmeAdapterGetSubsystemPorts @ 0x14019D2F4
 * Callers:
 *     NvmeAdapterDeviceControlIrp @ 0x1401BE838 (NvmeAdapterDeviceControlIrp.c)
 * Callees:
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     NvmeAdapterGetHostGateway @ 0x1400D8CFC (NvmeAdapterGetHostGateway.c)
 *     NvmeAdapterHostGatewayAcquireRundown @ 0x1400D8F28 (NvmeAdapterHostGatewayAcquireRundown.c)
 *     NvmeAdapterSubsystemPortAcquireRundown @ 0x1400E0BE8 (NvmeAdapterSubsystemPortAcquireRundown.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int64 __fastcall NvmeAdapterGetSubsystemPorts(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rsi
  int v3; // ebx
  _QWORD *v4; // rdi
  __int64 v5; // rax
  int v6; // ebp
  _QWORD *HostGateway; // rax
  _QWORD *v8; // r14
  _WORD *v9; // r12
  unsigned __int16 v10; // cx
  _QWORD *v11; // r13
  _WORD *v12; // r15
  _QWORD *v13; // r14
  unsigned __int64 v14; // rsi
  _DWORD *v15; // rcx
  _OWORD *v16; // rcx
  __int64 v17; // rdx
  _OWORD *v18; // rax
  __int128 v19; // xmm1
  _OWORD *v20; // rax
  __int64 v21; // rdx
  _OWORD *v22; // rcx
  __int128 v23; // xmm1
  __int64 v24; // rax
  bool v25; // zf
  unsigned __int64 v26; // rcx
  __int64 v27; // rdx
  int *v28; // rax
  const EVENT_DESCRIPTOR *v29; // rdx
  __int64 v30; // rdx
  _BYTE *v31; // r9
  unsigned __int8 v32; // r14
  char v33; // r11
  char v34; // si
  char v35; // r10
  char v36; // r15
  char *v37; // r15
  unsigned int v38; // r13d
  unsigned __int64 v39; // r12
  __int64 v40; // r8
  int v41; // ecx
  char v42; // r12
  char v43; // cl
  char v44; // al
  char v45; // r8
  char *v46; // r10
  unsigned int v47; // eax
  char v49; // [rsp+60h] [rbp-78h]
  char v50; // [rsp+61h] [rbp-77h]
  unsigned int v51; // [rsp+64h] [rbp-74h]
  GUID v54; // [rsp+80h] [rbp-58h] BYREF

  v2 = a2[23];
  v3 = 0;
  a2[7] = 0LL;
  v4 = a2;
  if ( (*(_BYTE *)(a1 + 144) & 1) != 0 && *(_QWORD *)(a1 + 608) )
  {
    v5 = a2[3];
    if ( v5 && *(_DWORD *)(v2 + 16) >= 0x10u && *(_WORD *)v5 == 1 && *(_WORD *)(v5 + 2) >= 0x10u )
    {
      if ( *(_DWORD *)(v2 + 8) >= 8u )
      {
        HostGateway = NvmeAdapterGetHostGateway(a1, (_QWORD *)(*(_QWORD *)(v5 + 8) ^ a1));
        *(_QWORD *)&v54.Data1 = HostGateway;
        v8 = HostGateway;
        if ( HostGateway )
        {
          v6 = NvmeAdapterHostGatewayAcquireRundown((__int64)HostGateway);
          if ( v6 >= 0 )
          {
            v9 = (_WORD *)v4[3];
            memset_0(v9, 0, *(unsigned int *)(v2 + 8));
            *v9 = 1;
            KeEnterCriticalRegion();
            ExAcquireResourceSharedLite((PERESOURCE)(v8 + 48), 1u);
            v10 = 568 * *((_WORD *)v8 + 188) + 8;
            v9[1] = v10;
            if ( *(_DWORD *)(v2 + 8) < (unsigned int)v10 )
            {
              v24 = 8LL;
            }
            else
            {
              v11 = (_QWORD *)v8[45];
              v12 = v9 + 4;
              if ( v11 != v8 + 45 )
              {
                v13 = v8 + 45;
                do
                {
                  v14 = (unsigned __int64)(v11 - 1);
                  if ( (int)NvmeAdapterSubsystemPortAcquireRundown((__int64)(v11 - 1)) >= 0 )
                  {
                    *(_DWORD *)v12 = 37224449;
                    v15 = v12 + 2;
                    if ( (*(_BYTE *)(v14 + 32) & 1) != 0 )
                      *v15 |= 2u;
                    if ( (*(_BYTE *)(v14 + 32) & 2) != 0 )
                      *v15 |= 1u;
                    if ( (*(_BYTE *)(v14 + 32) & 4) != 0 )
                      *v15 |= 4u;
                    v16 = (_OWORD *)(v14 + 60);
                    v17 = 2LL;
                    *((_QWORD *)v12 + 1) = v14 ^ a1;
                    v12[8] = *(_WORD *)(v14 + 4);
                    v18 = v12 + 10;
                    do
                    {
                      *v18 = *v16;
                      v18[1] = v16[1];
                      v18[2] = v16[2];
                      v18[3] = v16[3];
                      v18[4] = v16[4];
                      v18[5] = v16[5];
                      v18[6] = v16[6];
                      v18 += 8;
                      v19 = v16[7];
                      v16 += 8;
                      *(v18 - 1) = v19;
                      --v17;
                    }
                    while ( v17 );
                    v20 = v12 + 138;
                    v21 = 2LL;
                    v22 = (_OWORD *)(v14 + 316);
                    do
                    {
                      *v20 = *v22;
                      v20[1] = v22[1];
                      v20[2] = v22[2];
                      v20[3] = v22[3];
                      v20[4] = v22[4];
                      v20[5] = v22[5];
                      v20[6] = v22[6];
                      v20 += 8;
                      v23 = v22[7];
                      v22 += 8;
                      *(v20 - 1) = v23;
                      --v21;
                    }
                    while ( v21 );
                    *(_OWORD *)(v12 + 266) = *(_OWORD *)(v14 + 572);
                    *(_OWORD *)(v12 + 274) = *(_OWORD *)(v14 + 588);
                    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v14 + 40));
                    ++*((_DWORD *)v9 + 1);
                    v12 += 284;
                  }
                  v11 = (_QWORD *)*v11;
                }
                while ( v11 != v13 );
                v4 = a2;
                v6 = 0;
                v8 = *(_QWORD **)&v54.Data1;
              }
              if ( *((_DWORD *)v9 + 1) < *((_DWORD *)v8 + 94) )
                v9[1] = 568 * v9[2] + 8;
              v24 = (unsigned __int16)v9[1];
            }
            v4[7] = v24;
            ExReleaseResourceLite((PERESOURCE)(v8 + 48));
            KeLeaveCriticalRegion();
            ExReleaseRundownProtectionCacheAware((PEX_RUNDOWN_REF_CACHE_AWARE)v8[7]);
          }
        }
        else
        {
          v6 = -1073741275;
        }
      }
      else
      {
        v6 = -1073741789;
      }
    }
    else
    {
      v6 = -1073741811;
    }
  }
  else
  {
    v6 = -1073741637;
  }
  v25 = StorEtwLoggingEnabled == 0;
  *((_BYTE *)v4 + 141) = -84;
  *((_DWORD *)v4 + 12) = v6;
  if ( !v25 )
  {
    v54 = 0LL;
    IoGetActivityIdIrp(v4, &v54);
    v27 = v4[23];
    if ( *(_BYTE *)v27 == 14 )
    {
      if ( (byte_140173442 & 8) == 0 )
        goto LABEL_102;
      v29 = &EventNonReadWriteRequestComplete;
      goto LABEL_101;
    }
    if ( *(_BYTE *)v27 != 15 )
    {
      if ( *(_BYTE *)v27 != 27 )
        goto LABEL_102;
      if ( *(_BYTE *)(v27 + 1) == 7 && !*(_DWORD *)(v27 + 8) )
      {
        if ( (byte_140173442 & 0x40) != 0 )
        {
          v28 = (int *)v4[7];
          if ( v28 )
            v3 = *v28;
          McTemplateK0pqd_EtwWriteTransfer(v26, v27, &v54, v4, v3, *((_DWORD *)v4 + 12));
        }
        goto LABEL_102;
      }
      if ( (byte_140173442 & 0x20) == 0 )
        goto LABEL_102;
      v29 = &EventPnpRequestComplete;
LABEL_101:
      McTemplateK0pd_EtwWriteTransfer(v26, v29, &v54, v4, *((_DWORD *)v4 + 12));
      goto LABEL_102;
    }
    if ( byte_140173441 >= 0 )
      goto LABEL_102;
    v30 = *(_QWORD *)(v27 + 8);
    v31 = 0LL;
    v49 = 0;
    v32 = 0;
    v33 = 0;
    v34 = 0;
    v35 = 0;
    v36 = 0;
    if ( *(_BYTE *)(v30 + 2) != 40 )
    {
      v43 = *(_BYTE *)(v30 + 72);
      v31 = *(_BYTE **)(v30 + 32);
      v32 = *(_BYTE *)(v30 + 11);
      v42 = *(_BYTE *)(v30 + 4);
      if ( *(_BYTE *)(v30 + 2) )
        goto LABEL_102;
LABEL_76:
      LOBYTE(v26) = v43 - 8;
      if ( (v26 & 0x5D) != 0 )
        goto LABEL_102;
      if ( *(_BYTE *)(v30 + 3) == 1 || !v31 || !v32 )
        goto LABEL_95;
      v44 = *v31 & 0x7F;
      if ( v44 == 114 || v44 == 115 )
      {
        v26 = (unsigned __int64)&v31[v32];
        v45 = 0;
        if ( (unsigned __int64)(v31 + 8) > v26 )
          goto LABEL_93;
        v34 = v31[2];
        v33 = v31[1] & 0xF;
        v35 = v31[3];
      }
      else
      {
        v26 = (unsigned __int64)&v31[v32];
        v45 = 0;
        if ( (unsigned __int64)(v31 + 8) > v26 )
          goto LABEL_93;
        v46 = v31 + 13;
        v33 = v31[2] & 0xF;
        v47 = v32;
        if ( (unsigned int)(unsigned __int8)v31[7] + 8 <= v32 )
          v47 = (unsigned __int8)v31[7] + 8;
        v26 = (unsigned __int64)&v31[v47];
        if ( (unsigned __int64)v46 <= v26 )
          v34 = v31[12];
        if ( (unsigned __int64)(v31 + 14) > v26 )
          v35 = 0;
        else
          v35 = *v46;
      }
      v45 = 1;
LABEL_93:
      if ( v45 )
        v36 = 1;
LABEL_95:
      if ( byte_140173441 < 0 )
      {
        if ( !v36 )
        {
          v35 = 0;
          v34 = 0;
          v33 = 0;
        }
        McTemplateK0pduuuuup_EtwWriteTransfer(
          v26,
          v30,
          &v54,
          v4,
          *((_DWORD *)v4 + 12),
          *(_BYTE *)(v30 + 3),
          v42,
          v33,
          v34,
          v35,
          v4);
      }
      goto LABEL_102;
    }
    v37 = 0LL;
    v50 = 0;
    if ( !*(_DWORD *)(v30 + 20) )
    {
      v38 = 0;
      v51 = *(_DWORD *)(v30 + 56);
      if ( v51 )
      {
        do
        {
          v26 = *(unsigned int *)(v30 + 4LL * v38 + 120);
          if ( (unsigned int)v26 >= 0x80 )
          {
            v39 = *(unsigned int *)(v30 + 16);
            if ( (unsigned int)v26 < (unsigned int)v39 )
            {
              v40 = (unsigned int)v26;
              v41 = *(_DWORD *)(v26 + v30) - 64;
              if ( v41 )
              {
                v26 = (unsigned int)(v41 - 1);
                if ( (_DWORD)v26 )
                {
                  if ( (_DWORD)v26 == 1 )
                  {
                    v26 = v40 + 40;
                    if ( v40 + 40 <= v39 )
                    {
                      if ( *(_DWORD *)(v40 + v30 + 12) )
                        v37 = (char *)(v40 + v30 + 32);
                      v31 = *(_BYTE **)(v40 + v30 + 24);
LABEL_61:
                      v42 = *(_BYTE *)(v40 + v30 + 8);
                      v32 = *(_BYTE *)(v40 + v30 + 9);
                      goto LABEL_70;
                    }
                  }
                }
                else
                {
                  v26 = v40 + 56;
                  if ( v40 + 56 <= v39 )
                  {
                    v50 = 1;
                    if ( *(_BYTE *)(v40 + v30 + 10) )
                      v37 = (char *)(v40 + v30 + 24);
                    v31 = *(_BYTE **)(v40 + v30 + 16);
                    v32 = *(_BYTE *)(v40 + v30 + 9);
                    v49 = *(_BYTE *)(v40 + v30 + 8);
                  }
                }
              }
              else
              {
                v26 = v40 + 40;
                if ( v40 + 40 <= v39 )
                {
                  if ( *(_BYTE *)(v40 + v30 + 10) )
                    v37 = (char *)(v40 + v30 + 24);
                  v31 = *(_BYTE **)(v40 + v30 + 16);
                  goto LABEL_61;
                }
              }
              if ( v50 )
                break;
            }
          }
          ++v38;
        }
        while ( v38 < v51 );
        v42 = v49;
LABEL_70:
        if ( v37 )
        {
          v43 = *v37;
          v36 = 0;
          goto LABEL_76;
        }
      }
    }
  }
LABEL_102:
  IofCompleteRequest((PIRP)v4, 0);
  return (unsigned int)v6;
}
