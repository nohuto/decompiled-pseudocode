/*
 * XREFs of RaUnitStorageQueryDeviceSelfEncryptionPropertyIoctl @ 0x14003A488
 * Callers:
 *     RaUnitStorageQueryPropertyIoctl @ 0x1401B2144 (RaUnitStorageQueryPropertyIoctl.c)
 * Callees:
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     RaidGetTcgProperties @ 0x140094E78 (RaidGetTcgProperties.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int64 __fastcall RaUnitStorageQueryDeviceSelfEncryptionPropertyIoctl(__int64 a1, __int64 a2)
{
  int *v2; // rsi
  int v3; // ebx
  __int64 v4; // rax
  int v7; // ecx
  size_t v8; // r14
  unsigned int v9; // r14d
  bool v10; // zf
  unsigned __int64 v11; // rcx
  __int64 v12; // rdx
  int v14; // eax
  int *v15; // rax
  char v16; // al
  __int64 v17; // rdx
  char *v18; // r10
  char v19; // r11
  unsigned int v20; // eax
  char v21; // si
  char v22; // r10
  char v23; // r15
  _BYTE *v24; // r9
  unsigned __int8 v25; // bp
  char *v26; // r15
  unsigned int v27; // r13d
  int TcgProperties; // eax
  char v29; // al
  unsigned __int64 v30; // r12
  __int64 v31; // r8
  int v32; // ecx
  char v33; // r12
  char v34; // cl
  char v35; // r8
  char v36; // [rsp+60h] [rbp-68h]
  char v37; // [rsp+61h] [rbp-67h]
  unsigned int v38; // [rsp+64h] [rbp-64h]
  _OWORD v39[2]; // [rsp+68h] [rbp-60h] BYREF

  v2 = *(int **)(a2 + 24);
  LOBYTE(v3) = 0;
  v4 = *(_QWORD *)(a2 + 184);
  memset(v39, 0, sizeof(v39));
  v7 = v2[1];
  v8 = *(unsigned int *)(v4 + 8);
  if ( !v7 )
  {
    memset_0(v2, 0, v8);
    if ( (unsigned int)v8 < 8 )
    {
      v9 = -1073741789;
      goto LABEL_57;
    }
    if ( (unsigned int)v8 < 0xC )
    {
      *v2 = 16;
      v2[1] = 16;
      *(_QWORD *)(a2 + 56) = 8LL;
      goto LABEL_3;
    }
    if ( (*(_BYTE *)(a1 + 136) & 1) != 0 )
    {
      v14 = (unsigned int)v8 < 0x10 ? 12 : 16;
      *v2 = v14;
      v2[1] = v14;
    }
    else
    {
      if ( (unsigned int)v8 >= 0x10 )
      {
        if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 512), 3u) == 1 )
        {
          v9 = -2147483631;
          goto LABEL_57;
        }
        TcgProperties = RaidGetTcgProperties(a1, v39);
        *v2 = 16;
        v2[1] = 16;
        if ( TcgProperties >= 0 && **(_DWORD **)(a1 + 3600) == 512 )
        {
          v2[3] = 2;
          v29 = 1;
        }
        else
        {
          v29 = 0;
        }
        *((_BYTE *)v2 + 8) = v29;
        _interlockedbittestandreset((volatile signed __int32 *)(a1 + 512), 3u);
LABEL_15:
        *(_QWORD *)(a2 + 56) = (unsigned int)v2[1];
        goto LABEL_3;
      }
      *v2 = 12;
      v2[1] = 12;
    }
    *((_BYTE *)v2 + 8) = 0;
    goto LABEL_15;
  }
  if ( v7 == 1 )
  {
LABEL_3:
    v9 = 0;
    goto LABEL_4;
  }
  v9 = -1073741637;
LABEL_57:
  *(_QWORD *)(a2 + 56) = 0LL;
LABEL_4:
  v10 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v9;
  if ( v10 )
    goto LABEL_8;
  v39[0] = 0LL;
  IoGetActivityIdIrp(a2, v39);
  v12 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v12 == 14 )
  {
    if ( (byte_140173442 & 8) != 0 )
      McTemplateK0pd_EtwWriteTransfer(v11, &EventNonReadWriteRequestComplete, v39, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_8;
  }
  if ( *(_BYTE *)v12 != 15 )
  {
    if ( *(_BYTE *)v12 == 27 )
    {
      if ( *(_BYTE *)(v12 + 1) != 7 || *(_DWORD *)(v12 + 8) )
      {
        if ( (byte_140173442 & 0x20) != 0 )
          McTemplateK0pd_EtwWriteTransfer(v11, &EventPnpRequestComplete, v39, a2, *(_DWORD *)(a2 + 48));
      }
      else if ( (byte_140173442 & 0x40) != 0 )
      {
        v15 = *(int **)(a2 + 56);
        if ( v15 )
          v3 = *v15;
        McTemplateK0pqd_EtwWriteTransfer(v11, v12, (unsigned int)v39, a2, v3, *(_DWORD *)(a2 + 48));
      }
    }
    goto LABEL_8;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_8;
  v17 = *(_QWORD *)(v12 + 8);
  v24 = 0LL;
  v36 = 0;
  v25 = 0;
  v19 = 0;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  if ( *(_BYTE *)(v17 + 2) != 40 )
  {
    v34 = *(_BYTE *)(v17 + 72);
    v24 = *(_BYTE **)(v17 + 32);
    v25 = *(_BYTE *)(v17 + 11);
    v33 = *(_BYTE *)(v17 + 4);
    if ( *(_BYTE *)(v17 + 2) )
      goto LABEL_8;
LABEL_88:
    LOBYTE(v11) = v34 - 8;
    if ( (v11 & 0x5D) != 0 )
      goto LABEL_8;
    v35 = *(_BYTE *)(v17 + 3);
    if ( v35 == 1 || !v24 || !v25 )
      goto LABEL_42;
    v16 = *v24 & 0x7F;
    if ( v16 == 114 || v16 == 115 )
    {
      v11 = (unsigned __int64)&v24[v25];
      LOBYTE(v17) = 0;
      if ( (unsigned __int64)(v24 + 8) > v11 )
      {
LABEL_40:
        if ( (_BYTE)v17 )
          v23 = 1;
LABEL_42:
        if ( byte_140173441 < 0 )
        {
          if ( !v23 )
          {
            v22 = 0;
            v21 = 0;
            v19 = 0;
          }
          McTemplateK0pduuuuup_EtwWriteTransfer(
            v11,
            v17,
            (unsigned int)v39,
            a2,
            *(_DWORD *)(a2 + 48),
            v35,
            v33,
            v19,
            v21,
            v22,
            a2);
        }
        goto LABEL_8;
      }
      v21 = v24[2];
      v19 = v24[1] & 0xF;
      v22 = v24[3];
    }
    else
    {
      v11 = (unsigned __int64)&v24[v25];
      LOBYTE(v17) = 0;
      if ( (unsigned __int64)(v24 + 8) > v11 )
        goto LABEL_40;
      v18 = v24 + 13;
      v19 = v24[2] & 0xF;
      v20 = v25;
      if ( (unsigned int)(unsigned __int8)v24[7] + 8 <= v25 )
        v20 = (unsigned __int8)v24[7] + 8;
      v11 = (unsigned __int64)&v24[v20];
      if ( (unsigned __int64)v18 <= v11 )
        v21 = v24[12];
      if ( (unsigned __int64)(v24 + 14) > v11 )
        v22 = 0;
      else
        v22 = *v18;
    }
    LOBYTE(v17) = 1;
    goto LABEL_40;
  }
  v26 = 0LL;
  v37 = 0;
  if ( *(_DWORD *)(v17 + 20) )
    goto LABEL_8;
  v27 = 0;
  v38 = *(_DWORD *)(v17 + 56);
  if ( !v38 )
    goto LABEL_8;
  while ( 1 )
  {
    v11 = *(unsigned int *)(v17 + 4LL * v27 + 120);
    if ( (unsigned int)v11 >= 0x80 )
    {
      v30 = *(unsigned int *)(v17 + 16);
      if ( (unsigned int)v11 < (unsigned int)v30 )
        break;
    }
LABEL_78:
    if ( ++v27 >= v38 )
    {
LABEL_79:
      v33 = v36;
      goto LABEL_80;
    }
  }
  v31 = (unsigned int)v11;
  v32 = *(_DWORD *)(v11 + v17) - 64;
  if ( v32 )
  {
    LODWORD(v11) = v32 - 1;
    if ( (_DWORD)v11 )
    {
      if ( (_DWORD)v11 == 1 )
      {
        LODWORD(v11) = v31 + 40;
        if ( v31 + 40 <= v30 )
        {
          if ( *(_DWORD *)(v31 + v17 + 12) )
            v26 = (char *)(v31 + v17 + 32);
          v24 = *(_BYTE **)(v31 + v17 + 24);
          goto LABEL_86;
        }
      }
    }
    else
    {
      LODWORD(v11) = v31 + 56;
      if ( v31 + 56 <= v30 )
      {
        v37 = 1;
        if ( *(_BYTE *)(v31 + v17 + 10) )
          v26 = (char *)(v31 + v17 + 24);
        v24 = *(_BYTE **)(v31 + v17 + 16);
        v25 = *(_BYTE *)(v31 + v17 + 9);
        v36 = *(_BYTE *)(v31 + v17 + 8);
      }
    }
    goto LABEL_77;
  }
  LODWORD(v11) = v31 + 40;
  if ( v31 + 40 > v30 )
  {
LABEL_77:
    if ( v37 )
      goto LABEL_79;
    goto LABEL_78;
  }
  if ( *(_BYTE *)(v31 + v17 + 10) )
    v26 = (char *)(v31 + v17 + 24);
  v24 = *(_BYTE **)(v31 + v17 + 16);
LABEL_86:
  v33 = *(_BYTE *)(v31 + v17 + 8);
  v25 = *(_BYTE *)(v31 + v17 + 9);
LABEL_80:
  if ( v26 )
  {
    v34 = *v26;
    v23 = 0;
    goto LABEL_88;
  }
LABEL_8:
  IofCompleteRequest((PIRP)a2, 0);
  return v9;
}
