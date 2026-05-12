/*
 * XREFs of NvmeNamespacePowerIrp @ 0x1401085E4
 * Callers:
 *     RaDriverPowerIrp @ 0x140072930 (RaDriverPowerIrp.c)
 * Callees:
 *     NvmeNamespaceAcquireRemoveLock @ 0x140041680 (NvmeNamespaceAcquireRemoveLock.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     NvmeNamespaceSetPowerIrp @ 0x1401299C8 (NvmeNamespaceSetPowerIrp.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall NvmeNamespacePowerIrp(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  int v4; // eax
  unsigned int v5; // ebx
  bool v6; // zf
  unsigned __int64 v7; // rcx
  __int64 v8; // rdx
  unsigned int *v9; // rax
  const EVENT_DESCRIPTOR *v10; // rdx
  __int64 v11; // rdx
  _BYTE *v12; // r9
  unsigned __int8 v13; // r14
  char v14; // r11
  char v15; // si
  char v16; // r10
  char v17; // r15
  char *v18; // r15
  unsigned int v19; // r13d
  unsigned __int64 v20; // r12
  __int64 v21; // r8
  int v22; // ecx
  char v23; // r12
  char v24; // cl
  char v25; // r8
  char v26; // al
  char *v27; // r10
  unsigned int v28; // eax
  int v30; // ecx
  unsigned __int64 v31; // rcx
  __int64 v32; // rdx
  unsigned int *v33; // rax
  const EVENT_DESCRIPTOR *v34; // rdx
  __int64 v35; // rdx
  _BYTE *v36; // r9
  unsigned __int8 v37; // r14
  char v38; // r11
  char v39; // si
  char v40; // r10
  char v41; // r15
  char *v42; // r15
  unsigned int v43; // r13d
  unsigned __int64 v44; // r12
  __int64 v45; // r8
  int v46; // ecx
  char v47; // r12
  char v48; // cl
  char v49; // r8
  char v50; // al
  char *v51; // r10
  unsigned int v52; // eax
  unsigned __int64 v53; // rcx
  __int64 v54; // rdx
  unsigned int *v55; // rax
  __int64 v56; // rcx
  const EVENT_DESCRIPTOR *v57; // rdx
  __int64 v58; // rdx
  _BYTE *v59; // r9
  unsigned __int8 v60; // r14
  char v61; // r11
  char v62; // si
  char v63; // r10
  char v64; // r15
  char *v65; // r15
  unsigned int v66; // r13d
  unsigned __int64 v67; // r12
  __int64 v68; // r8
  int v69; // ecx
  char v70; // r12
  char v71; // cl
  char v72; // r8
  char v73; // al
  char *v74; // r10
  unsigned int v75; // eax
  char v76; // [rsp+60h] [rbp-9h]
  char v77; // [rsp+60h] [rbp-9h]
  char v78; // [rsp+60h] [rbp-9h]
  char v79; // [rsp+61h] [rbp-8h]
  char v80; // [rsp+61h] [rbp-8h]
  char v81; // [rsp+61h] [rbp-8h]
  unsigned int v83; // [rsp+68h] [rbp-1h]
  unsigned int v84; // [rsp+70h] [rbp+7h]
  unsigned int v85; // [rsp+70h] [rbp+7h]
  unsigned int v86; // [rsp+70h] [rbp+7h]
  GUID v87; // [rsp+78h] [rbp+Fh] BYREF

  v3 = a1;
  v4 = NvmeNamespaceAcquireRemoveLock(a1, a2);
  v5 = 0;
  v84 = v4;
  if ( v4 < 0 )
  {
    v6 = StorEtwLoggingEnabled == 0;
    *(_QWORD *)(a2 + 56) = 0LL;
    *(_BYTE *)(a2 + 141) = -84;
    *(_DWORD *)(a2 + 48) = v4;
    if ( v6 )
      goto LABEL_68;
    v87 = 0LL;
    IoGetActivityIdIrp(a2, &v87);
    v8 = *(_QWORD *)(a2 + 184);
    if ( *(_BYTE *)v8 == 14 )
    {
      if ( (byte_140173442 & 8) != 0 )
      {
        v10 = &EventNonReadWriteRequestComplete;
        goto LABEL_67;
      }
LABEL_68:
      IofCompleteRequest((PIRP)a2, 0);
      return v84;
    }
    if ( *(_BYTE *)v8 != 15 )
    {
      if ( *(_BYTE *)v8 == 27 )
      {
        if ( *(_BYTE *)(v8 + 1) == 7 && !*(_DWORD *)(v8 + 8) )
        {
          if ( (byte_140173442 & 0x40) != 0 )
          {
            v9 = *(unsigned int **)(a2 + 56);
            if ( v9 )
              v5 = *v9;
            McTemplateK0pqd_EtwWriteTransfer(v7, v8, &v87, a2, v5, *(_DWORD *)(a2 + 48));
          }
          goto LABEL_68;
        }
        if ( (byte_140173442 & 0x20) != 0 )
        {
          v10 = &EventPnpRequestComplete;
LABEL_67:
          McTemplateK0pd_EtwWriteTransfer(v7, v10, &v87, a2, *(_DWORD *)(a2 + 48));
          goto LABEL_68;
        }
      }
      goto LABEL_68;
    }
    if ( byte_140173441 >= 0 )
      goto LABEL_68;
    v11 = *(_QWORD *)(v8 + 8);
    v12 = 0LL;
    v76 = 0;
    v13 = 0;
    v14 = 0;
    v15 = 0;
    v16 = 0;
    v17 = 0;
    if ( *(_BYTE *)(v11 + 2) == 40 )
    {
      v18 = 0LL;
      v79 = 0;
      if ( *(_DWORD *)(v11 + 20) )
        goto LABEL_68;
      v19 = 0;
      v83 = *(_DWORD *)(v11 + 56);
      if ( !v83 )
        goto LABEL_68;
      do
      {
        v7 = *(unsigned int *)(v11 + 4LL * v19 + 120);
        if ( (unsigned int)v7 >= 0x80 )
        {
          v20 = *(unsigned int *)(v11 + 16);
          if ( (unsigned int)v7 < (unsigned int)v20 )
          {
            v21 = (unsigned int)v7;
            v22 = *(_DWORD *)(v7 + v11) - 64;
            if ( v22 )
            {
              v7 = (unsigned int)(v22 - 1);
              if ( (_DWORD)v7 )
              {
                if ( (_DWORD)v7 == 1 )
                {
                  v7 = v21 + 40;
                  if ( v21 + 40 <= v20 )
                  {
                    if ( *(_DWORD *)(v21 + v11 + 12) )
                      v18 = (char *)(v21 + v11 + 32);
                    v12 = *(_BYTE **)(v21 + v11 + 24);
LABEL_27:
                    v23 = *(_BYTE *)(v21 + v11 + 8);
                    v13 = *(_BYTE *)(v21 + v11 + 9);
                    goto LABEL_36;
                  }
                }
              }
              else
              {
                v7 = v21 + 56;
                if ( v21 + 56 <= v20 )
                {
                  v79 = 1;
                  if ( *(_BYTE *)(v21 + v11 + 10) )
                    v18 = (char *)(v21 + v11 + 24);
                  v12 = *(_BYTE **)(v21 + v11 + 16);
                  v13 = *(_BYTE *)(v21 + v11 + 9);
                  v76 = *(_BYTE *)(v21 + v11 + 8);
                }
              }
            }
            else
            {
              v7 = v21 + 40;
              if ( v21 + 40 <= v20 )
              {
                if ( *(_BYTE *)(v21 + v11 + 10) )
                  v18 = (char *)(v21 + v11 + 24);
                v12 = *(_BYTE **)(v21 + v11 + 16);
                goto LABEL_27;
              }
            }
            if ( v79 )
              break;
          }
        }
        ++v19;
      }
      while ( v19 < v83 );
      v23 = v76;
LABEL_36:
      if ( !v18 )
        goto LABEL_68;
      v24 = *v18;
      v17 = 0;
    }
    else
    {
      v24 = *(_BYTE *)(v11 + 72);
      v12 = *(_BYTE **)(v11 + 32);
      v13 = *(_BYTE *)(v11 + 11);
      v23 = *(_BYTE *)(v11 + 4);
      if ( *(_BYTE *)(v11 + 2) )
        goto LABEL_68;
    }
    LOBYTE(v7) = v24 - 8;
    if ( (v7 & 0x5D) != 0 )
      goto LABEL_68;
    v25 = *(_BYTE *)(v11 + 3);
    if ( v25 == 1 || !v12 || !v13 )
    {
LABEL_61:
      if ( byte_140173441 < 0 )
      {
        if ( !v17 )
        {
          v16 = 0;
          v15 = 0;
          v14 = 0;
        }
        McTemplateK0pduuuuup_EtwWriteTransfer(v7, v11, &v87, a2, *(_DWORD *)(a2 + 48), v25, v23, v14, v15, v16, a2);
      }
      goto LABEL_68;
    }
    v26 = *v12 & 0x7F;
    if ( v26 == 114 || v26 == 115 )
    {
      v7 = (unsigned __int64)&v12[v13];
      LOBYTE(v11) = 0;
      if ( (unsigned __int64)(v12 + 8) > v7 )
        goto LABEL_59;
      v15 = v12[2];
      v14 = v12[1] & 0xF;
      v16 = v12[3];
    }
    else
    {
      v7 = (unsigned __int64)&v12[v13];
      LOBYTE(v11) = 0;
      if ( (unsigned __int64)(v12 + 8) > v7 )
        goto LABEL_59;
      v27 = v12 + 13;
      v14 = v12[2] & 0xF;
      v28 = v13;
      if ( (unsigned int)(unsigned __int8)v12[7] + 8 <= v13 )
        v28 = (unsigned __int8)v12[7] + 8;
      v7 = (unsigned __int64)&v12[v28];
      if ( (unsigned __int64)v27 <= v7 )
        v15 = v12[12];
      if ( (unsigned __int64)(v12 + 14) > v7 )
        v16 = 0;
      else
        v16 = *v27;
    }
    LOBYTE(v11) = 1;
LABEL_59:
    if ( (_BYTE)v11 )
      v17 = 1;
    goto LABEL_61;
  }
  v30 = *(unsigned __int8 *)(*(_QWORD *)(a2 + 184) + 1LL) - 2;
  if ( *(_BYTE *)(*(_QWORD *)(a2 + 184) + 1LL) == 2 )
  {
    v5 = NvmeNamespaceSetPowerIrp(v3, a2);
    goto LABEL_209;
  }
  *(_BYTE *)(a2 + 141) = -84;
  if ( v30 == 1 )
  {
    v6 = StorEtwLoggingEnabled == 0;
    *(_DWORD *)(a2 + 48) = 0;
    if ( v6 )
      goto LABEL_205;
    v87 = 0LL;
    IoGetActivityIdIrp(a2, &v87);
    v54 = *(_QWORD *)(a2 + 184);
    if ( *(_BYTE *)v54 == 14 )
    {
      if ( (byte_140173442 & 8) == 0 )
        goto LABEL_205;
      v57 = &EventNonReadWriteRequestComplete;
      goto LABEL_152;
    }
    if ( *(_BYTE *)v54 != 15 )
    {
      if ( *(_BYTE *)v54 == 27 )
      {
        if ( *(_BYTE *)(v54 + 1) == 7 && !*(_DWORD *)(v54 + 8) )
        {
          if ( (byte_140173442 & 0x40) != 0 )
          {
            v55 = *(unsigned int **)(a2 + 56);
            if ( v55 )
              v56 = *v55;
            else
              v56 = 0LL;
            McTemplateK0pqd_EtwWriteTransfer(v56, v54, &v87, a2, v56, *(_DWORD *)(a2 + 48));
          }
          goto LABEL_205;
        }
        if ( (byte_140173442 & 0x20) != 0 )
        {
          v57 = &EventPnpRequestComplete;
LABEL_152:
          McTemplateK0pd_EtwWriteTransfer(v53, v57, &v87, a2, *(_DWORD *)(a2 + 48));
        }
      }
LABEL_205:
      IofCompleteRequest((PIRP)a2, 0);
      goto LABEL_209;
    }
    if ( byte_140173441 >= 0 )
      goto LABEL_205;
    v58 = *(_QWORD *)(v54 + 8);
    v59 = 0LL;
    v78 = 0;
    v60 = 0;
    v61 = 0;
    v62 = 0;
    v63 = 0;
    v64 = 0;
    if ( *(_BYTE *)(v58 + 2) == 40 )
    {
      v65 = 0LL;
      v81 = 0;
      if ( *(_DWORD *)(v58 + 20) )
        goto LABEL_204;
      v66 = 0;
      v86 = *(_DWORD *)(v58 + 56);
      if ( !v86 )
        goto LABEL_204;
      do
      {
        v53 = *(unsigned int *)(v58 + 4LL * v66 + 120);
        if ( (unsigned int)v53 >= 0x80 )
        {
          v67 = *(unsigned int *)(v58 + 16);
          if ( (unsigned int)v53 < (unsigned int)v67 )
          {
            v68 = (unsigned int)v53;
            v69 = *(_DWORD *)(v53 + v58) - 64;
            if ( v69 )
            {
              v53 = (unsigned int)(v69 - 1);
              if ( (_DWORD)v53 )
              {
                if ( (_DWORD)v53 == 1 )
                {
                  v53 = v68 + 40;
                  if ( v68 + 40 <= v67 )
                  {
                    if ( *(_DWORD *)(v68 + v58 + 12) )
                      v65 = (char *)(v68 + v58 + 32);
                    v59 = *(_BYTE **)(v68 + v58 + 24);
LABEL_166:
                    v70 = *(_BYTE *)(v68 + v58 + 8);
                    v60 = *(_BYTE *)(v68 + v58 + 9);
                    goto LABEL_175;
                  }
                }
              }
              else
              {
                v53 = v68 + 56;
                if ( v68 + 56 <= v67 )
                {
                  v81 = 1;
                  if ( *(_BYTE *)(v68 + v58 + 10) )
                    v65 = (char *)(v68 + v58 + 24);
                  v59 = *(_BYTE **)(v68 + v58 + 16);
                  v60 = *(_BYTE *)(v68 + v58 + 9);
                  v78 = *(_BYTE *)(v68 + v58 + 8);
                }
              }
            }
            else
            {
              v53 = v68 + 40;
              if ( v68 + 40 <= v67 )
              {
                if ( *(_BYTE *)(v68 + v58 + 10) )
                  v65 = (char *)(v68 + v58 + 24);
                v59 = *(_BYTE **)(v68 + v58 + 16);
                goto LABEL_166;
              }
            }
            if ( v81 )
              break;
          }
        }
        ++v66;
      }
      while ( v66 < v86 );
      v70 = v78;
LABEL_175:
      if ( !v65 )
        goto LABEL_204;
      v71 = *v65;
      v64 = 0;
    }
    else
    {
      v71 = *(_BYTE *)(v58 + 72);
      v59 = *(_BYTE **)(v58 + 32);
      v60 = *(_BYTE *)(v58 + 11);
      v70 = *(_BYTE *)(v58 + 4);
      if ( *(_BYTE *)(v58 + 2) )
        goto LABEL_204;
    }
    LOBYTE(v53) = v71 - 8;
    if ( (v53 & 0x5D) == 0 )
    {
      v72 = *(_BYTE *)(v58 + 3);
      if ( v72 == 1 || !v59 || !v60 )
      {
LABEL_200:
        if ( byte_140173441 < 0 )
        {
          if ( !v64 )
          {
            v63 = 0;
            v62 = 0;
            v61 = 0;
          }
          McTemplateK0pduuuuup_EtwWriteTransfer(v53, v58, &v87, a2, *(_DWORD *)(a2 + 48), v72, v70, v61, v62, v63, a2);
        }
        goto LABEL_204;
      }
      v73 = *v59 & 0x7F;
      if ( v73 == 114 || v73 == 115 )
      {
        v53 = (unsigned __int64)&v59[v60];
        LOBYTE(v58) = 0;
        if ( (unsigned __int64)(v59 + 8) > v53 )
          goto LABEL_198;
        v62 = v59[2];
        v61 = v59[1] & 0xF;
        v63 = v59[3];
      }
      else
      {
        v53 = (unsigned __int64)&v59[v60];
        LOBYTE(v58) = 0;
        if ( (unsigned __int64)(v59 + 8) > v53 )
          goto LABEL_198;
        v74 = v59 + 13;
        v61 = v59[2] & 0xF;
        v75 = v60;
        if ( (unsigned int)(unsigned __int8)v59[7] + 8 <= v60 )
          v75 = (unsigned __int8)v59[7] + 8;
        v53 = (unsigned __int64)&v59[v75];
        if ( (unsigned __int64)v74 <= v53 )
          v62 = v59[12];
        if ( (unsigned __int64)(v59 + 14) > v53 )
          v63 = 0;
        else
          v63 = *v74;
      }
      LOBYTE(v58) = 1;
LABEL_198:
      if ( (_BYTE)v58 )
        v64 = 1;
      goto LABEL_200;
    }
LABEL_204:
    v3 = a1;
    goto LABEL_205;
  }
  v6 = StorEtwLoggingEnabled == 0;
  *(_DWORD *)(a2 + 48) = -1073741637;
  if ( v6 )
    goto LABEL_136;
  v87 = 0LL;
  IoGetActivityIdIrp(a2, &v87);
  v32 = *(_QWORD *)(a2 + 184);
  switch ( *(_BYTE *)v32 )
  {
    case 0xE:
      if ( (byte_140173442 & 8) == 0 )
        break;
      v34 = &EventNonReadWriteRequestComplete;
      goto LABEL_83;
    case 0xF:
      if ( byte_140173441 >= 0 )
        break;
      v35 = *(_QWORD *)(v32 + 8);
      v36 = 0LL;
      v77 = 0;
      v37 = 0;
      v38 = 0;
      v39 = 0;
      v40 = 0;
      v41 = 0;
      if ( *(_BYTE *)(v35 + 2) == 40 )
      {
        v42 = 0LL;
        v80 = 0;
        if ( *(_DWORD *)(v35 + 20) )
          goto LABEL_135;
        v43 = 0;
        v85 = *(_DWORD *)(v35 + 56);
        if ( !v85 )
          goto LABEL_135;
        do
        {
          v31 = *(unsigned int *)(v35 + 4LL * v43 + 120);
          if ( (unsigned int)v31 >= 0x80 )
          {
            v44 = *(unsigned int *)(v35 + 16);
            if ( (unsigned int)v31 < (unsigned int)v44 )
            {
              v45 = (unsigned int)v31;
              v46 = *(_DWORD *)(v31 + v35) - 64;
              if ( v46 )
              {
                v31 = (unsigned int)(v46 - 1);
                if ( (_DWORD)v31 )
                {
                  if ( (_DWORD)v31 == 1 )
                  {
                    v31 = v45 + 40;
                    if ( v45 + 40 <= v44 )
                    {
                      if ( *(_DWORD *)(v45 + v35 + 12) )
                        v42 = (char *)(v45 + v35 + 32);
                      v36 = *(_BYTE **)(v45 + v35 + 24);
LABEL_97:
                      v47 = *(_BYTE *)(v45 + v35 + 8);
                      v37 = *(_BYTE *)(v45 + v35 + 9);
                      goto LABEL_106;
                    }
                  }
                }
                else
                {
                  v31 = v45 + 56;
                  if ( v45 + 56 <= v44 )
                  {
                    v80 = 1;
                    if ( *(_BYTE *)(v45 + v35 + 10) )
                      v42 = (char *)(v45 + v35 + 24);
                    v36 = *(_BYTE **)(v45 + v35 + 16);
                    v37 = *(_BYTE *)(v45 + v35 + 9);
                    v77 = *(_BYTE *)(v45 + v35 + 8);
                  }
                }
              }
              else
              {
                v31 = v45 + 40;
                if ( v45 + 40 <= v44 )
                {
                  if ( *(_BYTE *)(v45 + v35 + 10) )
                    v42 = (char *)(v45 + v35 + 24);
                  v36 = *(_BYTE **)(v45 + v35 + 16);
                  goto LABEL_97;
                }
              }
              if ( v80 )
                break;
            }
          }
          ++v43;
        }
        while ( v43 < v85 );
        v47 = v77;
LABEL_106:
        if ( !v42 )
          goto LABEL_135;
        v48 = *v42;
        v41 = 0;
      }
      else
      {
        v48 = *(_BYTE *)(v35 + 72);
        v36 = *(_BYTE **)(v35 + 32);
        v37 = *(_BYTE *)(v35 + 11);
        v47 = *(_BYTE *)(v35 + 4);
        if ( *(_BYTE *)(v35 + 2) )
          goto LABEL_135;
      }
      LOBYTE(v31) = v48 - 8;
      if ( (v31 & 0x5D) == 0 )
      {
        v49 = *(_BYTE *)(v35 + 3);
        if ( v49 == 1 || !v36 || !v37 )
        {
LABEL_131:
          if ( byte_140173441 < 0 )
          {
            if ( !v41 )
            {
              v40 = 0;
              v39 = 0;
              v38 = 0;
            }
            McTemplateK0pduuuuup_EtwWriteTransfer(v31, v35, &v87, a2, *(_DWORD *)(a2 + 48), v49, v47, v38, v39, v40, a2);
          }
          goto LABEL_135;
        }
        v50 = *v36 & 0x7F;
        if ( v50 == 114 || v50 == 115 )
        {
          v31 = (unsigned __int64)&v36[v37];
          LOBYTE(v35) = 0;
          if ( (unsigned __int64)(v36 + 8) > v31 )
            goto LABEL_129;
          v39 = v36[2];
          v38 = v36[1] & 0xF;
          v40 = v36[3];
        }
        else
        {
          v31 = (unsigned __int64)&v36[v37];
          LOBYTE(v35) = 0;
          if ( (unsigned __int64)(v36 + 8) > v31 )
            goto LABEL_129;
          v51 = v36 + 13;
          v38 = v36[2] & 0xF;
          v52 = v37;
          if ( (unsigned int)(unsigned __int8)v36[7] + 8 <= v37 )
            v52 = (unsigned __int8)v36[7] + 8;
          v31 = (unsigned __int64)&v36[v52];
          if ( (unsigned __int64)v51 <= v31 )
            v39 = v36[12];
          if ( (unsigned __int64)(v36 + 14) > v31 )
            v40 = 0;
          else
            v40 = *v51;
        }
        LOBYTE(v35) = 1;
LABEL_129:
        if ( (_BYTE)v35 )
          v41 = 1;
        goto LABEL_131;
      }
LABEL_135:
      v3 = a1;
      break;
    case 0x1B:
      if ( *(_BYTE *)(v32 + 1) == 7 && !*(_DWORD *)(v32 + 8) )
      {
        if ( (byte_140173442 & 0x40) != 0 )
        {
          v33 = *(unsigned int **)(a2 + 56);
          if ( v33 )
            v5 = *v33;
          McTemplateK0pqd_EtwWriteTransfer(v31, v32, &v87, a2, v5, *(_DWORD *)(a2 + 48));
        }
        break;
      }
      if ( (byte_140173442 & 0x20) != 0 )
      {
        v34 = &EventPnpRequestComplete;
LABEL_83:
        McTemplateK0pd_EtwWriteTransfer(v31, v34, &v87, a2, *(_DWORD *)(a2 + 48));
      }
      break;
  }
LABEL_136:
  IofCompleteRequest((PIRP)a2, 0);
  v5 = -1073741637;
LABEL_209:
  ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v3 + 120));
  return v5;
}
