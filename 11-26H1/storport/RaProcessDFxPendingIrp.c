/*
 * XREFs of RaProcessDFxPendingIrp @ 0x140073508
 * Callers:
 *     RaProcessDFxQueuedRequests @ 0x140073A90 (RaProcessDFxQueuedRequests.c)
 * Callees:
 *     GetRaidAdapter @ 0x140010A8C (GetRaidAdapter.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     GetNvmeNamespace @ 0x14005CC1C (GetNvmeNamespace.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     GetNvmeAdapter @ 0x140072360 (GetNvmeAdapter.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RaProcessDFxPendingIrp(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  int v3; // ebx
  int *v4; // rcx
  int v6; // eax
  _DWORD *RaidAdapter; // rax
  __int64 v8; // rdx
  bool v9; // zf
  unsigned __int64 v10; // rcx
  unsigned __int8 *v11; // rdx
  int v12; // eax
  int *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 (__fastcall *v16)(__int64, __int64); // rax
  __int64 v17; // rdx
  _BYTE *v18; // r9
  unsigned __int8 v19; // r14
  char v20; // r11
  char v21; // si
  char v22; // r10
  char v23; // r15
  int v24; // eax
  char *v25; // r15
  unsigned int v26; // r13d
  unsigned __int64 v27; // r12
  __int64 v28; // r8
  int v29; // ecx
  char v30; // r12
  const EVENT_DESCRIPTOR *v31; // rdx
  char v32; // cl
  char v33; // r8
  char v34; // al
  char *v35; // r10
  unsigned int v36; // eax
  unsigned int v38; // r13d
  unsigned __int64 v39; // r12
  int v40; // ecx
  char v41; // [rsp+60h] [rbp-9h]
  char v42; // [rsp+61h] [rbp-8h]
  char v43; // [rsp+61h] [rbp-8h]
  unsigned int v44; // [rsp+68h] [rbp-1h]
  unsigned int v45; // [rsp+68h] [rbp-1h]
  GUID v46; // [rsp+70h] [rbp+7h] BYREF

  v2 = a1;
  v3 = 0;
  v4 = *(int **)(a1 + 64);
  v6 = *v4;
  if ( *v4 == 1094997074 )
  {
    RaidAdapter = GetRaidAdapter(v2);
LABEL_3:
    v8 = *((_QWORD *)RaidAdapter + 2);
    goto LABEL_21;
  }
  if ( v6 == 1431193940 )
  {
    RaidAdapter = (_DWORD *)*((_QWORD *)v4 + 3);
    if ( !RaidAdapter )
      goto LABEL_6;
    goto LABEL_3;
  }
  if ( v6 == 1314275652 )
  {
    RaidAdapter = GetNvmeAdapter(v2);
    goto LABEL_3;
  }
  if ( v6 != 1314278989 )
    goto LABEL_6;
  v14 = *(_QWORD *)(*((_QWORD *)GetNvmeNamespace(v2) + 2) + 128LL);
  if ( !v14 )
    goto LABEL_6;
  v8 = *(_QWORD *)(v14 + 16);
LABEL_21:
  if ( v8 )
  {
    v15 = *(_QWORD *)(v8 + 8);
    if ( v15 )
    {
      v16 = *(__int64 (__fastcall **)(__int64, __int64))(v15 + 8LL * **(unsigned __int8 **)(a2 + 184) + 112);
      if ( v16 )
        return v16(v2, a2);
      v9 = StorEtwLoggingEnabled == 0;
      *(_DWORD *)(a2 + 48) = -1073741823;
      *(_BYTE *)(a2 + 141) = -84;
      if ( v9 )
        goto LABEL_103;
      v46 = 0LL;
      IoGetActivityIdIrp(a2, &v46);
      v11 = *(unsigned __int8 **)(a2 + 184);
      if ( *v11 != 14 )
      {
        v12 = *v11 - 15;
        if ( *v11 == 15 )
        {
          if ( byte_140173441 >= 0 )
            goto LABEL_103;
          v17 = *((_QWORD *)v11 + 1);
          v18 = 0LL;
          v41 = 0;
          v19 = 0;
          v20 = 0;
          v21 = 0;
          v22 = 0;
          v23 = 0;
          v24 = *(unsigned __int8 *)(v17 + 2);
          if ( (_BYTE)v24 == 40 )
          {
            v25 = 0LL;
            v42 = 0;
            if ( !*(_DWORD *)(v17 + 20) )
            {
              v26 = 0;
              v44 = *(_DWORD *)(v17 + 56);
              if ( v44 )
              {
                while ( 1 )
                {
                  v10 = *(unsigned int *)(v17 + 4LL * v26 + 120);
                  if ( (unsigned int)v10 >= 0x80 )
                  {
                    v27 = *(unsigned int *)(v17 + 16);
                    if ( (unsigned int)v10 < (unsigned int)v27 )
                    {
                      v28 = (unsigned int)v10;
                      v29 = *(_DWORD *)(v17 + v10) - 64;
                      if ( v29 )
                      {
                        v10 = (unsigned int)(v29 - 1);
                        if ( (_DWORD)v10 )
                        {
                          if ( (_DWORD)v10 == 1 )
                          {
                            v10 = v28 + 40;
                            if ( v28 + 40 <= v27 )
                              goto LABEL_37;
                          }
                        }
                        else
                        {
                          v10 = v28 + 56;
                          if ( v28 + 56 <= v27 )
                          {
                            v42 = 1;
                            if ( *(_BYTE *)(v17 + v28 + 10) )
                              v25 = (char *)(v28 + v17 + 24);
                            v18 = *(_BYTE **)(v17 + v28 + 16);
                            v19 = *(_BYTE *)(v17 + v28 + 9);
                            v41 = *(_BYTE *)(v17 + v28 + 8);
                          }
                        }
                      }
                      else
                      {
                        v10 = v28 + 40;
                        if ( v28 + 40 <= v27 )
                          goto LABEL_53;
                      }
                      if ( v42 )
                        goto LABEL_50;
                    }
                  }
                  if ( ++v26 >= v44 )
                    goto LABEL_50;
                }
              }
            }
            goto LABEL_103;
          }
          goto LABEL_56;
        }
        goto LABEL_9;
      }
LABEL_100:
      if ( (byte_140173442 & 8) == 0 )
        goto LABEL_103;
      v31 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
      goto LABEL_102;
    }
  }
LABEL_6:
  v9 = StorEtwLoggingEnabled == 0;
  *(_DWORD *)(a2 + 48) = -1073741823;
  *(_BYTE *)(a2 + 141) = -84;
  if ( v9 )
    goto LABEL_103;
  v46 = 0LL;
  IoGetActivityIdIrp(a2, &v46);
  v11 = *(unsigned __int8 **)(a2 + 184);
  if ( *v11 == 14 )
    goto LABEL_100;
  v12 = *v11 - 15;
  if ( *v11 != 15 )
  {
LABEL_9:
    if ( v12 != 12 )
      goto LABEL_103;
    if ( v11[1] == 7 && !*((_DWORD *)v11 + 2) )
    {
      if ( (byte_140173442 & 0x40) != 0 )
      {
        v13 = *(int **)(a2 + 56);
        if ( v13 )
          v3 = *v13;
        McTemplateK0pqd_EtwWriteTransfer(v10, (__int64)v11, &v46, a2, v3, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_103;
    }
    if ( (byte_140173442 & 0x20) == 0 )
      goto LABEL_103;
    v31 = &EventPnpRequestComplete;
LABEL_102:
    McTemplateK0pd_EtwWriteTransfer(v10, v31, &v46, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_103;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_103;
  v17 = *((_QWORD *)v11 + 1);
  v18 = 0LL;
  v41 = 0;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  v24 = *(unsigned __int8 *)(v17 + 2);
  if ( (_BYTE)v24 != 40 )
  {
LABEL_56:
    v30 = *(_BYTE *)(v17 + 4);
    v19 = *(_BYTE *)(v17 + 11);
    v18 = *(_BYTE **)(v17 + 32);
    v32 = *(_BYTE *)(v17 + 72);
    if ( v24 )
      goto LABEL_103;
    goto LABEL_57;
  }
  v25 = 0LL;
  v43 = 0;
  if ( *(_DWORD *)(v17 + 20) )
    goto LABEL_103;
  v38 = 0;
  v45 = *(_DWORD *)(v17 + 56);
  if ( !v45 )
    goto LABEL_103;
  do
  {
    v10 = *(unsigned int *)(v17 + 4LL * v38 + 120);
    if ( (unsigned int)v10 >= 0x80 )
    {
      v39 = *(unsigned int *)(v17 + 16);
      if ( (unsigned int)v10 < (unsigned int)v39 )
      {
        v28 = (unsigned int)v10;
        v40 = *(_DWORD *)(v17 + v10) - 64;
        if ( v40 )
        {
          v10 = (unsigned int)(v40 - 1);
          if ( (_DWORD)v10 )
          {
            if ( (_DWORD)v10 == 1 )
            {
              v10 = v28 + 40;
              if ( v28 + 40 <= v39 )
              {
LABEL_37:
                if ( *(_DWORD *)(v17 + v28 + 12) )
                  v25 = (char *)(v28 + v17 + 32);
                v18 = *(_BYTE **)(v17 + v28 + 24);
LABEL_40:
                v30 = *(_BYTE *)(v17 + v28 + 8);
                v19 = *(_BYTE *)(v17 + v28 + 9);
                goto LABEL_51;
              }
            }
          }
          else
          {
            v10 = v28 + 56;
            if ( v28 + 56 <= v39 )
            {
              v43 = 1;
              if ( *(_BYTE *)(v17 + v28 + 10) )
                v25 = (char *)(v28 + v17 + 24);
              v18 = *(_BYTE **)(v17 + v28 + 16);
              v19 = *(_BYTE *)(v17 + v28 + 9);
              v41 = *(_BYTE *)(v17 + v28 + 8);
            }
          }
        }
        else
        {
          v10 = v28 + 40;
          if ( v28 + 40 <= v39 )
          {
LABEL_53:
            if ( *(_BYTE *)(v17 + v28 + 10) )
              v25 = (char *)(v28 + v17 + 24);
            v18 = *(_BYTE **)(v17 + v28 + 16);
            goto LABEL_40;
          }
        }
        if ( v43 )
          break;
      }
    }
    ++v38;
  }
  while ( v38 < v45 );
LABEL_50:
  v30 = v41;
LABEL_51:
  if ( !v25 )
    goto LABEL_103;
  v32 = *v25;
  v23 = 0;
LABEL_57:
  LOBYTE(v10) = v32 - 8;
  if ( (v10 & 0x5D) == 0 )
  {
    v33 = *(_BYTE *)(v17 + 3);
    if ( v33 == 1 || !v18 || !v19 )
    {
LABEL_96:
      if ( byte_140173441 < 0 )
      {
        if ( !v23 )
        {
          v22 = 0;
          v20 = 0;
          v21 = 0;
        }
        McTemplateK0pduuuuup_EtwWriteTransfer(v10, v17, &v46, a2, *(_DWORD *)(a2 + 48), v33, v30, v20, v21, v22, a2);
      }
      goto LABEL_103;
    }
    v34 = *v18 & 0x7F;
    if ( v34 == 114 || v34 == 115 )
    {
      v10 = (unsigned __int64)&v18[v19];
      LOBYTE(v17) = 0;
      if ( (unsigned __int64)(v18 + 8) > v10 )
        goto LABEL_94;
      v22 = v18[3];
      v20 = v18[1] & 0xF;
      v21 = v18[2];
    }
    else
    {
      v10 = (unsigned __int64)&v18[v19];
      LOBYTE(v17) = 0;
      if ( (unsigned __int64)(v18 + 8) > v10 )
        goto LABEL_94;
      v35 = v18 + 13;
      v20 = v18[2] & 0xF;
      v36 = v19;
      if ( (unsigned int)(unsigned __int8)v18[7] + 8 <= v19 )
        v36 = (unsigned __int8)v18[7] + 8;
      v10 = (unsigned __int64)&v18[v36];
      if ( (unsigned __int64)v35 <= v10 )
        v21 = v18[12];
      if ( (unsigned __int64)(v18 + 14) > v10 )
        v22 = 0;
      else
        v22 = *v35;
    }
    LOBYTE(v17) = 1;
LABEL_94:
    if ( (_BYTE)v17 )
      v23 = 1;
    goto LABEL_96;
  }
LABEL_103:
  IofCompleteRequest((PIRP)a2, 0);
  return 3221225473LL;
}
