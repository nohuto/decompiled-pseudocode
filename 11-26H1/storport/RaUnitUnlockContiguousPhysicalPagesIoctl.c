/*
 * XREFs of RaUnitUnlockContiguousPhysicalPagesIoctl @ 0x1400A5FE4
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x14001D890 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidUnlockContiguousPhysicalPagesList @ 0x1400465C4 (RaidUnlockContiguousPhysicalPagesList.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     RaidCallerIsAdmin @ 0x1400931F8 (RaidCallerIsAdmin.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall RaUnitUnlockContiguousPhysicalPagesIoctl(__int64 a1, __int64 a2)
{
  int v4; // ebx
  bool v5; // zf
  unsigned __int64 v6; // rcx
  __int64 v7; // rdx
  int *v8; // rax
  const EVENT_DESCRIPTOR *v9; // rdx
  __int64 v10; // rdx
  _BYTE *v11; // r9
  unsigned __int8 v12; // r14
  char v13; // r11
  char v14; // si
  char v15; // r10
  char v16; // r15
  char *v17; // r15
  unsigned int v18; // r13d
  unsigned __int64 v19; // r12
  __int64 v20; // r8
  int v21; // ecx
  char v22; // r12
  char v23; // cl
  char v24; // r8
  char v25; // al
  char *v26; // r10
  unsigned int v27; // eax
  unsigned __int64 v29; // rcx
  __int64 v30; // rdx
  int *v31; // rax
  const EVENT_DESCRIPTOR *v32; // rdx
  __int64 v33; // rdx
  _BYTE *v34; // r9
  unsigned __int8 v35; // r14
  char v36; // r11
  char v37; // si
  char v38; // r10
  char v39; // r15
  char *v40; // r15
  unsigned int v41; // r13d
  unsigned __int64 v42; // r12
  __int64 v43; // r8
  int v44; // ecx
  char v45; // r12
  char v46; // cl
  char v47; // r8
  char v48; // al
  char *v49; // r10
  unsigned int v50; // eax
  int v51; // [rsp+20h] [rbp-60h]
  char v52; // [rsp+60h] [rbp-20h]
  char v53; // [rsp+60h] [rbp-20h]
  char v54; // [rsp+61h] [rbp-1Fh]
  char v55; // [rsp+61h] [rbp-1Fh]
  unsigned int v56; // [rsp+64h] [rbp-1Ch]
  unsigned int v57; // [rsp+64h] [rbp-1Ch]
  GUID v58; // [rsp+68h] [rbp-18h] BYREF

  v4 = 0;
  if ( RaidCallerIsAdmin() && *(struct _KTHREAD **)(a2 + 152) == KeGetCurrentThread() )
  {
    *(_QWORD *)(a2 + 56) = 0LL;
    RaidUnlockContiguousPhysicalPagesList(*(_QWORD *)(a1 + 24), (char *)a1);
    v5 = StorEtwLoggingEnabled == 0;
    *(_BYTE *)(a2 + 141) = -84;
    *(_DWORD *)(a2 + 48) = 0;
    if ( v5 )
      goto LABEL_69;
    v58 = 0LL;
    IoGetActivityIdIrp(a2, &v58);
    v7 = *(_QWORD *)(a2 + 184);
    if ( *(_BYTE *)v7 == 14 )
    {
      if ( (byte_140173442 & 8) != 0 )
      {
        v9 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
        goto LABEL_68;
      }
LABEL_69:
      IofCompleteRequest((PIRP)a2, 0);
      return 0LL;
    }
    if ( *(_BYTE *)v7 != 15 )
    {
      if ( *(_BYTE *)v7 == 27 )
      {
        if ( *(_BYTE *)(v7 + 1) == 7 && !*(_DWORD *)(v7 + 8) )
        {
          if ( (byte_140173442 & 0x40) != 0 )
          {
            v8 = *(int **)(a2 + 56);
            if ( v8 )
              v4 = *v8;
            McTemplateK0pqd_EtwWriteTransfer(v6, v7, &v58, a2, v4, *(_DWORD *)(a2 + 48));
          }
          goto LABEL_69;
        }
        if ( (byte_140173442 & 0x20) != 0 )
        {
          v9 = &EventPnpRequestComplete;
LABEL_68:
          McTemplateK0pd_EtwWriteTransfer(v6, v9, &v58, a2, *(_DWORD *)(a2 + 48));
          goto LABEL_69;
        }
      }
      goto LABEL_69;
    }
    if ( byte_140173441 >= 0 )
      goto LABEL_69;
    v10 = *(_QWORD *)(v7 + 8);
    v11 = 0LL;
    v52 = 0;
    v12 = 0;
    v13 = 0;
    v14 = 0;
    v15 = 0;
    v16 = 0;
    if ( *(_BYTE *)(v10 + 2) == 40 )
    {
      v17 = 0LL;
      v54 = 0;
      if ( *(_DWORD *)(v10 + 20) )
        goto LABEL_69;
      v18 = 0;
      v56 = *(_DWORD *)(v10 + 56);
      if ( !v56 )
        goto LABEL_69;
      do
      {
        v6 = *(unsigned int *)(v10 + 4LL * v18 + 120);
        if ( (unsigned int)v6 >= 0x80 )
        {
          v19 = *(unsigned int *)(v10 + 16);
          if ( (unsigned int)v6 < (unsigned int)v19 )
          {
            v20 = (unsigned int)v6;
            v21 = *(_DWORD *)(v6 + v10) - 64;
            if ( v21 )
            {
              v6 = (unsigned int)(v21 - 1);
              if ( (_DWORD)v6 )
              {
                if ( (_DWORD)v6 == 1 )
                {
                  v6 = v20 + 40;
                  if ( v20 + 40 <= v19 )
                  {
                    if ( *(_DWORD *)(v20 + v10 + 12) )
                      v17 = (char *)(v20 + v10 + 32);
                    v11 = *(_BYTE **)(v20 + v10 + 24);
LABEL_28:
                    v22 = *(_BYTE *)(v20 + v10 + 8);
                    v12 = *(_BYTE *)(v20 + v10 + 9);
                    goto LABEL_37;
                  }
                }
              }
              else
              {
                v6 = v20 + 56;
                if ( v20 + 56 <= v19 )
                {
                  v54 = 1;
                  if ( *(_BYTE *)(v20 + v10 + 10) )
                    v17 = (char *)(v20 + v10 + 24);
                  v11 = *(_BYTE **)(v20 + v10 + 16);
                  v12 = *(_BYTE *)(v20 + v10 + 9);
                  v52 = *(_BYTE *)(v20 + v10 + 8);
                }
              }
            }
            else
            {
              v6 = v20 + 40;
              if ( v20 + 40 <= v19 )
              {
                if ( *(_BYTE *)(v20 + v10 + 10) )
                  v17 = (char *)(v20 + v10 + 24);
                v11 = *(_BYTE **)(v20 + v10 + 16);
                goto LABEL_28;
              }
            }
            if ( v54 )
              break;
          }
        }
        ++v18;
      }
      while ( v18 < v56 );
      v22 = v52;
LABEL_37:
      if ( !v17 )
        goto LABEL_69;
      v23 = *v17;
      v16 = 0;
    }
    else
    {
      v23 = *(_BYTE *)(v10 + 72);
      v11 = *(_BYTE **)(v10 + 32);
      v12 = *(_BYTE *)(v10 + 11);
      v22 = *(_BYTE *)(v10 + 4);
      if ( *(_BYTE *)(v10 + 2) )
        goto LABEL_69;
    }
    LOBYTE(v6) = v23 - 8;
    if ( (v6 & 0x5D) != 0 )
      goto LABEL_69;
    v24 = *(_BYTE *)(v10 + 3);
    if ( v24 == 1 || !v11 || !v12 )
    {
LABEL_62:
      if ( byte_140173441 < 0 )
      {
        if ( !v16 )
        {
          v15 = 0;
          v14 = 0;
          v13 = 0;
        }
        McTemplateK0pduuuuup_EtwWriteTransfer(v6, v10, &v58, a2, *(_DWORD *)(a2 + 48), v24, v22, v13, v14, v15, a2);
      }
      goto LABEL_69;
    }
    v25 = *v11 & 0x7F;
    if ( v25 == 114 || v25 == 115 )
    {
      v6 = (unsigned __int64)&v11[v12];
      LOBYTE(v10) = 0;
      if ( (unsigned __int64)(v11 + 8) > v6 )
        goto LABEL_60;
      v14 = v11[2];
      v13 = v11[1] & 0xF;
      v15 = v11[3];
    }
    else
    {
      v6 = (unsigned __int64)&v11[v12];
      LOBYTE(v10) = 0;
      if ( (unsigned __int64)(v11 + 8) > v6 )
        goto LABEL_60;
      v26 = v11 + 13;
      v13 = v11[2] & 0xF;
      v27 = v12;
      if ( (unsigned int)(unsigned __int8)v11[7] + 8 <= v12 )
        v27 = (unsigned __int8)v11[7] + 8;
      v6 = (unsigned __int64)&v11[v27];
      if ( (unsigned __int64)v26 <= v6 )
        v14 = v11[12];
      if ( (unsigned __int64)(v11 + 14) > v6 )
        v15 = 0;
      else
        v15 = *v26;
    }
    LOBYTE(v10) = 1;
LABEL_60:
    if ( (_BYTE)v10 )
      v16 = 1;
    goto LABEL_62;
  }
  v5 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = -1073741790;
  if ( v5 )
    goto LABEL_136;
  v58 = 0LL;
  IoGetActivityIdIrp(a2, &v58);
  v30 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v30 != 14 )
  {
    if ( *(_BYTE *)v30 != 15 )
    {
      if ( *(_BYTE *)v30 == 27 )
      {
        if ( *(_BYTE *)(v30 + 1) == 7 && !*(_DWORD *)(v30 + 8) )
        {
          if ( (byte_140173442 & 0x40) != 0 )
          {
            v31 = *(int **)(a2 + 56);
            if ( v31 )
              v4 = *v31;
            McTemplateK0pqd_EtwWriteTransfer(v29, v30, &v58, a2, v4, *(_DWORD *)(a2 + 48));
          }
          goto LABEL_136;
        }
        if ( (byte_140173442 & 0x20) != 0 )
        {
          v32 = &EventPnpRequestComplete;
          v51 = *(_DWORD *)(a2 + 48);
LABEL_135:
          McTemplateK0pd_EtwWriteTransfer(v29, v32, &v58, a2, v51);
          goto LABEL_136;
        }
      }
      goto LABEL_136;
    }
    if ( byte_140173441 >= 0 )
      goto LABEL_136;
    v33 = *(_QWORD *)(v30 + 8);
    v34 = 0LL;
    v53 = 0;
    v35 = 0;
    v36 = 0;
    v37 = 0;
    v38 = 0;
    v39 = 0;
    if ( *(_BYTE *)(v33 + 2) == 40 )
    {
      v40 = 0LL;
      v55 = 0;
      if ( *(_DWORD *)(v33 + 20) )
        goto LABEL_136;
      v41 = 0;
      v57 = *(_DWORD *)(v33 + 56);
      if ( !v57 )
        goto LABEL_136;
      do
      {
        v29 = *(unsigned int *)(v33 + 4LL * v41 + 120);
        if ( (unsigned int)v29 >= 0x80 )
        {
          v42 = *(unsigned int *)(v33 + 16);
          if ( (unsigned int)v29 < (unsigned int)v42 )
          {
            v43 = (unsigned int)v29;
            v44 = *(_DWORD *)(v29 + v33) - 64;
            if ( v44 )
            {
              v29 = (unsigned int)(v44 - 1);
              if ( (_DWORD)v29 )
              {
                if ( (_DWORD)v29 == 1 )
                {
                  v29 = v43 + 40;
                  if ( v43 + 40 <= v42 )
                  {
                    if ( *(_DWORD *)(v43 + v33 + 12) )
                      v40 = (char *)(v43 + v33 + 32);
                    v34 = *(_BYTE **)(v43 + v33 + 24);
LABEL_95:
                    v45 = *(_BYTE *)(v43 + v33 + 8);
                    v35 = *(_BYTE *)(v43 + v33 + 9);
                    goto LABEL_104;
                  }
                }
              }
              else
              {
                v29 = v43 + 56;
                if ( v43 + 56 <= v42 )
                {
                  v55 = 1;
                  if ( *(_BYTE *)(v43 + v33 + 10) )
                    v40 = (char *)(v43 + v33 + 24);
                  v34 = *(_BYTE **)(v43 + v33 + 16);
                  v35 = *(_BYTE *)(v43 + v33 + 9);
                  v53 = *(_BYTE *)(v43 + v33 + 8);
                }
              }
            }
            else
            {
              v29 = v43 + 40;
              if ( v43 + 40 <= v42 )
              {
                if ( *(_BYTE *)(v43 + v33 + 10) )
                  v40 = (char *)(v43 + v33 + 24);
                v34 = *(_BYTE **)(v43 + v33 + 16);
                goto LABEL_95;
              }
            }
            if ( v55 )
              break;
          }
        }
        ++v41;
      }
      while ( v41 < v57 );
      v45 = v53;
LABEL_104:
      if ( !v40 )
        goto LABEL_136;
      v46 = *v40;
      v39 = 0;
    }
    else
    {
      v46 = *(_BYTE *)(v33 + 72);
      v34 = *(_BYTE **)(v33 + 32);
      v35 = *(_BYTE *)(v33 + 11);
      v45 = *(_BYTE *)(v33 + 4);
      if ( *(_BYTE *)(v33 + 2) )
        goto LABEL_136;
    }
    LOBYTE(v29) = v46 - 8;
    if ( (v29 & 0x5D) != 0 )
      goto LABEL_136;
    v47 = *(_BYTE *)(v33 + 3);
    if ( v47 == 1 || !v34 || !v35 )
    {
LABEL_129:
      if ( byte_140173441 < 0 )
      {
        if ( !v39 )
        {
          v38 = 0;
          v37 = 0;
          v36 = 0;
        }
        McTemplateK0pduuuuup_EtwWriteTransfer(v29, v33, &v58, a2, *(_DWORD *)(a2 + 48), v47, v45, v36, v37, v38, a2);
      }
      goto LABEL_136;
    }
    v48 = *v34 & 0x7F;
    if ( v48 == 114 || v48 == 115 )
    {
      v29 = (unsigned __int64)&v34[v35];
      LOBYTE(v33) = 0;
      if ( (unsigned __int64)(v34 + 8) > v29 )
        goto LABEL_127;
      v37 = v34[2];
      v36 = v34[1] & 0xF;
      v38 = v34[3];
    }
    else
    {
      v29 = (unsigned __int64)&v34[v35];
      LOBYTE(v33) = 0;
      if ( (unsigned __int64)(v34 + 8) > v29 )
        goto LABEL_127;
      v49 = v34 + 13;
      v36 = v34[2] & 0xF;
      v50 = v35;
      if ( (unsigned int)(unsigned __int8)v34[7] + 8 <= v35 )
        v50 = (unsigned __int8)v34[7] + 8;
      v29 = (unsigned __int64)&v34[v50];
      if ( (unsigned __int64)v49 <= v29 )
        v37 = v34[12];
      if ( (unsigned __int64)(v34 + 14) > v29 )
        v38 = 0;
      else
        v38 = *v49;
    }
    LOBYTE(v33) = 1;
LABEL_127:
    if ( (_BYTE)v33 )
      v39 = 1;
    goto LABEL_129;
  }
  if ( (byte_140173442 & 8) != 0 )
  {
    v29 = *(unsigned int *)(a2 + 48);
    v32 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
    v51 = *(_DWORD *)(a2 + 48);
    goto LABEL_135;
  }
LABEL_136:
  IofCompleteRequest((PIRP)a2, 0);
  return 3221225506LL;
}
