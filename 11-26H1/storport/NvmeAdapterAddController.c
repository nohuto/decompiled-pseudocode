/*
 * XREFs of NvmeAdapterAddController @ 0x1401971E8
 * Callers:
 *     NvmeAdapterDeviceControlIrp @ 0x1401BE838 (NvmeAdapterDeviceControlIrp.c)
 * Callees:
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     NvmeControllerAcquireRundown @ 0x1400C5B84 (NvmeControllerAcquireRundown.c)
 *     NvmeAdapterCreateAddNvmeController @ 0x1400D40F4 (NvmeAdapterCreateAddNvmeController.c)
 *     NvmeAdapterFindSubsystemPort @ 0x1400D5754 (NvmeAdapterFindSubsystemPort.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int64 __fastcall NvmeAdapterAddController(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  int v3; // ebx
  __int64 v6; // rbp
  __int16 v7; // ax
  int v8; // edi
  __int64 SubsystemPort; // rax
  __int64 v10; // r14
  bool v11; // zf
  unsigned __int64 v12; // rcx
  __int64 v13; // rdx
  int *v14; // rax
  unsigned __int16 v15; // cx
  __int64 v16; // rbp
  _QWORD *v17; // rcx
  _QWORD *v18; // rdx
  _DWORD *v19; // r14
  const EVENT_DESCRIPTOR *v20; // rdx
  __int64 v21; // rdx
  _BYTE *v22; // r9
  unsigned __int8 v23; // r14
  char v24; // r11
  char v25; // bp
  char v26; // r10
  char v27; // r15
  char *v28; // r15
  unsigned int v29; // r13d
  unsigned __int64 v30; // r12
  __int64 v31; // r8
  int v32; // ecx
  char v33; // r12
  char v34; // cl
  char v35; // r8
  char v36; // al
  char *v37; // r10
  unsigned int v38; // eax
  __int64 v40; // [rsp+20h] [rbp-A8h]
  char v41; // [rsp+60h] [rbp-68h]
  char v42; // [rsp+61h] [rbp-67h]
  __int64 v43; // [rsp+68h] [rbp-60h] BYREF
  GUID v44; // [rsp+70h] [rbp-58h] BYREF

  v2 = *(_QWORD *)(a2 + 184);
  v3 = 0;
  *(_QWORD *)(a2 + 56) = 0LL;
  v43 = 0LL;
  if ( (*(_BYTE *)(a1 + 144) & 1) != 0 && *(_QWORD *)(a1 + 608) )
  {
    v6 = *(_QWORD *)(a2 + 24);
    if ( !v6
      || *(_DWORD *)(v2 + 16) < 0x38u
      || *(_WORD *)v6 != 1
      || *(_WORD *)(v6 + 2) < 0x38u
      || *(_WORD *)(v6 + 16) > 0xFFEFu
      || (v7 = *(_WORD *)(v6 + 18)) != 0 && (unsigned __int16)(v7 - 32) > 0xFE0u )
    {
      v8 = -1073741811;
      goto LABEL_15;
    }
    if ( *(_DWORD *)(v2 + 8) < 0x20u )
    {
      v8 = -1073741789;
      goto LABEL_15;
    }
    SubsystemPort = NvmeAdapterFindSubsystemPort(a1, *(_QWORD *)(v6 + 8) ^ a1, 0, 0LL);
    v10 = SubsystemPort;
    if ( !SubsystemPort )
    {
      v8 = -1073741275;
      goto LABEL_15;
    }
    if ( (*(_BYTE *)(SubsystemPort + 32) & 4) != 0 )
    {
      v8 = -1073741637;
LABEL_27:
      ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v10 + 40));
      goto LABEL_15;
    }
    v8 = NvmeAdapterCreateAddNvmeController(SubsystemPort, *(_WORD *)(v6 + 16), 1u, (int)v6 + 20, &v43);
    if ( v8 < 0 )
      goto LABEL_27;
    v15 = *(_WORD *)(v6 + 18);
    v16 = v43;
    if ( v15 )
    {
      if ( v15 >= *(_WORD *)(v43 + 6) )
        v15 = *(_WORD *)(v43 + 6);
      *(_WORD *)(v43 + 6) = v15;
    }
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite((PERESOURCE)(v10 + 632), 1u);
    v17 = *(_QWORD **)(v10 + 616);
    v18 = (_QWORD *)(v16 + 64);
    if ( *v17 != v10 + 608 )
      __fastfail(3u);
    *(_QWORD *)(v16 + 72) = v17;
    *v18 = v10 + 608;
    *v17 = v18;
    *(_QWORD *)(v10 + 616) = v18;
    ++*(_DWORD *)(v10 + 624);
    ExReleaseResourceLite((PERESOURCE)(v10 + 632));
    KeLeaveCriticalRegion();
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v10 + 40));
    v19 = *(_DWORD **)(a2 + 24);
    memset_0(v19, 0, *(unsigned int *)(v2 + 8));
    v8 = NvmeControllerAcquireRundown(v16);
    if ( v8 >= 0 )
    {
      *v19 = 2097153;
      if ( (*(_BYTE *)(v16 + 136) & 4) != 0 )
        v19[1] |= 8u;
      *((_QWORD *)v19 + 1) = v16 ^ a1;
      *((_WORD *)v19 + 8) = *(_WORD *)(v16 + 4);
      v19[5] = *(_DWORD *)(v16 + 572);
      if ( *(_DWORD *)(v16 + 572) == 1 )
      {
        *((_WORD *)v19 + 12) = *(_WORD *)(v16 + 20);
        *((_WORD *)v19 + 13) = *(_WORD *)(v16 + 8);
      }
      ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v16 + 552));
      *(_QWORD *)(a2 + 56) = *((unsigned __int16 *)v19 + 1);
    }
  }
  else
  {
    v8 = -1073741637;
  }
LABEL_15:
  v11 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v8;
  if ( v11 )
    goto LABEL_98;
  v44 = 0LL;
  IoGetActivityIdIrp(a2, &v44);
  v13 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v13 == 14 )
  {
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_98;
    v20 = &EventNonReadWriteRequestComplete;
    goto LABEL_97;
  }
  if ( *(_BYTE *)v13 != 15 )
  {
    if ( *(_BYTE *)v13 != 27 )
      goto LABEL_98;
    if ( *(_BYTE *)(v13 + 1) == 7 && !*(_DWORD *)(v13 + 8) )
    {
      if ( (byte_140173442 & 0x40) != 0 )
      {
        v14 = *(int **)(a2 + 56);
        if ( v14 )
          v3 = *v14;
        LODWORD(v40) = v3;
        McTemplateK0pqd_EtwWriteTransfer(v12, v13, &v44, a2, v40, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_98;
    }
    if ( (byte_140173442 & 0x20) == 0 )
      goto LABEL_98;
    v20 = &EventPnpRequestComplete;
LABEL_97:
    LODWORD(v40) = *(_DWORD *)(a2 + 48);
    McTemplateK0pd_EtwWriteTransfer(v12, v20, &v44, a2, v40);
    goto LABEL_98;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_98;
  v21 = *(_QWORD *)(v13 + 8);
  v22 = 0LL;
  v41 = 0;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  if ( *(_BYTE *)(v21 + 2) != 40 )
  {
    v34 = *(_BYTE *)(v21 + 72);
    v22 = *(_BYTE **)(v21 + 32);
    v23 = *(_BYTE *)(v21 + 11);
    v33 = *(_BYTE *)(v21 + 4);
    if ( *(_BYTE *)(v21 + 2) )
      goto LABEL_98;
LABEL_72:
    LOBYTE(v12) = v34 - 8;
    if ( (v12 & 0x5D) != 0 )
      goto LABEL_98;
    v35 = *(_BYTE *)(v21 + 3);
    if ( v35 == 1 || !v22 || !v23 )
      goto LABEL_91;
    v36 = *v22 & 0x7F;
    if ( v36 == 114 || v36 == 115 )
    {
      v12 = (unsigned __int64)&v22[v23];
      LOBYTE(v21) = 0;
      if ( (unsigned __int64)(v22 + 8) > v12 )
        goto LABEL_89;
      v25 = v22[2];
      v24 = v22[1] & 0xF;
      v26 = v22[3];
    }
    else
    {
      v12 = (unsigned __int64)&v22[v23];
      LOBYTE(v21) = 0;
      if ( (unsigned __int64)(v22 + 8) > v12 )
        goto LABEL_89;
      v37 = v22 + 13;
      v24 = v22[2] & 0xF;
      v38 = v23;
      if ( (unsigned int)(unsigned __int8)v22[7] + 8 <= v23 )
        v38 = (unsigned __int8)v22[7] + 8;
      v12 = (unsigned __int64)&v22[v38];
      if ( (unsigned __int64)v37 <= v12 )
        v25 = v22[12];
      if ( (unsigned __int64)(v22 + 14) > v12 )
        v26 = 0;
      else
        v26 = *v37;
    }
    LOBYTE(v21) = 1;
LABEL_89:
    if ( (_BYTE)v21 )
      v27 = 1;
LABEL_91:
    if ( byte_140173441 < 0 )
    {
      if ( !v27 )
      {
        v26 = 0;
        v25 = 0;
        v24 = 0;
      }
      LODWORD(v40) = *(_DWORD *)(a2 + 48);
      McTemplateK0pduuuuup_EtwWriteTransfer(v12, v21, &v44, a2, v40, v35, v33, v24, v25, v26, a2);
    }
    goto LABEL_98;
  }
  v28 = 0LL;
  v42 = 0;
  if ( !*(_DWORD *)(v21 + 20) )
  {
    v29 = 0;
    LODWORD(v43) = *(_DWORD *)(v21 + 56);
    if ( (_DWORD)v43 )
    {
      do
      {
        v12 = *(unsigned int *)(v21 + 4LL * v29 + 120);
        if ( (unsigned int)v12 >= 0x80 )
        {
          v30 = *(unsigned int *)(v21 + 16);
          if ( (unsigned int)v12 < (unsigned int)v30 )
          {
            v31 = (unsigned int)v12;
            v32 = *(_DWORD *)(v12 + v21) - 64;
            if ( v32 )
            {
              v12 = (unsigned int)(v32 - 1);
              if ( (_DWORD)v12 )
              {
                if ( (_DWORD)v12 == 1 )
                {
                  v12 = v31 + 40;
                  if ( v31 + 40 <= v30 )
                  {
                    if ( *(_DWORD *)(v31 + v21 + 12) )
                      v28 = (char *)(v31 + v21 + 32);
                    v22 = *(_BYTE **)(v31 + v21 + 24);
LABEL_57:
                    v33 = *(_BYTE *)(v31 + v21 + 8);
                    v23 = *(_BYTE *)(v31 + v21 + 9);
                    goto LABEL_66;
                  }
                }
              }
              else
              {
                v12 = v31 + 56;
                if ( v31 + 56 <= v30 )
                {
                  v42 = 1;
                  if ( *(_BYTE *)(v31 + v21 + 10) )
                    v28 = (char *)(v31 + v21 + 24);
                  v22 = *(_BYTE **)(v31 + v21 + 16);
                  v23 = *(_BYTE *)(v31 + v21 + 9);
                  v41 = *(_BYTE *)(v31 + v21 + 8);
                }
              }
            }
            else
            {
              v12 = v31 + 40;
              if ( v31 + 40 <= v30 )
              {
                if ( *(_BYTE *)(v31 + v21 + 10) )
                  v28 = (char *)(v31 + v21 + 24);
                v22 = *(_BYTE **)(v31 + v21 + 16);
                goto LABEL_57;
              }
            }
            if ( v42 )
              break;
          }
        }
        ++v29;
      }
      while ( v29 < (unsigned int)v43 );
      v33 = v41;
LABEL_66:
      if ( v28 )
      {
        v34 = *v28;
        v27 = 0;
        goto LABEL_72;
      }
    }
  }
LABEL_98:
  IofCompleteRequest((PIRP)a2, 0);
  return (unsigned int)v8;
}
