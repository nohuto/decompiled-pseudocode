/*
 * XREFs of RaidAdapterRpmbRequest @ 0x14006597C
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x14001D0E0 (RaidAdapterDeviceControlIrp.c)
 * Callees:
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     RaidAdapterSendRPMBCommandSynchronously @ 0x140067AD0 (RaidAdapterSendRPMBCommandSynchronously.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int64 __fastcall RaidAdapterRpmbRequest(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  int v3; // ebx
  int v5; // r12d
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // rdx
  _BYTE *v8; // r15
  unsigned __int64 *v9; // rax
  unsigned int v10; // ebp
  unsigned int v11; // r14d
  int v12; // esi
  unsigned int i; // r13d
  int v14; // eax
  char v15; // al
  unsigned int j; // r14d
  int v17; // eax
  unsigned int k; // r14d
  int v19; // eax
  unsigned __int64 *v20; // r14
  unsigned __int64 v21; // rcx
  bool v22; // zf
  unsigned __int64 v23; // rcx
  __int64 v24; // rdx
  const EVENT_DESCRIPTOR *v25; // rdx
  __int64 v26; // rdx
  char v27; // cl
  char v28; // r15
  _BYTE *v29; // r8
  unsigned __int8 v30; // r10
  char v31; // bp
  char v32; // r14
  char v33; // r11
  int v34; // eax
  char *v35; // r12
  unsigned int v36; // r9d
  __int64 v37; // rax
  unsigned __int64 v38; // r13
  __int64 v39; // r9
  int v40; // ecx
  int v41; // r9d
  char v42; // r12
  char v43; // al
  char *v44; // r11
  unsigned int v45; // eax
  __int64 v47; // [rsp+20h] [rbp-A8h]
  char v48; // [rsp+61h] [rbp-67h]
  int v49; // [rsp+64h] [rbp-64h]
  unsigned int v50; // [rsp+6Ch] [rbp-5Ch]
  GUID v51; // [rsp+70h] [rbp-58h] BYREF

  v2 = *(_QWORD *)(a2 + 184);
  v3 = 0;
  v5 = a1;
  if ( !*(_DWORD *)(a1 + 5624) || !*(_DWORD *)(a1 + 5628) )
  {
    v9 = (unsigned __int64 *)(a2 + 56);
    goto LABEL_37;
  }
  v6 = *(unsigned int *)(v2 + 8);
  v7 = *(unsigned int *)(v2 + 16);
  v8 = *(_BYTE **)(a2 + 24);
  if ( (((unsigned int)v7 | *(_DWORD *)(v2 + 8)) & 0x1FF) != 0 )
    goto LABEL_16;
  if ( v8[511] == 1 || v8[511] == 2 )
  {
    v10 = 1;
    goto LABEL_14;
  }
  if ( v8[511] == 3 )
    goto LABEL_12;
  if ( v8[511] != 4 )
  {
    if ( v8[511] != 6 )
    {
      if ( v8[511] != 7 )
      {
        v9 = (unsigned __int64 *)(a2 + 56);
LABEL_37:
        v12 = -1073741808;
        goto LABEL_38;
      }
      goto LABEL_11;
    }
LABEL_12:
    v10 = 1;
    v11 = (unsigned int)v7 >> 9;
    goto LABEL_15;
  }
LABEL_11:
  v10 = (unsigned int)v6 >> 9;
LABEL_14:
  v11 = 1;
LABEL_15:
  if ( v7 < (unsigned __int64)v11 << 9 )
  {
LABEL_16:
    v12 = -1073741811;
LABEL_17:
    v9 = (unsigned __int64 *)(a2 + 56);
LABEL_38:
    v20 = v9;
    goto LABEL_39;
  }
  if ( v6 < (unsigned __int64)v10 << 9 )
  {
    v12 = -2147483643;
    goto LABEL_17;
  }
  for ( i = 0; i < 0x14; ++i )
  {
    LOBYTE(v6) = -75;
    v14 = RaidAdapterSendRPMBCommandSynchronously(v5, a2, v6, (_DWORD)v8, v11);
    v12 = v14;
    if ( v14 != -2147483631 )
      break;
  }
  if ( v14 >= 0 )
  {
    v15 = v8[511];
    if ( v15 != 3 && v15 != 6 )
      goto LABEL_30;
    memset_0(v8, 0, 0x1FFuLL);
    v8[511] = 5;
    for ( j = 0; j < 0x14; ++j )
    {
      LOBYTE(v6) = -75;
      v17 = RaidAdapterSendRPMBCommandSynchronously(v5, a2, v6, (_DWORD)v8, 1);
      v12 = v17;
      if ( v17 != -2147483631 )
        break;
    }
    if ( v17 >= 0 )
    {
LABEL_30:
      for ( k = 0; k < 0x14; ++k )
      {
        LOBYTE(v6) = -94;
        v19 = RaidAdapterSendRPMBCommandSynchronously(v5, a2, v6, (_DWORD)v8, v10);
        v12 = v19;
        if ( v19 != -2147483631 )
          break;
      }
      if ( v19 < 0 )
        goto LABEL_17;
    }
  }
  v9 = (unsigned __int64 *)(a2 + 56);
  v20 = (unsigned __int64 *)(a2 + 56);
  if ( v12 < 0 )
  {
LABEL_39:
    v21 = 0LL;
    goto LABEL_40;
  }
  v21 = (unsigned __int64)v10 << 9;
LABEL_40:
  *v9 = v21;
  v22 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v12;
  if ( v22 )
    goto LABEL_110;
  v51 = 0LL;
  IoGetActivityIdIrp(a2, &v51);
  v24 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v24 == 14 )
  {
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_110;
    v25 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
    goto LABEL_109;
  }
  if ( *(_BYTE *)v24 != 15 )
  {
    if ( *(_BYTE *)v24 != 27 )
      goto LABEL_110;
    if ( *(_BYTE *)(v24 + 1) == 7 && !*(_DWORD *)(v24 + 8) )
    {
      if ( (byte_140173442 & 0x40) != 0 )
      {
        if ( *v20 )
          v3 = *(_DWORD *)*v20;
        LODWORD(v47) = v3;
        McTemplateK0pqd_EtwWriteTransfer(v23, v24, &v51, a2, v47, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_110;
    }
    if ( (byte_140173442 & 0x20) == 0 )
      goto LABEL_110;
    v25 = &EventPnpRequestComplete;
LABEL_109:
    LODWORD(v47) = *(_DWORD *)(a2 + 48);
    McTemplateK0pd_EtwWriteTransfer(v23, v25, &v51, a2, v47);
    goto LABEL_110;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_110;
  v26 = *(_QWORD *)(v24 + 8);
  v27 = 0;
  v28 = 0;
  v29 = 0LL;
  v30 = 0;
  v31 = 0;
  v32 = 0;
  v33 = 0;
  v34 = *(unsigned __int8 *)(v26 + 2);
  if ( (_BYTE)v34 != 40 )
  {
    v27 = *(_BYTE *)(v26 + 72);
    v29 = *(_BYTE **)(v26 + 32);
    v30 = *(_BYTE *)(v26 + 11);
    v28 = *(_BYTE *)(v26 + 4);
    goto LABEL_83;
  }
  v35 = 0LL;
  v48 = 0;
  if ( *(_DWORD *)(v26 + 20) )
    goto LABEL_110;
  v36 = *(_DWORD *)(v26 + 56);
  v37 = 0LL;
  v49 = 0;
  v50 = v36;
  if ( !v36 )
    goto LABEL_82;
  while ( 1 )
  {
    v23 = *(unsigned int *)(v26 + 4 * v37 + 120);
    if ( (unsigned int)v23 >= 0x80 )
    {
      v38 = *(unsigned int *)(v26 + 16);
      if ( (unsigned int)v23 < (unsigned int)v38 )
        break;
    }
LABEL_72:
    v37 = (unsigned int)(v49 + 1);
    v49 = v37;
    if ( (unsigned int)v37 >= v36 )
      goto LABEL_78;
  }
  v39 = (unsigned int)v23;
  v40 = *(_DWORD *)(v23 + v26) - 64;
  if ( v40 )
  {
    v23 = (unsigned int)(v40 - 1);
    if ( (_DWORD)v23 )
    {
      if ( (_DWORD)v23 == 1 )
      {
        v23 = v39 + 40;
        if ( v39 + 40 <= v38 )
        {
          if ( *(_DWORD *)(v39 + v26 + 12) )
            v35 = (char *)(v39 + v26 + 32);
          v29 = *(_BYTE **)(v39 + v26 + 24);
          goto LABEL_77;
        }
      }
    }
    else
    {
      v23 = v39 + 56;
      if ( v39 + 56 <= v38 )
      {
        v48 = 1;
        if ( *(_BYTE *)(v39 + v26 + 10) )
          v35 = (char *)(v39 + v26 + 24);
        v28 = *(_BYTE *)(v39 + v26 + 8);
        v29 = *(_BYTE **)(v39 + v26 + 16);
        v30 = *(_BYTE *)(v39 + v26 + 9);
      }
    }
    goto LABEL_70;
  }
  v23 = v39 + 40;
  if ( v39 + 40 > v38 )
  {
LABEL_70:
    if ( v48 )
      goto LABEL_78;
    v36 = v50;
    goto LABEL_72;
  }
  if ( *(_BYTE *)(v39 + v26 + 10) )
    v35 = (char *)(v39 + v26 + 24);
  v29 = *(_BYTE **)(v39 + v26 + 16);
LABEL_77:
  v30 = *(_BYTE *)(v39 + v26 + 9);
  v28 = *(_BYTE *)(v39 + v26 + 8);
LABEL_78:
  if ( v35 )
  {
    v27 = *v35;
    v41 = v12;
    goto LABEL_84;
  }
  v27 = 0;
LABEL_82:
  v34 = 0;
LABEL_83:
  v41 = v12;
  if ( !v34 )
  {
LABEL_84:
    if ( ((v27 - 8) & 0x5D) == 0 )
    {
      v42 = *(_BYTE *)(v26 + 3);
      if ( v42 == 1 || !v29 || !v30 )
        goto LABEL_102;
      v43 = *v29 & 0x7F;
      if ( v43 == 114 || v43 == 115 )
      {
        v23 = (unsigned __int64)&v29[v30];
        LOBYTE(v26) = 0;
        if ( (unsigned __int64)(v29 + 8) <= v23 )
        {
          v32 = v29[2];
          v31 = v29[1] & 0xF;
          v33 = v29[3];
          goto LABEL_100;
        }
      }
      else
      {
        v23 = (unsigned __int64)&v29[v30];
        LOBYTE(v26) = 0;
        if ( (unsigned __int64)(v29 + 8) <= v23 )
        {
          v44 = v29 + 13;
          v31 = v29[2] & 0xF;
          v45 = v30;
          if ( (unsigned int)(unsigned __int8)v29[7] + 8 <= v30 )
            v45 = (unsigned __int8)v29[7] + 8;
          v23 = (unsigned __int64)&v29[v45];
          if ( (unsigned __int64)v44 <= v23 )
            v32 = v29[12];
          if ( (unsigned __int64)(v29 + 14) > v23 )
            v33 = 0;
          else
            v33 = *v44;
LABEL_100:
          LOBYTE(v26) = 1;
        }
      }
      LOBYTE(v23) = 1;
      if ( !(_BYTE)v26 )
LABEL_102:
        LOBYTE(v23) = 0;
      if ( byte_140173441 < 0 )
      {
        v12 = v41;
        if ( !(_BYTE)v23 )
        {
          v33 = 0;
          v32 = 0;
          v31 = 0;
        }
        LODWORD(v47) = *(_DWORD *)(a2 + 48);
        McTemplateK0pduuuuup_EtwWriteTransfer(v23, v26, &v51, a2, v47, v42, v28, v31, v32, v33, a2);
      }
    }
  }
LABEL_110:
  IofCompleteRequest((PIRP)a2, 0);
  return (unsigned int)v12;
}
