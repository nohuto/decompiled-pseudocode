/*
 * XREFs of RaidAdapterScsiGetCapabilitiesIoctl @ 0x140066268
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x14001D0E0 (RaidAdapterDeviceControlIrp.c)
 * Callees:
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall RaidAdapterScsiGetCapabilitiesIoctl(__int64 a1, __int64 a2)
{
  int v3; // ebx
  bool v5; // zf
  unsigned int v6; // esi
  unsigned __int64 v7; // rcx
  __int64 v8; // rdx
  int *v9; // rax
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
  __int64 v29; // rcx
  unsigned __int64 v30; // rcx
  __int64 v31; // rdx
  unsigned int *v32; // rcx
  __int64 v33; // rcx
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
  char v54; // [rsp+60h] [rbp-20h]
  char v55; // [rsp+60h] [rbp-20h]
  char v56; // [rsp+61h] [rbp-1Fh]
  char v57; // [rsp+61h] [rbp-1Fh]
  unsigned int v58; // [rsp+64h] [rbp-1Ch]
  unsigned int v59; // [rsp+64h] [rbp-1Ch]
  GUID v60; // [rsp+68h] [rbp-18h] BYREF

  v3 = 0;
  if ( *(_DWORD *)(*(_QWORD *)(a2 + 184) + 8LL) >= 0x18u )
  {
    v5 = StorEtwLoggingEnabled == 0;
    v29 = *(_QWORD *)(a2 + 24);
    *(_DWORD *)v29 = 24;
    *(_DWORD *)(v29 + 4) = *(_DWORD *)(a1 + 408);
    *(_DWORD *)(v29 + 8) = *(_DWORD *)(a1 + 412);
    *(_DWORD *)(v29 + 12) = 0;
    *(_DWORD *)(v29 + 16) = *(_DWORD *)(a1 + 432);
    *(_BYTE *)(v29 + 20) = 1;
    *(_BYTE *)(v29 + 21) = *(_BYTE *)(a1 + 468);
    *(_BYTE *)(v29 + 22) = 0;
    *(_QWORD *)(a2 + 56) = 24LL;
    *(_BYTE *)(a2 + 141) = -84;
    *(_DWORD *)(a2 + 48) = 0;
    if ( v5 )
      goto LABEL_136;
    v60 = 0LL;
    IoGetActivityIdIrp(a2, &v60);
    v31 = *(_QWORD *)(a2 + 184);
    if ( *(_BYTE *)v31 == 14 )
    {
      if ( (byte_140173442 & 8) != 0 )
      {
        v34 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
        goto LABEL_135;
      }
LABEL_136:
      v6 = 0;
      goto LABEL_137;
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
              v33 = *v32;
            else
              v33 = 0LL;
            McTemplateK0pqd_EtwWriteTransfer(v33, v31, &v60, a2, v33, *(_DWORD *)(a2 + 48));
          }
          goto LABEL_136;
        }
        if ( (byte_140173442 & 0x20) != 0 )
        {
          v34 = &EventPnpRequestComplete;
LABEL_135:
          McTemplateK0pd_EtwWriteTransfer(v30, v34, &v60, a2, *(_DWORD *)(a2 + 48));
          goto LABEL_136;
        }
      }
      goto LABEL_136;
    }
    if ( byte_140173441 >= 0 )
      goto LABEL_136;
    v35 = *(_QWORD *)(v31 + 8);
    v36 = 0LL;
    v55 = 0;
    v37 = 0;
    v38 = 0;
    v39 = 0;
    v40 = 0;
    v41 = 0;
    if ( *(_BYTE *)(v35 + 2) == 40 )
    {
      v42 = 0LL;
      v57 = 0;
      if ( *(_DWORD *)(v35 + 20) )
        goto LABEL_136;
      v43 = 0;
      v59 = *(_DWORD *)(v35 + 56);
      if ( !v59 )
        goto LABEL_136;
      do
      {
        v30 = *(unsigned int *)(v35 + 4LL * v43 + 120);
        if ( (unsigned int)v30 >= 0x80 )
        {
          v44 = *(unsigned int *)(v35 + 16);
          if ( (unsigned int)v30 < (unsigned int)v44 )
          {
            v45 = (unsigned int)v30;
            v46 = *(_DWORD *)(v35 + v30) - 64;
            if ( v46 )
            {
              v30 = (unsigned int)(v46 - 1);
              if ( (_DWORD)v30 )
              {
                if ( (_DWORD)v30 == 1 )
                {
                  v30 = v45 + 40;
                  if ( v45 + 40 <= v44 )
                  {
                    if ( *(_DWORD *)(v35 + v45 + 12) )
                      v42 = (char *)(v45 + v35 + 32);
                    v36 = *(_BYTE **)(v35 + v45 + 24);
LABEL_95:
                    v47 = *(_BYTE *)(v35 + v45 + 8);
                    v37 = *(_BYTE *)(v35 + v45 + 9);
                    goto LABEL_104;
                  }
                }
              }
              else
              {
                v30 = v45 + 56;
                if ( v45 + 56 <= v44 )
                {
                  v57 = 1;
                  if ( *(_BYTE *)(v35 + v45 + 10) )
                    v42 = (char *)(v45 + v35 + 24);
                  v36 = *(_BYTE **)(v35 + v45 + 16);
                  v37 = *(_BYTE *)(v35 + v45 + 9);
                  v55 = *(_BYTE *)(v35 + v45 + 8);
                }
              }
            }
            else
            {
              v30 = v45 + 40;
              if ( v45 + 40 <= v44 )
              {
                if ( *(_BYTE *)(v35 + v45 + 10) )
                  v42 = (char *)(v45 + v35 + 24);
                v36 = *(_BYTE **)(v35 + v45 + 16);
                goto LABEL_95;
              }
            }
            if ( v57 )
              break;
          }
        }
        ++v43;
      }
      while ( v43 < v59 );
      v47 = v55;
LABEL_104:
      if ( !v42 )
        goto LABEL_136;
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
        goto LABEL_136;
    }
    LOBYTE(v30) = v48 - 8;
    if ( (v30 & 0x5D) != 0 )
      goto LABEL_136;
    v49 = *(_BYTE *)(v35 + 3);
    if ( v49 == 1 || !v36 || !v37 )
    {
LABEL_129:
      if ( byte_140173441 < 0 )
      {
        if ( !v41 )
        {
          v40 = 0;
          v39 = 0;
          v38 = 0;
        }
        McTemplateK0pduuuuup_EtwWriteTransfer(v30, v35, &v60, a2, *(_DWORD *)(a2 + 48), v49, v47, v38, v39, v40, a2);
      }
      goto LABEL_136;
    }
    v50 = *v36 & 0x7F;
    if ( v50 == 114 || v50 == 115 )
    {
      v30 = (unsigned __int64)&v36[v37];
      LOBYTE(v35) = 0;
      if ( (unsigned __int64)(v36 + 8) > v30 )
        goto LABEL_127;
      v39 = v36[2];
      v38 = v36[1] & 0xF;
      v40 = v36[3];
    }
    else
    {
      v30 = (unsigned __int64)&v36[v37];
      LOBYTE(v35) = 0;
      if ( (unsigned __int64)(v36 + 8) > v30 )
        goto LABEL_127;
      v51 = v36 + 13;
      v38 = v36[2] & 0xF;
      v52 = v37;
      if ( (unsigned int)(unsigned __int8)v36[7] + 8 <= v37 )
        v52 = (unsigned __int8)v36[7] + 8;
      v30 = (unsigned __int64)&v36[v52];
      if ( (unsigned __int64)v51 <= v30 )
        v39 = v36[12];
      if ( (unsigned __int64)(v36 + 14) > v30 )
        v40 = 0;
      else
        v40 = *v51;
    }
    LOBYTE(v35) = 1;
LABEL_127:
    if ( (_BYTE)v35 )
      v41 = 1;
    goto LABEL_129;
  }
  v5 = StorEtwLoggingEnabled == 0;
  v6 = -1073741789;
  *(_DWORD *)(a2 + 48) = -1073741789;
  *(_BYTE *)(a2 + 141) = -84;
  if ( v5 )
    goto LABEL_137;
  v60 = 0LL;
  IoGetActivityIdIrp(a2, &v60);
  v8 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v8 == 14 )
  {
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_137;
    v10 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
    goto LABEL_14;
  }
  if ( *(_BYTE *)v8 == 15 )
  {
    if ( byte_140173441 >= 0 )
      goto LABEL_137;
    v11 = *(_QWORD *)(v8 + 8);
    v12 = 0LL;
    v54 = 0;
    v13 = 0;
    v14 = 0;
    v15 = 0;
    v16 = 0;
    v17 = 0;
    if ( *(_BYTE *)(v11 + 2) == 40 )
    {
      v18 = 0LL;
      v56 = 0;
      if ( *(_DWORD *)(v11 + 20) )
        goto LABEL_66;
      v19 = 0;
      v58 = *(_DWORD *)(v11 + 56);
      if ( !v58 )
        goto LABEL_66;
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
LABEL_28:
                    v23 = *(_BYTE *)(v21 + v11 + 8);
                    v13 = *(_BYTE *)(v21 + v11 + 9);
                    goto LABEL_37;
                  }
                }
              }
              else
              {
                v7 = v21 + 56;
                if ( v21 + 56 <= v20 )
                {
                  v56 = 1;
                  if ( *(_BYTE *)(v21 + v11 + 10) )
                    v18 = (char *)(v21 + v11 + 24);
                  v12 = *(_BYTE **)(v21 + v11 + 16);
                  v13 = *(_BYTE *)(v21 + v11 + 9);
                  v54 = *(_BYTE *)(v21 + v11 + 8);
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
                goto LABEL_28;
              }
            }
            if ( v56 )
              break;
          }
        }
        ++v19;
      }
      while ( v19 < v58 );
      v23 = v54;
LABEL_37:
      if ( !v18 )
        goto LABEL_66;
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
        goto LABEL_66;
    }
    LOBYTE(v7) = v24 - 8;
    if ( (v7 & 0x5D) == 0 )
    {
      v25 = *(_BYTE *)(v11 + 3);
      if ( v25 == 1 || !v12 || !v13 )
      {
LABEL_62:
        if ( byte_140173441 < 0 )
        {
          if ( !v17 )
          {
            v16 = 0;
            v15 = 0;
            v14 = 0;
          }
          McTemplateK0pduuuuup_EtwWriteTransfer(v7, v11, &v60, a2, *(_DWORD *)(a2 + 48), v25, v23, v14, v15, v16, a2);
        }
        goto LABEL_66;
      }
      v26 = *v12 & 0x7F;
      if ( v26 == 114 || v26 == 115 )
      {
        v7 = (unsigned __int64)&v12[v13];
        LOBYTE(v11) = 0;
        if ( (unsigned __int64)(v12 + 8) > v7 )
          goto LABEL_60;
        v15 = v12[2];
        v14 = v12[1] & 0xF;
        v16 = v12[3];
      }
      else
      {
        v7 = (unsigned __int64)&v12[v13];
        LOBYTE(v11) = 0;
        if ( (unsigned __int64)(v12 + 8) > v7 )
          goto LABEL_60;
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
LABEL_60:
      if ( (_BYTE)v11 )
        v17 = 1;
      goto LABEL_62;
    }
LABEL_66:
    v6 = -1073741789;
    goto LABEL_137;
  }
  if ( *(_BYTE *)v8 != 27 )
    goto LABEL_137;
  if ( *(_BYTE *)(v8 + 1) != 7 || *(_DWORD *)(v8 + 8) )
  {
    if ( (byte_140173442 & 0x20) == 0 )
      goto LABEL_137;
    v10 = &EventPnpRequestComplete;
LABEL_14:
    McTemplateK0pd_EtwWriteTransfer(v7, v10, &v60, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_137;
  }
  if ( (byte_140173442 & 0x40) != 0 )
  {
    v9 = *(int **)(a2 + 56);
    if ( v9 )
      v3 = *v9;
    McTemplateK0pqd_EtwWriteTransfer(v7, v8, &v60, a2, v3, *(_DWORD *)(a2 + 48));
  }
LABEL_137:
  IofCompleteRequest((PIRP)a2, 0);
  return v6;
}
