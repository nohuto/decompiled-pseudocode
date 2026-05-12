/*
 * XREFs of NvmeAdapterStorageInternalQueryPropertyIoctl @ 0x1400DF840
 * Callers:
 *     NvmeAdapterDeviceControlIrpFromNamespace @ 0x14004A5A0 (NvmeAdapterDeviceControlIrpFromNamespace.c)
 *     NvmeAdapterDeviceControlIrp @ 0x1401BE838 (NvmeAdapterDeviceControlIrp.c)
 * Callees:
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     memmove @ 0x140138680 (memmove.c)
 */

__int64 __fastcall NvmeAdapterStorageInternalQueryPropertyIoctl(__int64 a1, __int64 a2)
{
  int v3; // ebx
  _DWORD *v4; // rcx
  __int64 v6; // r8
  int v7; // edx
  int v8; // r15d
  __int64 v9; // r9
  __int64 v10; // rax
  const void *v11; // rdx
  bool v12; // zf
  unsigned __int64 v13; // rcx
  __int64 v14; // rdx
  int *v15; // rax
  const EVENT_DESCRIPTOR *v16; // rdx
  __int64 v17; // rdx
  _BYTE *v18; // r9
  unsigned __int8 v19; // r14
  char v20; // r11
  char v21; // si
  char v22; // r10
  char v23; // r15
  char *v24; // r15
  unsigned int v25; // r13d
  unsigned __int64 v26; // r12
  __int64 v27; // r8
  int v28; // ecx
  char v29; // r12
  char v30; // cl
  char v31; // r8
  char v32; // al
  char *v33; // r10
  unsigned int v34; // eax
  unsigned __int64 v36; // rcx
  __int64 v37; // rdx
  int *v38; // rax
  const EVENT_DESCRIPTOR *v39; // rdx
  __int64 v40; // rdx
  _BYTE *v41; // r9
  unsigned __int8 v42; // r14
  char v43; // r11
  char v44; // si
  char v45; // r10
  char v46; // r15
  char *v47; // r15
  unsigned int v48; // r13d
  unsigned __int64 v49; // r12
  __int64 v50; // r8
  int v51; // ecx
  char v52; // r12
  char v53; // cl
  char v54; // r8
  char v55; // al
  char *v56; // r10
  unsigned int v57; // eax
  int v58; // [rsp+20h] [rbp-49h]
  char v59; // [rsp+60h] [rbp-9h]
  char v60; // [rsp+60h] [rbp-9h]
  char v61; // [rsp+61h] [rbp-8h]
  char v62; // [rsp+61h] [rbp-8h]
  unsigned int v63; // [rsp+64h] [rbp-5h]
  unsigned int v64; // [rsp+68h] [rbp-1h]
  unsigned int v65; // [rsp+68h] [rbp-1h]
  GUID v66; // [rsp+70h] [rbp+7h] BYREF

  v3 = 0;
  v4 = *(_DWORD **)(a2 + 24);
  if ( v4 )
  {
    v6 = *(_QWORD *)(a2 + 184);
    if ( *(_DWORD *)(v6 + 16) >= 8u && *v4 == 1 )
    {
      v7 = v4[1];
      if ( v7 )
      {
        if ( v7 == 1 )
        {
          v8 = 0;
          v63 = 0;
        }
        else
        {
          v8 = -1073741808;
          *(_QWORD *)(a2 + 56) = 0LL;
          v63 = -1073741808;
        }
LABEL_16:
        v12 = StorEtwLoggingEnabled == 0;
        *(_BYTE *)(a2 + 141) = -84;
        *(_DWORD *)(a2 + 48) = v8;
        if ( v12 )
          goto LABEL_82;
        v66 = 0LL;
        IoGetActivityIdIrp(a2, &v66);
        v14 = *(_QWORD *)(a2 + 184);
        if ( *(_BYTE *)v14 == 14 )
        {
          if ( (byte_140173442 & 8) != 0 )
          {
            v58 = *(_DWORD *)(a2 + 48);
            v16 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
            goto LABEL_81;
          }
LABEL_82:
          IofCompleteRequest((PIRP)a2, 0);
          return v63;
        }
        if ( *(_BYTE *)v14 != 15 )
        {
          if ( *(_BYTE *)v14 == 27 )
          {
            if ( *(_BYTE *)(v14 + 1) == 7 && !*(_DWORD *)(v14 + 8) )
            {
              if ( (byte_140173442 & 0x40) != 0 )
              {
                v15 = *(int **)(a2 + 56);
                if ( v15 )
                  v3 = *v15;
                McTemplateK0pqd_EtwWriteTransfer(v13, v14, &v66, a2, v3, *(_DWORD *)(a2 + 48));
              }
              goto LABEL_82;
            }
            if ( (byte_140173442 & 0x20) != 0 )
            {
              v16 = &EventPnpRequestComplete;
              v58 = *(_DWORD *)(a2 + 48);
LABEL_81:
              McTemplateK0pd_EtwWriteTransfer(v13, v16, &v66, a2, v58);
              goto LABEL_82;
            }
          }
          goto LABEL_82;
        }
        if ( byte_140173441 >= 0 )
          goto LABEL_82;
        v17 = *(_QWORD *)(v14 + 8);
        v18 = 0LL;
        v59 = 0;
        v19 = 0;
        v20 = 0;
        v21 = 0;
        v22 = 0;
        v23 = 0;
        if ( *(_BYTE *)(v17 + 2) == 40 )
        {
          v24 = 0LL;
          v61 = 0;
          if ( *(_DWORD *)(v17 + 20) )
            goto LABEL_82;
          v25 = 0;
          v64 = *(_DWORD *)(v17 + 56);
          if ( !v64 )
            goto LABEL_82;
          do
          {
            v13 = *(unsigned int *)(v17 + 4LL * v25 + 120);
            if ( (unsigned int)v13 >= 0x80 )
            {
              v26 = *(unsigned int *)(v17 + 16);
              if ( (unsigned int)v13 < (unsigned int)v26 )
              {
                v27 = (unsigned int)v13;
                v28 = *(_DWORD *)(v13 + v17) - 64;
                if ( v28 )
                {
                  v13 = (unsigned int)(v28 - 1);
                  if ( (_DWORD)v13 )
                  {
                    if ( (_DWORD)v13 == 1 )
                    {
                      v13 = v27 + 40;
                      if ( v27 + 40 <= v26 )
                      {
                        if ( *(_DWORD *)(v27 + v17 + 12) )
                          v24 = (char *)(v27 + v17 + 32);
                        v18 = *(_BYTE **)(v27 + v17 + 24);
LABEL_41:
                        v29 = *(_BYTE *)(v27 + v17 + 8);
                        v19 = *(_BYTE *)(v27 + v17 + 9);
                        goto LABEL_50;
                      }
                    }
                  }
                  else
                  {
                    v13 = v27 + 56;
                    if ( v27 + 56 <= v26 )
                    {
                      v61 = 1;
                      if ( *(_BYTE *)(v27 + v17 + 10) )
                        v24 = (char *)(v27 + v17 + 24);
                      v18 = *(_BYTE **)(v27 + v17 + 16);
                      v19 = *(_BYTE *)(v27 + v17 + 9);
                      v59 = *(_BYTE *)(v27 + v17 + 8);
                    }
                  }
                }
                else
                {
                  v13 = v27 + 40;
                  if ( v27 + 40 <= v26 )
                  {
                    if ( *(_BYTE *)(v27 + v17 + 10) )
                      v24 = (char *)(v27 + v17 + 24);
                    v18 = *(_BYTE **)(v27 + v17 + 16);
                    goto LABEL_41;
                  }
                }
                if ( v61 )
                  break;
              }
            }
            ++v25;
          }
          while ( v25 < v64 );
          v29 = v59;
LABEL_50:
          if ( !v24 )
            goto LABEL_82;
          v30 = *v24;
          v23 = 0;
        }
        else
        {
          v30 = *(_BYTE *)(v17 + 72);
          v18 = *(_BYTE **)(v17 + 32);
          v19 = *(_BYTE *)(v17 + 11);
          v29 = *(_BYTE *)(v17 + 4);
          if ( *(_BYTE *)(v17 + 2) )
            goto LABEL_82;
        }
        LOBYTE(v13) = v30 - 8;
        if ( (v13 & 0x5D) != 0 )
          goto LABEL_82;
        v31 = *(_BYTE *)(v17 + 3);
        if ( v31 == 1 || !v18 || !v19 )
        {
LABEL_75:
          if ( byte_140173441 < 0 )
          {
            if ( !v23 )
            {
              v22 = 0;
              v21 = 0;
              v20 = 0;
            }
            McTemplateK0pduuuuup_EtwWriteTransfer(v13, v17, &v66, a2, *(_DWORD *)(a2 + 48), v31, v29, v20, v21, v22, a2);
          }
          goto LABEL_82;
        }
        v32 = *v18 & 0x7F;
        if ( v32 == 114 || v32 == 115 )
        {
          v13 = (unsigned __int64)&v18[v19];
          LOBYTE(v17) = 0;
          if ( (unsigned __int64)(v18 + 8) > v13 )
            goto LABEL_73;
          v21 = v18[2];
          v20 = v18[1] & 0xF;
          v22 = v18[3];
        }
        else
        {
          v13 = (unsigned __int64)&v18[v19];
          LOBYTE(v17) = 0;
          if ( (unsigned __int64)(v18 + 8) > v13 )
            goto LABEL_73;
          v33 = v18 + 13;
          v20 = v18[2] & 0xF;
          v34 = v19;
          if ( (unsigned int)(unsigned __int8)v18[7] + 8 <= v19 )
            v34 = (unsigned __int8)v18[7] + 8;
          v13 = (unsigned __int64)&v18[v34];
          if ( (unsigned __int64)v33 <= v13 )
            v21 = v18[12];
          if ( (unsigned __int64)(v18 + 14) > v13 )
            v22 = 0;
          else
            v22 = *v33;
        }
        LOBYTE(v17) = 1;
LABEL_73:
        if ( (_BYTE)v17 )
          v23 = 1;
        goto LABEL_75;
      }
      v63 = 0;
      v8 = 0;
      v9 = 0LL;
      if ( *(_DWORD *)(v6 + 8) >= 0x1000u )
      {
        v10 = *(_QWORD *)(a1 + 1152);
        if ( v10 )
        {
          v11 = *(const void **)(v10 + 592);
          if ( v11 )
          {
            memmove(v4, v11, 0x1000uLL);
            v9 = 4096LL;
LABEL_15:
            *(_QWORD *)(a2 + 56) = v9;
            goto LABEL_16;
          }
        }
        v8 = -1073741637;
      }
      else
      {
        v8 = -1073741789;
      }
      v63 = v8;
      goto LABEL_15;
    }
  }
  v12 = StorEtwLoggingEnabled == 0;
  *(_QWORD *)(a2 + 56) = 0LL;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = -1073741808;
  if ( v12 )
    goto LABEL_149;
  v66 = 0LL;
  IoGetActivityIdIrp(a2, &v66);
  v37 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v37 != 14 )
  {
    if ( *(_BYTE *)v37 != 15 )
    {
      if ( *(_BYTE *)v37 == 27 )
      {
        if ( *(_BYTE *)(v37 + 1) == 7 && !*(_DWORD *)(v37 + 8) )
        {
          if ( (byte_140173442 & 0x40) != 0 )
          {
            v38 = *(int **)(a2 + 56);
            if ( v38 )
              v3 = *v38;
            McTemplateK0pqd_EtwWriteTransfer(v36, v37, &v66, a2, v3, *(_DWORD *)(a2 + 48));
          }
          goto LABEL_149;
        }
        if ( (byte_140173442 & 0x20) != 0 )
        {
          v39 = &EventPnpRequestComplete;
LABEL_148:
          McTemplateK0pd_EtwWriteTransfer(v36, v39, &v66, a2, *(_DWORD *)(a2 + 48));
          goto LABEL_149;
        }
      }
      goto LABEL_149;
    }
    if ( byte_140173441 >= 0 )
      goto LABEL_149;
    v40 = *(_QWORD *)(v37 + 8);
    v41 = 0LL;
    v60 = 0;
    v42 = 0;
    v43 = 0;
    v44 = 0;
    v45 = 0;
    v46 = 0;
    if ( *(_BYTE *)(v40 + 2) == 40 )
    {
      v47 = 0LL;
      v62 = 0;
      if ( *(_DWORD *)(v40 + 20) )
        goto LABEL_149;
      v48 = 0;
      v65 = *(_DWORD *)(v40 + 56);
      if ( !v65 )
        goto LABEL_149;
      do
      {
        v36 = *(unsigned int *)(v40 + 4LL * v48 + 120);
        if ( (unsigned int)v36 >= 0x80 )
        {
          v49 = *(unsigned int *)(v40 + 16);
          if ( (unsigned int)v36 < (unsigned int)v49 )
          {
            v50 = (unsigned int)v36;
            v51 = *(_DWORD *)(v36 + v40) - 64;
            if ( v51 )
            {
              v36 = (unsigned int)(v51 - 1);
              if ( (_DWORD)v36 )
              {
                if ( (_DWORD)v36 == 1 )
                {
                  v36 = v50 + 40;
                  if ( v50 + 40 <= v49 )
                  {
                    if ( *(_DWORD *)(v50 + v40 + 12) )
                      v47 = (char *)(v50 + v40 + 32);
                    v41 = *(_BYTE **)(v50 + v40 + 24);
LABEL_108:
                    v52 = *(_BYTE *)(v50 + v40 + 8);
                    v42 = *(_BYTE *)(v50 + v40 + 9);
                    goto LABEL_117;
                  }
                }
              }
              else
              {
                v36 = v50 + 56;
                if ( v50 + 56 <= v49 )
                {
                  v62 = 1;
                  if ( *(_BYTE *)(v50 + v40 + 10) )
                    v47 = (char *)(v50 + v40 + 24);
                  v41 = *(_BYTE **)(v50 + v40 + 16);
                  v42 = *(_BYTE *)(v50 + v40 + 9);
                  v60 = *(_BYTE *)(v50 + v40 + 8);
                }
              }
            }
            else
            {
              v36 = v50 + 40;
              if ( v50 + 40 <= v49 )
              {
                if ( *(_BYTE *)(v50 + v40 + 10) )
                  v47 = (char *)(v50 + v40 + 24);
                v41 = *(_BYTE **)(v50 + v40 + 16);
                goto LABEL_108;
              }
            }
            if ( v62 )
              break;
          }
        }
        ++v48;
      }
      while ( v48 < v65 );
      v52 = v60;
LABEL_117:
      if ( !v47 )
        goto LABEL_149;
      v53 = *v47;
      v46 = 0;
    }
    else
    {
      v53 = *(_BYTE *)(v40 + 72);
      v41 = *(_BYTE **)(v40 + 32);
      v42 = *(_BYTE *)(v40 + 11);
      v52 = *(_BYTE *)(v40 + 4);
      if ( *(_BYTE *)(v40 + 2) )
        goto LABEL_149;
    }
    LOBYTE(v36) = v53 - 8;
    if ( (v36 & 0x5D) != 0 )
      goto LABEL_149;
    v54 = *(_BYTE *)(v40 + 3);
    if ( v54 == 1 || !v41 || !v42 )
    {
LABEL_142:
      if ( byte_140173441 < 0 )
      {
        if ( !v46 )
        {
          v45 = 0;
          v44 = 0;
          v43 = 0;
        }
        McTemplateK0pduuuuup_EtwWriteTransfer(v36, v40, &v66, a2, *(_DWORD *)(a2 + 48), v54, v52, v43, v44, v45, a2);
      }
      goto LABEL_149;
    }
    v55 = *v41 & 0x7F;
    if ( v55 == 114 || v55 == 115 )
    {
      v36 = (unsigned __int64)&v41[v42];
      LOBYTE(v40) = 0;
      if ( (unsigned __int64)(v41 + 8) > v36 )
        goto LABEL_140;
      v44 = v41[2];
      v43 = v41[1] & 0xF;
      v45 = v41[3];
    }
    else
    {
      v36 = (unsigned __int64)&v41[v42];
      LOBYTE(v40) = 0;
      if ( (unsigned __int64)(v41 + 8) > v36 )
        goto LABEL_140;
      v56 = v41 + 13;
      v43 = v41[2] & 0xF;
      v57 = v42;
      if ( (unsigned int)(unsigned __int8)v41[7] + 8 <= v42 )
        v57 = (unsigned __int8)v41[7] + 8;
      v36 = (unsigned __int64)&v41[v57];
      if ( (unsigned __int64)v56 <= v36 )
        v44 = v41[12];
      if ( (unsigned __int64)(v41 + 14) > v36 )
        v45 = 0;
      else
        v45 = *v56;
    }
    LOBYTE(v40) = 1;
LABEL_140:
    if ( (_BYTE)v40 )
      v46 = 1;
    goto LABEL_142;
  }
  if ( (byte_140173442 & 8) != 0 )
  {
    v39 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
    goto LABEL_148;
  }
LABEL_149:
  IofCompleteRequest((PIRP)a2, 0);
  return 3221225488LL;
}
