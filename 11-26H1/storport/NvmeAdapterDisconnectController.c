/*
 * XREFs of NvmeAdapterDisconnectController @ 0x140199708
 * Callers:
 *     NvmeAdapterDeviceControlIrp @ 0x1401BE838 (NvmeAdapterDeviceControlIrp.c)
 * Callees:
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     NvmeAdapterDisconnectControllerInternal @ 0x1400D4F2C (NvmeAdapterDisconnectControllerInternal.c)
 *     NvmeAdapterFindNvmeController @ 0x1400D55CC (NvmeAdapterFindNvmeController.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int64 __fastcall NvmeAdapterDisconnectController(__int64 a1, __int64 a2)
{
  int v4; // ebx
  unsigned int v5; // r14d
  __int64 v6; // rcx
  __int64 NvmeController; // rax
  __int64 v8; // rsi
  int v9; // eax
  __int64 v10; // r12
  __int64 v11; // rax
  __int64 v12; // r13
  __int64 v13; // rdx
  _QWORD *v14; // rax
  _OWORD *v15; // rax
  char *v16; // rdx
  __int128 v17; // xmm1
  bool v18; // zf
  unsigned __int64 v19; // rcx
  __int64 v20; // rdx
  int *v21; // rax
  const EVENT_DESCRIPTOR *v22; // rdx
  __int64 v23; // rdx
  _BYTE *v24; // r9
  unsigned __int8 v25; // r15
  char v26; // r11
  char v27; // si
  char v28; // r10
  char v29; // r12
  char *v30; // r12
  __int64 v31; // rax
  unsigned __int64 v32; // r13
  __int64 v33; // r8
  int v34; // ecx
  char v35; // r13
  char v36; // cl
  char v37; // al
  char v38; // r8
  char *v39; // r10
  unsigned int v40; // eax
  int v42; // [rsp+20h] [rbp-E0h]
  char v43; // [rsp+60h] [rbp-A0h]
  char v44; // [rsp+61h] [rbp-9Fh]
  int v45; // [rsp+64h] [rbp-9Ch]
  __int64 v46; // [rsp+68h] [rbp-98h] BYREF
  GUID v47; // [rsp+70h] [rbp-90h] BYREF
  char v48[272]; // [rsp+80h] [rbp-80h] BYREF

  memset_0(v48, 0, 0x101uLL);
  v4 = 0;
  *(_QWORD *)(a2 + 56) = 0LL;
  v5 = 0;
  v46 = 0LL;
  if ( (*(_BYTE *)(a1 + 144) & 1) != 0 && *(_QWORD *)(a1 + 608) )
  {
    v6 = *(_QWORD *)(a2 + 24);
    if ( v6 && *(_DWORD *)(*(_QWORD *)(a2 + 184) + 16LL) >= 0x10u && *(_WORD *)v6 == 1 && *(_WORD *)(v6 + 2) >= 0x10u )
    {
      NvmeController = NvmeAdapterFindNvmeController(a1, *(_QWORD *)(v6 + 8) ^ a1, 1, &v46);
      v8 = NvmeController;
      if ( !NvmeController )
      {
        v5 = -1073741275;
        goto LABEL_25;
      }
      v9 = *(_DWORD *)(NvmeController + 568);
      v10 = 2LL;
      if ( v9 != 2 && v9 != 4 )
      {
        v5 = -1073741808;
LABEL_14:
        ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v46 + 40));
        goto LABEL_25;
      }
      v11 = *(_QWORD *)(v8 + 136);
      if ( (v11 & 8) != 0 )
      {
        v5 = -2147483631;
        goto LABEL_14;
      }
      v12 = v46;
      *(_DWORD *)(v8 + 568) = 3;
      if ( (v11 & 1) == 0 )
      {
        *(_QWORD *)(v8 + 136) = v11 | 8;
        KeEnterCriticalRegion();
        ExAcquireResourceExclusiveLite((PERESOURCE)(v12 + 632), 1u);
        v13 = *(_QWORD *)(v8 + 64);
        if ( *(_QWORD *)(v13 + 8) != v8 + 64 || (v14 = *(_QWORD **)(v8 + 72), *v14 != v8 + 64) )
          __fastfail(3u);
        *v14 = v13;
        *(_QWORD *)(v13 + 8) = v14;
        --*(_DWORD *)(v12 + 624);
        ExReleaseResourceLite((PERESOURCE)(v12 + 632));
        KeLeaveCriticalRegion();
      }
      v15 = (_OWORD *)(v12 + 60);
      v16 = v48;
      do
      {
        *(_OWORD *)v16 = *v15;
        *((_OWORD *)v16 + 1) = v15[1];
        *((_OWORD *)v16 + 2) = v15[2];
        *((_OWORD *)v16 + 3) = v15[3];
        *((_OWORD *)v16 + 4) = v15[4];
        *((_OWORD *)v16 + 5) = v15[5];
        *((_OWORD *)v16 + 6) = v15[6];
        v16 += 128;
        v17 = v15[7];
        v15 += 8;
        *((_OWORD *)v16 - 1) = v17;
        --v10;
      }
      while ( v10 );
      ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v12 + 40));
      NvmeAdapterDisconnectControllerInternal(a1, v8, v48, (*(_BYTE *)(v8 + 136) & 1) == 0);
    }
    else
    {
      v5 = -1073741811;
    }
  }
  else
  {
    v5 = -1073741637;
  }
LABEL_25:
  v18 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v5;
  if ( v18 )
    goto LABEL_91;
  v47 = 0LL;
  IoGetActivityIdIrp(a2, &v47);
  v20 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v20 == 14 )
  {
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_91;
    v42 = *(_DWORD *)(a2 + 48);
    v22 = &EventNonReadWriteRequestComplete;
    goto LABEL_90;
  }
  if ( *(_BYTE *)v20 != 15 )
  {
    if ( *(_BYTE *)v20 != 27 )
      goto LABEL_91;
    if ( *(_BYTE *)(v20 + 1) == 7 && !*(_DWORD *)(v20 + 8) )
    {
      if ( (byte_140173442 & 0x40) != 0 )
      {
        v21 = *(int **)(a2 + 56);
        if ( v21 )
          v4 = *v21;
        McTemplateK0pqd_EtwWriteTransfer(v19, v20, &v47, a2, v4, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_91;
    }
    if ( (byte_140173442 & 0x20) == 0 )
      goto LABEL_91;
    v22 = &EventPnpRequestComplete;
    v42 = *(_DWORD *)(a2 + 48);
LABEL_90:
    McTemplateK0pd_EtwWriteTransfer(v19, v22, &v47, a2, v42);
    goto LABEL_91;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_91;
  v23 = *(_QWORD *)(v20 + 8);
  v24 = 0LL;
  v43 = 0;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  v28 = 0;
  v29 = 0;
  if ( *(_BYTE *)(v23 + 2) != 40 )
  {
    v36 = *(_BYTE *)(v23 + 72);
    v24 = *(_BYTE **)(v23 + 32);
    v25 = *(_BYTE *)(v23 + 11);
    v35 = *(_BYTE *)(v23 + 4);
    if ( *(_BYTE *)(v23 + 2) )
      goto LABEL_91;
LABEL_65:
    LOBYTE(v19) = v36 - 8;
    if ( (v19 & 0x5D) != 0 )
      goto LABEL_91;
    if ( *(_BYTE *)(v23 + 3) == 1 || !v24 || !v25 )
      goto LABEL_84;
    v37 = *v24 & 0x7F;
    if ( v37 == 114 || v37 == 115 )
    {
      v19 = (unsigned __int64)&v24[v25];
      v38 = 0;
      if ( (unsigned __int64)(v24 + 8) > v19 )
        goto LABEL_82;
      v27 = v24[2];
      v26 = v24[1] & 0xF;
      v28 = v24[3];
    }
    else
    {
      v19 = (unsigned __int64)&v24[v25];
      v38 = 0;
      if ( (unsigned __int64)(v24 + 8) > v19 )
        goto LABEL_82;
      v39 = v24 + 13;
      v26 = v24[2] & 0xF;
      v40 = v25;
      if ( (unsigned int)(unsigned __int8)v24[7] + 8 <= v25 )
        v40 = (unsigned __int8)v24[7] + 8;
      v19 = (unsigned __int64)&v24[v40];
      if ( (unsigned __int64)v39 <= v19 )
        v27 = v24[12];
      if ( (unsigned __int64)(v24 + 14) > v19 )
        v28 = 0;
      else
        v28 = *v39;
    }
    v38 = 1;
LABEL_82:
    if ( v38 )
      v29 = 1;
LABEL_84:
    if ( byte_140173441 < 0 )
    {
      if ( !v29 )
      {
        v28 = 0;
        v27 = 0;
        v26 = 0;
      }
      McTemplateK0pduuuuup_EtwWriteTransfer(
        v19,
        v23,
        &v47,
        a2,
        *(_DWORD *)(a2 + 48),
        *(_BYTE *)(v23 + 3),
        v35,
        v26,
        v27,
        v28,
        a2);
    }
    goto LABEL_91;
  }
  v30 = 0LL;
  v44 = 0;
  if ( !*(_DWORD *)(v23 + 20) )
  {
    v31 = 0LL;
    v45 = 0;
    LODWORD(v46) = *(_DWORD *)(v23 + 56);
    if ( (_DWORD)v46 )
    {
      do
      {
        v19 = *(unsigned int *)(v23 + 4 * v31 + 120);
        if ( (unsigned int)v19 >= 0x80 )
        {
          v32 = *(unsigned int *)(v23 + 16);
          if ( (unsigned int)v19 < (unsigned int)v32 )
          {
            v33 = (unsigned int)v19;
            v34 = *(_DWORD *)(v19 + v23) - 64;
            if ( v34 )
            {
              v19 = (unsigned int)(v34 - 1);
              if ( (_DWORD)v19 )
              {
                if ( (_DWORD)v19 == 1 )
                {
                  v19 = v33 + 40;
                  if ( v33 + 40 <= v32 )
                  {
                    if ( *(_DWORD *)(v33 + v23 + 12) )
                      v30 = (char *)(v33 + v23 + 32);
                    v24 = *(_BYTE **)(v33 + v23 + 24);
LABEL_50:
                    v35 = *(_BYTE *)(v33 + v23 + 8);
                    v25 = *(_BYTE *)(v33 + v23 + 9);
                    goto LABEL_59;
                  }
                }
              }
              else
              {
                v19 = v33 + 56;
                if ( v33 + 56 <= v32 )
                {
                  v44 = 1;
                  if ( *(_BYTE *)(v33 + v23 + 10) )
                    v30 = (char *)(v33 + v23 + 24);
                  v24 = *(_BYTE **)(v33 + v23 + 16);
                  v25 = *(_BYTE *)(v33 + v23 + 9);
                  v43 = *(_BYTE *)(v33 + v23 + 8);
                }
              }
            }
            else
            {
              v19 = v33 + 40;
              if ( v33 + 40 <= v32 )
              {
                if ( *(_BYTE *)(v33 + v23 + 10) )
                  v30 = (char *)(v33 + v23 + 24);
                v24 = *(_BYTE **)(v33 + v23 + 16);
                goto LABEL_50;
              }
            }
            if ( v44 )
              break;
          }
        }
        v31 = (unsigned int)(v45 + 1);
        v45 = v31;
      }
      while ( (unsigned int)v31 < (unsigned int)v46 );
      v35 = v43;
LABEL_59:
      if ( v30 )
      {
        v36 = *v30;
        v29 = 0;
        goto LABEL_65;
      }
    }
  }
LABEL_91:
  IofCompleteRequest((PIRP)a2, 0);
  return v5;
}
