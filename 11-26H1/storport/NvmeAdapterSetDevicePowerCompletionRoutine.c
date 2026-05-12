/*
 * XREFs of NvmeAdapterSetDevicePowerCompletionRoutine @ 0x1401260E0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     GetNvmeAdapter @ 0x140072360 (GetNvmeAdapter.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

void __fastcall NvmeAdapterSetDevicePowerCompletionRoutine(__int64 a1, __int64 a2, __int64 a3, IRP *a4, int *a5)
{
  PEX_RUNDOWN_REF_CACHE_AWARE *NvmeAdapter; // rax
  __int64 v7; // r9
  PEX_RUNDOWN_REF_CACHE_AWARE v8; // rdx
  int v9; // ecx
  int v10; // r8d
  int v11; // ebx
  bool v12; // zf
  int v13; // ecx
  unsigned __int64 v14; // rcx
  __int64 CurrentStackLocation; // rdx
  int *Information; // rax
  const EVENT_DESCRIPTOR *v17; // rdx
  __int64 v18; // rdx
  char v19; // r13
  _BYTE *v20; // r9
  unsigned __int8 v21; // bp
  char v22; // si
  char v23; // r11
  char v24; // r10
  char v25; // r14
  char *v26; // r14
  unsigned int v27; // r12d
  unsigned __int64 v28; // r15
  __int64 v29; // r8
  int v30; // ecx
  char v31; // cl
  char v32; // r8
  char v33; // al
  char *v34; // r10
  unsigned int v35; // eax
  char v36; // [rsp+60h] [rbp-68h]
  unsigned int v37; // [rsp+64h] [rbp-64h]
  PEX_RUNDOWN_REF_CACHE_AWARE *v38; // [rsp+68h] [rbp-60h]
  GUID v39; // [rsp+70h] [rbp-58h] BYREF

  NvmeAdapter = (PEX_RUNDOWN_REF_CACHE_AWARE *)GetNvmeAdapter(a1);
  v38 = NvmeAdapter;
  v8 = NvmeAdapter[20];
  v9 = *((_DWORD *)v8 + 19);
  if ( v10 == 1 )
  {
    *((_DWORD *)v8 + 19) = v9 & 0xFFFFFFFD;
    *((_DWORD *)NvmeAdapter[20] + 19) &= ~0x20u;
    return;
  }
  *((_DWORD *)v8 + 19) = v9 & 0xFFFFFFFB;
  v11 = 0;
  v12 = StorEtwLoggingEnabled == 0;
  v13 = *a5;
  *(_BYTE *)(v7 + 141) = -84;
  *(_DWORD *)(v7 + 48) = v13;
  if ( v12 )
    goto LABEL_69;
  v39 = 0LL;
  IoGetActivityIdIrp(a4, &v39);
  CurrentStackLocation = (__int64)a4->Tail.Overlay.CurrentStackLocation;
  if ( *(_BYTE *)CurrentStackLocation == 14 )
  {
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_69;
    v17 = &EventNonReadWriteRequestComplete;
    goto LABEL_68;
  }
  if ( *(_BYTE *)CurrentStackLocation != 15 )
  {
    if ( *(_BYTE *)CurrentStackLocation != 27 )
      goto LABEL_69;
    if ( *(_BYTE *)(CurrentStackLocation + 1) == 7 && !*(_DWORD *)(CurrentStackLocation + 8) )
    {
      if ( (byte_140173442 & 0x40) != 0 )
      {
        Information = (int *)a4->IoStatus.Information;
        if ( Information )
          v11 = *Information;
        McTemplateK0pqd_EtwWriteTransfer(v14, CurrentStackLocation, &v39, a4, v11, a4->IoStatus.Status);
      }
      goto LABEL_69;
    }
    if ( (byte_140173442 & 0x20) == 0 )
      goto LABEL_69;
    v17 = &EventPnpRequestComplete;
LABEL_68:
    McTemplateK0pd_EtwWriteTransfer(v14, v17, &v39, a4, a4->IoStatus.Status);
    goto LABEL_69;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_69;
  v18 = *(_QWORD *)(CurrentStackLocation + 8);
  v19 = 0;
  v20 = 0LL;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  if ( *(_BYTE *)(v18 + 2) == 40 )
  {
    v26 = 0LL;
    v36 = 0;
    if ( *(_DWORD *)(v18 + 20) )
      goto LABEL_69;
    v27 = 0;
    v37 = *(_DWORD *)(v18 + 56);
    if ( !v37 )
      goto LABEL_69;
    while ( 1 )
    {
      v14 = *(unsigned int *)(v18 + 4LL * v27 + 120);
      if ( (unsigned int)v14 >= 0x80 )
      {
        v28 = *(unsigned int *)(v18 + 16);
        if ( (unsigned int)v14 < (unsigned int)v28 )
        {
          v29 = (unsigned int)v14;
          v30 = *(_DWORD *)(v14 + v18) - 64;
          if ( v30 )
          {
            v14 = (unsigned int)(v30 - 1);
            if ( (_DWORD)v14 )
            {
              if ( (_DWORD)v14 == 1 )
              {
                v14 = v29 + 40;
                if ( v29 + 40 <= v28 )
                {
                  if ( *(_DWORD *)(v29 + v18 + 12) )
                    v26 = (char *)(v29 + v18 + 32);
                  v20 = *(_BYTE **)(v29 + v18 + 24);
                  goto LABEL_39;
                }
              }
            }
            else
            {
              v14 = v29 + 56;
              if ( v29 + 56 <= v28 )
              {
                v36 = 1;
                if ( *(_BYTE *)(v29 + v18 + 10) )
                  v26 = (char *)(v29 + v18 + 24);
                v19 = *(_BYTE *)(v29 + v18 + 8);
                v20 = *(_BYTE **)(v29 + v18 + 16);
                v21 = *(_BYTE *)(v29 + v18 + 9);
              }
            }
          }
          else
          {
            v14 = v29 + 40;
            if ( v29 + 40 <= v28 )
            {
              if ( *(_BYTE *)(v29 + v18 + 10) )
                v26 = (char *)(v29 + v18 + 24);
              v20 = *(_BYTE **)(v29 + v18 + 16);
LABEL_39:
              v21 = *(_BYTE *)(v29 + v18 + 9);
              v19 = *(_BYTE *)(v29 + v18 + 8);
LABEL_40:
              if ( v26 )
              {
                v31 = *v26;
                v25 = 0;
                goto LABEL_43;
              }
              goto LABEL_69;
            }
          }
          if ( v36 )
            goto LABEL_40;
        }
      }
      if ( ++v27 >= v37 )
        goto LABEL_40;
    }
  }
  v31 = *(_BYTE *)(v18 + 72);
  v20 = *(_BYTE **)(v18 + 32);
  v21 = *(_BYTE *)(v18 + 11);
  v19 = *(_BYTE *)(v18 + 4);
  if ( *(_BYTE *)(v18 + 2) )
    goto LABEL_69;
LABEL_43:
  LOBYTE(v14) = v31 - 8;
  if ( (v14 & 0x5D) == 0 )
  {
    v32 = *(_BYTE *)(v18 + 3);
    if ( v32 == 1 || !v20 || !v21 )
    {
LABEL_62:
      if ( byte_140173441 < 0 )
      {
        if ( !v25 )
        {
          v24 = 0;
          v23 = 0;
          v22 = 0;
        }
        McTemplateK0pduuuuup_EtwWriteTransfer(v14, v18, &v39, a4, a4->IoStatus.Status, v32, v19, v22, v23, v24, a4);
      }
      goto LABEL_69;
    }
    v33 = *v20 & 0x7F;
    if ( v33 == 114 || v33 == 115 )
    {
      v14 = (unsigned __int64)&v20[v21];
      LOBYTE(v18) = 0;
      if ( (unsigned __int64)(v20 + 8) > v14 )
        goto LABEL_60;
      v23 = v20[2];
      v22 = v20[1] & 0xF;
      v24 = v20[3];
    }
    else
    {
      v14 = (unsigned __int64)&v20[v21];
      LOBYTE(v18) = 0;
      if ( (unsigned __int64)(v20 + 8) > v14 )
        goto LABEL_60;
      v34 = v20 + 13;
      v22 = v20[2] & 0xF;
      v35 = v21;
      if ( (unsigned int)(unsigned __int8)v20[7] + 8 <= v21 )
        v35 = (unsigned __int8)v20[7] + 8;
      v14 = (unsigned __int64)&v20[v35];
      if ( (unsigned __int64)v34 <= v14 )
        v23 = v20[12];
      if ( (unsigned __int64)(v20 + 14) > v14 )
        v24 = 0;
      else
        v24 = *v34;
    }
    LOBYTE(v18) = 1;
LABEL_60:
    if ( (_BYTE)v18 )
      v25 = 1;
    goto LABEL_62;
  }
LABEL_69:
  IofCompleteRequest(a4, 0);
  ExReleaseRundownProtectionCacheAware(v38[19]);
}
