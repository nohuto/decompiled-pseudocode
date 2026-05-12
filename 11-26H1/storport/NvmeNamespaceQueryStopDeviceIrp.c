/*
 * XREFs of NvmeNamespaceQueryStopDeviceIrp @ 0x1401A9180
 * Callers:
 *     NvmeNamespacePnpIrp @ 0x140040B50 (NvmeNamespacePnpIrp.c)
 * Callees:
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall NvmeNamespaceQueryStopDeviceIrp(__int64 a1, __int64 a2)
{
  int v3; // ecx
  int v4; // ebx
  bool v5; // zf
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
  int v29; // [rsp+20h] [rbp-A8h]
  char v30; // [rsp+60h] [rbp-68h]
  unsigned int v31; // [rsp+64h] [rbp-64h]
  unsigned int v32; // [rsp+68h] [rbp-60h]
  GUID v33; // [rsp+70h] [rbp-58h] BYREF

  _InterlockedExchange((volatile __int32 *)(a1 + 96), 3);
  v3 = -*(_DWORD *)(a1 + 264);
  *(_BYTE *)(a2 + 141) = -84;
  v4 = 0;
  v5 = StorEtwLoggingEnabled == 0;
  v32 = v3 != 0 ? 0x80000011 : 0;
  *(_DWORD *)(a2 + 48) = v32;
  if ( v5 )
    goto LABEL_67;
  v33 = 0LL;
  IoGetActivityIdIrp(a2, &v33);
  v7 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v7 == 14 )
  {
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_67;
    v29 = *(_DWORD *)(a2 + 48);
    v9 = &EventNonReadWriteRequestComplete;
    goto LABEL_66;
  }
  if ( *(_BYTE *)v7 != 15 )
  {
    if ( *(_BYTE *)v7 != 27 )
      goto LABEL_67;
    if ( *(_BYTE *)(v7 + 1) == 7 && !*(_DWORD *)(v7 + 8) )
    {
      if ( (byte_140173442 & 0x40) != 0 )
      {
        v8 = *(int **)(a2 + 56);
        if ( v8 )
          v4 = *v8;
        McTemplateK0pqd_EtwWriteTransfer(v6, v7, &v33, a2, v4, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_67;
    }
    if ( (byte_140173442 & 0x20) == 0 )
      goto LABEL_67;
    v9 = &EventPnpRequestComplete;
    v29 = *(_DWORD *)(a2 + 48);
LABEL_66:
    McTemplateK0pd_EtwWriteTransfer(v6, v9, &v33, a2, v29);
    goto LABEL_67;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_67;
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
      goto LABEL_67;
LABEL_41:
    LOBYTE(v6) = v23 - 8;
    if ( (v6 & 0x5D) != 0 )
      goto LABEL_67;
    v24 = *(_BYTE *)(v10 + 3);
    if ( v24 == 1 || !v12 || !v13 )
      goto LABEL_60;
    v25 = *v12 & 0x7F;
    if ( v25 == 114 || v25 == 115 )
    {
      v6 = (unsigned __int64)&v12[v13];
      LOBYTE(v10) = 0;
      if ( (unsigned __int64)(v12 + 8) > v6 )
        goto LABEL_58;
      v15 = v12[2];
      v14 = v12[1] & 0xF;
      v16 = v12[3];
    }
    else
    {
      v6 = (unsigned __int64)&v12[v13];
      LOBYTE(v10) = 0;
      if ( (unsigned __int64)(v12 + 8) > v6 )
        goto LABEL_58;
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
LABEL_58:
    if ( (_BYTE)v10 )
      v17 = 1;
LABEL_60:
    if ( byte_140173441 < 0 )
    {
      if ( !v17 )
      {
        v16 = 0;
        v15 = 0;
        v14 = 0;
      }
      McTemplateK0pduuuuup_EtwWriteTransfer(v6, v10, &v33, a2, *(_DWORD *)(a2 + 48), v24, v11, v14, v15, v16, a2);
    }
    goto LABEL_67;
  }
  v18 = 0LL;
  v30 = 0;
  if ( *(_DWORD *)(v10 + 20) )
    goto LABEL_67;
  v19 = 0;
  v31 = *(_DWORD *)(v10 + 56);
  if ( !v31 )
    goto LABEL_67;
  while ( 1 )
  {
    v6 = *(unsigned int *)(v10 + 4LL * v19 + 120);
    if ( (unsigned int)v6 >= 0x80 )
    {
      v20 = *(unsigned int *)(v10 + 16);
      if ( (unsigned int)v6 < (unsigned int)v20 )
        break;
    }
LABEL_32:
    if ( ++v19 >= v31 )
      goto LABEL_38;
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
          goto LABEL_37;
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
    goto LABEL_31;
  }
  v6 = v21 + 40;
  if ( v21 + 40 > v20 )
  {
LABEL_31:
    if ( v30 )
      goto LABEL_38;
    goto LABEL_32;
  }
  if ( *(_BYTE *)(v21 + v10 + 10) )
    v18 = (char *)(v21 + v10 + 24);
  v12 = *(_BYTE **)(v21 + v10 + 16);
LABEL_37:
  v13 = *(_BYTE *)(v21 + v10 + 9);
  v11 = *(_BYTE *)(v21 + v10 + 8);
LABEL_38:
  if ( v18 )
  {
    v23 = *v18;
    v17 = 0;
    goto LABEL_41;
  }
LABEL_67:
  IofCompleteRequest((PIRP)a2, 0);
  return v32;
}
