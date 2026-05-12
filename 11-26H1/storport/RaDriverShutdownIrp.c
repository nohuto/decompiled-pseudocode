/*
 * XREFs of RaDriverShutdownIrp @ 0x140072A70
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     WPP_SF_qqD @ 0x14005BAF8 (WPP_SF_qqD.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     WPP_SF_qq @ 0x14006F514 (WPP_SF_qq.c)
 *     NvmeNamespaceShutdownIrp @ 0x1401135E4 (NvmeNamespaceShutdownIrp.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall RaDriverShutdownIrp(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  unsigned int v4; // ebx
  _DWORD *v5; // rcx
  bool v6; // zf
  unsigned __int64 v7; // rcx
  __int64 v8; // rdx
  unsigned int *v9; // rcx
  __int64 v10; // rcx
  const EVENT_DESCRIPTOR *v11; // rdx
  __int64 v12; // rdx
  _BYTE *v13; // r9
  unsigned __int8 v14; // r11
  char v15; // si
  char v16; // r14
  char v17; // r10
  char v18; // r15
  char *v19; // r15
  unsigned int v20; // r13d
  unsigned __int64 v21; // r12
  __int64 v22; // r8
  int v23; // ecx
  char v24; // r12
  char v25; // cl
  char v26; // r8
  char v27; // al
  char *v28; // r10
  unsigned int v29; // eax
  unsigned __int64 v30; // rcx
  __int64 v31; // rdx
  unsigned int *v32; // rax
  const EVENT_DESCRIPTOR *v33; // rdx
  __int64 v34; // rdx
  _BYTE *v35; // r9
  unsigned __int8 v36; // r11
  char v37; // si
  char v38; // r14
  char v39; // r10
  char v40; // r15
  char *v41; // r15
  unsigned int v42; // r13d
  unsigned __int64 v43; // r12
  __int64 v44; // r8
  int v45; // ecx
  char v46; // r12
  char v47; // cl
  char v48; // r8
  char v49; // al
  char *v50; // r10
  unsigned int v51; // eax
  __int64 v53; // [rsp+20h] [rbp-49h]
  __int64 v54; // [rsp+28h] [rbp-41h]
  char v55; // [rsp+60h] [rbp-9h]
  char v56; // [rsp+60h] [rbp-9h]
  char v57; // [rsp+61h] [rbp-8h]
  char v58; // [rsp+61h] [rbp-8h]
  unsigned int v60; // [rsp+70h] [rbp+7h]
  unsigned int v61; // [rsp+70h] [rbp+7h]
  GUID v62; // [rsp+78h] [rbp+Fh] BYREF

  v3 = a1;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qq(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0x18u,
      (__int64)&WPP_24b5fd126b0737de4e117b7643a3f5f0_Traceguids,
      a1,
      a2);
  }
  v4 = 0;
  *(_BYTE *)(a2 + 141) = -88;
  *(_QWORD *)(a2 + 56) = 0LL;
  v5 = *(_DWORD **)(v3 + 64);
  if ( *v5 == 1314275652 )
  {
    v6 = StorEtwLoggingEnabled == 0;
    *(_BYTE *)(a2 + 141) = -84;
    *(_DWORD *)(a2 + 48) = -1073741823;
    if ( v6 )
      goto LABEL_142;
    v62 = 0LL;
    IoGetActivityIdIrp(a2, &v62);
    v31 = *(_QWORD *)(a2 + 184);
    if ( *(_BYTE *)v31 == 14 )
    {
      if ( (byte_140173442 & 8) == 0 )
        goto LABEL_142;
      v33 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
      goto LABEL_89;
    }
    if ( *(_BYTE *)v31 != 15 )
    {
      if ( *(_BYTE *)v31 == 27 )
      {
        if ( *(_BYTE *)(v31 + 1) == 7 && !*(_DWORD *)(v31 + 8) )
        {
          if ( (byte_140173442 & 0x40) != 0 )
          {
            v32 = *(unsigned int **)(a2 + 56);
            if ( v32 )
              v4 = *v32;
            LODWORD(v53) = v4;
            McTemplateK0pqd_EtwWriteTransfer(v30, v31, &v62, a2, v53, *(_DWORD *)(a2 + 48));
          }
          goto LABEL_142;
        }
        if ( (byte_140173442 & 0x20) != 0 )
        {
          v33 = &EventPnpRequestComplete;
LABEL_89:
          LODWORD(v53) = *(_DWORD *)(a2 + 48);
          McTemplateK0pd_EtwWriteTransfer(v30, v33, &v62, a2, v53);
        }
      }
LABEL_142:
      IofCompleteRequest((PIRP)a2, 0);
      v4 = -1073741823;
      goto LABEL_143;
    }
    if ( byte_140173441 >= 0 )
      goto LABEL_142;
    v34 = *(_QWORD *)(v31 + 8);
    v35 = 0LL;
    v56 = 0;
    v36 = 0;
    v37 = 0;
    v38 = 0;
    v39 = 0;
    v40 = 0;
    if ( *(_BYTE *)(v34 + 2) == 40 )
    {
      v41 = 0LL;
      v58 = 0;
      if ( *(_DWORD *)(v34 + 20) )
        goto LABEL_141;
      v42 = 0;
      v61 = *(_DWORD *)(v34 + 56);
      if ( !v61 )
        goto LABEL_141;
      do
      {
        v30 = *(unsigned int *)(v34 + 4LL * v42 + 120);
        if ( (unsigned int)v30 >= 0x80 )
        {
          v43 = *(unsigned int *)(v34 + 16);
          if ( (unsigned int)v30 < (unsigned int)v43 )
          {
            v44 = (unsigned int)v30;
            v45 = *(_DWORD *)(v30 + v34) - 64;
            if ( v45 )
            {
              v30 = (unsigned int)(v45 - 1);
              if ( (_DWORD)v30 )
              {
                if ( (_DWORD)v30 == 1 )
                {
                  v30 = v44 + 40;
                  if ( v44 + 40 <= v43 )
                  {
                    if ( *(_DWORD *)(v44 + v34 + 12) )
                      v41 = (char *)(v44 + v34 + 32);
                    v35 = *(_BYTE **)(v44 + v34 + 24);
LABEL_103:
                    v46 = *(_BYTE *)(v44 + v34 + 8);
                    v36 = *(_BYTE *)(v44 + v34 + 9);
                    goto LABEL_112;
                  }
                }
              }
              else
              {
                v30 = v44 + 56;
                if ( v44 + 56 <= v43 )
                {
                  v58 = 1;
                  if ( *(_BYTE *)(v44 + v34 + 10) )
                    v41 = (char *)(v44 + v34 + 24);
                  v35 = *(_BYTE **)(v44 + v34 + 16);
                  v36 = *(_BYTE *)(v44 + v34 + 9);
                  v56 = *(_BYTE *)(v44 + v34 + 8);
                }
              }
            }
            else
            {
              v30 = v44 + 40;
              if ( v44 + 40 <= v43 )
              {
                if ( *(_BYTE *)(v44 + v34 + 10) )
                  v41 = (char *)(v44 + v34 + 24);
                v35 = *(_BYTE **)(v44 + v34 + 16);
                goto LABEL_103;
              }
            }
            if ( v58 )
              break;
          }
        }
        ++v42;
      }
      while ( v42 < v61 );
      v46 = v56;
LABEL_112:
      if ( !v41 )
        goto LABEL_141;
      v47 = *v41;
      v40 = 0;
    }
    else
    {
      v47 = *(_BYTE *)(v34 + 72);
      v35 = *(_BYTE **)(v34 + 32);
      v36 = *(_BYTE *)(v34 + 11);
      v46 = *(_BYTE *)(v34 + 4);
      if ( *(_BYTE *)(v34 + 2) )
        goto LABEL_141;
    }
    LOBYTE(v30) = v47 - 8;
    if ( (v30 & 0x5D) == 0 )
    {
      v48 = *(_BYTE *)(v34 + 3);
      if ( v48 == 1 || !v35 || !v36 )
      {
LABEL_137:
        if ( byte_140173441 < 0 )
        {
          if ( !v40 )
          {
            v39 = 0;
            v38 = 0;
            v37 = 0;
          }
          LODWORD(v53) = *(_DWORD *)(a2 + 48);
          McTemplateK0pduuuuup_EtwWriteTransfer(v30, v34, &v62, a2, v53, v48, v46, v37, v38, v39, a2);
        }
        goto LABEL_141;
      }
      v49 = *v35 & 0x7F;
      if ( v49 == 114 || v49 == 115 )
      {
        v30 = (unsigned __int64)&v35[v36];
        LOBYTE(v34) = 0;
        if ( (unsigned __int64)(v35 + 8) > v30 )
          goto LABEL_135;
        v38 = v35[2];
        v37 = v35[1] & 0xF;
        v39 = v35[3];
      }
      else
      {
        v30 = (unsigned __int64)&v35[v36];
        LOBYTE(v34) = 0;
        if ( (unsigned __int64)(v35 + 8) > v30 )
          goto LABEL_135;
        v50 = v35 + 13;
        v37 = v35[2] & 0xF;
        v51 = v36;
        if ( (unsigned int)(unsigned __int8)v35[7] + 8 <= v36 )
          v51 = (unsigned __int8)v35[7] + 8;
        v30 = (unsigned __int64)&v35[v51];
        if ( (unsigned __int64)v50 <= v30 )
          v38 = v35[12];
        if ( (unsigned __int64)(v35 + 14) > v30 )
          v39 = 0;
        else
          v39 = *v50;
      }
      LOBYTE(v34) = 1;
LABEL_135:
      if ( (_BYTE)v34 )
        v40 = 1;
      goto LABEL_137;
    }
LABEL_141:
    v3 = a1;
    goto LABEL_142;
  }
  if ( *v5 == 1314278989 )
  {
    v4 = NvmeNamespaceShutdownIrp(v5, a2);
    goto LABEL_143;
  }
  v6 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = 0;
  if ( v6 )
    goto LABEL_73;
  v62 = 0LL;
  IoGetActivityIdIrp(a2, &v62);
  v8 = *(_QWORD *)(a2 + 184);
  switch ( *(_BYTE *)v8 )
  {
    case 0xE:
      if ( (byte_140173442 & 8) == 0 )
        break;
      v11 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
      goto LABEL_20;
    case 0xF:
      if ( byte_140173441 >= 0 )
        break;
      v12 = *(_QWORD *)(v8 + 8);
      v13 = 0LL;
      v55 = 0;
      v14 = 0;
      v15 = 0;
      v16 = 0;
      v17 = 0;
      v18 = 0;
      if ( *(_BYTE *)(v12 + 2) == 40 )
      {
        v19 = 0LL;
        v57 = 0;
        if ( *(_DWORD *)(v12 + 20) )
          goto LABEL_72;
        v20 = 0;
        v60 = *(_DWORD *)(v12 + 56);
        if ( !v60 )
          goto LABEL_72;
        do
        {
          v7 = *(unsigned int *)(v12 + 4LL * v20 + 120);
          if ( (unsigned int)v7 >= 0x80 )
          {
            v21 = *(unsigned int *)(v12 + 16);
            if ( (unsigned int)v7 < (unsigned int)v21 )
            {
              v22 = (unsigned int)v7;
              v23 = *(_DWORD *)(v7 + v12) - 64;
              if ( v23 )
              {
                v7 = (unsigned int)(v23 - 1);
                if ( (_DWORD)v7 )
                {
                  if ( (_DWORD)v7 == 1 )
                  {
                    v7 = v22 + 40;
                    if ( v22 + 40 <= v21 )
                    {
                      if ( *(_DWORD *)(v22 + v12 + 12) )
                        v19 = (char *)(v22 + v12 + 32);
                      v13 = *(_BYTE **)(v22 + v12 + 24);
LABEL_34:
                      v24 = *(_BYTE *)(v22 + v12 + 8);
                      v14 = *(_BYTE *)(v22 + v12 + 9);
                      goto LABEL_43;
                    }
                  }
                }
                else
                {
                  v7 = v22 + 56;
                  if ( v22 + 56 <= v21 )
                  {
                    v57 = 1;
                    if ( *(_BYTE *)(v22 + v12 + 10) )
                      v19 = (char *)(v22 + v12 + 24);
                    v13 = *(_BYTE **)(v22 + v12 + 16);
                    v14 = *(_BYTE *)(v22 + v12 + 9);
                    v55 = *(_BYTE *)(v22 + v12 + 8);
                  }
                }
              }
              else
              {
                v7 = v22 + 40;
                if ( v22 + 40 <= v21 )
                {
                  if ( *(_BYTE *)(v22 + v12 + 10) )
                    v19 = (char *)(v22 + v12 + 24);
                  v13 = *(_BYTE **)(v22 + v12 + 16);
                  goto LABEL_34;
                }
              }
              if ( v57 )
                break;
            }
          }
          ++v20;
        }
        while ( v20 < v60 );
        v24 = v55;
LABEL_43:
        if ( !v19 )
          goto LABEL_72;
        v25 = *v19;
        v18 = 0;
      }
      else
      {
        v25 = *(_BYTE *)(v12 + 72);
        v13 = *(_BYTE **)(v12 + 32);
        v14 = *(_BYTE *)(v12 + 11);
        v24 = *(_BYTE *)(v12 + 4);
        if ( *(_BYTE *)(v12 + 2) )
          goto LABEL_72;
      }
      LOBYTE(v7) = v25 - 8;
      if ( (v7 & 0x5D) == 0 )
      {
        v26 = *(_BYTE *)(v12 + 3);
        if ( v26 == 1 || !v13 || !v14 )
        {
LABEL_68:
          if ( byte_140173441 < 0 )
          {
            if ( !v18 )
            {
              v17 = 0;
              v16 = 0;
              v15 = 0;
            }
            LODWORD(v53) = *(_DWORD *)(a2 + 48);
            McTemplateK0pduuuuup_EtwWriteTransfer(v7, v12, &v62, a2, v53, v26, v24, v15, v16, v17, a2);
          }
          goto LABEL_72;
        }
        v27 = *v13 & 0x7F;
        if ( v27 == 114 || v27 == 115 )
        {
          v7 = (unsigned __int64)&v13[v14];
          LOBYTE(v12) = 0;
          if ( (unsigned __int64)(v13 + 8) > v7 )
            goto LABEL_66;
          v16 = v13[2];
          v15 = v13[1] & 0xF;
          v17 = v13[3];
        }
        else
        {
          v7 = (unsigned __int64)&v13[v14];
          LOBYTE(v12) = 0;
          if ( (unsigned __int64)(v13 + 8) > v7 )
            goto LABEL_66;
          v28 = v13 + 13;
          v15 = v13[2] & 0xF;
          v29 = v14;
          if ( (unsigned int)(unsigned __int8)v13[7] + 8 <= v14 )
            v29 = (unsigned __int8)v13[7] + 8;
          v7 = (unsigned __int64)&v13[v29];
          if ( (unsigned __int64)v28 <= v7 )
            v16 = v13[12];
          if ( (unsigned __int64)(v13 + 14) > v7 )
            v17 = 0;
          else
            v17 = *v28;
        }
        LOBYTE(v12) = 1;
LABEL_66:
        if ( (_BYTE)v12 )
          v18 = 1;
        goto LABEL_68;
      }
LABEL_72:
      v3 = a1;
      break;
    case 0x1B:
      if ( *(_BYTE *)(v8 + 1) == 7 && !*(_DWORD *)(v8 + 8) )
      {
        if ( (byte_140173442 & 0x40) != 0 )
        {
          v9 = *(unsigned int **)(a2 + 56);
          if ( v9 )
            v10 = *v9;
          else
            v10 = 0LL;
          LODWORD(v53) = v10;
          McTemplateK0pqd_EtwWriteTransfer(v10, v8, &v62, a2, v53, *(_DWORD *)(a2 + 48));
        }
        break;
      }
      if ( (byte_140173442 & 0x20) != 0 )
      {
        v11 = &EventPnpRequestComplete;
LABEL_20:
        LODWORD(v53) = *(_DWORD *)(a2 + 48);
        McTemplateK0pd_EtwWriteTransfer(v7, v11, &v62, a2, v53);
      }
      break;
  }
LABEL_73:
  IofCompleteRequest((PIRP)a2, 0);
LABEL_143:
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    LODWORD(v54) = v4;
    WPP_SF_qqD(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0x19u,
      (__int64)&WPP_24b5fd126b0737de4e117b7643a3f5f0_Traceguids,
      v3,
      a2,
      v54);
  }
  return v4;
}
