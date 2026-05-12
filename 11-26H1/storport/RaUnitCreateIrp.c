/*
 * XREFs of RaUnitCreateIrp @ 0x140032C30
 * Callers:
 *     RaDriverCreateIrp @ 0x1401B2C80 (RaDriverCreateIrp.c)
 *     RaDriverCloseIrp @ 0x1401B2D90 (RaDriverCloseIrp.c)
 * Callees:
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall RaUnitCreateIrp(__int64 a1, __int64 a2)
{
  int v2; // eax
  _BYTE *v4; // rsi
  unsigned int v5; // edi
  bool v6; // zf
  int v7; // edx
  char *v8; // rcx
  char v9; // al
  _DWORD *v11; // rax
  unsigned __int64 v12; // rdx
  char v13; // r11
  unsigned __int8 v14; // r8
  char v15; // r10
  char v16; // r12
  char v17; // r13
  char v18; // bp
  char *v19; // r9
  unsigned int v20; // r14d
  __int64 v21; // rcx
  unsigned __int64 v22; // r11
  __int64 v23; // r15
  int v24; // ecx
  int v25; // ecx
  char v26; // cl
  char v27; // r9
  char v28; // al
  unsigned int v29; // eax
  unsigned int v30; // [rsp+60h] [rbp-48h]
  __int128 v31; // [rsp+68h] [rbp-40h] BYREF

  v2 = *(_DWORD *)(a1 + 56);
  if ( v2 == 6 || v2 == 7 )
  {
    v4 = 0LL;
    v5 = -1073741738;
    *(_QWORD *)(a2 + 56) = 0LL;
  }
  else
  {
    v4 = 0LL;
    v5 = 0;
  }
  v6 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v5;
  if ( v6 )
    goto LABEL_7;
  v31 = 0LL;
  IoGetActivityIdIrp(a2, &v31);
  v8 = *(char **)(a2 + 184);
  v9 = *v8;
  if ( *v8 != 15 )
  {
    if ( v9 == 14 )
    {
      if ( (byte_140173442 & 8) != 0 )
        McTemplateK0pd_EtwWriteTransfer(v8, &EventNonReadWriteRequestComplete, &v31, a2, *(_DWORD *)(a2 + 48));
    }
    else if ( v9 == 27 )
    {
      if ( v8[1] != 7 || *((_DWORD *)v8 + 2) )
      {
        if ( (byte_140173442 & 0x20) != 0 )
          McTemplateK0pd_EtwWriteTransfer(v8, &EventPnpRequestComplete, &v31, a2, *(_DWORD *)(a2 + 48));
      }
      else if ( (byte_140173442 & 0x40) != 0 )
      {
        v11 = *(_DWORD **)(a2 + 56);
        if ( v11 )
          LODWORD(v4) = *v11;
        McTemplateK0pqd_EtwWriteTransfer((_DWORD)v8, v7, (unsigned int)&v31, a2, (char)v4, *(_DWORD *)(a2 + 48));
      }
    }
    goto LABEL_7;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_7;
  v12 = *((_QWORD *)v8 + 1);
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  if ( *(_BYTE *)(v12 + 2) != 40 )
  {
    v26 = *(_BYTE *)(v12 + 72);
    v4 = *(_BYTE **)(v12 + 32);
    v14 = *(_BYTE *)(v12 + 11);
    v17 = *(_BYTE *)(v12 + 4);
    if ( *(_BYTE *)(v12 + 2) )
      goto LABEL_7;
LABEL_46:
    if ( ((v26 - 8) & 0x5D) != 0 )
      goto LABEL_7;
    v27 = *(_BYTE *)(v12 + 3);
    if ( v27 == 1 || !v4 || !v14 )
      goto LABEL_64;
    v28 = *v4 & 0x7F;
    if ( v28 == 114 || v28 == 115 )
    {
      LOBYTE(v12) = 0;
      if ( v4 + 8 > &v4[v14] )
        goto LABEL_62;
      v16 = v4[2];
      v15 = v4[1] & 0xF;
      v18 = v4[3];
    }
    else
    {
      LOBYTE(v12) = 0;
      if ( v4 + 8 > &v4[v14] )
        goto LABEL_62;
      v15 = v4[2] & 0xF;
      v29 = v14;
      if ( (unsigned int)(unsigned __int8)v4[7] + 8 <= v14 )
        v29 = (unsigned __int8)v4[7] + 8;
      v12 = (unsigned __int64)&v4[v29];
      if ( (unsigned __int64)(v4 + 13) <= v12 )
        v16 = v4[12];
      if ( (unsigned __int64)(v4 + 14) <= v12 )
        v18 = v4[13];
    }
    LOBYTE(v12) = 1;
LABEL_62:
    if ( (_BYTE)v12 )
      v13 = 1;
LABEL_64:
    if ( byte_140173441 < 0 )
    {
      if ( !v13 )
      {
        v18 = 0;
        v16 = 0;
        v15 = 0;
      }
      McTemplateK0pduuuuup_EtwWriteTransfer(
        *(_DWORD *)(a2 + 48),
        v12,
        (unsigned int)&v31,
        a2,
        *(_DWORD *)(a2 + 48),
        v27,
        v17,
        v15,
        v16,
        v18,
        a2);
    }
    goto LABEL_7;
  }
  v19 = 0LL;
  if ( *(_DWORD *)(v12 + 20) )
    goto LABEL_7;
  v20 = 0;
  v30 = *(_DWORD *)(v12 + 56);
  if ( !v30 )
    goto LABEL_7;
  while ( 1 )
  {
    v21 = *(unsigned int *)(v12 + 4LL * v20 + 120);
    if ( (unsigned int)v21 < 0x80 )
      goto LABEL_43;
    v22 = *(unsigned int *)(v12 + 16);
    if ( (unsigned int)v21 >= (unsigned int)v22 )
      goto LABEL_43;
    v23 = (unsigned int)v21;
    v24 = *(_DWORD *)(v21 + v12);
    if ( v24 != 64 )
      break;
    if ( v23 + 40 <= v22 )
    {
      if ( !*(_BYTE *)(v23 + v12 + 10) )
        goto LABEL_36;
LABEL_35:
      v19 = (char *)(v23 + v12 + 24);
LABEL_36:
      v4 = *(_BYTE **)(v23 + v12 + 16);
      goto LABEL_37;
    }
LABEL_43:
    if ( ++v20 >= v30 )
      goto LABEL_38;
  }
  v25 = v24 - 65;
  if ( !v25 )
  {
    if ( v23 + 56 <= v22 )
    {
      if ( *(_BYTE *)(v23 + v12 + 10) )
        goto LABEL_35;
      goto LABEL_36;
    }
    goto LABEL_43;
  }
  if ( v25 != 1 || v23 + 40 > v22 )
    goto LABEL_43;
  if ( *(_DWORD *)(v23 + v12 + 12) )
    v19 = (char *)(v23 + v12 + 32);
  v4 = *(_BYTE **)(v23 + v12 + 24);
LABEL_37:
  v17 = *(_BYTE *)(v23 + v12 + 8);
  v14 = *(_BYTE *)(v23 + v12 + 9);
LABEL_38:
  if ( v19 )
  {
    v26 = *v19;
    v13 = 0;
    goto LABEL_46;
  }
LABEL_7:
  IofCompleteRequest((PIRP)a2, 0);
  return v5;
}
