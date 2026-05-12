/*
 * XREFs of NvmeAdapterRemoveController @ 0x14019DFFC
 * Callers:
 *     NvmeAdapterDeviceControlIrp @ 0x1401BE838 (NvmeAdapterDeviceControlIrp.c)
 * Callees:
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     NvmeAdapterFindNvmeController @ 0x1400D55CC (NvmeAdapterFindNvmeController.c)
 *     NvmeAdapterDeleteNvmeController @ 0x1400E74A8 (NvmeAdapterDeleteNvmeController.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall NvmeAdapterRemoveController(__int64 a1, __int64 a2)
{
  int v2; // ebx
  unsigned int v4; // esi
  __int64 v5; // r8
  __int64 NvmeController; // rax
  __int64 v7; // r14
  __int64 v8; // rax
  __int64 v9; // r15
  struct _ERESOURCE *v10; // r12
  _QWORD *v11; // r14
  __int64 v12; // rdx
  _QWORD *v13; // rax
  bool v14; // zf
  unsigned __int64 v15; // rcx
  __int64 v16; // rdx
  int *v17; // rax
  const EVENT_DESCRIPTOR *v18; // rdx
  __int64 v19; // rdx
  _BYTE *v20; // r9
  unsigned __int8 v21; // r15
  char v22; // r11
  char v23; // r14
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
  int v39; // [rsp+20h] [rbp-49h]
  char v40; // [rsp+60h] [rbp-9h]
  char v41; // [rsp+61h] [rbp-8h]
  __int64 v42; // [rsp+68h] [rbp-1h] BYREF
  __int64 v43; // [rsp+70h] [rbp+7h] BYREF
  GUID v44; // [rsp+78h] [rbp+Fh] BYREF

  v2 = 0;
  *(_QWORD *)(a2 + 56) = 0LL;
  v4 = 0;
  v42 = 0LL;
  if ( (*(_BYTE *)(a1 + 144) & 1) != 0 && *(_QWORD *)(a1 + 608) )
  {
    v5 = *(_QWORD *)(a2 + 24);
    if ( v5 && *(_DWORD *)(*(_QWORD *)(a2 + 184) + 16LL) >= 0x10u && *(_WORD *)v5 == 1 && *(_WORD *)(v5 + 2) >= 0x10u )
    {
      NvmeController = NvmeAdapterFindNvmeController(a1, *(_QWORD *)(v5 + 8) ^ a1, 1, &v42);
      v43 = NvmeController;
      v7 = NvmeController;
      if ( !NvmeController )
      {
        v4 = -1073741275;
        goto LABEL_22;
      }
      v8 = *(_QWORD *)(NvmeController + 136);
      if ( (v8 & 1) == 0 )
      {
        v4 = -1073741637;
LABEL_11:
        ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v42 + 40));
        goto LABEL_22;
      }
      if ( *(_DWORD *)(v7 + 568) )
      {
        v4 = -1073741808;
        goto LABEL_11;
      }
      if ( (v8 & 8) != 0 )
      {
        v4 = -2147483631;
        goto LABEL_11;
      }
      *(_QWORD *)(v7 + 136) = v8 | 8;
      KeEnterCriticalRegion();
      v9 = v42;
      v10 = (struct _ERESOURCE *)(v42 + 632);
      ExAcquireResourceExclusiveLite((PERESOURCE)(v42 + 632), 1u);
      v11 = (_QWORD *)(v7 + 64);
      v12 = *v11;
      if ( *(_QWORD **)(*v11 + 8LL) != v11 || (v13 = (_QWORD *)v11[1], (_QWORD *)*v13 != v11) )
        __fastfail(3u);
      *v13 = v12;
      *(_QWORD *)(v12 + 8) = v13;
      --*(_DWORD *)(v9 + 624);
      ExReleaseResourceLite(v10);
      KeLeaveCriticalRegion();
      ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v9 + 40));
      NvmeAdapterDeleteNvmeController(&v43);
    }
    else
    {
      v4 = -1073741811;
    }
  }
  else
  {
    v4 = -1073741637;
  }
LABEL_22:
  v14 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v4;
  if ( v14 )
    goto LABEL_88;
  v44 = 0LL;
  IoGetActivityIdIrp(a2, &v44);
  v16 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v16 == 14 )
  {
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_88;
    v39 = *(_DWORD *)(a2 + 48);
    v18 = &EventNonReadWriteRequestComplete;
    goto LABEL_87;
  }
  if ( *(_BYTE *)v16 != 15 )
  {
    if ( *(_BYTE *)v16 != 27 )
      goto LABEL_88;
    if ( *(_BYTE *)(v16 + 1) == 7 && !*(_DWORD *)(v16 + 8) )
    {
      if ( (byte_140173442 & 0x40) != 0 )
      {
        v17 = *(int **)(a2 + 56);
        if ( v17 )
          v2 = *v17;
        McTemplateK0pqd_EtwWriteTransfer(v15, v16, &v44, a2, v2, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_88;
    }
    if ( (byte_140173442 & 0x20) == 0 )
      goto LABEL_88;
    v18 = &EventPnpRequestComplete;
    v39 = *(_DWORD *)(a2 + 48);
LABEL_87:
    McTemplateK0pd_EtwWriteTransfer(v15, v18, &v44, a2, v39);
    goto LABEL_88;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_88;
  v19 = *(_QWORD *)(v16 + 8);
  v20 = 0LL;
  v40 = 0;
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
      goto LABEL_88;
LABEL_62:
    LOBYTE(v15) = v33 - 8;
    if ( (v15 & 0x5D) != 0 )
      goto LABEL_88;
    if ( *(_BYTE *)(v19 + 3) == 1 || !v20 || !v21 )
      goto LABEL_81;
    v34 = *v20 & 0x7F;
    if ( v34 == 114 || v34 == 115 )
    {
      v15 = (unsigned __int64)&v20[v21];
      v35 = 0;
      if ( (unsigned __int64)(v20 + 8) > v15 )
        goto LABEL_79;
      v23 = v20[2];
      v22 = v20[1] & 0xF;
      v24 = v20[3];
    }
    else
    {
      v15 = (unsigned __int64)&v20[v21];
      v35 = 0;
      if ( (unsigned __int64)(v20 + 8) > v15 )
        goto LABEL_79;
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
LABEL_79:
    if ( v35 )
      v25 = 1;
LABEL_81:
    if ( byte_140173441 < 0 )
    {
      if ( !v25 )
      {
        v24 = 0;
        v23 = 0;
        v22 = 0;
      }
      McTemplateK0pduuuuup_EtwWriteTransfer(
        v15,
        v19,
        &v44,
        a2,
        *(_DWORD *)(a2 + 48),
        *(_BYTE *)(v19 + 3),
        v32,
        v22,
        v23,
        v24,
        a2);
    }
    goto LABEL_88;
  }
  v26 = 0LL;
  v41 = 0;
  if ( !*(_DWORD *)(v19 + 20) )
  {
    v27 = *(_DWORD *)(v19 + 56);
    v28 = 0LL;
    LODWORD(v43) = 0;
    LODWORD(v42) = v27;
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
LABEL_47:
                    v32 = *(_BYTE *)(v30 + v19 + 8);
                    v21 = *(_BYTE *)(v30 + v19 + 9);
                    goto LABEL_56;
                  }
                }
              }
              else
              {
                v15 = v30 + 56;
                if ( v30 + 56 <= v29 )
                {
                  v41 = 1;
                  if ( *(_BYTE *)(v30 + v19 + 10) )
                    v26 = (char *)(v30 + v19 + 24);
                  v20 = *(_BYTE **)(v30 + v19 + 16);
                  v21 = *(_BYTE *)(v30 + v19 + 9);
                  v40 = *(_BYTE *)(v30 + v19 + 8);
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
                goto LABEL_47;
              }
            }
            if ( v41 )
              break;
          }
        }
        v28 = (unsigned int)(v43 + 1);
        LODWORD(v43) = v28;
      }
      while ( (unsigned int)v28 < (unsigned int)v42 );
      v32 = v40;
LABEL_56:
      if ( v26 )
      {
        v33 = *v26;
        v25 = 0;
        goto LABEL_62;
      }
    }
  }
LABEL_88:
  IofCompleteRequest((PIRP)a2, 0);
  return v4;
}
