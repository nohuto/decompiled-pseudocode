/*
 * XREFs of NvmeAdapterRemoveSubsystemPort @ 0x14019E8F8
 * Callers:
 *     NvmeAdapterDeviceControlIrp @ 0x1401BE838 (NvmeAdapterDeviceControlIrp.c)
 * Callees:
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     McTemplateK0qjzshsss_EtwWriteTransfer @ 0x1400D2338 (McTemplateK0qjzshsss_EtwWriteTransfer.c)
 *     NvmeAdapterCleanupSubsystemPort @ 0x1400D36DC (NvmeAdapterCleanupSubsystemPort.c)
 *     NvmeAdapterFindSubsystemPort @ 0x1400D5754 (NvmeAdapterFindSubsystemPort.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall NvmeAdapterRemoveSubsystemPort(__int64 a1, __int64 a2)
{
  int v2; // ebx
  __int64 v4; // rcx
  unsigned int v6; // r14d
  _QWORD *SubsystemPort; // rax
  _QWORD *v8; // rsi
  __int64 v9; // rax
  __int64 v10; // r13
  struct _ERESOURCE *v11; // r12
  __int64 v12; // r8
  _QWORD *v13; // rdx
  bool v14; // zf
  unsigned __int64 v15; // rcx
  __int64 v16; // rdx
  int *v17; // rax
  const EVENT_DESCRIPTOR *v18; // rdx
  __int64 v19; // rdx
  _BYTE *v20; // r9
  unsigned __int8 v21; // r15
  char v22; // r11
  char v23; // si
  char v24; // r10
  char v25; // r12
  char *v26; // r12
  int v27; // ecx
  __int64 v28; // rax
  unsigned __int64 v29; // r13
  __int64 v30; // r8
  int v31; // ecx
  char v32; // r13
  char v33; // cl
  char v34; // al
  char v35; // r8
  char *v36; // r10
  unsigned int v37; // eax
  __int64 v39; // [rsp+20h] [rbp-49h]
  __int64 v40; // [rsp+28h] [rbp-41h]
  __int64 v41; // [rsp+30h] [rbp-39h]
  __int64 v42; // [rsp+38h] [rbp-31h]
  __int64 v43; // [rsp+40h] [rbp-29h]
  __int64 v44; // [rsp+48h] [rbp-21h]
  char v45; // [rsp+60h] [rbp-9h]
  char v46; // [rsp+61h] [rbp-8h]
  __int64 v47; // [rsp+68h] [rbp-1h] BYREF
  PVOID v48; // [rsp+70h] [rbp+7h] BYREF
  GUID v49; // [rsp+78h] [rbp+Fh] BYREF

  v2 = 0;
  v4 = *(_QWORD *)(a2 + 24);
  v47 = 0LL;
  v6 = 0;
  *(_QWORD *)(a2 + 56) = 0LL;
  if ( v4 && *(_DWORD *)(*(_QWORD *)(a2 + 184) + 16LL) >= 0x10u && *(_WORD *)v4 == 1 && *(_WORD *)(v4 + 2) >= 0x10u )
  {
    SubsystemPort = (_QWORD *)NvmeAdapterFindSubsystemPort(a1, *(_QWORD *)(v4 + 8) ^ a1, 1, &v47);
    v48 = SubsystemPort;
    v8 = SubsystemPort;
    if ( !SubsystemPort )
    {
      v6 = -1073741275;
      goto LABEL_19;
    }
    v9 = SubsystemPort[4];
    if ( (v9 & 1) == 0 )
    {
      v6 = -1073741637;
LABEL_11:
      ExReleaseRundownProtectionCacheAware((PEX_RUNDOWN_REF_CACHE_AWARE)v8[5]);
      ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v47 + 56));
      goto LABEL_19;
    }
    if ( (v9 & 0x10) != 0 )
    {
      v6 = -2147483631;
      goto LABEL_11;
    }
    v8[4] = v9 | 0x10;
    KeEnterCriticalRegion();
    v10 = v47;
    v11 = (struct _ERESOURCE *)(v47 + 384);
    ExAcquireResourceExclusiveLite((PERESOURCE)(v47 + 384), 1u);
    v12 = v8[1];
    if ( *(_QWORD **)(v12 + 8) != v8 + 1 || (v13 = (_QWORD *)v8[2], (_QWORD *)*v13 != v8 + 1) )
      __fastfail(3u);
    *v13 = v12;
    *(_QWORD *)(v12 + 8) = v13;
    --*(_DWORD *)(v10 + 376);
    ExReleaseResourceLite(v11);
    KeLeaveCriticalRegion();
    ExReleaseRundownProtectionCacheAware((PEX_RUNDOWN_REF_CACHE_AWARE)v8[5]);
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v10 + 56));
    if ( (byte_14017344A & 2) != 0 )
      McTemplateK0qjzshsss_EtwWriteTransfer(
        (__int64)v8 + 316,
        (__int64)v8 + 60,
        v10 + 72,
        *(_DWORD *)(a1 + 56),
        a1 + 1048,
        *(const wchar_t **)(a1 + 1032),
        (const char *)(v10 + 72),
        *((_WORD *)v8 + 2),
        (const char *)v8 + 60,
        (const char *)v8 + 316,
        (const char *)v8 + 572);
    ExWaitForRundownProtectionReleaseCacheAware((PEX_RUNDOWN_REF_CACHE_AWARE)v8[5]);
    NvmeAdapterCleanupSubsystemPort(a1, 1, &v48);
  }
  else
  {
    v6 = -1073741811;
  }
LABEL_19:
  v14 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v6;
  if ( v14 )
    goto LABEL_85;
  v49 = 0LL;
  IoGetActivityIdIrp(a2, &v49);
  v16 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v16 == 14 )
  {
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_85;
    LODWORD(v39) = *(_DWORD *)(a2 + 48);
    v18 = &EventNonReadWriteRequestComplete;
    goto LABEL_84;
  }
  if ( *(_BYTE *)v16 != 15 )
  {
    if ( *(_BYTE *)v16 != 27 )
      goto LABEL_85;
    if ( *(_BYTE *)(v16 + 1) == 7 && !*(_DWORD *)(v16 + 8) )
    {
      if ( (byte_140173442 & 0x40) != 0 )
      {
        v17 = *(int **)(a2 + 56);
        if ( v17 )
          v2 = *v17;
        LODWORD(v40) = *(_DWORD *)(a2 + 48);
        LODWORD(v39) = v2;
        McTemplateK0pqd_EtwWriteTransfer(v15, v16, &v49, a2, v39, v40);
      }
      goto LABEL_85;
    }
    if ( (byte_140173442 & 0x20) == 0 )
      goto LABEL_85;
    v18 = &EventPnpRequestComplete;
    LODWORD(v39) = *(_DWORD *)(a2 + 48);
LABEL_84:
    McTemplateK0pd_EtwWriteTransfer(v15, v18, &v49, a2, v39);
    goto LABEL_85;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_85;
  v19 = *(_QWORD *)(v16 + 8);
  v20 = 0LL;
  v45 = 0;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  if ( *(_BYTE *)(v19 + 2) != 40 )
  {
    v33 = *(_BYTE *)(v19 + 72);
    v20 = *(_BYTE **)(v19 + 32);
    v21 = *(_BYTE *)(v19 + 11);
    v32 = *(_BYTE *)(v19 + 4);
    if ( *(_BYTE *)(v19 + 2) )
      goto LABEL_85;
LABEL_59:
    LOBYTE(v15) = v33 - 8;
    if ( (v15 & 0x5D) != 0 )
      goto LABEL_85;
    if ( *(_BYTE *)(v19 + 3) == 1 || !v20 || !v21 )
      goto LABEL_78;
    v34 = *v20 & 0x7F;
    if ( v34 == 114 || v34 == 115 )
    {
      v15 = (unsigned __int64)&v20[v21];
      v35 = 0;
      if ( (unsigned __int64)(v20 + 8) > v15 )
        goto LABEL_76;
      v23 = v20[2];
      v22 = v20[1] & 0xF;
      v24 = v20[3];
    }
    else
    {
      v15 = (unsigned __int64)&v20[v21];
      v35 = 0;
      if ( (unsigned __int64)(v20 + 8) > v15 )
        goto LABEL_76;
      v36 = v20 + 13;
      v22 = v20[2] & 0xF;
      v37 = v21;
      if ( (unsigned int)(unsigned __int8)v20[7] + 8 <= v21 )
        v37 = (unsigned __int8)v20[7] + 8;
      v15 = (unsigned __int64)&v20[v37];
      if ( (unsigned __int64)v36 <= v15 )
        v23 = v20[12];
      if ( (unsigned __int64)(v20 + 14) > v15 )
        v24 = 0;
      else
        v24 = *v36;
    }
    v35 = 1;
LABEL_76:
    if ( v35 )
      v25 = 1;
LABEL_78:
    if ( byte_140173441 < 0 )
    {
      if ( !v25 )
      {
        v24 = 0;
        v23 = 0;
        v22 = 0;
      }
      LOBYTE(v44) = v24;
      LOBYTE(v43) = v23;
      LOBYTE(v42) = v22;
      LOBYTE(v41) = v32;
      LOBYTE(v40) = *(_BYTE *)(v19 + 3);
      LODWORD(v39) = *(_DWORD *)(a2 + 48);
      McTemplateK0pduuuuup_EtwWriteTransfer(v15, v19, &v49, a2, v39, v40, v41, v42, v43, v44, a2);
    }
    goto LABEL_85;
  }
  v26 = 0LL;
  v46 = 0;
  if ( !*(_DWORD *)(v19 + 20) )
  {
    v27 = *(_DWORD *)(v19 + 56);
    v28 = 0LL;
    LODWORD(v48) = 0;
    LODWORD(v47) = v27;
    if ( v27 )
    {
      do
      {
        v15 = *(unsigned int *)(v19 + 4 * v28 + 120);
        if ( (unsigned int)v15 >= 0x80 )
        {
          v29 = *(unsigned int *)(v19 + 16);
          if ( (unsigned int)v15 < (unsigned int)v29 )
          {
            v30 = (unsigned int)v15;
            v31 = *(_DWORD *)(v15 + v19) - 64;
            if ( v31 )
            {
              v15 = (unsigned int)(v31 - 1);
              if ( (_DWORD)v15 )
              {
                if ( (_DWORD)v15 == 1 )
                {
                  v15 = v30 + 40;
                  if ( v30 + 40 <= v29 )
                  {
                    if ( *(_DWORD *)(v30 + v19 + 12) )
                      v26 = (char *)(v30 + v19 + 32);
                    v20 = *(_BYTE **)(v30 + v19 + 24);
LABEL_44:
                    v32 = *(_BYTE *)(v30 + v19 + 8);
                    v21 = *(_BYTE *)(v30 + v19 + 9);
                    goto LABEL_53;
                  }
                }
              }
              else
              {
                v15 = v30 + 56;
                if ( v30 + 56 <= v29 )
                {
                  v46 = 1;
                  if ( *(_BYTE *)(v30 + v19 + 10) )
                    v26 = (char *)(v30 + v19 + 24);
                  v20 = *(_BYTE **)(v30 + v19 + 16);
                  v21 = *(_BYTE *)(v30 + v19 + 9);
                  v45 = *(_BYTE *)(v30 + v19 + 8);
                }
              }
            }
            else
            {
              v15 = v30 + 40;
              if ( v30 + 40 <= v29 )
              {
                if ( *(_BYTE *)(v30 + v19 + 10) )
                  v26 = (char *)(v30 + v19 + 24);
                v20 = *(_BYTE **)(v30 + v19 + 16);
                goto LABEL_44;
              }
            }
            if ( v46 )
              break;
          }
        }
        v28 = (unsigned int)((_DWORD)v48 + 1);
        LODWORD(v48) = v28;
      }
      while ( (unsigned int)v28 < (unsigned int)v47 );
      v32 = v45;
LABEL_53:
      if ( v26 )
      {
        v33 = *v26;
        v25 = 0;
        goto LABEL_59;
      }
    }
  }
LABEL_85:
  IofCompleteRequest((PIRP)a2, 0);
  return v6;
}
