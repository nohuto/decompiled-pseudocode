/*
 * XREFs of NvmeNamespaceQueryDeviceRelationsIrp @ 0x1401A779C
 * Callers:
 *     NvmeNamespacePnpIrp @ 0x140040B50 (NvmeNamespacePnpIrp.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall NvmeNamespaceQueryDeviceRelationsIrp(__int64 a1, __int64 a2)
{
  int v2; // ebx
  __int64 Pool; // rax
  __int64 v6; // rsi
  int v7; // eax
  bool v8; // zf
  unsigned __int64 v9; // rcx
  __int64 v10; // rdx
  int *v11; // rax
  const EVENT_DESCRIPTOR *v12; // rdx
  __int64 v13; // rdx
  char v14; // r13
  _BYTE *v15; // r9
  unsigned __int8 v16; // bp
  char v17; // si
  char v18; // r11
  char v19; // r10
  char v20; // r14
  char *v21; // r14
  unsigned int v22; // r12d
  unsigned __int64 v23; // r15
  __int64 v24; // r8
  int v25; // ecx
  char v26; // cl
  char v27; // r8
  char v28; // al
  char *v29; // r10
  unsigned int v30; // eax
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
    goto LABEL_72;
  v36 = 0LL;
  IoGetActivityIdIrp(a2, &v36);
  v10 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v10 == 14 )
  {
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_72;
    v32 = *(_DWORD *)(a2 + 48);
    v12 = &EventNonReadWriteRequestComplete;
    goto LABEL_71;
  }
  if ( *(_BYTE *)v10 != 15 )
  {
    if ( *(_BYTE *)v10 != 27 )
      goto LABEL_72;
    if ( *(_BYTE *)(v10 + 1) == 7 && !*(_DWORD *)(v10 + 8) )
    {
      if ( (byte_140173442 & 0x40) != 0 )
      {
        v11 = *(int **)(a2 + 56);
        if ( v11 )
          v2 = *v11;
        McTemplateK0pqd_EtwWriteTransfer(v9, v10, &v36, a2, v2, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_72;
    }
    if ( (byte_140173442 & 0x20) == 0 )
      goto LABEL_72;
    v12 = &EventPnpRequestComplete;
    v32 = *(_DWORD *)(a2 + 48);
LABEL_71:
    McTemplateK0pd_EtwWriteTransfer(v9, v12, &v36, a2, v32);
    goto LABEL_72;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_72;
  v13 = *(_QWORD *)(v10 + 8);
  v14 = 0;
  v15 = 0LL;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  if ( *(_BYTE *)(v13 + 2) != 40 )
  {
    v26 = *(_BYTE *)(v13 + 72);
    v15 = *(_BYTE **)(v13 + 32);
    v16 = *(_BYTE *)(v13 + 11);
    v14 = *(_BYTE *)(v13 + 4);
    if ( *(_BYTE *)(v13 + 2) )
      goto LABEL_72;
LABEL_46:
    LOBYTE(v9) = v26 - 8;
    if ( (v9 & 0x5D) != 0 )
      goto LABEL_72;
    v27 = *(_BYTE *)(v13 + 3);
    if ( v27 == 1 || !v15 || !v16 )
      goto LABEL_65;
    v28 = *v15 & 0x7F;
    if ( v28 == 114 || v28 == 115 )
    {
      v9 = (unsigned __int64)&v15[v16];
      LOBYTE(v13) = 0;
      if ( (unsigned __int64)(v15 + 8) > v9 )
        goto LABEL_63;
      v18 = v15[2];
      v17 = v15[1] & 0xF;
      v19 = v15[3];
    }
    else
    {
      v9 = (unsigned __int64)&v15[v16];
      LOBYTE(v13) = 0;
      if ( (unsigned __int64)(v15 + 8) > v9 )
        goto LABEL_63;
      v29 = v15 + 13;
      v17 = v15[2] & 0xF;
      v30 = v16;
      if ( (unsigned int)(unsigned __int8)v15[7] + 8 <= v16 )
        v30 = (unsigned __int8)v15[7] + 8;
      v9 = (unsigned __int64)&v15[v30];
      if ( (unsigned __int64)v29 <= v9 )
        v18 = v15[12];
      if ( (unsigned __int64)(v15 + 14) > v9 )
        v19 = 0;
      else
        v19 = *v29;
    }
    LOBYTE(v13) = 1;
LABEL_63:
    if ( (_BYTE)v13 )
      v20 = 1;
LABEL_65:
    if ( byte_140173441 < 0 )
    {
      if ( !v20 )
      {
        v19 = 0;
        v18 = 0;
        v17 = 0;
      }
      McTemplateK0pduuuuup_EtwWriteTransfer(v9, v13, &v36, a2, *(_DWORD *)(a2 + 48), v27, v14, v17, v18, v19, a2);
    }
    goto LABEL_72;
  }
  v21 = 0LL;
  v33 = 0;
  if ( *(_DWORD *)(v13 + 20) )
    goto LABEL_72;
  v22 = 0;
  v35 = *(_DWORD *)(v13 + 56);
  if ( !v35 )
    goto LABEL_72;
  while ( 1 )
  {
    v9 = *(unsigned int *)(v13 + 4LL * v22 + 120);
    if ( (unsigned int)v9 >= 0x80 )
    {
      v23 = *(unsigned int *)(v13 + 16);
      if ( (unsigned int)v9 < (unsigned int)v23 )
        break;
    }
LABEL_37:
    if ( ++v22 >= v35 )
      goto LABEL_43;
  }
  v24 = (unsigned int)v9;
  v25 = *(_DWORD *)(v9 + v13) - 64;
  if ( v25 )
  {
    v9 = (unsigned int)(v25 - 1);
    if ( (_DWORD)v9 )
    {
      if ( (_DWORD)v9 == 1 )
      {
        v9 = v24 + 40;
        if ( v24 + 40 <= v23 )
        {
          if ( *(_DWORD *)(v24 + v13 + 12) )
            v21 = (char *)(v24 + v13 + 32);
          v15 = *(_BYTE **)(v24 + v13 + 24);
          goto LABEL_42;
        }
      }
    }
    else
    {
      v9 = v24 + 56;
      if ( v24 + 56 <= v23 )
      {
        v33 = 1;
        if ( *(_BYTE *)(v24 + v13 + 10) )
          v21 = (char *)(v24 + v13 + 24);
        v14 = *(_BYTE *)(v24 + v13 + 8);
        v15 = *(_BYTE **)(v24 + v13 + 16);
        v16 = *(_BYTE *)(v24 + v13 + 9);
      }
    }
    goto LABEL_36;
  }
  v9 = v24 + 40;
  if ( v24 + 40 > v23 )
  {
LABEL_36:
    if ( v33 )
      goto LABEL_43;
    goto LABEL_37;
  }
  if ( *(_BYTE *)(v24 + v13 + 10) )
    v21 = (char *)(v24 + v13 + 24);
  v15 = *(_BYTE **)(v24 + v13 + 16);
LABEL_42:
  v16 = *(_BYTE *)(v24 + v13 + 9);
  v14 = *(_BYTE *)(v24 + v13 + 8);
LABEL_43:
  if ( v21 )
  {
    v26 = *v21;
    v20 = 0;
    goto LABEL_46;
  }
LABEL_72:
  IofCompleteRequest((PIRP)a2, 0);
  return v34;
}
