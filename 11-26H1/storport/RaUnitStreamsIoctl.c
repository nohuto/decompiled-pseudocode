/*
 * XREFs of RaUnitStreamsIoctl @ 0x1400A5B3C
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x14001D890 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidUnitSendSrbIoControlSynchronously @ 0x1400082A8 (RaidUnitSendSrbIoControlSynchronously.c)
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     memmove @ 0x140138680 (memmove.c)
 */

__int64 __fastcall RaUnitStreamsIoctl(__int64 a1, __int64 a2)
{
  int v2; // ebx
  unsigned int v5; // ebp
  size_t v6; // r15
  unsigned int v7; // r14d
  unsigned int v8; // r12d
  _DWORD *Pool; // rax
  _DWORD *v10; // rsi
  int v11; // r15d
  int v12; // eax
  unsigned int v13; // ecx
  bool v14; // zf
  unsigned __int64 v15; // rcx
  __int64 v16; // rdx
  int *v17; // rax
  const EVENT_DESCRIPTOR *v18; // rdx
  __int64 v19; // rdx
  char v20; // r13
  _BYTE *v21; // r9
  unsigned __int8 v22; // bp
  char v23; // r11
  char v24; // si
  char v25; // r10
  char v26; // r14
  char *v27; // r14
  unsigned int v28; // r12d
  unsigned __int64 v29; // r15
  __int64 v30; // r8
  int v31; // ecx
  char v32; // cl
  char v33; // r8
  char v34; // al
  char *v35; // r10
  unsigned int v36; // eax
  __int64 v38; // [rsp+20h] [rbp-A8h]
  __int64 v39; // [rsp+28h] [rbp-A0h]
  __int64 v40; // [rsp+30h] [rbp-98h]
  char v41; // [rsp+60h] [rbp-68h]
  unsigned int v42; // [rsp+64h] [rbp-64h]
  _DWORD *v43; // [rsp+68h] [rbp-60h]
  unsigned int v44; // [rsp+68h] [rbp-60h]
  GUID v45; // [rsp+70h] [rbp-58h] BYREF

  v2 = 0;
  v43 = *(_DWORD **)(a2 + 184);
  v5 = 0;
  v6 = (unsigned int)v43[4];
  v7 = v43[2];
  v8 = v6;
  if ( (unsigned int)v6 <= v7 )
    v8 = v43[2];
  if ( v8 >= 0xFFFFFFE4 )
  {
    v11 = -1073741675;
    goto LABEL_17;
  }
  Pool = (_DWORD *)RaidAllocatePool(64LL, v8 + 28, 1918067026LL, *(_QWORD *)(a1 + 8));
  v10 = Pool;
  if ( !Pool )
  {
    v11 = -1073741670;
LABEL_17:
    v42 = v11;
    goto LABEL_18;
  }
  Pool[4] = v43[6];
  *Pool = 8;
  v12 = *(_DWORD *)(a1 + 1392);
  v10[6] = v8;
  v10[3] = v12;
  if ( (_DWORD)v6 )
    memmove(v10 + 7, *(const void **)(a2 + 24), v6);
  v11 = RaidUnitSendSrbIoControlSynchronously(
          a1,
          a2,
          (__int64)v10,
          v8 + 28,
          0LL,
          0,
          (v7 != 0 ? 0x40 : 0) | ((_DWORD)v6 != 0 ? 0x80 : 0));
  v42 = v11;
  if ( (int)(v11 + 0x80000000) < 0 || v11 == -2147483643 )
  {
    if ( v7 )
    {
      v13 = v10[6];
      if ( v13 )
      {
        v5 = v10[6];
        if ( v7 < v13 )
          v5 = v7;
        memmove(*(void **)(a2 + 24), v10 + 7, v5);
      }
    }
  }
  ExFreePoolWithTag(v10, 0x72536152u);
LABEL_18:
  v14 = StorEtwLoggingEnabled == 0;
  *(_QWORD *)(a2 + 56) = v5;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v11;
  if ( v14 )
    goto LABEL_84;
  v45 = 0LL;
  IoGetActivityIdIrp(a2, &v45);
  v16 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v16 == 14 )
  {
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_84;
    v18 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
    goto LABEL_83;
  }
  if ( *(_BYTE *)v16 != 15 )
  {
    if ( *(_BYTE *)v16 != 27 )
      goto LABEL_84;
    if ( *(_BYTE *)(v16 + 1) == 7 && !*(_DWORD *)(v16 + 8) )
    {
      if ( (byte_140173442 & 0x40) != 0 )
      {
        v17 = *(int **)(a2 + 56);
        if ( v17 )
          v2 = *v17;
        LODWORD(v39) = *(_DWORD *)(a2 + 48);
        LODWORD(v38) = v2;
        McTemplateK0pqd_EtwWriteTransfer(v15, v16, &v45, a2, v38, v39);
      }
      goto LABEL_84;
    }
    if ( (byte_140173442 & 0x20) == 0 )
      goto LABEL_84;
    v18 = &EventPnpRequestComplete;
LABEL_83:
    LODWORD(v38) = *(_DWORD *)(a2 + 48);
    McTemplateK0pd_EtwWriteTransfer(v15, v18, &v45, a2, v38);
    goto LABEL_84;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_84;
  v19 = *(_QWORD *)(v16 + 8);
  v20 = 0;
  v21 = 0LL;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  if ( *(_BYTE *)(v19 + 2) != 40 )
  {
    v32 = *(_BYTE *)(v19 + 72);
    v21 = *(_BYTE **)(v19 + 32);
    v22 = *(_BYTE *)(v19 + 11);
    v20 = *(_BYTE *)(v19 + 4);
    if ( *(_BYTE *)(v19 + 2) )
      goto LABEL_84;
LABEL_58:
    LOBYTE(v15) = v32 - 8;
    if ( (v15 & 0x5D) != 0 )
      goto LABEL_84;
    v33 = *(_BYTE *)(v19 + 3);
    if ( v33 == 1 || !v21 || !v22 )
      goto LABEL_77;
    v34 = *v21 & 0x7F;
    if ( v34 == 114 || v34 == 115 )
    {
      v15 = (unsigned __int64)&v21[v22];
      LOBYTE(v19) = 0;
      if ( (unsigned __int64)(v21 + 8) > v15 )
        goto LABEL_75;
      v24 = v21[2];
      v23 = v21[1] & 0xF;
      v25 = v21[3];
    }
    else
    {
      v15 = (unsigned __int64)&v21[v22];
      LOBYTE(v19) = 0;
      if ( (unsigned __int64)(v21 + 8) > v15 )
        goto LABEL_75;
      v35 = v21 + 13;
      v23 = v21[2] & 0xF;
      v36 = v22;
      if ( (unsigned int)(unsigned __int8)v21[7] + 8 <= v22 )
        v36 = (unsigned __int8)v21[7] + 8;
      v15 = (unsigned __int64)&v21[v36];
      if ( (unsigned __int64)v35 <= v15 )
        v24 = v21[12];
      if ( (unsigned __int64)(v21 + 14) > v15 )
        v25 = 0;
      else
        v25 = *v35;
    }
    LOBYTE(v19) = 1;
LABEL_75:
    if ( (_BYTE)v19 )
      v26 = 1;
LABEL_77:
    if ( byte_140173441 < 0 )
    {
      if ( !v26 )
      {
        v25 = 0;
        v24 = 0;
        v23 = 0;
      }
      LOBYTE(v40) = v20;
      LOBYTE(v39) = v33;
      LODWORD(v38) = *(_DWORD *)(a2 + 48);
      McTemplateK0pduuuuup_EtwWriteTransfer(v15, v19, &v45, a2, v38, v39, v40, v23, v24, v25, a2);
    }
    goto LABEL_84;
  }
  v27 = 0LL;
  v41 = 0;
  if ( *(_DWORD *)(v19 + 20) )
    goto LABEL_84;
  v28 = 0;
  v44 = *(_DWORD *)(v19 + 56);
  if ( !v44 )
    goto LABEL_84;
  while ( 1 )
  {
    v15 = *(unsigned int *)(v19 + 4LL * v28 + 120);
    if ( (unsigned int)v15 >= 0x80 )
    {
      v29 = *(unsigned int *)(v19 + 16);
      if ( (unsigned int)v15 < (unsigned int)v29 )
        break;
    }
LABEL_49:
    if ( ++v28 >= v44 )
      goto LABEL_55;
  }
  v30 = (unsigned int)v15;
  v31 = *(_DWORD *)(v15 + v19) - 64;
  if ( v31 )
  {
    v15 = (unsigned int)(v31 - 1);
    if ( (_DWORD)v15 )
    {
      if ( (_DWORD)v15 == 1 )
      {
        v15 = v30 + 40;
        if ( v30 + 40 <= v29 )
        {
          if ( *(_DWORD *)(v30 + v19 + 12) )
            v27 = (char *)(v30 + v19 + 32);
          v21 = *(_BYTE **)(v30 + v19 + 24);
          goto LABEL_54;
        }
      }
    }
    else
    {
      v15 = v30 + 56;
      if ( v30 + 56 <= v29 )
      {
        v41 = 1;
        if ( *(_BYTE *)(v30 + v19 + 10) )
          v27 = (char *)(v30 + v19 + 24);
        v20 = *(_BYTE *)(v30 + v19 + 8);
        v21 = *(_BYTE **)(v30 + v19 + 16);
        v22 = *(_BYTE *)(v30 + v19 + 9);
      }
    }
    goto LABEL_48;
  }
  v15 = v30 + 40;
  if ( v30 + 40 > v29 )
  {
LABEL_48:
    if ( v41 )
      goto LABEL_55;
    goto LABEL_49;
  }
  if ( *(_BYTE *)(v30 + v19 + 10) )
    v27 = (char *)(v30 + v19 + 24);
  v21 = *(_BYTE **)(v30 + v19 + 16);
LABEL_54:
  v22 = *(_BYTE *)(v30 + v19 + 9);
  v20 = *(_BYTE *)(v30 + v19 + 8);
LABEL_55:
  if ( v27 )
  {
    v32 = *v27;
    v26 = 0;
    goto LABEL_58;
  }
LABEL_84:
  IofCompleteRequest((PIRP)a2, 0);
  return v42;
}
