/*
 * XREFs of NvmeNamespaceStorageQueryDeviceNumaPropertyIoctl @ 0x1401AD7C4
 * Callers:
 *     NvmeNamespaceStorageQueryPropertyIoctl @ 0x1401B9BD8 (NvmeNamespaceStorageQueryPropertyIoctl.c)
 * Callees:
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int64 __fastcall NvmeNamespaceStorageQueryDeviceNumaPropertyIoctl(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rsi
  int v3; // ebx
  __int64 v4; // rax
  int v7; // r14d
  int v8; // ecx
  unsigned int v9; // edx
  __int64 v10; // rax
  bool v11; // zf
  unsigned __int64 v12; // rcx
  __int64 v13; // rdx
  int *v14; // rax
  const EVENT_DESCRIPTOR *v15; // rdx
  __int64 v16; // rdx
  char v17; // r13
  _BYTE *v18; // r9
  unsigned __int8 v19; // bp
  char v20; // r11
  char v21; // si
  char v22; // r10
  char v23; // r14
  char *v24; // r14
  unsigned int v25; // r12d
  unsigned __int64 v26; // r15
  __int64 v27; // r8
  int v28; // ecx
  char v29; // cl
  char v30; // r8
  char v31; // al
  char *v32; // r10
  unsigned int v33; // eax
  int v35; // [rsp+20h] [rbp-98h]
  char v36; // [rsp+60h] [rbp-58h]
  unsigned int v37; // [rsp+64h] [rbp-54h]
  unsigned int v38; // [rsp+68h] [rbp-50h]
  GUID v39; // [rsp+70h] [rbp-48h] BYREF

  v2 = *(_DWORD **)(a2 + 24);
  v3 = 0;
  v4 = *(_QWORD *)(a2 + 184);
  v37 = 0;
  v7 = 0;
  v8 = v2[1];
  v9 = *(_DWORD *)(v4 + 8);
  if ( v8 )
  {
    v10 = 0LL;
    if ( v8 != 1 )
    {
      v7 = -1073741637;
      v37 = -1073741637;
    }
  }
  else if ( v9 >= 8 )
  {
    if ( v9 >= 0xC )
    {
      memset_0(v2, 0, *(unsigned int *)(v4 + 8));
      *v2 = 12;
      v2[1] = 12;
      v2[2] = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 128LL) + 1024LL);
      v10 = 12LL;
    }
    else
    {
      *v2 = 12;
      v10 = 8LL;
      v2[1] = 12;
      v37 = 0;
    }
  }
  else
  {
    v7 = -1073741789;
    v10 = 0LL;
    v37 = -1073741789;
  }
  *(_QWORD *)(a2 + 56) = v10;
  v11 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v7;
  if ( v11 )
    goto LABEL_75;
  v39 = 0LL;
  IoGetActivityIdIrp(a2, &v39);
  v13 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v13 == 14 )
  {
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_75;
    v35 = *(_DWORD *)(a2 + 48);
    v15 = &EventNonReadWriteRequestComplete;
    goto LABEL_74;
  }
  if ( *(_BYTE *)v13 != 15 )
  {
    if ( *(_BYTE *)v13 != 27 )
      goto LABEL_75;
    if ( *(_BYTE *)(v13 + 1) == 7 && !*(_DWORD *)(v13 + 8) )
    {
      if ( (byte_140173442 & 0x40) != 0 )
      {
        v14 = *(int **)(a2 + 56);
        if ( v14 )
          v3 = *v14;
        McTemplateK0pqd_EtwWriteTransfer(v12, v13, &v39, a2, v3, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_75;
    }
    if ( (byte_140173442 & 0x20) == 0 )
      goto LABEL_75;
    v15 = &EventPnpRequestComplete;
    v35 = *(_DWORD *)(a2 + 48);
LABEL_74:
    McTemplateK0pd_EtwWriteTransfer(v12, v15, &v39, a2, v35);
    goto LABEL_75;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_75;
  v16 = *(_QWORD *)(v13 + 8);
  v17 = 0;
  v18 = 0LL;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  if ( *(_BYTE *)(v16 + 2) != 40 )
  {
    v29 = *(_BYTE *)(v16 + 72);
    v18 = *(_BYTE **)(v16 + 32);
    v19 = *(_BYTE *)(v16 + 11);
    v17 = *(_BYTE *)(v16 + 4);
    if ( *(_BYTE *)(v16 + 2) )
      goto LABEL_75;
LABEL_49:
    LOBYTE(v12) = v29 - 8;
    if ( (v12 & 0x5D) != 0 )
      goto LABEL_75;
    v30 = *(_BYTE *)(v16 + 3);
    if ( v30 == 1 || !v18 || !v19 )
      goto LABEL_68;
    v31 = *v18 & 0x7F;
    if ( v31 == 114 || v31 == 115 )
    {
      v12 = (unsigned __int64)&v18[v19];
      LOBYTE(v16) = 0;
      if ( (unsigned __int64)(v18 + 8) > v12 )
        goto LABEL_66;
      v21 = v18[2];
      v20 = v18[1] & 0xF;
      v22 = v18[3];
    }
    else
    {
      v12 = (unsigned __int64)&v18[v19];
      LOBYTE(v16) = 0;
      if ( (unsigned __int64)(v18 + 8) > v12 )
        goto LABEL_66;
      v32 = v18 + 13;
      v20 = v18[2] & 0xF;
      v33 = v19;
      if ( (unsigned int)(unsigned __int8)v18[7] + 8 <= v19 )
        v33 = (unsigned __int8)v18[7] + 8;
      v12 = (unsigned __int64)&v18[v33];
      if ( (unsigned __int64)v32 <= v12 )
        v21 = v18[12];
      if ( (unsigned __int64)(v18 + 14) > v12 )
        v22 = 0;
      else
        v22 = *v32;
    }
    LOBYTE(v16) = 1;
LABEL_66:
    if ( (_BYTE)v16 )
      v23 = 1;
LABEL_68:
    if ( byte_140173441 < 0 )
    {
      if ( !v23 )
      {
        v22 = 0;
        v21 = 0;
        v20 = 0;
      }
      McTemplateK0pduuuuup_EtwWriteTransfer(v12, v16, &v39, a2, *(_DWORD *)(a2 + 48), v30, v17, v20, v21, v22, a2);
    }
    goto LABEL_75;
  }
  v24 = 0LL;
  v36 = 0;
  if ( *(_DWORD *)(v16 + 20) )
    goto LABEL_75;
  v25 = 0;
  v38 = *(_DWORD *)(v16 + 56);
  if ( !v38 )
    goto LABEL_75;
  while ( 1 )
  {
    v12 = *(unsigned int *)(v16 + 4LL * v25 + 120);
    if ( (unsigned int)v12 >= 0x80 )
    {
      v26 = *(unsigned int *)(v16 + 16);
      if ( (unsigned int)v12 < (unsigned int)v26 )
        break;
    }
LABEL_40:
    if ( ++v25 >= v38 )
      goto LABEL_46;
  }
  v27 = (unsigned int)v12;
  v28 = *(_DWORD *)(v12 + v16) - 64;
  if ( v28 )
  {
    v12 = (unsigned int)(v28 - 1);
    if ( (_DWORD)v12 )
    {
      if ( (_DWORD)v12 == 1 )
      {
        v12 = v27 + 40;
        if ( v27 + 40 <= v26 )
        {
          if ( *(_DWORD *)(v27 + v16 + 12) )
            v24 = (char *)(v27 + v16 + 32);
          v18 = *(_BYTE **)(v27 + v16 + 24);
          goto LABEL_45;
        }
      }
    }
    else
    {
      v12 = v27 + 56;
      if ( v27 + 56 <= v26 )
      {
        v36 = 1;
        if ( *(_BYTE *)(v27 + v16 + 10) )
          v24 = (char *)(v27 + v16 + 24);
        v17 = *(_BYTE *)(v27 + v16 + 8);
        v18 = *(_BYTE **)(v27 + v16 + 16);
        v19 = *(_BYTE *)(v27 + v16 + 9);
      }
    }
    goto LABEL_39;
  }
  v12 = v27 + 40;
  if ( v27 + 40 > v26 )
  {
LABEL_39:
    if ( v36 )
      goto LABEL_46;
    goto LABEL_40;
  }
  if ( *(_BYTE *)(v27 + v16 + 10) )
    v24 = (char *)(v27 + v16 + 24);
  v18 = *(_BYTE **)(v27 + v16 + 16);
LABEL_45:
  v19 = *(_BYTE *)(v27 + v16 + 9);
  v17 = *(_BYTE *)(v27 + v16 + 8);
LABEL_46:
  if ( v24 )
  {
    v29 = *v24;
    v23 = 0;
    goto LABEL_49;
  }
LABEL_75:
  IofCompleteRequest((PIRP)a2, 0);
  return v37;
}
