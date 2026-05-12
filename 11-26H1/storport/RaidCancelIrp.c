/*
 * XREFs of RaidCancelIrp @ 0x140093280
 * Callers:
 *     RaidUnitCancelPendingRequests @ 0x1400A6F5C (RaidUnitCancelPendingRequests.c)
 * Callees:
 *     RaidSrbStatusToNtStatus @ 0x14001CD48 (RaidSrbStatusToNtStatus.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

void __fastcall RaidCancelIrp(__int64 a1, char a2, __int64 a3)
{
  __int64 v4; // rsi
  __int64 v5; // r8
  int v6; // ebx
  unsigned __int64 v7; // r9
  signed __int32 v8; // eax
  signed __int32 v9; // ett
  _QWORD *v10; // rcx
  bool v11; // zf
  unsigned __int64 v12; // rcx
  __int64 v13; // rdx
  int *v14; // rax
  const EVENT_DESCRIPTOR *v15; // rdx
  __int64 v16; // rdx
  char v17; // r13
  _BYTE *v18; // r9
  unsigned __int8 v19; // bp
  char v20; // r10
  char v21; // si
  char v22; // r11
  char v23; // r14
  char *v24; // r14
  unsigned int v25; // r12d
  unsigned __int64 v26; // r15
  __int64 v27; // r8
  int v28; // ecx
  char v29; // cl
  char v30; // r8
  char v31; // al
  char *v32; // r11
  unsigned int v33; // eax
  char v34; // [rsp+60h] [rbp-58h]
  unsigned int v35; // [rsp+64h] [rbp-54h]
  GUID v36; // [rsp+68h] [rbp-50h] BYREF

  v4 = *(_QWORD *)(*(_QWORD *)(a3 + 184) + 8LL);
  *(_BYTE *)(v4 + 3) = a2;
  *(_DWORD *)(a3 + 48) = RaidSrbStatusToNtStatus(a2);
  v6 = 0;
  *(_QWORD *)(a3 + 56) = 0LL;
  v7 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
  v8 = *(_DWORD *)(v7 + *(_QWORD *)(v5 + 40));
  while ( (v8 & 1) == 0 )
  {
    v9 = v8;
    v8 = _InterlockedCompareExchange((volatile signed __int32 *)(v7 + *(_QWORD *)(v5 + 40)), v8 - 2, v8);
    if ( v9 == v8 )
      goto LABEL_7;
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 1032), 0xFFFFFFFF) == 1 )
    KeSetEvent((PRKEVENT)(v5 + 520), 0, 0);
LABEL_7:
  if ( (*(_BYTE *)(a3 + 142) & 0x20) != 0 )
  {
    if ( *(_BYTE *)(v4 + 2) == 40 )
    {
      v10 = *(_QWORD **)(v4 + 96);
      *(_QWORD *)(v4 + 96) = v10[2];
    }
    else
    {
      v10 = *(_QWORD **)(v4 + 48);
      *(_QWORD *)(v4 + 48) = v10[2];
      *(_QWORD *)(v4 + 56) = 0LL;
      *(_QWORD *)(v4 + 40) = 0LL;
    }
    ExFreePoolWithTag(v10, 0x54436152u);
  }
  v11 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a3 + 141) = -84;
  if ( v11 )
    goto LABEL_78;
  v36 = 0LL;
  IoGetActivityIdIrp(a3, &v36);
  v13 = *(_QWORD *)(a3 + 184);
  if ( *(_BYTE *)v13 == 14 )
  {
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_78;
    v15 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
    goto LABEL_77;
  }
  if ( *(_BYTE *)v13 != 15 )
  {
    if ( *(_BYTE *)v13 != 27 )
      goto LABEL_78;
    if ( *(_BYTE *)(v13 + 1) == 7 && !*(_DWORD *)(v13 + 8) )
    {
      if ( (byte_140173442 & 0x40) != 0 )
      {
        v14 = *(int **)(a3 + 56);
        if ( v14 )
          v6 = *v14;
        McTemplateK0pqd_EtwWriteTransfer(v12, v13, &v36, a3, v6, *(_DWORD *)(a3 + 48));
      }
      goto LABEL_78;
    }
    if ( (byte_140173442 & 0x20) == 0 )
      goto LABEL_78;
    v15 = &EventPnpRequestComplete;
LABEL_77:
    McTemplateK0pd_EtwWriteTransfer(v12, v15, &v36, a3, *(_DWORD *)(a3 + 48));
    goto LABEL_78;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_78;
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
      goto LABEL_78;
LABEL_52:
    LOBYTE(v12) = v29 - 8;
    if ( (v12 & 0x5D) != 0 )
      goto LABEL_78;
    v30 = *(_BYTE *)(v16 + 3);
    if ( v30 == 1 || !v18 || !v19 )
      goto LABEL_71;
    v31 = *v18 & 0x7F;
    if ( v31 == 114 || v31 == 115 )
    {
      v12 = (unsigned __int64)&v18[v19];
      LOBYTE(v16) = 0;
      if ( (unsigned __int64)(v18 + 8) > v12 )
        goto LABEL_69;
      v21 = v18[2];
      v20 = v18[1] & 0xF;
      v22 = v18[3];
    }
    else
    {
      v12 = (unsigned __int64)&v18[v19];
      LOBYTE(v16) = 0;
      if ( (unsigned __int64)(v18 + 8) > v12 )
        goto LABEL_69;
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
LABEL_69:
    if ( (_BYTE)v16 )
      v23 = 1;
LABEL_71:
    if ( byte_140173441 < 0 )
    {
      if ( !v23 )
      {
        v22 = 0;
        v21 = 0;
        v20 = 0;
      }
      McTemplateK0pduuuuup_EtwWriteTransfer(v12, v16, &v36, a3, *(_DWORD *)(a3 + 48), v30, v17, v20, v21, v22, a3);
    }
    goto LABEL_78;
  }
  v24 = 0LL;
  v34 = 0;
  if ( *(_DWORD *)(v16 + 20) )
    goto LABEL_78;
  v25 = 0;
  v35 = *(_DWORD *)(v16 + 56);
  if ( !v35 )
    goto LABEL_78;
  while ( 1 )
  {
    v12 = *(unsigned int *)(v16 + 4LL * v25 + 120);
    if ( (unsigned int)v12 >= 0x80 )
    {
      v26 = *(unsigned int *)(v16 + 16);
      if ( (unsigned int)v12 < (unsigned int)v26 )
        break;
    }
LABEL_43:
    if ( ++v25 >= v35 )
      goto LABEL_49;
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
          goto LABEL_48;
        }
      }
    }
    else
    {
      v12 = v27 + 56;
      if ( v27 + 56 <= v26 )
      {
        v34 = 1;
        if ( *(_BYTE *)(v27 + v16 + 10) )
          v24 = (char *)(v27 + v16 + 24);
        v17 = *(_BYTE *)(v27 + v16 + 8);
        v18 = *(_BYTE **)(v27 + v16 + 16);
        v19 = *(_BYTE *)(v27 + v16 + 9);
      }
    }
    goto LABEL_42;
  }
  v12 = v27 + 40;
  if ( v27 + 40 > v26 )
  {
LABEL_42:
    if ( v34 )
      goto LABEL_49;
    goto LABEL_43;
  }
  if ( *(_BYTE *)(v27 + v16 + 10) )
    v24 = (char *)(v27 + v16 + 24);
  v18 = *(_BYTE **)(v27 + v16 + 16);
LABEL_48:
  v19 = *(_BYTE *)(v27 + v16 + 9);
  v17 = *(_BYTE *)(v27 + v16 + 8);
LABEL_49:
  if ( v24 )
  {
    v29 = *v24;
    v23 = 0;
    goto LABEL_52;
  }
LABEL_78:
  IofCompleteRequest((PIRP)a3, 0);
}
