/*
 * XREFs of RaUnitFlushSrb @ 0x140003AB0
 * Callers:
 *     RaDriverScsiIrp @ 0x140003DF0 (RaDriverScsiIrp.c)
 * Callees:
 *     RaidStartIoPacket @ 0x140005F70 (RaidStartIoPacket.c)
 *     DbgLogRequest @ 0x14002A5C0 (DbgLogRequest.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall RaUnitFlushSrb(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rax
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  bool v8; // zf
  int v9; // edx
  char *v10; // rcx
  char v11; // al
  int *v13; // rcx
  int v14; // ecx
  __int64 v15; // r8
  char v16; // bp
  unsigned __int8 v17; // r9
  char v18; // r11
  char v19; // r13
  char v20; // r12
  char v21; // si
  _BYTE *v22; // rdx
  unsigned __int8 *v23; // r10
  unsigned int v24; // r14d
  __int64 v25; // rcx
  unsigned __int64 v26; // rbp
  __int64 v27; // r15
  int v28; // ecx
  int v29; // ecx
  char *v30; // rcx
  char v31; // r10
  char v32; // al
  char v33; // r8
  unsigned int v34; // eax
  unsigned __int64 v35; // r8
  unsigned int v36; // [rsp+60h] [rbp-58h]
  __int128 v37; // [rsp+68h] [rbp-50h] BYREF

  v2 = *(_DWORD **)(a1 + 24);
  if ( *v2 == 1094997074 )
  {
    v5 = (__int64)v2 + 467;
  }
  else if ( *v2 == 1314275652 )
  {
    v5 = (__int64)v2 + 259;
  }
  else
  {
    v5 = 91LL;
  }
  v6 = *(_QWORD *)(a2 + 184);
  v7 = *(_QWORD *)(v6 + 8);
  if ( *(_BYTE *)v5 )
  {
    *(_BYTE *)(v6 + 3) |= 1u;
    *(_BYTE *)(v7 + 3) = 0;
    *(_QWORD *)(*(_QWORD *)(a2 + 184) + 24LL) = 0LL;
    if ( (qword_140172448 & 0x20) != 0 )
      DbgLogRequest(
        *(_QWORD *)(a1 + 24),
        3,
        a2,
        (unsigned __int8)BYTE2(*(_DWORD *)(a1 + 104)) | ((((unsigned __int8)*(_DWORD *)(a1 + 104) << 8) | (unsigned __int8)BYTE1(*(_DWORD *)(a1 + 104))) << 8),
        0LL,
        0LL,
        0LL);
    RaidStartIoPacket(a1, a2);
    return 259LL;
  }
  else
  {
    v8 = StorEtwLoggingEnabled == 0;
    *(_BYTE *)(v7 + 3) = 1;
    *(_QWORD *)(a2 + 56) = 0LL;
    *(_BYTE *)(a2 + 141) = -84;
    *(_DWORD *)(a2 + 48) = 0;
    if ( v8 )
      goto LABEL_7;
    v37 = 0LL;
    IoGetActivityIdIrp(a2, &v37);
    v10 = *(char **)(a2 + 184);
    v11 = *v10;
    if ( *v10 != 15 )
    {
      if ( v11 == 14 )
      {
        if ( (byte_140173442 & 8) != 0 )
          McTemplateK0pd_EtwWriteTransfer(v10, &EventNonReadWriteRequestComplete, &v37, a2, *(_DWORD *)(a2 + 48));
      }
      else if ( v11 == 27 )
      {
        if ( v10[1] != 7 || *((_DWORD *)v10 + 2) )
        {
          if ( (byte_140173442 & 0x20) != 0 )
            McTemplateK0pd_EtwWriteTransfer(v10, &EventPnpRequestComplete, &v37, a2, *(_DWORD *)(a2 + 48));
        }
        else if ( (byte_140173442 & 0x40) != 0 )
        {
          v13 = *(int **)(a2 + 56);
          if ( v13 )
            v14 = *v13;
          else
            v14 = 0;
          McTemplateK0pqd_EtwWriteTransfer(v14, v9, (unsigned int)&v37, a2, v14, *(_DWORD *)(a2 + 48));
        }
      }
      goto LABEL_7;
    }
    if ( byte_140173441 >= 0 )
      goto LABEL_7;
    v15 = *((_QWORD *)v10 + 1);
    v16 = 0;
    v17 = 0;
    v18 = 0;
    v19 = 0;
    v20 = 0;
    v21 = 0;
    v22 = 0LL;
    if ( *(_BYTE *)(v15 + 2) == 40 )
    {
      v23 = 0LL;
      if ( *(_DWORD *)(v15 + 20) )
        goto LABEL_7;
      v24 = 0;
      v36 = *(_DWORD *)(v15 + 56);
      if ( !v36 )
        goto LABEL_7;
      while ( 1 )
      {
        v25 = *(unsigned int *)(v15 + 4LL * v24 + 120);
        if ( (unsigned int)v25 >= 0x80 )
        {
          v26 = *(unsigned int *)(v15 + 16);
          if ( (unsigned int)v25 < (unsigned int)v26 )
          {
            v27 = (unsigned int)v25;
            v28 = *(_DWORD *)(v25 + v15);
            if ( v28 == 64 )
            {
              if ( v27 + 40 <= v26 )
              {
                if ( !*(_BYTE *)(v27 + v15 + 10) )
                  goto LABEL_42;
LABEL_41:
                v23 = (unsigned __int8 *)(v27 + v15 + 24);
LABEL_42:
                v22 = *(_BYTE **)(v27 + v15 + 16);
                goto LABEL_43;
              }
            }
            else
            {
              v29 = v28 - 65;
              if ( v29 )
              {
                if ( v29 == 1 && v27 + 40 <= v26 )
                {
                  if ( *(_DWORD *)(v27 + v15 + 12) )
                    v23 = (unsigned __int8 *)(v27 + v15 + 32);
                  v22 = *(_BYTE **)(v27 + v15 + 24);
LABEL_43:
                  v19 = *(_BYTE *)(v27 + v15 + 8);
                  v17 = *(_BYTE *)(v27 + v15 + 9);
LABEL_44:
                  if ( v23 )
                  {
                    LODWORD(v30) = *v23;
                    v16 = 0;
                    goto LABEL_52;
                  }
                  goto LABEL_7;
                }
              }
              else if ( v27 + 56 <= v26 )
              {
                if ( *(_BYTE *)(v27 + v15 + 10) )
                  goto LABEL_41;
                goto LABEL_42;
              }
            }
          }
        }
        if ( ++v24 >= v36 )
          goto LABEL_44;
      }
    }
    LODWORD(v30) = *(unsigned __int8 *)(v15 + 72);
    v22 = *(_BYTE **)(v15 + 32);
    v17 = *(_BYTE *)(v15 + 11);
    v19 = *(_BYTE *)(v15 + 4);
    if ( *(_BYTE *)(v15 + 2) )
      goto LABEL_7;
LABEL_52:
    LOBYTE(v30) = (_BYTE)v30 - 8;
    if ( ((unsigned __int8)v30 & 0x5D) == 0 )
    {
      v31 = *(_BYTE *)(v15 + 3);
      if ( v31 == 1 || !v22 || !v17 )
      {
LABEL_70:
        if ( byte_140173441 < 0 )
        {
          if ( !v16 )
          {
            v21 = 0;
            v20 = 0;
            v18 = 0;
          }
          McTemplateK0pduuuuup_EtwWriteTransfer(
            (_DWORD)v30,
            (_DWORD)v22,
            (unsigned int)&v37,
            a2,
            *(_DWORD *)(a2 + 48),
            v31,
            v19,
            v18,
            v20,
            v21,
            a2);
        }
        goto LABEL_7;
      }
      v32 = *v22 & 0x7F;
      if ( v32 == 114 || v32 == 115 )
      {
        v30 = &v22[v17];
        v33 = 0;
        if ( v22 + 8 > v30 )
          goto LABEL_68;
        v20 = v22[2];
        v18 = v22[1] & 0xF;
        v21 = v22[3];
      }
      else
      {
        v30 = &v22[v17];
        v33 = 0;
        if ( v22 + 8 > v30 )
          goto LABEL_68;
        v18 = v22[2] & 0xF;
        v34 = v17;
        if ( (unsigned int)(unsigned __int8)v22[7] + 8 <= v17 )
          v34 = (unsigned __int8)v22[7] + 8;
        v30 = v22 + 13;
        v35 = (unsigned __int64)&v22[v34];
        if ( (unsigned __int64)(v22 + 13) <= v35 )
          v20 = v22[12];
        if ( (unsigned __int64)(v22 + 14) <= v35 )
          v21 = *v30;
      }
      v33 = 1;
LABEL_68:
      if ( v33 )
        v16 = 1;
      goto LABEL_70;
    }
LABEL_7:
    IofCompleteRequest((PIRP)a2, 0);
    return 0LL;
  }
}
