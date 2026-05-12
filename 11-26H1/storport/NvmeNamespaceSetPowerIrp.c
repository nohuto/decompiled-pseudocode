/*
 * XREFs of NvmeNamespaceSetPowerIrp @ 0x1401299C8
 * Callers:
 *     NvmeNamespacePowerIrp @ 0x1401085E4 (NvmeNamespacePowerIrp.c)
 * Callees:
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     NvmeNamespacePreProcessSetDevicePowerIrp @ 0x140128AF4 (NvmeNamespacePreProcessSetDevicePowerIrp.c)
 *     NvmeNamespaceProcessSetDevicePowerIrp @ 0x140128C38 (NvmeNamespaceProcessSetDevicePowerIrp.c)
 *     NvmeNamespaceSetSystemPowerIrp @ 0x14012A0E0 (NvmeNamespaceSetSystemPowerIrp.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall NvmeNamespaceSetPowerIrp(struct _SLIST_ENTRY *a1, __int64 a2)
{
  int v3; // ebx
  __int64 v4; // rdx
  int v6; // r8d
  int v7; // eax
  bool v8; // zf
  unsigned int v9; // r12d
  unsigned __int64 v10; // rcx
  __int64 v11; // rdx
  int *v12; // rax
  const EVENT_DESCRIPTOR *v13; // rdx
  __int64 v14; // rdx
  _BYTE *v15; // r9
  unsigned __int8 v16; // r15
  char v17; // r11
  char v18; // r14
  char v19; // r10
  char *v20; // r13
  __int64 v21; // rax
  unsigned __int64 v22; // rax
  __int64 v23; // r8
  int v24; // ecx
  char v25; // cl
  char v26; // r13
  char v27; // r8
  char v28; // al
  char *v29; // r10
  unsigned int v30; // eax
  char v31; // si
  unsigned __int64 v33; // rcx
  __int64 v34; // rdx
  int *v35; // rax
  const EVENT_DESCRIPTOR *v36; // rdx
  __int64 v37; // rdx
  _BYTE *v38; // r9
  unsigned __int8 v39; // r15
  char v40; // r11
  char v41; // r14
  char v42; // r10
  char v43; // r12
  char *v44; // r12
  __int64 v45; // rax
  unsigned __int64 v46; // r13
  __int64 v47; // r8
  int v48; // ecx
  char v49; // r13
  char v50; // cl
  char v51; // r8
  char v52; // al
  char *v53; // r10
  unsigned int v54; // eax
  char v56; // [rsp+60h] [rbp-9h]
  char v57; // [rsp+61h] [rbp-8h]
  char v58; // [rsp+62h] [rbp-7h]
  char v59; // [rsp+62h] [rbp-7h]
  int v60; // [rsp+64h] [rbp-5h]
  int v61; // [rsp+64h] [rbp-5h]
  unsigned int v62; // [rsp+6Ch] [rbp+3h]
  unsigned int v63; // [rsp+6Ch] [rbp+3h]
  GUID v64; // [rsp+70h] [rbp+7h] BYREF

  v3 = 0;
  v4 = *(_QWORD *)(a2 + 184);
  v6 = *(_DWORD *)(v4 + 16);
  v7 = *(_DWORD *)(v4 + 24);
  if ( !v6 )
  {
    if ( v7 <= 6 )
      return (unsigned int)NvmeNamespaceSetSystemPowerIrp(a1, a2);
    v8 = StorEtwLoggingEnabled == 0;
    *(_BYTE *)(a2 + 141) = -84;
    *(_DWORD *)(a2 + 48) = 0;
    if ( v8 )
      goto LABEL_142;
    v64 = 0LL;
    IoGetActivityIdIrp(a2, &v64);
    v34 = *(_QWORD *)(a2 + 184);
    if ( *(_BYTE *)v34 == 14 )
    {
      if ( (byte_140173442 & 8) != 0 )
      {
        v36 = &EventNonReadWriteRequestComplete;
        goto LABEL_141;
      }
LABEL_142:
      IofCompleteRequest((PIRP)a2, 0);
      return 0LL;
    }
    if ( *(_BYTE *)v34 != 15 )
    {
      if ( *(_BYTE *)v34 == 27 )
      {
        if ( *(_BYTE *)(v34 + 1) == 7 && !*(_DWORD *)(v34 + 8) )
        {
          if ( (byte_140173442 & 0x40) != 0 )
          {
            v35 = *(int **)(a2 + 56);
            if ( v35 )
              v3 = *v35;
            McTemplateK0pqd_EtwWriteTransfer(v33, v34, &v64, a2, v3, *(_DWORD *)(a2 + 48));
          }
          goto LABEL_142;
        }
        if ( (byte_140173442 & 0x20) != 0 )
        {
          v36 = &EventPnpRequestComplete;
LABEL_141:
          McTemplateK0pd_EtwWriteTransfer(v33, v36, &v64, a2, *(_DWORD *)(a2 + 48));
          goto LABEL_142;
        }
      }
      goto LABEL_142;
    }
    if ( byte_140173441 >= 0 )
      goto LABEL_142;
    v37 = *(_QWORD *)(v34 + 8);
    v38 = 0LL;
    v56 = 0;
    v39 = 0;
    v40 = 0;
    v41 = 0;
    v42 = 0;
    v43 = 0;
    if ( *(_BYTE *)(v37 + 2) == 40 )
    {
      v44 = 0LL;
      v59 = 0;
      if ( *(_DWORD *)(v37 + 20) )
        goto LABEL_142;
      v45 = 0LL;
      v61 = 0;
      v63 = *(_DWORD *)(v37 + 56);
      if ( !v63 )
        goto LABEL_142;
      do
      {
        v33 = *(unsigned int *)(v37 + 4 * v45 + 120);
        if ( (unsigned int)v33 >= 0x80 )
        {
          v46 = *(unsigned int *)(v37 + 16);
          if ( (unsigned int)v33 < (unsigned int)v46 )
          {
            v47 = (unsigned int)v33;
            v48 = *(_DWORD *)(v33 + v37) - 64;
            if ( v48 )
            {
              v33 = (unsigned int)(v48 - 1);
              if ( (_DWORD)v33 )
              {
                if ( (_DWORD)v33 == 1 )
                {
                  v33 = v47 + 40;
                  if ( v47 + 40 <= v46 )
                  {
                    if ( *(_DWORD *)(v47 + v37 + 12) )
                      v44 = (char *)(v47 + v37 + 32);
                    v38 = *(_BYTE **)(v47 + v37 + 24);
LABEL_101:
                    v49 = *(_BYTE *)(v47 + v37 + 8);
                    v39 = *(_BYTE *)(v47 + v37 + 9);
                    goto LABEL_110;
                  }
                }
              }
              else
              {
                v33 = v47 + 56;
                if ( v47 + 56 <= v46 )
                {
                  v59 = 1;
                  if ( *(_BYTE *)(v47 + v37 + 10) )
                    v44 = (char *)(v47 + v37 + 24);
                  v38 = *(_BYTE **)(v47 + v37 + 16);
                  v39 = *(_BYTE *)(v47 + v37 + 9);
                  v56 = *(_BYTE *)(v47 + v37 + 8);
                }
              }
            }
            else
            {
              v33 = v47 + 40;
              if ( v47 + 40 <= v46 )
              {
                if ( *(_BYTE *)(v47 + v37 + 10) )
                  v44 = (char *)(v47 + v37 + 24);
                v38 = *(_BYTE **)(v47 + v37 + 16);
                goto LABEL_101;
              }
            }
            if ( v59 )
              break;
          }
        }
        v45 = (unsigned int)(v61 + 1);
        v61 = v45;
      }
      while ( (unsigned int)v45 < v63 );
      v49 = v56;
LABEL_110:
      if ( !v44 )
        goto LABEL_142;
      v50 = *v44;
      v43 = 0;
    }
    else
    {
      v50 = *(_BYTE *)(v37 + 72);
      v38 = *(_BYTE **)(v37 + 32);
      v39 = *(_BYTE *)(v37 + 11);
      v49 = *(_BYTE *)(v37 + 4);
      if ( *(_BYTE *)(v37 + 2) )
        goto LABEL_142;
    }
    LOBYTE(v33) = v50 - 8;
    if ( (v33 & 0x5D) != 0 )
      goto LABEL_142;
    v51 = *(_BYTE *)(v37 + 3);
    if ( v51 == 1 || !v38 || !v39 )
    {
LABEL_135:
      if ( byte_140173441 < 0 )
      {
        if ( !v43 )
        {
          v42 = 0;
          v41 = 0;
          v40 = 0;
        }
        McTemplateK0pduuuuup_EtwWriteTransfer(v33, v37, &v64, a2, *(_DWORD *)(a2 + 48), v51, v49, v40, v41, v42, a2);
      }
      goto LABEL_142;
    }
    v52 = *v38 & 0x7F;
    if ( v52 == 114 || v52 == 115 )
    {
      v33 = (unsigned __int64)&v38[v39];
      LOBYTE(v37) = 0;
      if ( (unsigned __int64)(v38 + 8) > v33 )
        goto LABEL_133;
      v41 = v38[2];
      v40 = v38[1] & 0xF;
      v42 = v38[3];
    }
    else
    {
      v33 = (unsigned __int64)&v38[v39];
      LOBYTE(v37) = 0;
      if ( (unsigned __int64)(v38 + 8) > v33 )
        goto LABEL_133;
      v53 = v38 + 13;
      v40 = v38[2] & 0xF;
      v54 = v39;
      if ( (unsigned int)(unsigned __int8)v38[7] + 8 <= v39 )
        v54 = (unsigned __int8)v38[7] + 8;
      v33 = (unsigned __int64)&v38[v54];
      if ( (unsigned __int64)v53 <= v33 )
        v41 = v38[12];
      if ( (unsigned __int64)(v38 + 14) > v33 )
        v42 = 0;
      else
        v42 = *v53;
    }
    LOBYTE(v37) = 1;
LABEL_133:
    if ( (_BYTE)v37 )
      v43 = 1;
    goto LABEL_135;
  }
  if ( v6 != 1 )
  {
    v8 = StorEtwLoggingEnabled == 0;
    v9 = -1073741823;
    *(_DWORD *)(a2 + 48) = -1073741823;
    *(_BYTE *)(a2 + 141) = -84;
    if ( v8 )
      goto LABEL_69;
    v64 = 0LL;
    IoGetActivityIdIrp(a2, &v64);
    v11 = *(_QWORD *)(a2 + 184);
    if ( *(_BYTE *)v11 == 14 )
    {
      if ( (byte_140173442 & 8) == 0 )
        goto LABEL_69;
      v13 = &EventNonReadWriteRequestComplete;
      goto LABEL_68;
    }
    if ( *(_BYTE *)v11 != 15 )
    {
      if ( *(_BYTE *)v11 != 27 )
        goto LABEL_69;
      if ( *(_BYTE *)(v11 + 1) == 7 && !*(_DWORD *)(v11 + 8) )
      {
        if ( (byte_140173442 & 0x40) != 0 )
        {
          v12 = *(int **)(a2 + 56);
          if ( v12 )
            v3 = *v12;
          McTemplateK0pqd_EtwWriteTransfer(v10, v11, &v64, a2, v3, *(_DWORD *)(a2 + 48));
        }
        goto LABEL_69;
      }
      if ( (byte_140173442 & 0x20) == 0 )
        goto LABEL_69;
      v13 = &EventPnpRequestComplete;
LABEL_68:
      McTemplateK0pd_EtwWriteTransfer(v10, v13, &v64, a2, *(_DWORD *)(a2 + 48));
      goto LABEL_69;
    }
    if ( byte_140173441 >= 0 )
      goto LABEL_69;
    v14 = *(_QWORD *)(v11 + 8);
    v15 = 0LL;
    v57 = 0;
    v16 = 0;
    v17 = 0;
    v18 = 0;
    v19 = 0;
    if ( *(_BYTE *)(v14 + 2) == 40 )
    {
      v20 = 0LL;
      v58 = 0;
      if ( *(_DWORD *)(v14 + 20) )
        goto LABEL_69;
      v21 = 0LL;
      v60 = 0;
      v62 = *(_DWORD *)(v14 + 56);
      if ( !v62 )
        goto LABEL_69;
      while ( 1 )
      {
        v10 = *(unsigned int *)(v14 + 4 * v21 + 120);
        if ( (unsigned int)v10 >= 0x80 )
        {
          v22 = *(unsigned int *)(v14 + 16);
          if ( (unsigned int)v10 < (unsigned int)v22 )
          {
            v23 = (unsigned int)v10;
            v24 = *(_DWORD *)(v10 + v14) - 64;
            if ( v24 )
            {
              v10 = (unsigned int)(v24 - 1);
              if ( (_DWORD)v10 )
              {
                if ( (_DWORD)v10 == 1 )
                {
                  v10 = v23 + 40;
                  if ( v23 + 40 <= v22 )
                  {
                    if ( *(_DWORD *)(v23 + v14 + 12) )
                      v20 = (char *)(v23 + v14 + 32);
                    v15 = *(_BYTE **)(v23 + v14 + 24);
                    goto LABEL_39;
                  }
                }
              }
              else
              {
                v10 = v23 + 56;
                if ( v23 + 56 <= v22 )
                {
                  v58 = 1;
                  if ( *(_BYTE *)(v23 + v14 + 10) )
                    v20 = (char *)(v23 + v14 + 24);
                  v15 = *(_BYTE **)(v23 + v14 + 16);
                  v16 = *(_BYTE *)(v23 + v14 + 9);
                  v57 = *(_BYTE *)(v23 + v14 + 8);
                }
              }
            }
            else
            {
              v10 = v23 + 40;
              if ( v23 + 40 <= v22 )
              {
                if ( *(_BYTE *)(v23 + v14 + 10) )
                  v20 = (char *)(v23 + v14 + 24);
                v15 = *(_BYTE **)(v23 + v14 + 16);
LABEL_39:
                v16 = *(_BYTE *)(v23 + v14 + 9);
                v57 = *(_BYTE *)(v23 + v14 + 8);
LABEL_40:
                if ( v20 )
                {
                  v25 = *v20;
                  v26 = v57;
                  goto LABEL_43;
                }
                goto LABEL_69;
              }
            }
            if ( v58 )
              goto LABEL_40;
          }
        }
        v21 = (unsigned int)(v60 + 1);
        v60 = v21;
        if ( (unsigned int)v21 >= v62 )
          goto LABEL_40;
      }
    }
    v25 = *(_BYTE *)(v14 + 72);
    v15 = *(_BYTE **)(v14 + 32);
    v16 = *(_BYTE *)(v14 + 11);
    v26 = *(_BYTE *)(v14 + 4);
    if ( *(_BYTE *)(v14 + 2) )
      goto LABEL_69;
LABEL_43:
    if ( ((v25 - 8) & 0x5D) == 0 )
    {
      v27 = *(_BYTE *)(v14 + 3);
      if ( v27 == 1 || !v15 || !v16 )
      {
LABEL_61:
        LOBYTE(v10) = 0;
LABEL_62:
        if ( byte_140173441 < 0 )
        {
          if ( !(_BYTE)v10 )
          {
            v19 = 0;
            v18 = 0;
            v17 = 0;
          }
          McTemplateK0pduuuuup_EtwWriteTransfer(v10, v14, &v64, a2, *(_DWORD *)(a2 + 48), v27, v26, v17, v18, v19, a2);
        }
        goto LABEL_69;
      }
      v28 = *v15 & 0x7F;
      if ( v28 == 114 || v28 == 115 )
      {
        v10 = (unsigned __int64)&v15[v16];
        LOBYTE(v14) = 0;
        if ( (unsigned __int64)(v15 + 8) > v10 )
          goto LABEL_60;
        v18 = v15[2];
        v17 = v15[1] & 0xF;
        v19 = v15[3];
      }
      else
      {
        v10 = (unsigned __int64)&v15[v16];
        LOBYTE(v14) = 0;
        if ( (unsigned __int64)(v15 + 8) > v10 )
          goto LABEL_60;
        v29 = v15 + 13;
        v17 = v15[2] & 0xF;
        v30 = v16;
        if ( (unsigned int)(unsigned __int8)v15[7] + 8 <= v16 )
          v30 = (unsigned __int8)v15[7] + 8;
        v10 = (unsigned __int64)&v15[v30];
        if ( (unsigned __int64)v29 <= v10 )
          v18 = v15[12];
        if ( (unsigned __int64)(v15 + 14) > v10 )
          v19 = 0;
        else
          v19 = *v29;
      }
      LOBYTE(v14) = 1;
LABEL_60:
      LOBYTE(v10) = 1;
      if ( (_BYTE)v14 )
        goto LABEL_62;
      goto LABEL_61;
    }
LABEL_69:
    IofCompleteRequest((PIRP)a2, 0);
    return v9;
  }
  if ( *((_DWORD *)&a1[8].Next[4].Next + 2) != 4 || (v31 = 1, v7 != 1) )
    v31 = 0;
  v9 = 259;
  if ( (unsigned int)NvmeNamespacePreProcessSetDevicePowerIrp(a1, a2, v31) != 259 )
    return (unsigned int)NvmeNamespaceProcessSetDevicePowerIrp((__int64)a1, a2, v31);
  return v9;
}
