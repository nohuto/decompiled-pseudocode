/*
 * XREFs of NvmeNamespaceGetQOSIoctl @ 0x140106E38
 * Callers:
 *     NvmeNamespaceDeviceControlIrp @ 0x1401BBC8C (NvmeNamespaceDeviceControlIrp.c)
 * Callees:
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall NvmeNamespaceGetQOSIoctl(__int64 a1, __int64 a2)
{
  __int64 v2; // r9
  int v3; // ebx
  __int64 v6; // rcx
  __int64 v7; // rdx
  int v8; // eax
  int v9; // eax
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  bool v13; // zf
  unsigned __int64 v14; // rcx
  __int64 v15; // rdx
  int *v16; // rax
  const EVENT_DESCRIPTOR *v17; // rdx
  __int64 v18; // rdx
  char v19; // r13
  _BYTE *v20; // r9
  unsigned __int8 v21; // bp
  char v22; // si
  char v23; // r11
  char v24; // r10
  char v25; // r14
  char *v26; // r14
  unsigned int v27; // r12d
  unsigned __int64 v28; // r15
  __int64 v29; // r8
  int v30; // ecx
  char v31; // cl
  char v32; // r8
  char v33; // al
  char *v34; // r10
  unsigned int v35; // eax
  int v37; // [rsp+20h] [rbp-98h]
  char v38; // [rsp+60h] [rbp-58h]
  unsigned int v39; // [rsp+64h] [rbp-54h]
  unsigned int v40; // [rsp+68h] [rbp-50h]
  GUID v41; // [rsp+70h] [rbp-48h] BYREF

  v2 = *(_QWORD *)(a1 + 16);
  v3 = 0;
  v6 = *(_QWORD *)(a2 + 184);
  v7 = *(_QWORD *)(a2 + 24);
  if ( (*(_BYTE *)(v2 + 136) & 2) != 0 )
  {
    v8 = -1073741637;
  }
  else if ( *(_DWORD *)(v6 + 8) >= 0x24u )
  {
    *(_QWORD *)(v7 + 8) = 0LL;
    *(_QWORD *)(v7 + 16) = 0LL;
    *(_QWORD *)(v7 + 24) = 0LL;
    *(_DWORD *)(v7 + 32) = 0;
    *(_DWORD *)v7 = 36;
    *(_DWORD *)(v7 + 4) = 36;
    *(_BYTE *)(v7 + 8) = *(_BYTE *)(a1 + 648) & 1;
    *(_DWORD *)(v7 + 32) = *(_DWORD *)(a1 + 660);
    *(_DWORD *)(v7 + 12) = *(unsigned __int8 *)(a1 + 668);
    *(_DWORD *)(v7 + 20) = 1000 * *(unsigned __int16 *)(a1 + 652);
    *(_DWORD *)(v7 + 32) = *(_DWORD *)(v2 + 1444);
    *(_DWORD *)(v7 + 24) = 1000 * *(_DWORD *)(v2 + 1448);
    *(_DWORD *)(v7 + 28) = 500 * *(_DWORD *)(v2 + 1440);
    v9 = -1;
    v10 = *(_DWORD *)(a1 + 656);
    if ( v10 == -1 )
      v11 = -1;
    else
      v11 = 500 * v10;
    *(_DWORD *)(v7 + 28) = v11;
    v12 = *(_DWORD *)(a1 + 664);
    if ( v12 != -1 )
      v9 = 500 * v12;
    *(_DWORD *)(v7 + 16) = v9;
    v8 = 0;
    *(_DWORD *)(v7 + 24) = 1000 * *(unsigned __int16 *)(a1 + 654);
    *(_QWORD *)(a2 + 56) = 36LL;
  }
  else
  {
    v8 = -1073741789;
    *(_QWORD *)(a2 + 56) = 0LL;
  }
  v39 = v8;
  v13 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v8;
  if ( v13 )
    goto LABEL_77;
  v41 = 0LL;
  IoGetActivityIdIrp(a2, &v41);
  v15 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v15 == 14 )
  {
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_77;
    v37 = *(_DWORD *)(a2 + 48);
    v17 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
    goto LABEL_76;
  }
  if ( *(_BYTE *)v15 != 15 )
  {
    if ( *(_BYTE *)v15 != 27 )
      goto LABEL_77;
    if ( *(_BYTE *)(v15 + 1) == 7 && !*(_DWORD *)(v15 + 8) )
    {
      if ( (byte_140173442 & 0x40) != 0 )
      {
        v16 = *(int **)(a2 + 56);
        if ( v16 )
          v3 = *v16;
        McTemplateK0pqd_EtwWriteTransfer(v14, v15, &v41, a2, v3, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_77;
    }
    if ( (byte_140173442 & 0x20) == 0 )
      goto LABEL_77;
    v17 = &EventPnpRequestComplete;
    v37 = *(_DWORD *)(a2 + 48);
LABEL_76:
    McTemplateK0pd_EtwWriteTransfer(v14, v17, &v41, a2, v37);
    goto LABEL_77;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_77;
  v18 = *(_QWORD *)(v15 + 8);
  v19 = 0;
  v20 = 0LL;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  if ( *(_BYTE *)(v18 + 2) != 40 )
  {
    v31 = *(_BYTE *)(v18 + 72);
    v20 = *(_BYTE **)(v18 + 32);
    v21 = *(_BYTE *)(v18 + 11);
    v19 = *(_BYTE *)(v18 + 4);
    if ( *(_BYTE *)(v18 + 2) )
      goto LABEL_77;
LABEL_51:
    LOBYTE(v14) = v31 - 8;
    if ( (v14 & 0x5D) != 0 )
      goto LABEL_77;
    v32 = *(_BYTE *)(v18 + 3);
    if ( v32 == 1 || !v20 || !v21 )
      goto LABEL_70;
    v33 = *v20 & 0x7F;
    if ( v33 == 114 || v33 == 115 )
    {
      v14 = (unsigned __int64)&v20[v21];
      LOBYTE(v18) = 0;
      if ( (unsigned __int64)(v20 + 8) > v14 )
        goto LABEL_68;
      v23 = v20[2];
      v22 = v20[1] & 0xF;
      v24 = v20[3];
    }
    else
    {
      v14 = (unsigned __int64)&v20[v21];
      LOBYTE(v18) = 0;
      if ( (unsigned __int64)(v20 + 8) > v14 )
        goto LABEL_68;
      v34 = v20 + 13;
      v22 = v20[2] & 0xF;
      v35 = v21;
      if ( (unsigned int)(unsigned __int8)v20[7] + 8 <= v21 )
        v35 = (unsigned __int8)v20[7] + 8;
      v14 = (unsigned __int64)&v20[v35];
      if ( (unsigned __int64)v34 <= v14 )
        v23 = v20[12];
      if ( (unsigned __int64)(v20 + 14) > v14 )
        v24 = 0;
      else
        v24 = *v34;
    }
    LOBYTE(v18) = 1;
LABEL_68:
    if ( (_BYTE)v18 )
      v25 = 1;
LABEL_70:
    if ( byte_140173441 < 0 )
    {
      if ( !v25 )
      {
        v24 = 0;
        v23 = 0;
        v22 = 0;
      }
      McTemplateK0pduuuuup_EtwWriteTransfer(v14, v18, &v41, a2, *(_DWORD *)(a2 + 48), v32, v19, v22, v23, v24, a2);
    }
    goto LABEL_77;
  }
  v26 = 0LL;
  v38 = 0;
  if ( *(_DWORD *)(v18 + 20) )
    goto LABEL_77;
  v27 = 0;
  v40 = *(_DWORD *)(v18 + 56);
  if ( !v40 )
    goto LABEL_77;
  while ( 1 )
  {
    v14 = *(unsigned int *)(v18 + 4LL * v27 + 120);
    if ( (unsigned int)v14 >= 0x80 )
    {
      v28 = *(unsigned int *)(v18 + 16);
      if ( (unsigned int)v14 < (unsigned int)v28 )
        break;
    }
LABEL_42:
    if ( ++v27 >= v40 )
      goto LABEL_48;
  }
  v29 = (unsigned int)v14;
  v30 = *(_DWORD *)(v14 + v18) - 64;
  if ( v30 )
  {
    v14 = (unsigned int)(v30 - 1);
    if ( (_DWORD)v14 )
    {
      if ( (_DWORD)v14 == 1 )
      {
        v14 = v29 + 40;
        if ( v29 + 40 <= v28 )
        {
          if ( *(_DWORD *)(v29 + v18 + 12) )
            v26 = (char *)(v29 + v18 + 32);
          v20 = *(_BYTE **)(v29 + v18 + 24);
          goto LABEL_47;
        }
      }
    }
    else
    {
      v14 = v29 + 56;
      if ( v29 + 56 <= v28 )
      {
        v38 = 1;
        if ( *(_BYTE *)(v29 + v18 + 10) )
          v26 = (char *)(v29 + v18 + 24);
        v19 = *(_BYTE *)(v29 + v18 + 8);
        v20 = *(_BYTE **)(v29 + v18 + 16);
        v21 = *(_BYTE *)(v29 + v18 + 9);
      }
    }
    goto LABEL_41;
  }
  v14 = v29 + 40;
  if ( v29 + 40 > v28 )
  {
LABEL_41:
    if ( v38 )
      goto LABEL_48;
    goto LABEL_42;
  }
  if ( *(_BYTE *)(v29 + v18 + 10) )
    v26 = (char *)(v29 + v18 + 24);
  v20 = *(_BYTE **)(v29 + v18 + 16);
LABEL_47:
  v21 = *(_BYTE *)(v29 + v18 + 9);
  v19 = *(_BYTE *)(v29 + v18 + 8);
LABEL_48:
  if ( v26 )
  {
    v31 = *v26;
    v25 = 0;
    goto LABEL_51;
  }
LABEL_77:
  IofCompleteRequest((PIRP)a2, 0);
  return v39;
}
