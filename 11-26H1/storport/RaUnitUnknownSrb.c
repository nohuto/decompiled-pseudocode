/*
 * XREFs of RaUnitUnknownSrb @ 0x14018F128
 * Callers:
 *     RaDriverScsiIrp @ 0x140003DF0 (RaDriverScsiIrp.c)
 *     RaUnitScsiIrp @ 0x140004D30 (RaUnitScsiIrp.c)
 * Callees:
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall RaUnitUnknownSrb(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  bool v4; // zf
  int v5; // ebx
  unsigned __int64 v6; // rcx
  __int64 v7; // rdx
  int *v8; // rax
  const EVENT_DESCRIPTOR *v9; // rdx
  __int64 v10; // rdx
  char v11; // r13
  _BYTE *v12; // r9
  unsigned __int8 v13; // bp
  char v14; // si
  char v15; // r11
  char v16; // r10
  char v17; // r14
  char *v18; // r14
  unsigned int v19; // r12d
  unsigned __int64 v20; // r15
  __int64 v21; // r8
  int v22; // ecx
  char v23; // cl
  char v24; // r8
  char v25; // al
  char *v26; // r10
  unsigned int v27; // eax
  int v29; // [rsp+20h] [rbp-88h]
  char v30; // [rsp+60h] [rbp-48h]
  unsigned int v31; // [rsp+64h] [rbp-44h]
  GUID v32; // [rsp+68h] [rbp-40h] BYREF

  v3 = *(_QWORD *)(*(_QWORD *)(a2 + 184) + 8LL);
  v4 = *(_BYTE *)(v3 + 2) == 40;
  *(_BYTE *)(v3 + 3) = 48;
  if ( v4 )
    *(_DWORD *)(v3 + 44) = -1073741637;
  else
    *(_DWORD *)(v3 + 64) = -1073741637;
  v5 = 0;
  *(_BYTE *)(a2 + 141) = -84;
  v4 = StorEtwLoggingEnabled == 0;
  *(_DWORD *)(a2 + 48) = -1073741637;
  if ( v4 )
    goto LABEL_70;
  v32 = 0LL;
  IoGetActivityIdIrp(a2, &v32);
  v7 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v7 == 14 )
  {
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_70;
    v29 = *(_DWORD *)(a2 + 48);
    v9 = &EventNonReadWriteRequestComplete;
    goto LABEL_69;
  }
  if ( *(_BYTE *)v7 != 15 )
  {
    if ( *(_BYTE *)v7 != 27 )
      goto LABEL_70;
    if ( *(_BYTE *)(v7 + 1) == 7 && !*(_DWORD *)(v7 + 8) )
    {
      if ( (byte_140173442 & 0x40) != 0 )
      {
        v8 = *(int **)(a2 + 56);
        if ( v8 )
          v5 = *v8;
        McTemplateK0pqd_EtwWriteTransfer(v6, v7, &v32, a2, v5, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_70;
    }
    if ( (byte_140173442 & 0x20) == 0 )
      goto LABEL_70;
    v9 = &EventPnpRequestComplete;
    v29 = *(_DWORD *)(a2 + 48);
LABEL_69:
    McTemplateK0pd_EtwWriteTransfer(v6, v9, &v32, a2, v29);
    goto LABEL_70;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_70;
  v10 = *(_QWORD *)(v7 + 8);
  v11 = 0;
  v12 = 0LL;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  if ( *(_BYTE *)(v10 + 2) != 40 )
  {
    v23 = *(_BYTE *)(v10 + 72);
    v12 = *(_BYTE **)(v10 + 32);
    v13 = *(_BYTE *)(v10 + 11);
    v11 = *(_BYTE *)(v10 + 4);
    if ( *(_BYTE *)(v10 + 2) )
      goto LABEL_70;
LABEL_44:
    LOBYTE(v6) = v23 - 8;
    if ( (v6 & 0x5D) != 0 )
      goto LABEL_70;
    v24 = *(_BYTE *)(v10 + 3);
    if ( v24 == 1 || !v12 || !v13 )
      goto LABEL_63;
    v25 = *v12 & 0x7F;
    if ( v25 == 114 || v25 == 115 )
    {
      v6 = (unsigned __int64)&v12[v13];
      LOBYTE(v10) = 0;
      if ( (unsigned __int64)(v12 + 8) > v6 )
        goto LABEL_61;
      v15 = v12[2];
      v14 = v12[1] & 0xF;
      v16 = v12[3];
    }
    else
    {
      v6 = (unsigned __int64)&v12[v13];
      LOBYTE(v10) = 0;
      if ( (unsigned __int64)(v12 + 8) > v6 )
        goto LABEL_61;
      v26 = v12 + 13;
      v14 = v12[2] & 0xF;
      v27 = v13;
      if ( (unsigned int)(unsigned __int8)v12[7] + 8 <= v13 )
        v27 = (unsigned __int8)v12[7] + 8;
      v6 = (unsigned __int64)&v12[v27];
      if ( (unsigned __int64)v26 <= v6 )
        v15 = v12[12];
      if ( (unsigned __int64)(v12 + 14) > v6 )
        v16 = 0;
      else
        v16 = *v26;
    }
    LOBYTE(v10) = 1;
LABEL_61:
    if ( (_BYTE)v10 )
      v17 = 1;
LABEL_63:
    if ( byte_140173441 < 0 )
    {
      if ( !v17 )
      {
        v16 = 0;
        v15 = 0;
        v14 = 0;
      }
      McTemplateK0pduuuuup_EtwWriteTransfer(v6, v10, &v32, a2, *(_DWORD *)(a2 + 48), v24, v11, v14, v15, v16, a2);
    }
    goto LABEL_70;
  }
  v18 = 0LL;
  v30 = 0;
  if ( *(_DWORD *)(v10 + 20) )
    goto LABEL_70;
  v19 = 0;
  v31 = *(_DWORD *)(v10 + 56);
  if ( !v31 )
    goto LABEL_70;
  while ( 1 )
  {
    v6 = *(unsigned int *)(v10 + 4LL * v19 + 120);
    if ( (unsigned int)v6 >= 0x80 )
    {
      v20 = *(unsigned int *)(v10 + 16);
      if ( (unsigned int)v6 < (unsigned int)v20 )
        break;
    }
LABEL_35:
    if ( ++v19 >= v31 )
      goto LABEL_41;
  }
  v21 = (unsigned int)v6;
  v22 = *(_DWORD *)(v6 + v10) - 64;
  if ( v22 )
  {
    v6 = (unsigned int)(v22 - 1);
    if ( (_DWORD)v6 )
    {
      if ( (_DWORD)v6 == 1 )
      {
        v6 = v21 + 40;
        if ( v21 + 40 <= v20 )
        {
          if ( *(_DWORD *)(v21 + v10 + 12) )
            v18 = (char *)(v21 + v10 + 32);
          v12 = *(_BYTE **)(v21 + v10 + 24);
          goto LABEL_40;
        }
      }
    }
    else
    {
      v6 = v21 + 56;
      if ( v21 + 56 <= v20 )
      {
        v30 = 1;
        if ( *(_BYTE *)(v21 + v10 + 10) )
          v18 = (char *)(v21 + v10 + 24);
        v11 = *(_BYTE *)(v21 + v10 + 8);
        v12 = *(_BYTE **)(v21 + v10 + 16);
        v13 = *(_BYTE *)(v21 + v10 + 9);
      }
    }
    goto LABEL_34;
  }
  v6 = v21 + 40;
  if ( v21 + 40 > v20 )
  {
LABEL_34:
    if ( v30 )
      goto LABEL_41;
    goto LABEL_35;
  }
  if ( *(_BYTE *)(v21 + v10 + 10) )
    v18 = (char *)(v21 + v10 + 24);
  v12 = *(_BYTE **)(v21 + v10 + 16);
LABEL_40:
  v13 = *(_BYTE *)(v21 + v10 + 9);
  v11 = *(_BYTE *)(v21 + v10 + 8);
LABEL_41:
  if ( v18 )
  {
    v23 = *v18;
    v17 = 0;
    goto LABEL_44;
  }
LABEL_70:
  IofCompleteRequest((PIRP)a2, 0);
  return 3221225659LL;
}
