/*
 * XREFs of RaUnitQueryDeviceRelationsIrp @ 0x1401B2E9C
 * Callers:
 *     RaUnitPnpIrp @ 0x14003FBDC (RaUnitPnpIrp.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall RaUnitQueryDeviceRelationsIrp(__int64 a1, __int64 a2)
{
  int v2; // ebx
  __int64 Pool; // rax
  __int64 v6; // rsi
  int v7; // eax
  bool v8; // zf
  unsigned __int64 v9; // rcx
  __int64 v10; // rdx
  const EVENT_DESCRIPTOR *v12; // rdx
  int *v13; // rax
  __int64 v14; // rdx
  char v15; // r13
  _BYTE *v16; // r9
  unsigned __int8 v17; // bp
  char v18; // si
  char v19; // r11
  char v20; // r10
  char v21; // r14
  char *v22; // r14
  unsigned int v23; // r12d
  unsigned __int64 v24; // r15
  __int64 v25; // r8
  int v26; // ecx
  char v27; // cl
  char v28; // r8
  char v29; // al
  char *v30; // r10
  unsigned int v31; // eax
  int v32; // [rsp+20h] [rbp-A8h]
  char v33; // [rsp+60h] [rbp-68h]
  unsigned int v34; // [rsp+64h] [rbp-64h]
  unsigned int v35; // [rsp+68h] [rbp-60h]
  GUID v36; // [rsp+70h] [rbp-58h] BYREF

  v2 = 0;
  if ( *(_DWORD *)(*(_QWORD *)(a2 + 184) + 8LL) == 4 )
  {
    Pool = RaidAllocatePool(256LL, 16LL, 1380213074LL, *(_QWORD *)(a1 + 8));
    v6 = Pool;
    if ( Pool )
    {
      *(_DWORD *)Pool = 1;
      *(_QWORD *)(Pool + 8) = *(_QWORD *)(a1 + 8);
      ObfReferenceObject(*(PVOID *)(a1 + 8));
      v7 = 0;
      *(_QWORD *)(a2 + 56) = v6;
    }
    else
    {
      v7 = -1073741801;
    }
  }
  else
  {
    v7 = *(_DWORD *)(a2 + 48);
  }
  v8 = StorEtwLoggingEnabled == 0;
  v34 = v7;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v7;
  if ( v8 )
    goto LABEL_8;
  v36 = 0LL;
  IoGetActivityIdIrp(a2, &v36);
  v10 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v10 == 14 )
  {
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_8;
    v32 = *(_DWORD *)(a2 + 48);
    v12 = &EventNonReadWriteRequestComplete;
    goto LABEL_12;
  }
  if ( *(_BYTE *)v10 != 15 )
  {
    if ( *(_BYTE *)v10 != 27 )
      goto LABEL_8;
    if ( *(_BYTE *)(v10 + 1) == 7 && !*(_DWORD *)(v10 + 8) )
    {
      if ( (byte_140173442 & 0x40) != 0 )
      {
        v13 = *(int **)(a2 + 56);
        if ( v13 )
          v2 = *v13;
        McTemplateK0pqd_EtwWriteTransfer(v9, v10, &v36, a2, v2, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_8;
    }
    if ( (byte_140173442 & 0x20) == 0 )
      goto LABEL_8;
    v12 = &EventPnpRequestComplete;
    v32 = *(_DWORD *)(a2 + 48);
LABEL_12:
    McTemplateK0pd_EtwWriteTransfer(v9, v12, &v36, a2, v32);
    goto LABEL_8;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_8;
  v14 = *(_QWORD *)(v10 + 8);
  v15 = 0;
  v16 = 0LL;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  if ( *(_BYTE *)(v14 + 2) != 40 )
  {
    v27 = *(_BYTE *)(v14 + 72);
    v16 = *(_BYTE **)(v14 + 32);
    v17 = *(_BYTE *)(v14 + 11);
    v15 = *(_BYTE *)(v14 + 4);
    if ( *(_BYTE *)(v14 + 2) )
      goto LABEL_8;
LABEL_51:
    LOBYTE(v9) = v27 - 8;
    if ( (v9 & 0x5D) != 0 )
      goto LABEL_8;
    v28 = *(_BYTE *)(v14 + 3);
    if ( v28 == 1 || !v16 || !v17 )
      goto LABEL_70;
    v29 = *v16 & 0x7F;
    if ( v29 == 114 || v29 == 115 )
    {
      v9 = (unsigned __int64)&v16[v17];
      LOBYTE(v14) = 0;
      if ( (unsigned __int64)(v16 + 8) > v9 )
        goto LABEL_68;
      v19 = v16[2];
      v18 = v16[1] & 0xF;
      v20 = v16[3];
    }
    else
    {
      v9 = (unsigned __int64)&v16[v17];
      LOBYTE(v14) = 0;
      if ( (unsigned __int64)(v16 + 8) > v9 )
        goto LABEL_68;
      v30 = v16 + 13;
      v18 = v16[2] & 0xF;
      v31 = v17;
      if ( (unsigned int)(unsigned __int8)v16[7] + 8 <= v17 )
        v31 = (unsigned __int8)v16[7] + 8;
      v9 = (unsigned __int64)&v16[v31];
      if ( (unsigned __int64)v30 <= v9 )
        v19 = v16[12];
      if ( (unsigned __int64)(v16 + 14) > v9 )
        v20 = 0;
      else
        v20 = *v30;
    }
    LOBYTE(v14) = 1;
LABEL_68:
    if ( (_BYTE)v14 )
      v21 = 1;
LABEL_70:
    if ( byte_140173441 < 0 )
    {
      if ( !v21 )
      {
        v20 = 0;
        v19 = 0;
        v18 = 0;
      }
      McTemplateK0pduuuuup_EtwWriteTransfer(v9, v14, &v36, a2, *(_DWORD *)(a2 + 48), v28, v15, v18, v19, v20, a2);
    }
    goto LABEL_8;
  }
  v22 = 0LL;
  v33 = 0;
  if ( *(_DWORD *)(v14 + 20) )
    goto LABEL_8;
  v23 = 0;
  v35 = *(_DWORD *)(v14 + 56);
  if ( !v35 )
    goto LABEL_8;
  while ( 1 )
  {
    v9 = *(unsigned int *)(v14 + 4LL * v23 + 120);
    if ( (unsigned int)v9 >= 0x80 )
    {
      v24 = *(unsigned int *)(v14 + 16);
      if ( (unsigned int)v9 < (unsigned int)v24 )
        break;
    }
LABEL_41:
    if ( ++v23 >= v35 )
      goto LABEL_48;
  }
  v25 = (unsigned int)v9;
  v26 = *(_DWORD *)(v9 + v14) - 64;
  if ( v26 )
  {
    v9 = (unsigned int)(v26 - 1);
    if ( (_DWORD)v9 )
    {
      if ( (_DWORD)v9 == 1 )
      {
        v9 = v25 + 40;
        if ( v25 + 40 <= v24 )
        {
          if ( *(_DWORD *)(v25 + v14 + 12) )
            v22 = (char *)(v25 + v14 + 32);
          v16 = *(_BYTE **)(v25 + v14 + 24);
          goto LABEL_47;
        }
      }
    }
    else
    {
      v9 = v25 + 56;
      if ( v25 + 56 <= v24 )
      {
        v33 = 1;
        if ( *(_BYTE *)(v25 + v14 + 10) )
          v22 = (char *)(v25 + v14 + 24);
        v15 = *(_BYTE *)(v25 + v14 + 8);
        v16 = *(_BYTE **)(v25 + v14 + 16);
        v17 = *(_BYTE *)(v25 + v14 + 9);
      }
    }
    goto LABEL_40;
  }
  v9 = v25 + 40;
  if ( v25 + 40 > v24 )
  {
LABEL_40:
    if ( v33 )
      goto LABEL_48;
    goto LABEL_41;
  }
  if ( *(_BYTE *)(v25 + v14 + 10) )
    v22 = (char *)(v25 + v14 + 24);
  v16 = *(_BYTE **)(v25 + v14 + 16);
LABEL_47:
  v17 = *(_BYTE *)(v25 + v14 + 9);
  v15 = *(_BYTE *)(v25 + v14 + 8);
LABEL_48:
  if ( v22 )
  {
    v27 = *v22;
    v21 = 0;
    goto LABEL_51;
  }
LABEL_8:
  IofCompleteRequest((PIRP)a2, 0);
  return v34;
}
