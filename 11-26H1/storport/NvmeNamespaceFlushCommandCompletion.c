/*
 * XREFs of NvmeNamespaceFlushCommandCompletion @ 0x140041A10
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

void __fastcall NvmeNamespaceFlushCommandCompletion(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // edx
  unsigned int v5; // edx
  int v6; // ebx
  __int64 v7; // rdi
  unsigned __int64 v8; // rcx
  __int64 v9; // rdx
  char *v10; // r15
  char *v11; // rsi
  _QWORD *v12; // rax
  KIRQL v13; // r8
  char **v14; // rdx
  char *v15; // rcx
  __int64 v16; // rbx
  __int64 v17; // rcx
  _QWORD *v18; // rdi
  unsigned __int64 v19; // rcx
  __int64 v20; // rdx
  void *v21; // rdx
  _DWORD *v22; // rcx
  void *v23; // rdx
  char v24; // al
  _BYTE *v25; // rdx
  char v26; // r12
  unsigned int v27; // eax
  char v28; // r13
  char v29; // r14
  char v30; // si
  _DWORD *v31; // rcx
  char v32; // al
  _BYTE *v33; // rdx
  char v34; // si
  unsigned int v35; // eax
  char v36; // al
  char v37; // r15
  char v38; // r10
  int v39; // ecx
  int v40; // ecx
  _BYTE *v41; // r9
  unsigned __int8 v42; // r10
  char *v43; // rsi
  __int64 v44; // r15
  _BYTE *v45; // r9
  unsigned __int8 v46; // r11
  char v47; // r12
  char *v48; // rsi
  unsigned int v49; // r13d
  __int64 v50; // r14
  char *v51; // rax
  char **v52; // rax
  unsigned int v53; // edx
  unsigned int v54; // edx
  bool v55; // zf
  int v56; // ecx
  int v57; // ecx
  bool v58; // zf
  bool v59; // zf
  int v60; // ecx
  unsigned __int64 v61; // r11
  __int64 v62; // r8
  int v63; // ecx
  char v64; // r11
  char v65; // cl
  char v66; // r8
  unsigned __int64 v67; // r10
  __int64 v68; // r8
  int v69; // ecx
  char v70; // r14
  char v71; // cl
  char v72; // r8
  char v73; // [rsp+68h] [rbp+7h]
  char v74; // [rsp+68h] [rbp+7h]
  char v75; // [rsp+69h] [rbp+8h]
  char v76; // [rsp+69h] [rbp+8h]
  unsigned int v77; // [rsp+70h] [rbp+Fh]
  char *Context; // [rsp+78h] [rbp+17h]
  __int128 v79; // [rsp+80h] [rbp+1Fh] BYREF

  if ( !a3 )
  {
    v6 = -1073740757;
    goto LABEL_12;
  }
  *(_WORD *)(*(_QWORD *)a2 + 4260LL) = *(_WORD *)(a3 + 14);
  v4 = *(unsigned __int16 *)(*(_QWORD *)a2 + 4260LL);
  if ( ((v4 >> 9) & 7) != 0 )
  {
    if ( ((v4 >> 9) & 7) != 1 )
    {
      if ( ((v4 >> 9) & 7) != 2 )
        goto LABEL_139;
      v53 = v4 >> 1;
      switch ( (unsigned __int8)v53 )
      {
        case 0x80u:
          goto LABEL_139;
        case 0x81u:
          goto LABEL_139;
        case 0x82u:
          goto LABEL_139;
        case 0x83u:
          goto LABEL_139;
        case 0x84u:
          goto LABEL_139;
      }
      v40 = (unsigned __int8)v53 - 133;
      if ( (unsigned __int8)v53 == 133 )
        goto LABEL_139;
LABEL_184:
      if ( v40 != 1 )
        goto LABEL_139;
LABEL_185:
      v6 = -1073741790;
      goto LABEL_12;
    }
    v54 = v4 >> 1;
    if ( (unsigned __int8)v54 > 0x80u )
    {
      if ( (unsigned __int8)v54 == 129 )
        goto LABEL_31;
      v39 = (unsigned __int8)v54 - 130;
      if ( (unsigned __int8)v54 == 130 )
        goto LABEL_185;
LABEL_154:
      v58 = v39 == 1;
LABEL_192:
      if ( !v58 )
        goto LABEL_139;
      goto LABEL_31;
    }
    if ( (unsigned __int8)v54 == 128 )
      goto LABEL_31;
    if ( (unsigned __int8)v54 <= 0x11u )
    {
      if ( (unsigned __int8)v54 != 17 )
      {
        if ( (unsigned __int8)v54 <= 9u )
        {
          if ( (unsigned __int8)v54 == 9
            || !(_BYTE)v54
            || (unsigned __int8)v54 == 1
            || (unsigned __int8)v54 == 2
            || (unsigned __int8)v54 == 3 )
          {
            goto LABEL_31;
          }
          v56 = (unsigned __int8)v54 - 5;
          v55 = (unsigned __int8)v54 == 5;
LABEL_151:
          if ( v55 )
            goto LABEL_31;
          v57 = v56 - 1;
          if ( !v57 )
            goto LABEL_31;
          v39 = v57 - 1;
          if ( !v39 )
            goto LABEL_31;
          goto LABEL_154;
        }
        if ( (unsigned __int8)v54 == 10 )
          goto LABEL_31;
        if ( (unsigned __int8)v54 != 11 )
        {
          if ( (unsigned __int8)v54 == 12
            || (unsigned __int8)v54 == 13
            || (unsigned __int8)v54 == 14
            || (unsigned __int8)v54 == 15 )
          {
            goto LABEL_31;
          }
          if ( (unsigned __int8)v54 != 16 )
            goto LABEL_139;
        }
      }
      v6 = -2147483210;
      goto LABEL_12;
    }
    if ( (unsigned __int8)v54 <= 0x1Au )
    {
      if ( (unsigned __int8)v54 == 26 || (unsigned __int8)v54 == 18 || (unsigned __int8)v54 == 19 )
        goto LABEL_174;
      if ( (unsigned __int8)v54 != 20 )
      {
        if ( (unsigned __int8)v54 == 21 )
          goto LABEL_139;
        if ( (unsigned __int8)v54 != 22 )
        {
          v60 = (unsigned __int8)v54 - 24;
          v59 = (unsigned __int8)v54 == 24;
          goto LABEL_172;
        }
        goto LABEL_174;
      }
      v6 = -1073741800;
      goto LABEL_12;
    }
    switch ( (unsigned __int8)v54 )
    {
      case 0x1Bu:
        v6 = -1073741637;
        goto LABEL_12;
      case 0x1Cu:
        goto LABEL_31;
      case 0x1Eu:
        goto LABEL_185;
    }
    v56 = (unsigned __int8)v54 - 31;
    v55 = (unsigned __int8)v54 == 31;
    goto LABEL_151;
  }
  v5 = v4 >> 1;
  if ( (unsigned __int8)v5 > 0x80u )
  {
    if ( (unsigned __int8)v5 == 129 )
      goto LABEL_31;
    v39 = (unsigned __int8)v5 - 130;
    if ( (unsigned __int8)v5 == 130 )
    {
      v6 = -1073741661;
      goto LABEL_12;
    }
    goto LABEL_154;
  }
  if ( (unsigned __int8)v5 == 128 )
    goto LABEL_31;
  if ( (unsigned __int8)v5 <= 0xEu )
  {
    if ( (unsigned __int8)v5 == 14 )
      goto LABEL_31;
    if ( (unsigned __int8)v5 <= 7u )
    {
      if ( (unsigned __int8)v5 != 7 )
      {
        if ( !(_BYTE)v5 )
        {
          v6 = 0;
          goto LABEL_12;
        }
        if ( (unsigned __int8)v5 == 1 || (unsigned __int8)v5 == 2 )
          goto LABEL_31;
        if ( (unsigned __int8)v5 == 3 || (unsigned __int8)v5 == 4 )
          goto LABEL_139;
        v60 = (unsigned __int8)v5 - 5;
        v59 = (unsigned __int8)v5 == 5;
LABEL_172:
        if ( v59 || v60 == 1 )
          goto LABEL_174;
LABEL_139:
        v6 = -1073741435;
        goto LABEL_12;
      }
LABEL_93:
      v6 = -1073741248;
      goto LABEL_12;
    }
    if ( (unsigned __int8)v5 == 8 || (unsigned __int8)v5 == 9 || (unsigned __int8)v5 == 10 )
      goto LABEL_93;
    if ( (unsigned __int8)v5 == 11 )
    {
LABEL_31:
      v6 = -1073741808;
      goto LABEL_12;
    }
    v39 = (unsigned __int8)v5 - 12;
    if ( (unsigned __int8)v5 == 12 )
    {
      v6 = -1073740758;
      goto LABEL_12;
    }
    goto LABEL_154;
  }
  if ( (unsigned __int8)v5 <= 0x16u )
  {
    if ( (unsigned __int8)v5 == 22
      || (unsigned __int8)v5 == 15
      || (unsigned __int8)v5 == 16
      || (unsigned __int8)v5 == 17
      || (unsigned __int8)v5 == 18
      || (unsigned __int8)v5 == 19 )
    {
      goto LABEL_31;
    }
    v40 = (unsigned __int8)v5 - 20;
    if ( (unsigned __int8)v5 == 20 )
    {
LABEL_174:
      v6 = -1073741436;
      goto LABEL_12;
    }
    goto LABEL_184;
  }
  if ( (unsigned __int8)v5 == 24 )
    goto LABEL_31;
  if ( (unsigned __int8)v5 != 25 && (unsigned __int8)v5 != 26 )
  {
    if ( (unsigned __int8)v5 == 27 )
      goto LABEL_93;
    if ( (unsigned __int8)v5 == 28 )
      goto LABEL_139;
    v58 = (unsigned __int8)v5 == 30;
    goto LABEL_192;
  }
  v6 = -1073741643;
LABEL_12:
  v7 = *(_QWORD *)(*(_QWORD *)a2 + 4184LL);
  Context = *(char **)(*(_QWORD *)a2 + 4216LL);
  *(_DWORD *)(v7 + 48) = v6;
  *(_QWORD *)(v7 + 56) = 0LL;
  memset_0(*(void **)a2, 0, 0x10B0uLL);
  *(_DWORD *)(a2 + 48) &= ~1u;
  v55 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(v7 + 141) = -84;
  *(_DWORD *)(v7 + 48) = v6;
  if ( v55 )
    goto LABEL_16;
  v79 = 0LL;
  IoGetActivityIdIrp(v7, &v79);
  v9 = *(_QWORD *)(v7 + 184);
  if ( *(_BYTE *)v9 == 14 )
  {
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_16;
    v21 = &EventNonReadWriteRequestComplete;
    goto LABEL_34;
  }
  if ( *(_BYTE *)v9 != 15 )
  {
    if ( *(_BYTE *)v9 != 27 )
      goto LABEL_16;
    if ( *(_BYTE *)(v9 + 1) == 7 && !*(_DWORD *)(v9 + 8) )
    {
      if ( (byte_140173442 & 0x40) != 0 )
      {
        v22 = *(_DWORD **)(v7 + 56);
        if ( v22 )
          LODWORD(v22) = *v22;
        McTemplateK0pqd_EtwWriteTransfer((_DWORD)v22, v9, (unsigned int)&v79, v7, (char)v22, *(_DWORD *)(v7 + 48));
      }
      goto LABEL_16;
    }
    if ( (byte_140173442 & 0x20) == 0 )
      goto LABEL_16;
    v21 = &EventPnpRequestComplete;
LABEL_34:
    McTemplateK0pd_EtwWriteTransfer(v8, v21, &v79, v7, *(_DWORD *)(v7 + 48));
    goto LABEL_16;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_16;
  v25 = *(_BYTE **)(v9 + 8);
  v74 = 0;
  v41 = 0LL;
  v42 = 0;
  v26 = 0;
  v28 = 0;
  v29 = 0;
  v30 = 0;
  if ( v25[2] == 40 )
  {
    v43 = 0LL;
    v75 = 0;
    if ( *((_DWORD *)v25 + 5) )
      goto LABEL_16;
    v44 = 0LL;
    v77 = *((_DWORD *)v25 + 14);
    if ( !v77 )
      goto LABEL_16;
    while ( 1 )
    {
      v8 = *(unsigned int *)&v25[4 * v44 + 120];
      if ( (unsigned int)v8 >= 0x80 )
      {
        v61 = *((unsigned int *)v25 + 4);
        if ( (unsigned int)v8 < (unsigned int)v61 )
        {
          v62 = (unsigned int)v8;
          v63 = *(_DWORD *)&v25[v8] - 64;
          if ( v63 )
          {
            LODWORD(v8) = v63 - 1;
            if ( (_DWORD)v8 )
            {
              if ( (_DWORD)v8 == 1 )
              {
                LODWORD(v8) = v62 + 40;
                if ( v62 + 40 <= v61 )
                {
                  if ( *(_DWORD *)&v25[v62 + 12] )
                    v43 = &v25[v62 + 32];
                  v41 = *(_BYTE **)&v25[v62 + 24];
                  goto LABEL_218;
                }
              }
            }
            else
            {
              LODWORD(v8) = v62 + 56;
              if ( v62 + 56 <= v61 )
              {
                v75 = 1;
                if ( v25[v62 + 10] )
                  v43 = &v25[v62 + 24];
                v41 = *(_BYTE **)&v25[v62 + 16];
                v42 = v25[v62 + 9];
                v74 = v25[v62 + 8];
              }
            }
          }
          else
          {
            LODWORD(v8) = v62 + 40;
            if ( v62 + 40 <= v61 )
            {
              if ( v25[v62 + 10] )
                v43 = &v25[v62 + 24];
              v41 = *(_BYTE **)&v25[v62 + 16];
LABEL_218:
              v64 = v25[v62 + 8];
              v42 = v25[v62 + 9];
LABEL_212:
              if ( v43 )
              {
                v65 = *v43;
                v30 = 0;
                goto LABEL_220;
              }
              goto LABEL_16;
            }
          }
          if ( v75 )
            goto LABEL_211;
        }
      }
      v44 = (unsigned int)(v44 + 1);
      if ( (unsigned int)v44 >= v77 )
      {
LABEL_211:
        v64 = v74;
        goto LABEL_212;
      }
    }
  }
  v65 = v25[72];
  v41 = (_BYTE *)*((_QWORD *)v25 + 4);
  v42 = v25[11];
  v64 = v25[4];
  if ( v25[2] )
    goto LABEL_16;
LABEL_220:
  LOBYTE(v8) = v65 - 8;
  if ( (v8 & 0x5D) == 0 )
  {
    v66 = v25[3];
    if ( v66 == 1 || !v41 || !v42 )
    {
LABEL_61:
      if ( byte_140173441 < 0 )
      {
        if ( !v30 )
        {
          v29 = 0;
          v28 = 0;
          v26 = 0;
        }
        McTemplateK0pduuuuup_EtwWriteTransfer(
          v8,
          (_DWORD)v25,
          (unsigned int)&v79,
          v7,
          *(_DWORD *)(v7 + 48),
          v66,
          v64,
          v26,
          v28,
          v29,
          v7);
      }
      goto LABEL_16;
    }
    v24 = *v41 & 0x7F;
    if ( v24 == 114 || v24 == 115 )
    {
      v8 = (unsigned __int64)&v41[v42];
      LOBYTE(v25) = 0;
      if ( (unsigned __int64)(v41 + 8) > v8 )
      {
LABEL_59:
        if ( (_BYTE)v25 )
          v30 = 1;
        goto LABEL_61;
      }
      v28 = v41[2];
      v26 = v41[1] & 0xF;
      v29 = v41[3];
    }
    else
    {
      v8 = (unsigned __int64)&v41[v42];
      LOBYTE(v25) = 0;
      if ( (unsigned __int64)(v41 + 8) > v8 )
        goto LABEL_59;
      v25 = v41 + 13;
      v26 = v41[2] & 0xF;
      v27 = v42;
      if ( (unsigned int)(unsigned __int8)v41[7] + 8 <= v42 )
        v27 = (unsigned __int8)v41[7] + 8;
      v8 = (unsigned __int64)&v41[v27];
      if ( (unsigned __int64)v25 <= v8 )
        v28 = v41[12];
      if ( (unsigned __int64)(v41 + 14) <= v8 )
        v29 = *v25;
    }
    LOBYTE(v25) = 1;
    goto LABEL_59;
  }
LABEL_16:
  IofCompleteRequest((PIRP)v7, 1);
  v10 = Context;
  v11 = Context + 560;
LABEL_17:
  v12 = *(_QWORD **)v11;
  if ( *(char **)v11 != v11 )
  {
    if ( (char *)v12[1] != v11 || (v17 = *v12, *(_QWORD **)(*v12 + 8LL) != v12) )
LABEL_39:
      __fastfail(3u);
    *(_QWORD *)v11 = v17;
    v18 = v12 - 21;
    *(_QWORD *)(v17 + 8) = v11;
    v12[1] = v12;
    *v12 = v12;
    *((_DWORD *)v18 + 12) = v6;
    v18[7] = 0LL;
    ExReleaseRundownProtectionCacheAware(*((PEX_RUNDOWN_REF_CACHE_AWARE *)v10 + 15));
    v55 = StorEtwLoggingEnabled == 0;
    *((_BYTE *)v18 + 141) = -84;
    *((_DWORD *)v18 + 12) = v6;
    if ( v55 )
      goto LABEL_28;
    v79 = 0LL;
    IoGetActivityIdIrp(v18, &v79);
    v20 = v18[23];
    if ( *(_BYTE *)v20 == 14 )
    {
      if ( (byte_140173442 & 8) == 0 )
        goto LABEL_28;
      v23 = &EventNonReadWriteRequestComplete;
      goto LABEL_46;
    }
    if ( *(_BYTE *)v20 != 15 )
    {
      if ( *(_BYTE *)v20 != 27 )
        goto LABEL_28;
      if ( *(_BYTE *)(v20 + 1) == 7 && !*(_DWORD *)(v20 + 8) )
      {
        if ( (byte_140173442 & 0x40) != 0 )
        {
          v31 = (_DWORD *)v18[7];
          if ( v31 )
            LODWORD(v31) = *v31;
          McTemplateK0pqd_EtwWriteTransfer(
            (_DWORD)v31,
            v20,
            (unsigned int)&v79,
            (_DWORD)v18,
            (char)v31,
            *((_DWORD *)v18 + 12));
        }
        goto LABEL_28;
      }
      if ( (byte_140173442 & 0x20) == 0 )
        goto LABEL_28;
      v23 = &EventPnpRequestComplete;
LABEL_46:
      McTemplateK0pd_EtwWriteTransfer(v19, v23, &v79, v18, *((_DWORD *)v18 + 12));
      goto LABEL_28;
    }
    if ( byte_140173441 >= 0 )
      goto LABEL_28;
    v33 = *(_BYTE **)(v20 + 8);
    v38 = 0;
    v76 = 0;
    v45 = 0LL;
    v73 = 0;
    v46 = 0;
    v34 = 0;
    v37 = 0;
    v47 = 0;
    if ( v33[2] != 40 )
    {
      v71 = v33[72];
      v45 = (_BYTE *)*((_QWORD *)v33 + 4);
      v46 = v33[11];
      v70 = v33[4];
      if ( !v33[2] )
        goto LABEL_249;
      goto LABEL_253;
    }
    v48 = 0LL;
    if ( *((_DWORD *)v33 + 5) )
      goto LABEL_253;
    v49 = *((_DWORD *)v33 + 14);
    v50 = 0LL;
    if ( !v49 )
      goto LABEL_253;
    while ( 1 )
    {
      v19 = *(unsigned int *)&v33[4 * v50 + 120];
      if ( (unsigned int)v19 >= 0x80 )
      {
        v67 = *((unsigned int *)v33 + 4);
        if ( (unsigned int)v19 < (unsigned int)v67 )
        {
          v68 = (unsigned int)v19;
          v69 = *(_DWORD *)&v33[v19] - 64;
          if ( v69 )
          {
            LODWORD(v19) = v69 - 1;
            if ( (_DWORD)v19 )
            {
              if ( (_DWORD)v19 == 1 )
              {
                LODWORD(v19) = v68 + 40;
                if ( v68 + 40 <= v67 )
                {
                  if ( *(_DWORD *)&v33[v68 + 12] )
                    v48 = &v33[v68 + 32];
                  v45 = *(_BYTE **)&v33[v68 + 24];
                  goto LABEL_247;
                }
              }
            }
            else
            {
              LODWORD(v19) = v68 + 56;
              if ( v68 + 56 <= v67 )
              {
                v47 = 1;
                if ( v33[v68 + 10] )
                  v48 = &v33[v68 + 24];
                v45 = *(_BYTE **)&v33[v68 + 16];
                v46 = v33[v68 + 9];
                v76 = v33[v68 + 8];
              }
            }
          }
          else
          {
            LODWORD(v19) = v68 + 40;
            if ( v68 + 40 <= v67 )
            {
              if ( v33[v68 + 10] )
                v48 = &v33[v68 + 24];
              v45 = *(_BYTE **)&v33[v68 + 16];
LABEL_247:
              v70 = v33[v68 + 8];
              v46 = v33[v68 + 9];
LABEL_241:
              if ( v48 )
              {
                v71 = *v48;
                v38 = 0;
                v34 = 0;
                v47 = 0;
LABEL_249:
                LOBYTE(v19) = v71 - 8;
                if ( (v19 & 0x5D) == 0 )
                {
                  v72 = v33[3];
                  if ( v72 != 1 && v45 && v46 )
                  {
                    v32 = *v45 & 0x7F;
                    if ( v32 == 114 || v32 == 115 )
                    {
                      v19 = (unsigned __int64)&v45[v46];
                      LOBYTE(v33) = 0;
                      if ( (unsigned __int64)(v45 + 8) <= v19 )
                      {
                        LOBYTE(v33) = 1;
                        v38 = v45[2];
                        v34 = v45[1] & 0xF;
                        v37 = v45[3];
                      }
                    }
                    else
                    {
                      v19 = (unsigned __int64)&v45[v46];
                      LOBYTE(v33) = 0;
                      if ( (unsigned __int64)(v45 + 8) <= v19 )
                      {
                        v33 = v45 + 13;
                        v34 = v45[2] & 0xF;
                        v35 = v46;
                        if ( (unsigned int)(unsigned __int8)v45[7] + 8 <= v46 )
                          v35 = (unsigned __int8)v45[7] + 8;
                        v19 = (unsigned __int64)&v45[v35];
                        if ( (unsigned __int64)v33 > v19 )
                          v36 = 0;
                        else
                          v36 = v45[12];
                        v73 = v36;
                        if ( (unsigned __int64)(v45 + 14) <= v19 )
                          v37 = *v33;
                        LOBYTE(v33) = 1;
                      }
                      v38 = v73;
                    }
                    if ( (_BYTE)v33 )
                      v47 = 1;
                  }
                  if ( byte_140173441 < 0 )
                  {
                    if ( !v47 )
                    {
                      v37 = 0;
                      v38 = 0;
                      v34 = 0;
                    }
                    McTemplateK0pduuuuup_EtwWriteTransfer(
                      v19,
                      (_DWORD)v33,
                      (unsigned int)&v79,
                      (_DWORD)v18,
                      *((_DWORD *)v18 + 12),
                      v72,
                      v70,
                      v34,
                      v38,
                      v37,
                      (char)v18);
                  }
                }
              }
LABEL_253:
              v11 = Context + 560;
              v10 = Context;
LABEL_28:
              IofCompleteRequest((PIRP)v18, 1);
              goto LABEL_17;
            }
          }
          if ( v47 )
            goto LABEL_240;
        }
      }
      v50 = (unsigned int)(v50 + 1);
      if ( (unsigned int)v50 >= v49 )
      {
LABEL_240:
        v70 = v76;
        goto LABEL_241;
      }
    }
  }
  v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v10 + 68);
  v14 = (char **)(v10 + 584);
  while ( 1 )
  {
    v15 = *v14;
    if ( *v14 == (char *)v14 )
      break;
    if ( *((char ***)v15 + 1) != v14 )
      goto LABEL_39;
    v51 = *(char **)v15;
    if ( *(char **)(*(_QWORD *)v15 + 8LL) != v15 )
      goto LABEL_39;
    *v14 = v51;
    *((_QWORD *)v51 + 1) = v14;
    v52 = (char **)*((_QWORD *)v10 + 71);
    if ( *v52 != v11 )
      goto LABEL_39;
    *(_QWORD *)v15 = v11;
    *((_QWORD *)v15 + 1) = v52;
    *v52 = v15;
    *((_QWORD *)v11 + 1) = v15;
  }
  v16 = *((_QWORD *)v10 + 72);
  *((_QWORD *)v10 + 69) = v16;
  *((_QWORD *)v10 + 72) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)v10 + 68, v13);
  ExReleaseRundownProtectionCacheAware(*((PEX_RUNDOWN_REF_CACHE_AWARE *)v10 + 15));
  if ( v16 )
    IoQueueWorkItemEx(*((PIO_WORKITEM *)v10 + 67), NvmeNamespaceFlushWorker, DelayedWorkQueue, v10);
}
