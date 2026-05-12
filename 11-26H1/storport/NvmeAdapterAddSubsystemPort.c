/*
 * XREFs of NvmeAdapterAddSubsystemPort @ 0x1401977B0
 * Callers:
 *     NvmeAdapterDeviceControlIrp @ 0x1401BE838 (NvmeAdapterDeviceControlIrp.c)
 * Callees:
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     NvmeAdapterCreateAddSubsystemPort @ 0x1400D41C0 (NvmeAdapterCreateAddSubsystemPort.c)
 *     NvmeAdapterGetHostGateway @ 0x1400D8CFC (NvmeAdapterGetHostGateway.c)
 *     NvmeAdapterSubsystemPortAcquireRundown @ 0x1400E0BE8 (NvmeAdapterSubsystemPortAcquireRundown.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int64 __fastcall NvmeAdapterAddSubsystemPort(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  int v3; // ebx
  __int64 v4; // r12
  __int16 v7; // ax
  int v8; // edi
  _QWORD *HostGateway; // r11
  __int64 v10; // rbp
  __int16 v11; // ax
  _DWORD *v12; // r14
  _DWORD *v13; // rcx
  __int64 v14; // rdx
  __int128 *v15; // rcx
  __int64 v16; // r8
  _OWORD *v17; // rax
  __int128 v18; // xmm0
  _OWORD *v19; // rax
  __int128 *v20; // rcx
  __int128 v21; // xmm0
  bool v22; // zf
  unsigned __int64 v23; // rcx
  __int64 v24; // rdx
  int *v25; // rax
  const EVENT_DESCRIPTOR *v26; // rdx
  __int64 v27; // rdx
  _BYTE *v28; // r9
  unsigned __int8 v29; // r14
  char v30; // r10
  char v31; // bp
  char v32; // r11
  char v33; // r15
  char *v34; // r15
  unsigned int v35; // r13d
  unsigned __int64 v36; // r12
  __int64 v37; // r8
  int v38; // ecx
  char v39; // r12
  char v40; // cl
  char v41; // al
  char v42; // r8
  char *v43; // r11
  unsigned int v44; // eax
  NTSTRSAFE_PSTR pszDest; // [rsp+20h] [rbp-A8h]
  __int64 v47; // [rsp+28h] [rbp-A0h]
  __int64 v48; // [rsp+30h] [rbp-98h]
  __int64 v49; // [rsp+38h] [rbp-90h]
  __int64 v50; // [rsp+40h] [rbp-88h]
  __int64 v51; // [rsp+48h] [rbp-80h]
  char v52; // [rsp+60h] [rbp-68h]
  char v53; // [rsp+61h] [rbp-67h]
  __int64 v54; // [rsp+68h] [rbp-60h] BYREF
  GUID v55; // [rsp+70h] [rbp-58h] BYREF

  v2 = *(_QWORD *)(a2 + 24);
  v3 = 0;
  v4 = *(_QWORD *)(a2 + 184);
  v54 = 0LL;
  *(_QWORD *)(a2 + 56) = 0LL;
  if ( v2
    && *(_DWORD *)(v4 + 16) >= 0x238u
    && *(_WORD *)v2 == 1
    && *(_WORD *)(v2 + 2) >= 0x238u
    && (*(_BYTE *)(v2 + 4) & 6) != 6
    && *(_BYTE *)(v2 + 280)
    && ((v7 = *(_WORD *)(v2 + 18)) == 0 || (unsigned __int16)(v7 - 32) <= 0xFE0u) )
  {
    if ( *(_DWORD *)(v4 + 8) >= 0x238u )
    {
      HostGateway = NvmeAdapterGetHostGateway(a1, (_QWORD *)(*(_QWORD *)(v2 + 8) ^ a1));
      if ( HostGateway )
      {
        v8 = NvmeAdapterCreateAddSubsystemPort(
               (__int64)HostGateway,
               0,
               (_OWORD *)(v2 + 24),
               v2 + 280,
               (NTSTRSAFE_PSTR)(v2 + 536),
               *(_WORD *)(v2 + 16),
               1,
               *(_DWORD *)(v2 + 4) & 1,
               (*(_DWORD *)(v2 + 4) & 2) != 0,
               (*(_DWORD *)(v2 + 4) & 4) != 0,
               &v54);
        if ( v8 >= 0 )
        {
          v10 = v54;
          *(_WORD *)(v54 + 6) = *(_WORD *)(v2 + 18);
          v11 = *(_WORD *)(v2 + 20);
          if ( v11 )
            *(_WORD *)(v10 + 56) = v11;
          v12 = *(_DWORD **)(a2 + 24);
          memset_0(v12, 0, *(unsigned int *)(v4 + 8));
          v8 = NvmeAdapterSubsystemPortAcquireRundown(v10);
          if ( v8 >= 0 )
          {
            *v12 = 37224449;
            v13 = v12 + 1;
            v14 = 2LL;
            if ( (*(_BYTE *)(v10 + 32) & 1) != 0 )
              *v13 |= 2u;
            if ( (*(_BYTE *)(v10 + 32) & 2) != 0 )
              *v13 |= 1u;
            if ( (*(_BYTE *)(v10 + 32) & 4) != 0 )
              *v13 |= 4u;
            v15 = (__int128 *)(v10 + 60);
            *((_QWORD *)v12 + 1) = v10 ^ a1;
            v16 = 2LL;
            *((_WORD *)v12 + 8) = *(_WORD *)(v10 + 4);
            v17 = v12 + 5;
            do
            {
              v18 = *v15;
              v15 += 8;
              *v17 = v18;
              v17 += 8;
              *(v17 - 7) = *(v15 - 7);
              *(v17 - 6) = *(v15 - 6);
              *(v17 - 5) = *(v15 - 5);
              *(v17 - 4) = *(v15 - 4);
              *(v17 - 3) = *(v15 - 3);
              *(v17 - 2) = *(v15 - 2);
              *(v17 - 1) = *(v15 - 1);
              --v16;
            }
            while ( v16 );
            v19 = v12 + 69;
            v20 = (__int128 *)(v10 + 316);
            do
            {
              v21 = *v20;
              v20 += 8;
              *v19 = v21;
              v19 += 8;
              *(v19 - 7) = *(v20 - 7);
              *(v19 - 6) = *(v20 - 6);
              *(v19 - 5) = *(v20 - 5);
              *(v19 - 4) = *(v20 - 4);
              *(v19 - 3) = *(v20 - 3);
              *(v19 - 2) = *(v20 - 2);
              *(v19 - 1) = *(v20 - 1);
              --v14;
            }
            while ( v14 );
            *(_OWORD *)(v12 + 133) = *(_OWORD *)(v10 + 572);
            *(_OWORD *)(v12 + 137) = *(_OWORD *)(v10 + 588);
            ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v10 + 40));
            *(_QWORD *)(a2 + 56) = *((unsigned __int16 *)v12 + 1);
          }
        }
      }
      else
      {
        v8 = -1073741275;
      }
    }
    else
    {
      v8 = -1073741789;
    }
  }
  else
  {
    v8 = -1073741811;
  }
  v22 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v8;
  if ( !v22 )
  {
    v55 = 0LL;
    IoGetActivityIdIrp(a2, &v55);
    v24 = *(_QWORD *)(a2 + 184);
    if ( *(_BYTE *)v24 == 14 )
    {
      if ( (byte_140173442 & 8) == 0 )
        goto LABEL_95;
      v26 = &EventNonReadWriteRequestComplete;
      goto LABEL_94;
    }
    if ( *(_BYTE *)v24 != 15 )
    {
      if ( *(_BYTE *)v24 != 27 )
        goto LABEL_95;
      if ( *(_BYTE *)(v24 + 1) == 7 && !*(_DWORD *)(v24 + 8) )
      {
        if ( (byte_140173442 & 0x40) != 0 )
        {
          v25 = *(int **)(a2 + 56);
          if ( v25 )
            v3 = *v25;
          LODWORD(v47) = *(_DWORD *)(a2 + 48);
          LODWORD(pszDest) = v3;
          McTemplateK0pqd_EtwWriteTransfer(v23, v24, &v55, a2, pszDest, v47);
        }
        goto LABEL_95;
      }
      if ( (byte_140173442 & 0x20) == 0 )
        goto LABEL_95;
      v26 = &EventPnpRequestComplete;
LABEL_94:
      LODWORD(pszDest) = *(_DWORD *)(a2 + 48);
      McTemplateK0pd_EtwWriteTransfer(v23, v26, &v55, a2, pszDest);
      goto LABEL_95;
    }
    if ( byte_140173441 >= 0 )
      goto LABEL_95;
    v27 = *(_QWORD *)(v24 + 8);
    v28 = 0LL;
    v52 = 0;
    v29 = 0;
    v30 = 0;
    v31 = 0;
    v32 = 0;
    v33 = 0;
    if ( *(_BYTE *)(v27 + 2) != 40 )
    {
      v40 = *(_BYTE *)(v27 + 72);
      v28 = *(_BYTE **)(v27 + 32);
      v29 = *(_BYTE *)(v27 + 11);
      v39 = *(_BYTE *)(v27 + 4);
      if ( *(_BYTE *)(v27 + 2) )
        goto LABEL_95;
LABEL_69:
      LOBYTE(v23) = v40 - 8;
      if ( (v23 & 0x5D) != 0 )
        goto LABEL_95;
      if ( *(_BYTE *)(v27 + 3) == 1 || !v28 || !v29 )
        goto LABEL_88;
      v41 = *v28 & 0x7F;
      if ( v41 == 114 || v41 == 115 )
      {
        v23 = (unsigned __int64)&v28[v29];
        v42 = 0;
        if ( (unsigned __int64)(v28 + 8) > v23 )
          goto LABEL_86;
        v31 = v28[2];
        v30 = v28[1] & 0xF;
        v32 = v28[3];
      }
      else
      {
        v23 = (unsigned __int64)&v28[v29];
        v42 = 0;
        if ( (unsigned __int64)(v28 + 8) > v23 )
          goto LABEL_86;
        v43 = v28 + 13;
        v30 = v28[2] & 0xF;
        v44 = v29;
        if ( (unsigned int)(unsigned __int8)v28[7] + 8 <= v29 )
          v44 = (unsigned __int8)v28[7] + 8;
        v23 = (unsigned __int64)&v28[v44];
        if ( (unsigned __int64)v43 <= v23 )
          v31 = v28[12];
        if ( (unsigned __int64)(v28 + 14) > v23 )
          v32 = 0;
        else
          v32 = *v43;
      }
      v42 = 1;
LABEL_86:
      if ( v42 )
        v33 = 1;
LABEL_88:
      if ( byte_140173441 < 0 )
      {
        if ( !v33 )
        {
          v32 = 0;
          v31 = 0;
          v30 = 0;
        }
        LOBYTE(v51) = v32;
        LOBYTE(v50) = v31;
        LOBYTE(v49) = v30;
        LOBYTE(v48) = v39;
        LOBYTE(v47) = *(_BYTE *)(v27 + 3);
        LODWORD(pszDest) = *(_DWORD *)(a2 + 48);
        McTemplateK0pduuuuup_EtwWriteTransfer(v23, v27, &v55, a2, pszDest, v47, v48, v49, v50, v51, a2);
      }
      goto LABEL_95;
    }
    v34 = 0LL;
    v53 = 0;
    if ( !*(_DWORD *)(v27 + 20) )
    {
      v35 = 0;
      LODWORD(v54) = *(_DWORD *)(v27 + 56);
      if ( (_DWORD)v54 )
      {
        do
        {
          v23 = *(unsigned int *)(v27 + 4LL * v35 + 120);
          if ( (unsigned int)v23 >= 0x80 )
          {
            v36 = *(unsigned int *)(v27 + 16);
            if ( (unsigned int)v23 < (unsigned int)v36 )
            {
              v37 = (unsigned int)v23;
              v38 = *(_DWORD *)(v23 + v27) - 64;
              if ( v38 )
              {
                v23 = (unsigned int)(v38 - 1);
                if ( (_DWORD)v23 )
                {
                  if ( (_DWORD)v23 == 1 )
                  {
                    v23 = v37 + 40;
                    if ( v37 + 40 <= v36 )
                    {
                      if ( *(_DWORD *)(v37 + v27 + 12) )
                        v34 = (char *)(v37 + v27 + 32);
                      v28 = *(_BYTE **)(v37 + v27 + 24);
LABEL_54:
                      v39 = *(_BYTE *)(v37 + v27 + 8);
                      v29 = *(_BYTE *)(v37 + v27 + 9);
                      goto LABEL_63;
                    }
                  }
                }
                else
                {
                  v23 = v37 + 56;
                  if ( v37 + 56 <= v36 )
                  {
                    v53 = 1;
                    if ( *(_BYTE *)(v37 + v27 + 10) )
                      v34 = (char *)(v37 + v27 + 24);
                    v28 = *(_BYTE **)(v37 + v27 + 16);
                    v29 = *(_BYTE *)(v37 + v27 + 9);
                    v52 = *(_BYTE *)(v37 + v27 + 8);
                  }
                }
              }
              else
              {
                v23 = v37 + 40;
                if ( v37 + 40 <= v36 )
                {
                  if ( *(_BYTE *)(v37 + v27 + 10) )
                    v34 = (char *)(v37 + v27 + 24);
                  v28 = *(_BYTE **)(v37 + v27 + 16);
                  goto LABEL_54;
                }
              }
              if ( v53 )
                break;
            }
          }
          ++v35;
        }
        while ( v35 < (unsigned int)v54 );
        v39 = v52;
LABEL_63:
        if ( v34 )
        {
          v40 = *v34;
          v33 = 0;
          goto LABEL_69;
        }
      }
    }
  }
LABEL_95:
  IofCompleteRequest((PIRP)a2, 0);
  return (unsigned int)v8;
}
