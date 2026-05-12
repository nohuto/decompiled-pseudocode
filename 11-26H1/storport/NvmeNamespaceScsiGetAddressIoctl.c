/*
 * XREFs of NvmeNamespaceScsiGetAddressIoctl @ 0x1401A9514
 * Callers:
 *     NvmeNamespaceDeviceControlIrp @ 0x1401BBC8C (NvmeNamespaceDeviceControlIrp.c)
 * Callees:
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall NvmeNamespaceScsiGetAddressIoctl(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 *v3; // rsi
  int v4; // ebx
  __int64 v7; // rdx
  int v8; // ecx
  __int64 v9; // rax
  bool v10; // zf
  unsigned __int64 v11; // rcx
  __int64 v12; // rdx
  int *v13; // rax
  const EVENT_DESCRIPTOR *v14; // rdx
  __int64 v15; // rdx
  char v16; // r13
  _BYTE *v17; // r9
  unsigned __int8 v18; // bp
  char v19; // r11
  char v20; // si
  char v21; // r10
  char v22; // r14
  char *v23; // r14
  unsigned int v24; // r12d
  unsigned __int64 v25; // r15
  __int64 v26; // r8
  int v27; // ecx
  char v28; // cl
  char v29; // al
  char v30; // r8
  char *v31; // r10
  unsigned int v32; // eax
  int v34; // [rsp+20h] [rbp-98h]
  char v35; // [rsp+60h] [rbp-58h]
  unsigned int v36; // [rsp+64h] [rbp-54h]
  unsigned int v37; // [rsp+68h] [rbp-50h]
  GUID v38; // [rsp+70h] [rbp-48h] BYREF

  v2 = *(_QWORD *)(a2 + 24);
  v3 = (__int64 *)(a2 + 184);
  v4 = 0;
  if ( v2 && *(_DWORD *)(*v3 + 8) >= 8u )
  {
    *(_DWORD *)v2 = 8;
    v7 = 0LL;
    *(_BYTE *)(v2 + 4) = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 128LL) + 56LL);
    do
    {
      *(_BYTE *)(v2 + v7 + 5) = *(_BYTE *)(*(_QWORD *)(a1 + 16) + v7 + 616);
      ++v7;
    }
    while ( v7 < 2 );
    v8 = 0;
    *(_BYTE *)(v2 + 7) = *(_BYTE *)(a1 + 56);
    v9 = 8LL;
  }
  else
  {
    v8 = -1073741789;
    v9 = 0LL;
  }
  *(_QWORD *)(a2 + 56) = v9;
  v10 = StorEtwLoggingEnabled == 0;
  v36 = v8;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v8;
  if ( v10 )
    goto LABEL_73;
  v38 = 0LL;
  IoGetActivityIdIrp(a2, &v38);
  v12 = *v3;
  if ( *(_BYTE *)*v3 == 14 )
  {
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_73;
    v34 = *(_DWORD *)(a2 + 48);
    v14 = &EventNonReadWriteRequestComplete;
    goto LABEL_72;
  }
  if ( *(_BYTE *)*v3 != 15 )
  {
    if ( *(_BYTE *)*v3 != 27 )
      goto LABEL_73;
    if ( *(_BYTE *)(v12 + 1) == 7 && !*(_DWORD *)(v12 + 8) )
    {
      if ( (byte_140173442 & 0x40) != 0 )
      {
        v13 = *(int **)(a2 + 56);
        if ( v13 )
          v4 = *v13;
        McTemplateK0pqd_EtwWriteTransfer(v11, v12, &v38, a2, v4, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_73;
    }
    if ( (byte_140173442 & 0x20) == 0 )
      goto LABEL_73;
    v14 = &EventPnpRequestComplete;
    v34 = *(_DWORD *)(a2 + 48);
LABEL_72:
    McTemplateK0pd_EtwWriteTransfer(v11, v14, &v38, a2, v34);
    goto LABEL_73;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_73;
  v15 = *(_QWORD *)(v12 + 8);
  v16 = 0;
  v17 = 0LL;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  if ( *(_BYTE *)(v15 + 2) != 40 )
  {
    v28 = *(_BYTE *)(v15 + 72);
    v17 = *(_BYTE **)(v15 + 32);
    v18 = *(_BYTE *)(v15 + 11);
    v16 = *(_BYTE *)(v15 + 4);
    if ( *(_BYTE *)(v15 + 2) )
      goto LABEL_73;
LABEL_47:
    LOBYTE(v11) = v28 - 8;
    if ( (v11 & 0x5D) != 0 )
      goto LABEL_73;
    if ( *(_BYTE *)(v15 + 3) == 1 || !v17 || !v18 )
      goto LABEL_66;
    v29 = *v17 & 0x7F;
    if ( v29 == 114 || v29 == 115 )
    {
      v11 = (unsigned __int64)&v17[v18];
      v30 = 0;
      if ( (unsigned __int64)(v17 + 8) > v11 )
        goto LABEL_64;
      v20 = v17[2];
      v19 = v17[1] & 0xF;
      v21 = v17[3];
    }
    else
    {
      v11 = (unsigned __int64)&v17[v18];
      v30 = 0;
      if ( (unsigned __int64)(v17 + 8) > v11 )
        goto LABEL_64;
      v31 = v17 + 13;
      v19 = v17[2] & 0xF;
      v32 = v18;
      if ( (unsigned int)(unsigned __int8)v17[7] + 8 <= v18 )
        v32 = (unsigned __int8)v17[7] + 8;
      v11 = (unsigned __int64)&v17[v32];
      if ( (unsigned __int64)v31 <= v11 )
        v20 = v17[12];
      if ( (unsigned __int64)(v17 + 14) > v11 )
        v21 = 0;
      else
        v21 = *v31;
    }
    v30 = 1;
LABEL_64:
    if ( v30 )
      v22 = 1;
LABEL_66:
    if ( byte_140173441 < 0 )
    {
      if ( !v22 )
      {
        v21 = 0;
        v20 = 0;
        v19 = 0;
      }
      McTemplateK0pduuuuup_EtwWriteTransfer(
        v11,
        v15,
        &v38,
        a2,
        *(_DWORD *)(a2 + 48),
        *(_BYTE *)(v15 + 3),
        v16,
        v19,
        v20,
        v21,
        a2);
    }
    goto LABEL_73;
  }
  v23 = 0LL;
  v35 = 0;
  if ( *(_DWORD *)(v15 + 20) )
    goto LABEL_73;
  v24 = 0;
  v37 = *(_DWORD *)(v15 + 56);
  if ( !v37 )
    goto LABEL_73;
  while ( 1 )
  {
    v11 = *(unsigned int *)(v15 + 4LL * v24 + 120);
    if ( (unsigned int)v11 >= 0x80 )
    {
      v25 = *(unsigned int *)(v15 + 16);
      if ( (unsigned int)v11 < (unsigned int)v25 )
        break;
    }
LABEL_38:
    if ( ++v24 >= v37 )
      goto LABEL_44;
  }
  v26 = (unsigned int)v11;
  v27 = *(_DWORD *)(v11 + v15) - 64;
  if ( v27 )
  {
    v11 = (unsigned int)(v27 - 1);
    if ( (_DWORD)v11 )
    {
      if ( (_DWORD)v11 == 1 )
      {
        v11 = v26 + 40;
        if ( v26 + 40 <= v25 )
        {
          if ( *(_DWORD *)(v26 + v15 + 12) )
            v23 = (char *)(v26 + v15 + 32);
          v17 = *(_BYTE **)(v26 + v15 + 24);
          goto LABEL_43;
        }
      }
    }
    else
    {
      v11 = v26 + 56;
      if ( v26 + 56 <= v25 )
      {
        v35 = 1;
        if ( *(_BYTE *)(v26 + v15 + 10) )
          v23 = (char *)(v26 + v15 + 24);
        v16 = *(_BYTE *)(v26 + v15 + 8);
        v17 = *(_BYTE **)(v26 + v15 + 16);
        v18 = *(_BYTE *)(v26 + v15 + 9);
      }
    }
    goto LABEL_37;
  }
  v11 = v26 + 40;
  if ( v26 + 40 > v25 )
  {
LABEL_37:
    if ( v35 )
      goto LABEL_44;
    goto LABEL_38;
  }
  if ( *(_BYTE *)(v26 + v15 + 10) )
    v23 = (char *)(v26 + v15 + 24);
  v17 = *(_BYTE **)(v26 + v15 + 16);
LABEL_43:
  v18 = *(_BYTE *)(v26 + v15 + 9);
  v16 = *(_BYTE *)(v26 + v15 + 8);
LABEL_44:
  if ( v23 )
  {
    v28 = *v23;
    v22 = 0;
    goto LABEL_47;
  }
LABEL_73:
  IofCompleteRequest((PIRP)a2, 0);
  return v36;
}
