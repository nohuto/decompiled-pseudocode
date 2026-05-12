/*
 * XREFs of RaUnitScsiGetAddressIoctl @ 0x1401B3AD4
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x14001D890 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall RaUnitScsiGetAddressIoctl(__int64 a1, __int64 a2)
{
  int v3; // ebx
  __int64 v4; // rdx
  int v5; // eax
  bool v6; // zf
  unsigned __int64 v7; // rcx
  __int64 v8; // rdx
  const EVENT_DESCRIPTOR *v10; // rdx
  int *v11; // rax
  __int64 v12; // rdx
  char v13; // r13
  _BYTE *v14; // r9
  unsigned __int8 v15; // bp
  char v16; // r11
  char v17; // si
  char v18; // r10
  char v19; // r14
  char *v20; // r14
  unsigned int v21; // r12d
  unsigned __int64 v22; // r15
  __int64 v23; // r8
  int v24; // ecx
  char v25; // cl
  char v26; // r8
  char v27; // al
  char *v28; // r10
  unsigned int v29; // eax
  int v30; // [rsp+20h] [rbp-98h]
  char v31; // [rsp+60h] [rbp-58h]
  unsigned int v32; // [rsp+64h] [rbp-54h]
  unsigned int v33; // [rsp+68h] [rbp-50h]
  GUID v34; // [rsp+70h] [rbp-48h] BYREF

  v3 = 0;
  v4 = *(_QWORD *)(a2 + 24);
  if ( *(_DWORD *)(*(_QWORD *)(a2 + 184) + 8LL) < 8u )
  {
    v5 = -1073741789;
  }
  else
  {
    *(_DWORD *)v4 = 8;
    *(_BYTE *)(v4 + 4) = *(_BYTE *)(*(_QWORD *)(a1 + 24) + 56LL);
    *(_BYTE *)(v4 + 5) = *(_BYTE *)(a1 + 104);
    *(_BYTE *)(v4 + 6) = *(_BYTE *)(a1 + 105);
    *(_BYTE *)(v4 + 7) = *(_BYTE *)(a1 + 106);
    v5 = 0;
    *(_QWORD *)(a2 + 56) = 8LL;
  }
  v6 = StorEtwLoggingEnabled == 0;
  v32 = v5;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v5;
  if ( v6 )
    goto LABEL_7;
  v34 = 0LL;
  IoGetActivityIdIrp(a2, &v34);
  v8 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v8 == 14 )
  {
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_7;
    v30 = *(_DWORD *)(a2 + 48);
    v10 = &EventNonReadWriteRequestComplete;
    goto LABEL_11;
  }
  if ( *(_BYTE *)v8 != 15 )
  {
    if ( *(_BYTE *)v8 != 27 )
      goto LABEL_7;
    if ( *(_BYTE *)(v8 + 1) == 7 && !*(_DWORD *)(v8 + 8) )
    {
      if ( (byte_140173442 & 0x40) != 0 )
      {
        v11 = *(int **)(a2 + 56);
        if ( v11 )
          v3 = *v11;
        McTemplateK0pqd_EtwWriteTransfer(v7, v8, &v34, a2, v3, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_7;
    }
    if ( (byte_140173442 & 0x20) == 0 )
      goto LABEL_7;
    v10 = &EventPnpRequestComplete;
    v30 = *(_DWORD *)(a2 + 48);
LABEL_11:
    McTemplateK0pd_EtwWriteTransfer(v7, v10, &v34, a2, v30);
    goto LABEL_7;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_7;
  v12 = *(_QWORD *)(v8 + 8);
  v13 = 0;
  v14 = 0LL;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  if ( *(_BYTE *)(v12 + 2) != 40 )
  {
    v25 = *(_BYTE *)(v12 + 72);
    v14 = *(_BYTE **)(v12 + 32);
    v15 = *(_BYTE *)(v12 + 11);
    v13 = *(_BYTE *)(v12 + 4);
    if ( *(_BYTE *)(v12 + 2) )
      goto LABEL_7;
LABEL_49:
    LOBYTE(v7) = v25 - 8;
    if ( (v7 & 0x5D) != 0 )
      goto LABEL_7;
    v26 = *(_BYTE *)(v12 + 3);
    if ( v26 == 1 || !v14 || !v15 )
      goto LABEL_68;
    v27 = *v14 & 0x7F;
    if ( v27 == 114 || v27 == 115 )
    {
      v7 = (unsigned __int64)&v14[v15];
      LOBYTE(v12) = 0;
      if ( (unsigned __int64)(v14 + 8) > v7 )
        goto LABEL_66;
      v17 = v14[2];
      v16 = v14[1] & 0xF;
      v18 = v14[3];
    }
    else
    {
      v7 = (unsigned __int64)&v14[v15];
      LOBYTE(v12) = 0;
      if ( (unsigned __int64)(v14 + 8) > v7 )
        goto LABEL_66;
      v28 = v14 + 13;
      v16 = v14[2] & 0xF;
      v29 = v15;
      if ( (unsigned int)(unsigned __int8)v14[7] + 8 <= v15 )
        v29 = (unsigned __int8)v14[7] + 8;
      v7 = (unsigned __int64)&v14[v29];
      if ( (unsigned __int64)v28 <= v7 )
        v17 = v14[12];
      if ( (unsigned __int64)(v14 + 14) > v7 )
        v18 = 0;
      else
        v18 = *v28;
    }
    LOBYTE(v12) = 1;
LABEL_66:
    if ( (_BYTE)v12 )
      v19 = 1;
LABEL_68:
    if ( byte_140173441 < 0 )
    {
      if ( !v19 )
      {
        v18 = 0;
        v17 = 0;
        v16 = 0;
      }
      McTemplateK0pduuuuup_EtwWriteTransfer(v7, v12, &v34, a2, *(_DWORD *)(a2 + 48), v26, v13, v16, v17, v18, a2);
    }
    goto LABEL_7;
  }
  v20 = 0LL;
  v31 = 0;
  if ( *(_DWORD *)(v12 + 20) )
    goto LABEL_7;
  v21 = 0;
  v33 = *(_DWORD *)(v12 + 56);
  if ( !v33 )
    goto LABEL_7;
  while ( 1 )
  {
    v7 = *(unsigned int *)(v12 + 4LL * v21 + 120);
    if ( (unsigned int)v7 >= 0x80 )
    {
      v22 = *(unsigned int *)(v12 + 16);
      if ( (unsigned int)v7 < (unsigned int)v22 )
        break;
    }
LABEL_39:
    if ( ++v21 >= v33 )
      goto LABEL_46;
  }
  v23 = (unsigned int)v7;
  v24 = *(_DWORD *)(v7 + v12) - 64;
  if ( v24 )
  {
    v7 = (unsigned int)(v24 - 1);
    if ( (_DWORD)v7 )
    {
      if ( (_DWORD)v7 == 1 )
      {
        v7 = v23 + 40;
        if ( v23 + 40 <= v22 )
        {
          if ( *(_DWORD *)(v23 + v12 + 12) )
            v20 = (char *)(v23 + v12 + 32);
          v14 = *(_BYTE **)(v23 + v12 + 24);
          goto LABEL_45;
        }
      }
    }
    else
    {
      v7 = v23 + 56;
      if ( v23 + 56 <= v22 )
      {
        v31 = 1;
        if ( *(_BYTE *)(v23 + v12 + 10) )
          v20 = (char *)(v23 + v12 + 24);
        v13 = *(_BYTE *)(v23 + v12 + 8);
        v14 = *(_BYTE **)(v23 + v12 + 16);
        v15 = *(_BYTE *)(v23 + v12 + 9);
      }
    }
    goto LABEL_38;
  }
  v7 = v23 + 40;
  if ( v23 + 40 > v22 )
  {
LABEL_38:
    if ( v31 )
      goto LABEL_46;
    goto LABEL_39;
  }
  if ( *(_BYTE *)(v23 + v12 + 10) )
    v20 = (char *)(v23 + v12 + 24);
  v14 = *(_BYTE **)(v23 + v12 + 16);
LABEL_45:
  v15 = *(_BYTE *)(v23 + v12 + 9);
  v13 = *(_BYTE *)(v23 + v12 + 8);
LABEL_46:
  if ( v20 )
  {
    v25 = *v20;
    v19 = 0;
    goto LABEL_49;
  }
LABEL_7:
  IofCompleteRequest((PIRP)a2, 0);
  return v32;
}
