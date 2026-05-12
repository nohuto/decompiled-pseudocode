/*
 * XREFs of StorUnitExecuteNvmeSrbComplete @ 0x1400C5540
 * Callers:
 *     <none>
 * Callees:
 *     RaidAdapterPoFxIdleComponentFromMiniport @ 0x140001080 (RaidAdapterPoFxIdleComponentFromMiniport.c)
 *     StorFreeContiguousIoResources @ 0x14001271C (StorFreeContiguousIoResources.c)
 *     RaidXrbDeallocateResources @ 0x1400127A0 (RaidXrbDeallocateResources.c)
 *     RaidAdapterPoFxIdleComponent @ 0x14002517C (RaidAdapterPoFxIdleComponent.c)
 *     RaFreeIoResource @ 0x14002F6F0 (RaFreeIoResource.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

void __fastcall StorUnitExecuteNvmeSrbComplete(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v3; // rcx
  int v4; // ebx
  __int64 v5; // rbp
  __int64 v6; // r12
  __int64 v7; // r14
  unsigned __int64 v8; // r8
  signed __int32 v9; // eax
  signed __int32 v10; // ett
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
  char v34; // [rsp+60h] [rbp-48h]
  unsigned int v35; // [rsp+64h] [rbp-44h]
  GUID v36; // [rsp+68h] [rbp-40h] BYREF

  v1 = *(_QWORD *)(a1 + 160);
  v3 = *(_QWORD *)(a1 + 168);
  v4 = 0;
  v5 = *(_QWORD *)(a1 + 224);
  v6 = v3 + *(unsigned int *)(v3 + 120);
  v7 = *(_QWORD *)(v5 + 24);
  if ( (*(_BYTE *)(v3 + 3) & 0x3F) == 1 )
  {
    *(_DWORD *)(v1 + 48) = 0;
    *(_QWORD *)(v1 + 56) = *(unsigned int *)(v3 + 60);
  }
  if ( (*(_BYTE *)(a1 + 17) & 1) != 0 )
  {
    RaidAdapterPoFxIdleComponentFromMiniport(v7, *(unsigned int *)(a1 + 748));
    *(_BYTE *)(a1 + 17) &= ~1u;
  }
  if ( *(_QWORD *)(v7 + 5024) )
    RaidAdapterPoFxIdleComponent(v7, 0LL, 0LL);
  if ( *(_BYTE *)(v6 + 80) == 1 )
  {
    RaidXrbDeallocateResources(a1, 0);
    if ( a1 != 48 )
      StorFreeContiguousIoResources(v7, a1 - 48);
  }
  else
  {
    RaFreeIoResource(*(_QWORD *)(v5 + 728) + 64LL, (struct _SLIST_ENTRY *)(a1 - 48));
  }
  v8 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
  v9 = *(_DWORD *)(v8 + *(_QWORD *)(v5 + 40));
  while ( (v9 & 1) == 0 )
  {
    v10 = v9;
    v9 = _InterlockedCompareExchange((volatile signed __int32 *)(v8 + *(_QWORD *)(v5 + 40)), v9 - 2, v9);
    if ( v10 == v9 )
      goto LABEL_17;
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 1032), 0xFFFFFFFF) == 1 )
    KeSetEvent((PRKEVENT)(v5 + 520), 0, 0);
LABEL_17:
  v11 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(v1 + 141) = -84;
  if ( v11 )
    goto LABEL_83;
  v36 = 0LL;
  IoGetActivityIdIrp(v1, &v36);
  v13 = *(_QWORD *)(v1 + 184);
  if ( *(_BYTE *)v13 == 14 )
  {
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_83;
    v15 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
    goto LABEL_82;
  }
  if ( *(_BYTE *)v13 != 15 )
  {
    if ( *(_BYTE *)v13 != 27 )
      goto LABEL_83;
    if ( *(_BYTE *)(v13 + 1) == 7 && !*(_DWORD *)(v13 + 8) )
    {
      if ( (byte_140173442 & 0x40) != 0 )
      {
        v14 = *(int **)(v1 + 56);
        if ( v14 )
          v4 = *v14;
        McTemplateK0pqd_EtwWriteTransfer(v12, v13, &v36, v1, v4, *(_DWORD *)(v1 + 48));
      }
      goto LABEL_83;
    }
    if ( (byte_140173442 & 0x20) == 0 )
      goto LABEL_83;
    v15 = &EventPnpRequestComplete;
LABEL_82:
    McTemplateK0pd_EtwWriteTransfer(v12, v15, &v36, v1, *(_DWORD *)(v1 + 48));
    goto LABEL_83;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_83;
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
      goto LABEL_83;
LABEL_57:
    LOBYTE(v12) = v29 - 8;
    if ( (v12 & 0x5D) != 0 )
      goto LABEL_83;
    v30 = *(_BYTE *)(v16 + 3);
    if ( v30 == 1 || !v18 || !v19 )
      goto LABEL_76;
    v31 = *v18 & 0x7F;
    if ( v31 == 114 || v31 == 115 )
    {
      v12 = (unsigned __int64)&v18[v19];
      LOBYTE(v16) = 0;
      if ( (unsigned __int64)(v18 + 8) > v12 )
        goto LABEL_74;
      v21 = v18[2];
      v20 = v18[1] & 0xF;
      v22 = v18[3];
    }
    else
    {
      v12 = (unsigned __int64)&v18[v19];
      LOBYTE(v16) = 0;
      if ( (unsigned __int64)(v18 + 8) > v12 )
        goto LABEL_74;
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
LABEL_74:
    if ( (_BYTE)v16 )
      v23 = 1;
LABEL_76:
    if ( byte_140173441 < 0 )
    {
      if ( !v23 )
      {
        v22 = 0;
        v21 = 0;
        v20 = 0;
      }
      McTemplateK0pduuuuup_EtwWriteTransfer(v12, v16, &v36, v1, *(_DWORD *)(v1 + 48), v30, v17, v20, v21, v22, v1);
    }
    goto LABEL_83;
  }
  v24 = 0LL;
  v34 = 0;
  if ( *(_DWORD *)(v16 + 20) )
    goto LABEL_83;
  v25 = 0;
  v35 = *(_DWORD *)(v16 + 56);
  if ( !v35 )
    goto LABEL_83;
  while ( 1 )
  {
    v12 = *(unsigned int *)(v16 + 4LL * v25 + 120);
    if ( (unsigned int)v12 >= 0x80 )
    {
      v26 = *(unsigned int *)(v16 + 16);
      if ( (unsigned int)v12 < (unsigned int)v26 )
        break;
    }
LABEL_48:
    if ( ++v25 >= v35 )
      goto LABEL_54;
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
          goto LABEL_53;
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
    goto LABEL_47;
  }
  v12 = v27 + 40;
  if ( v27 + 40 > v26 )
  {
LABEL_47:
    if ( v34 )
      goto LABEL_54;
    goto LABEL_48;
  }
  if ( *(_BYTE *)(v27 + v16 + 10) )
    v24 = (char *)(v27 + v16 + 24);
  v18 = *(_BYTE **)(v27 + v16 + 16);
LABEL_53:
  v19 = *(_BYTE *)(v27 + v16 + 9);
  v17 = *(_BYTE *)(v27 + v16 + 8);
LABEL_54:
  if ( v24 )
  {
    v29 = *v24;
    v23 = 0;
    goto LABEL_57;
  }
LABEL_83:
  IofCompleteRequest((PIRP)v1, 1);
}
