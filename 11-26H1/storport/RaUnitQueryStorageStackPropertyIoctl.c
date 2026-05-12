/*
 * XREFs of RaUnitQueryStorageStackPropertyIoctl @ 0x14003BE0C
 * Callers:
 *     RaUnitStorageQueryPropertyIoctl @ 0x1401B2144 (RaUnitStorageQueryPropertyIoctl.c)
 * Callees:
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int64 __fastcall RaUnitQueryStorageStackPropertyIoctl(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rsi
  int v3; // ebx
  int v5; // ecx
  unsigned int v6; // edx
  __int64 v7; // rax
  unsigned int v8; // r12d
  bool v9; // zf
  unsigned __int64 v10; // rcx
  __int64 v11; // rdx
  int *v13; // rax
  char v14; // al
  __int64 v15; // rdx
  char *v16; // r10
  char v17; // r11
  unsigned int v18; // eax
  char v19; // si
  char v20; // r10
  char v21; // r14
  _BYTE *v22; // r9
  unsigned __int8 v23; // bp
  char *v24; // r14
  unsigned int v25; // r13d
  unsigned __int64 v26; // r15
  __int64 v27; // r8
  int v28; // ecx
  char v29; // r15
  char v30; // cl
  char v31; // r8
  char v32; // [rsp+60h] [rbp-48h]
  char v33; // [rsp+61h] [rbp-47h]
  unsigned int v34; // [rsp+64h] [rbp-44h]
  __int128 v35; // [rsp+68h] [rbp-40h] BYREF

  v2 = *(_DWORD **)(a2 + 24);
  LOBYTE(v3) = 0;
  v5 = v2[1];
  v6 = *(_DWORD *)(*(_QWORD *)(a2 + 184) + 8LL);
  if ( v5 )
  {
    v7 = 0LL;
    if ( v5 == 1 )
    {
LABEL_6:
      v8 = 0;
      goto LABEL_7;
    }
    v8 = -1073741637;
  }
  else
  {
    if ( v6 >= 8 )
    {
      if ( v6 < 0xC )
      {
        v7 = 8LL;
      }
      else
      {
        memset_0(v2, 0, v6);
        v7 = 12LL;
        v2[2] = 1;
      }
      v2[1] = 12;
      *v2 = 12;
      goto LABEL_6;
    }
    v8 = -1073741789;
    v7 = 0LL;
  }
LABEL_7:
  *(_QWORD *)(a2 + 56) = v7;
  v9 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v8;
  if ( v9 )
    goto LABEL_11;
  v35 = 0LL;
  IoGetActivityIdIrp(a2, &v35);
  v11 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v11 == 14 )
  {
    if ( (byte_140173442 & 8) != 0 )
      McTemplateK0pd_EtwWriteTransfer(v10, &EventNonReadWriteRequestComplete, &v35, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_11;
  }
  if ( *(_BYTE *)v11 != 15 )
  {
    if ( *(_BYTE *)v11 == 27 )
    {
      if ( *(_BYTE *)(v11 + 1) != 7 || *(_DWORD *)(v11 + 8) )
      {
        if ( (byte_140173442 & 0x20) != 0 )
          McTemplateK0pd_EtwWriteTransfer(v10, &EventPnpRequestComplete, &v35, a2, *(_DWORD *)(a2 + 48));
      }
      else if ( (byte_140173442 & 0x40) != 0 )
      {
        v13 = *(int **)(a2 + 56);
        if ( v13 )
          v3 = *v13;
        McTemplateK0pqd_EtwWriteTransfer(v10, v11, (unsigned int)&v35, a2, v3, *(_DWORD *)(a2 + 48));
      }
    }
    goto LABEL_11;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_11;
  v15 = *(_QWORD *)(v11 + 8);
  v22 = 0LL;
  v32 = 0;
  v23 = 0;
  v17 = 0;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  if ( *(_BYTE *)(v15 + 2) != 40 )
  {
    v30 = *(_BYTE *)(v15 + 72);
    v22 = *(_BYTE **)(v15 + 32);
    v23 = *(_BYTE *)(v15 + 11);
    v29 = *(_BYTE *)(v15 + 4);
    if ( *(_BYTE *)(v15 + 2) )
      goto LABEL_11;
LABEL_76:
    LOBYTE(v10) = v30 - 8;
    if ( (v10 & 0x5D) != 0 )
      goto LABEL_11;
    v31 = *(_BYTE *)(v15 + 3);
    if ( v31 == 1 || !v22 || !v23 )
      goto LABEL_39;
    v14 = *v22 & 0x7F;
    if ( v14 == 114 || v14 == 115 )
    {
      v10 = (unsigned __int64)&v22[v23];
      LOBYTE(v15) = 0;
      if ( (unsigned __int64)(v22 + 8) > v10 )
      {
LABEL_37:
        if ( (_BYTE)v15 )
          v21 = 1;
LABEL_39:
        if ( byte_140173441 < 0 )
        {
          if ( !v21 )
          {
            v20 = 0;
            v19 = 0;
            v17 = 0;
          }
          McTemplateK0pduuuuup_EtwWriteTransfer(
            v10,
            v15,
            (unsigned int)&v35,
            a2,
            *(_DWORD *)(a2 + 48),
            v31,
            v29,
            v17,
            v19,
            v20,
            a2);
        }
        goto LABEL_11;
      }
      v19 = v22[2];
      v17 = v22[1] & 0xF;
      v20 = v22[3];
    }
    else
    {
      v10 = (unsigned __int64)&v22[v23];
      LOBYTE(v15) = 0;
      if ( (unsigned __int64)(v22 + 8) > v10 )
        goto LABEL_37;
      v16 = v22 + 13;
      v17 = v22[2] & 0xF;
      v18 = v23;
      if ( (unsigned int)(unsigned __int8)v22[7] + 8 <= v23 )
        v18 = (unsigned __int8)v22[7] + 8;
      v10 = (unsigned __int64)&v22[v18];
      if ( (unsigned __int64)v16 <= v10 )
        v19 = v22[12];
      if ( (unsigned __int64)(v22 + 14) > v10 )
        v20 = 0;
      else
        v20 = *v16;
    }
    LOBYTE(v15) = 1;
    goto LABEL_37;
  }
  v24 = 0LL;
  v33 = 0;
  if ( *(_DWORD *)(v15 + 20) )
    goto LABEL_11;
  v25 = 0;
  v34 = *(_DWORD *)(v15 + 56);
  if ( !v34 )
    goto LABEL_11;
  while ( 1 )
  {
    v10 = *(unsigned int *)(v15 + 4LL * v25 + 120);
    if ( (unsigned int)v10 >= 0x80 )
    {
      v26 = *(unsigned int *)(v15 + 16);
      if ( (unsigned int)v10 < (unsigned int)v26 )
        break;
    }
LABEL_66:
    if ( ++v25 >= v34 )
    {
LABEL_67:
      v29 = v32;
      goto LABEL_68;
    }
  }
  v27 = (unsigned int)v10;
  v28 = *(_DWORD *)(v10 + v15) - 64;
  if ( v28 )
  {
    LODWORD(v10) = v28 - 1;
    if ( (_DWORD)v10 )
    {
      if ( (_DWORD)v10 == 1 )
      {
        LODWORD(v10) = v27 + 40;
        if ( v27 + 40 <= v26 )
        {
          if ( *(_DWORD *)(v27 + v15 + 12) )
            v24 = (char *)(v27 + v15 + 32);
          v22 = *(_BYTE **)(v27 + v15 + 24);
          goto LABEL_74;
        }
      }
    }
    else
    {
      LODWORD(v10) = v27 + 56;
      if ( v27 + 56 <= v26 )
      {
        v33 = 1;
        if ( *(_BYTE *)(v27 + v15 + 10) )
          v24 = (char *)(v27 + v15 + 24);
        v22 = *(_BYTE **)(v27 + v15 + 16);
        v23 = *(_BYTE *)(v27 + v15 + 9);
        v32 = *(_BYTE *)(v27 + v15 + 8);
      }
    }
    goto LABEL_65;
  }
  LODWORD(v10) = v27 + 40;
  if ( v27 + 40 > v26 )
  {
LABEL_65:
    if ( v33 )
      goto LABEL_67;
    goto LABEL_66;
  }
  if ( *(_BYTE *)(v27 + v15 + 10) )
    v24 = (char *)(v27 + v15 + 24);
  v22 = *(_BYTE **)(v27 + v15 + 16);
LABEL_74:
  v29 = *(_BYTE *)(v27 + v15 + 8);
  v23 = *(_BYTE *)(v27 + v15 + 9);
LABEL_68:
  if ( v24 )
  {
    v30 = *v24;
    v21 = 0;
    goto LABEL_76;
  }
LABEL_11:
  IofCompleteRequest((PIRP)a2, 0);
  return v8;
}
