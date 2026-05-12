/*
 * XREFs of NvmeNamespaceSetSystemPowerIrp @ 0x14012A0E0
 * Callers:
 *     NvmeNamespaceSetPowerIrp @ 0x1401299C8 (NvmeNamespaceSetPowerIrp.c)
 * Callees:
 *     NvmeNamespaceAcquireRemoveLock @ 0x140041680 (NvmeNamespaceAcquireRemoveLock.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     NvmeSetSystemPowerState @ 0x14012B108 (NvmeSetSystemPowerState.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall NvmeNamespaceSetSystemPowerIrp(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v5; // rdx
  POWER_STATE v6; // ebx
  REQUEST_POWER_COMPLETE *v7; // r14
  void *v8; // r15
  __int64 v9; // rcx
  int v10; // eax
  int v11; // eax
  int v12; // edi
  NTSTATUS v13; // eax
  __int64 v14; // rdx
  unsigned int v15; // ecx
  int v16; // r15d
  int v17; // eax
  __int64 v18; // rcx
  int v19; // eax
  unsigned int v20; // eax
  bool v21; // zf
  unsigned __int64 v22; // rcx
  __int64 v23; // rdx
  int *v24; // rax
  const EVENT_DESCRIPTOR *v25; // rdx
  __int64 v26; // rdx
  char v27; // r13
  _BYTE *v28; // r9
  unsigned __int8 v29; // bp
  char v30; // r11
  char v31; // bl
  char v32; // r10
  char v33; // r14
  char *v34; // r14
  unsigned int v35; // r12d
  unsigned __int64 v36; // r15
  __int64 v37; // r8
  int v38; // ecx
  char v39; // cl
  char v40; // r8
  char v41; // al
  char *v42; // r10
  unsigned int v43; // eax
  PVOID Context; // [rsp+20h] [rbp-A8h]
  PIRP *Irp; // [rsp+28h] [rbp-A0h]
  char v47; // [rsp+60h] [rbp-68h]
  unsigned int v48; // [rsp+64h] [rbp-64h]
  unsigned int v49; // [rsp+68h] [rbp-60h]
  GUID v50; // [rsp+70h] [rbp-58h] BYREF

  v2 = *(_QWORD *)(a2 + 184);
  v5 = *(int *)(v2 + 24);
  v6.SystemState = (_SYSTEM_POWER_STATE)DevicePowerStateTable[v5];
  if ( (*(_DWORD *)(v2 + 8) & 0x400000) != 0 && (_DWORD)v5 == 6 && v6.SystemState == PowerSystemSleeping3 )
    *(_DWORD *)(*(_QWORD *)(a1 + 128) + 80LL) |= 8u;
  NvmeSetSystemPowerState(*(_QWORD *)(a1 + 128) + 68LL, v5, *(unsigned int *)(*(_QWORD *)(a2 + 184) + 32LL));
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 128) + 80LL) & 1) != 0 )
  {
    v7 = (REQUEST_POWER_COMPLETE *)NvmeNamespaceSetDevicePowerDownCompletion;
    v8 = (void *)a2;
    *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
  }
  else
  {
    v7 = (REQUEST_POWER_COMPLETE *)NvmeNamespaceDeviceStackPowerUpCompletion;
    v8 = (void *)a1;
  }
  NvmeNamespaceAcquireRemoveLock(a1, a2);
  v9 = *(_QWORD *)(a1 + 128);
  v10 = *(_DWORD *)(v9 + 80);
  if ( v6.SystemState == PowerSystemWorking )
    v11 = v10 | 2;
  else
    v11 = v10 | 4;
  *(_DWORD *)(v9 + 80) = v11;
  v12 = 0;
  v13 = PoRequestPowerIrp(*(PDEVICE_OBJECT *)(a1 + 8), 2u, v6, v7, v8, 0LL);
  v14 = *(_QWORD *)(a1 + 128);
  v15 = 259;
  v16 = 0;
  if ( v13 != 259 )
    v16 = v13;
  v17 = *(_DWORD *)(v14 + 80);
  v49 = v16;
  if ( v16 < 0 )
  {
    *(_DWORD *)(v14 + 80) = v17 | 0x10;
    v18 = *(_QWORD *)(a1 + 128);
    v19 = *(_DWORD *)(v18 + 80);
    if ( v6.SystemState == PowerSystemWorking )
      v20 = v19 & 0xFFFFFFFD;
    else
      v20 = v19 & 0xFFFFFFFB;
    *(_DWORD *)(v18 + 80) = v20;
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 120));
  }
  else if ( (v17 & 1) != 0 )
  {
    return v15;
  }
  v21 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v16;
  if ( v21 )
    goto LABEL_86;
  v50 = 0LL;
  IoGetActivityIdIrp(a2, &v50);
  v23 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v23 == 14 )
  {
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_86;
    v25 = &EventNonReadWriteRequestComplete;
    goto LABEL_85;
  }
  if ( *(_BYTE *)v23 != 15 )
  {
    if ( *(_BYTE *)v23 != 27 )
      goto LABEL_86;
    if ( *(_BYTE *)(v23 + 1) == 7 && !*(_DWORD *)(v23 + 8) )
    {
      if ( (byte_140173442 & 0x40) != 0 )
      {
        v24 = *(int **)(a2 + 56);
        if ( v24 )
          v12 = *v24;
        LODWORD(Irp) = *(_DWORD *)(a2 + 48);
        LODWORD(Context) = v12;
        McTemplateK0pqd_EtwWriteTransfer(v22, v23, &v50, a2, Context, Irp);
      }
      goto LABEL_86;
    }
    if ( (byte_140173442 & 0x20) == 0 )
      goto LABEL_86;
    v25 = &EventPnpRequestComplete;
LABEL_85:
    LODWORD(Context) = *(_DWORD *)(a2 + 48);
    McTemplateK0pd_EtwWriteTransfer(v22, v25, &v50, a2, Context);
    goto LABEL_86;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_86;
  v26 = *(_QWORD *)(v23 + 8);
  v27 = 0;
  v28 = 0LL;
  v29 = 0;
  v30 = 0;
  v31 = 0;
  v32 = 0;
  v33 = 0;
  if ( *(_BYTE *)(v26 + 2) == 40 )
  {
    v34 = 0LL;
    v47 = 0;
    if ( *(_DWORD *)(v26 + 20) )
      goto LABEL_86;
    v35 = 0;
    v48 = *(_DWORD *)(v26 + 56);
    if ( !v48 )
      goto LABEL_86;
    while ( 1 )
    {
      v22 = *(unsigned int *)(v26 + 4LL * v35 + 120);
      if ( (unsigned int)v22 >= 0x80 )
      {
        v36 = *(unsigned int *)(v26 + 16);
        if ( (unsigned int)v22 < (unsigned int)v36 )
        {
          v37 = (unsigned int)v22;
          v38 = *(_DWORD *)(v22 + v26) - 64;
          if ( v38 )
          {
            v22 = (unsigned int)(v38 - 1);
            if ( (_DWORD)v22 )
            {
              if ( (_DWORD)v22 == 1 )
              {
                v22 = v37 + 40;
                if ( v37 + 40 <= v36 )
                {
                  if ( *(_DWORD *)(v37 + v26 + 12) )
                    v34 = (char *)(v37 + v26 + 32);
                  v28 = *(_BYTE **)(v37 + v26 + 24);
                  goto LABEL_56;
                }
              }
            }
            else
            {
              v22 = v37 + 56;
              if ( v37 + 56 <= v36 )
              {
                v47 = 1;
                if ( *(_BYTE *)(v37 + v26 + 10) )
                  v34 = (char *)(v37 + v26 + 24);
                v27 = *(_BYTE *)(v37 + v26 + 8);
                v28 = *(_BYTE **)(v37 + v26 + 16);
                v29 = *(_BYTE *)(v37 + v26 + 9);
              }
            }
          }
          else
          {
            v22 = v37 + 40;
            if ( v37 + 40 <= v36 )
            {
              if ( *(_BYTE *)(v37 + v26 + 10) )
                v34 = (char *)(v37 + v26 + 24);
              v28 = *(_BYTE **)(v37 + v26 + 16);
LABEL_56:
              v29 = *(_BYTE *)(v37 + v26 + 9);
              v27 = *(_BYTE *)(v37 + v26 + 8);
LABEL_57:
              if ( v34 )
              {
                v39 = *v34;
                v33 = 0;
                goto LABEL_60;
              }
              goto LABEL_86;
            }
          }
          if ( v47 )
            goto LABEL_57;
        }
      }
      if ( ++v35 >= v48 )
        goto LABEL_57;
    }
  }
  v39 = *(_BYTE *)(v26 + 72);
  v28 = *(_BYTE **)(v26 + 32);
  v29 = *(_BYTE *)(v26 + 11);
  v27 = *(_BYTE *)(v26 + 4);
  if ( *(_BYTE *)(v26 + 2) )
    goto LABEL_86;
LABEL_60:
  LOBYTE(v22) = v39 - 8;
  if ( (v22 & 0x5D) == 0 )
  {
    v40 = *(_BYTE *)(v26 + 3);
    if ( v40 == 1 || !v28 || !v29 )
    {
LABEL_79:
      if ( byte_140173441 < 0 )
      {
        if ( !v33 )
        {
          v32 = 0;
          v31 = 0;
          v30 = 0;
        }
        LOBYTE(Irp) = v40;
        LODWORD(Context) = *(_DWORD *)(a2 + 48);
        McTemplateK0pduuuuup_EtwWriteTransfer(v22, v26, &v50, a2, Context, Irp, v27, v30, v31, v32, a2);
      }
      goto LABEL_86;
    }
    v41 = *v28 & 0x7F;
    if ( v41 == 114 || v41 == 115 )
    {
      v22 = (unsigned __int64)&v28[v29];
      LOBYTE(v26) = 0;
      if ( (unsigned __int64)(v28 + 8) > v22 )
        goto LABEL_77;
      v31 = v28[2];
      v30 = v28[1] & 0xF;
      v32 = v28[3];
    }
    else
    {
      v22 = (unsigned __int64)&v28[v29];
      LOBYTE(v26) = 0;
      if ( (unsigned __int64)(v28 + 8) > v22 )
        goto LABEL_77;
      v42 = v28 + 13;
      v30 = v28[2] & 0xF;
      v43 = v29;
      if ( (unsigned int)(unsigned __int8)v28[7] + 8 <= v29 )
        v43 = (unsigned __int8)v28[7] + 8;
      v22 = (unsigned __int64)&v28[v43];
      if ( (unsigned __int64)v42 <= v22 )
        v31 = v28[12];
      if ( (unsigned __int64)(v28 + 14) > v22 )
        v32 = 0;
      else
        v32 = *v42;
    }
    LOBYTE(v26) = 1;
LABEL_77:
    if ( (_BYTE)v26 )
      v33 = 1;
    goto LABEL_79;
  }
LABEL_86:
  IofCompleteRequest((PIRP)a2, 0);
  return v49;
}
