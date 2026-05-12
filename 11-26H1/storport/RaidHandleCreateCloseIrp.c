/*
 * XREFs of RaidHandleCreateCloseIrp @ 0x14002FF80
 * Callers:
 *     NvmeNamespaceCloseIrp @ 0x14002FF68 (NvmeNamespaceCloseIrp.c)
 *     RaDriverCreateIrp @ 0x1401B2C80 (RaDriverCreateIrp.c)
 *     RaDriverCloseIrp @ 0x1401B2D90 (RaDriverCloseIrp.c)
 * Callees:
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall RaidHandleCreateCloseIrp(int a1, __int64 a2)
{
  _BYTE *v2; // rsi
  unsigned int v4; // edi
  bool v5; // zf
  int v6; // edx
  char *v7; // rcx
  char v8; // al
  _DWORD *v10; // rax
  unsigned __int64 v11; // rdx
  char v12; // r11
  unsigned __int8 v13; // r8
  char v14; // r10
  char v15; // r12
  char v16; // r13
  char v17; // bp
  char *v18; // r9
  unsigned int v19; // r14d
  __int64 v20; // rcx
  unsigned __int64 v21; // r11
  __int64 v22; // r15
  int v23; // ecx
  int v24; // ecx
  char v25; // cl
  char v26; // r9
  char v27; // al
  unsigned int v28; // eax
  unsigned int v29; // [rsp+60h] [rbp-48h]
  __int128 v30; // [rsp+68h] [rbp-40h] BYREF

  v2 = 0LL;
  if ( (unsigned int)(a1 - 6) <= 1 )
  {
    v4 = -1073741738;
    *(_QWORD *)(a2 + 56) = 0LL;
  }
  else
  {
    v4 = 0;
  }
  v5 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v4;
  if ( v5 )
    goto LABEL_6;
  v30 = 0LL;
  IoGetActivityIdIrp(a2, &v30);
  v7 = *(char **)(a2 + 184);
  v8 = *v7;
  if ( *v7 != 15 )
  {
    if ( v8 == 14 )
    {
      if ( (byte_140173442 & 8) != 0 )
        McTemplateK0pd_EtwWriteTransfer(v7, &EventNonReadWriteRequestComplete, &v30, a2, *(_DWORD *)(a2 + 48));
    }
    else if ( v8 == 27 )
    {
      if ( v7[1] != 7 || *((_DWORD *)v7 + 2) )
      {
        if ( (byte_140173442 & 0x20) != 0 )
          McTemplateK0pd_EtwWriteTransfer(v7, &EventPnpRequestComplete, &v30, a2, *(_DWORD *)(a2 + 48));
      }
      else if ( (byte_140173442 & 0x40) != 0 )
      {
        v10 = *(_DWORD **)(a2 + 56);
        if ( v10 )
          LODWORD(v2) = *v10;
        McTemplateK0pqd_EtwWriteTransfer((_DWORD)v7, v6, (unsigned int)&v30, a2, (char)v2, *(_DWORD *)(a2 + 48));
      }
    }
    goto LABEL_6;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_6;
  v11 = *((_QWORD *)v7 + 1);
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  if ( *(_BYTE *)(v11 + 2) != 40 )
  {
    v25 = *(_BYTE *)(v11 + 72);
    v2 = *(_BYTE **)(v11 + 32);
    v13 = *(_BYTE *)(v11 + 11);
    v16 = *(_BYTE *)(v11 + 4);
    if ( *(_BYTE *)(v11 + 2) )
      goto LABEL_6;
LABEL_45:
    if ( ((v25 - 8) & 0x5D) != 0 )
      goto LABEL_6;
    v26 = *(_BYTE *)(v11 + 3);
    if ( v26 == 1 || !v2 || !v13 )
      goto LABEL_63;
    v27 = *v2 & 0x7F;
    if ( v27 == 114 || v27 == 115 )
    {
      LOBYTE(v11) = 0;
      if ( v2 + 8 > &v2[v13] )
        goto LABEL_61;
      v15 = v2[2];
      v14 = v2[1] & 0xF;
      v17 = v2[3];
    }
    else
    {
      LOBYTE(v11) = 0;
      if ( v2 + 8 > &v2[v13] )
        goto LABEL_61;
      v14 = v2[2] & 0xF;
      v28 = v13;
      if ( (unsigned int)(unsigned __int8)v2[7] + 8 <= v13 )
        v28 = (unsigned __int8)v2[7] + 8;
      v11 = (unsigned __int64)&v2[v28];
      if ( (unsigned __int64)(v2 + 13) <= v11 )
        v15 = v2[12];
      if ( (unsigned __int64)(v2 + 14) <= v11 )
        v17 = v2[13];
    }
    LOBYTE(v11) = 1;
LABEL_61:
    if ( (_BYTE)v11 )
      v12 = 1;
LABEL_63:
    if ( byte_140173441 < 0 )
    {
      if ( !v12 )
      {
        v17 = 0;
        v15 = 0;
        v14 = 0;
      }
      McTemplateK0pduuuuup_EtwWriteTransfer(
        *(_DWORD *)(a2 + 48),
        v11,
        (unsigned int)&v30,
        a2,
        *(_DWORD *)(a2 + 48),
        v26,
        v16,
        v14,
        v15,
        v17,
        a2);
    }
    goto LABEL_6;
  }
  v18 = 0LL;
  if ( *(_DWORD *)(v11 + 20) )
    goto LABEL_6;
  v19 = 0;
  v29 = *(_DWORD *)(v11 + 56);
  if ( !v29 )
    goto LABEL_6;
  while ( 1 )
  {
    v20 = *(unsigned int *)(v11 + 4LL * v19 + 120);
    if ( (unsigned int)v20 < 0x80 )
      goto LABEL_42;
    v21 = *(unsigned int *)(v11 + 16);
    if ( (unsigned int)v20 >= (unsigned int)v21 )
      goto LABEL_42;
    v22 = (unsigned int)v20;
    v23 = *(_DWORD *)(v20 + v11);
    if ( v23 != 64 )
      break;
    if ( v22 + 40 <= v21 )
    {
      if ( !*(_BYTE *)(v22 + v11 + 10) )
        goto LABEL_35;
LABEL_34:
      v18 = (char *)(v22 + v11 + 24);
LABEL_35:
      v2 = *(_BYTE **)(v22 + v11 + 16);
      goto LABEL_36;
    }
LABEL_42:
    if ( ++v19 >= v29 )
      goto LABEL_37;
  }
  v24 = v23 - 65;
  if ( !v24 )
  {
    if ( v22 + 56 <= v21 )
    {
      if ( *(_BYTE *)(v22 + v11 + 10) )
        goto LABEL_34;
      goto LABEL_35;
    }
    goto LABEL_42;
  }
  if ( v24 != 1 || v22 + 40 > v21 )
    goto LABEL_42;
  if ( *(_DWORD *)(v22 + v11 + 12) )
    v18 = (char *)(v22 + v11 + 32);
  v2 = *(_BYTE **)(v22 + v11 + 24);
LABEL_36:
  v16 = *(_BYTE *)(v22 + v11 + 8);
  v13 = *(_BYTE *)(v22 + v11 + 9);
LABEL_37:
  if ( v18 )
  {
    v25 = *v18;
    v12 = 0;
    goto LABEL_45;
  }
LABEL_6:
  IofCompleteRequest((PIRP)a2, 0);
  return v4;
}
