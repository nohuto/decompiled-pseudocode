/*
 * XREFs of RaUnitGetQOSIoctl @ 0x14009C1F4
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x14001D890 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     WPP_SF_q @ 0x14005C1C0 (WPP_SF_q.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall RaUnitGetQOSIoctl(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v4; // rcx
  __int64 v6; // rdx
  int v7; // ebx
  int v8; // eax
  int v9; // eax
  int v10; // r9d
  int v11; // r9d
  int v12; // r9d
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
  int v37; // [rsp+20h] [rbp-A8h]
  char v38; // [rsp+60h] [rbp-68h]
  unsigned int v39; // [rsp+64h] [rbp-64h]
  unsigned int v40; // [rsp+68h] [rbp-60h]
  GUID v41; // [rsp+70h] [rbp-58h] BYREF

  v2 = *(_QWORD *)(a2 + 184);
  v4 = *(_QWORD *)(a2 + 24);
  v6 = 36LL;
  if ( *(_DWORD *)(v2 + 8) >= 0x24u )
  {
    v7 = 0;
    *(_QWORD *)(v4 + 8) = 0LL;
    *(_QWORD *)(v4 + 16) = 0LL;
    *(_QWORD *)(v4 + 24) = 0LL;
    *(_DWORD *)(v4 + 32) = 0;
    *(_DWORD *)v4 = 36;
    *(_DWORD *)(v4 + 4) = 36;
    *(_BYTE *)(v4 + 8) = *(_BYTE *)(a1 + 3368);
    *(_DWORD *)(v4 + 32) = *(_DWORD *)(a1 + 3380);
    *(_DWORD *)(v4 + 12) = *(_DWORD *)(a1 + 3372);
    *(_DWORD *)(v4 + 20) = 1000 * *(_DWORD *)(a1 + 3384);
    v9 = -1;
    v10 = *(_DWORD *)(a1 + 3376);
    if ( v10 == -1 )
      v11 = -1;
    else
      v11 = 500 * v10;
    *(_DWORD *)(v4 + 28) = v11;
    v12 = *(_DWORD *)(a1 + 3392);
    if ( v12 != -1 )
      v9 = 500 * v12;
    *(_DWORD *)(v4 + 16) = v9;
    *(_DWORD *)(v4 + 24) = 1000 * *(_DWORD *)(a1 + 3388);
    v8 = 0;
  }
  else
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_q(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x27u,
        (__int64)&WPP_25fa594137633db1985de5dda85c818b_Traceguids,
        a1);
    }
    v7 = 0;
    v8 = -1073741789;
    v6 = 0LL;
  }
  v39 = v8;
  *(_QWORD *)(a2 + 56) = v6;
  v13 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v8;
  if ( v13 )
    goto LABEL_79;
  v41 = 0LL;
  IoGetActivityIdIrp(a2, &v41);
  v15 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v15 == 14 )
  {
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_79;
    v37 = *(_DWORD *)(a2 + 48);
    v17 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
    goto LABEL_78;
  }
  if ( *(_BYTE *)v15 != 15 )
  {
    if ( *(_BYTE *)v15 != 27 )
      goto LABEL_79;
    if ( *(_BYTE *)(v15 + 1) == 7 && !*(_DWORD *)(v15 + 8) )
    {
      if ( (byte_140173442 & 0x40) != 0 )
      {
        v16 = *(int **)(a2 + 56);
        if ( v16 )
          v7 = *v16;
        McTemplateK0pqd_EtwWriteTransfer(v14, v15, &v41, a2, v7, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_79;
    }
    if ( (byte_140173442 & 0x20) == 0 )
      goto LABEL_79;
    v17 = &EventPnpRequestComplete;
    v37 = *(_DWORD *)(a2 + 48);
LABEL_78:
    McTemplateK0pd_EtwWriteTransfer(v14, v17, &v41, a2, v37);
    goto LABEL_79;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_79;
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
      goto LABEL_79;
LABEL_53:
    LOBYTE(v14) = v31 - 8;
    if ( (v14 & 0x5D) != 0 )
      goto LABEL_79;
    v32 = *(_BYTE *)(v18 + 3);
    if ( v32 == 1 || !v20 || !v21 )
      goto LABEL_72;
    v33 = *v20 & 0x7F;
    if ( v33 == 114 || v33 == 115 )
    {
      v14 = (unsigned __int64)&v20[v21];
      LOBYTE(v18) = 0;
      if ( (unsigned __int64)(v20 + 8) > v14 )
        goto LABEL_70;
      v23 = v20[2];
      v22 = v20[1] & 0xF;
      v24 = v20[3];
    }
    else
    {
      v14 = (unsigned __int64)&v20[v21];
      LOBYTE(v18) = 0;
      if ( (unsigned __int64)(v20 + 8) > v14 )
        goto LABEL_70;
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
LABEL_70:
    if ( (_BYTE)v18 )
      v25 = 1;
LABEL_72:
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
    goto LABEL_79;
  }
  v26 = 0LL;
  v38 = 0;
  if ( *(_DWORD *)(v18 + 20) )
    goto LABEL_79;
  v27 = 0;
  v40 = *(_DWORD *)(v18 + 56);
  if ( !v40 )
    goto LABEL_79;
  while ( 1 )
  {
    v14 = *(unsigned int *)(v18 + 4LL * v27 + 120);
    if ( (unsigned int)v14 >= 0x80 )
    {
      v28 = *(unsigned int *)(v18 + 16);
      if ( (unsigned int)v14 < (unsigned int)v28 )
        break;
    }
LABEL_44:
    if ( ++v27 >= v40 )
      goto LABEL_50;
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
          goto LABEL_49;
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
    goto LABEL_43;
  }
  v14 = v29 + 40;
  if ( v29 + 40 > v28 )
  {
LABEL_43:
    if ( v38 )
      goto LABEL_50;
    goto LABEL_44;
  }
  if ( *(_BYTE *)(v29 + v18 + 10) )
    v26 = (char *)(v29 + v18 + 24);
  v20 = *(_BYTE **)(v29 + v18 + 16);
LABEL_49:
  v21 = *(_BYTE *)(v29 + v18 + 9);
  v19 = *(_BYTE *)(v29 + v18 + 8);
LABEL_50:
  if ( v26 )
  {
    v31 = *v26;
    v25 = 0;
    goto LABEL_53;
  }
LABEL_79:
  IofCompleteRequest((PIRP)a2, 0);
  return v39;
}
