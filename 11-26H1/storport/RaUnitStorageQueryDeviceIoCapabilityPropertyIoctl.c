/*
 * XREFs of RaUnitStorageQueryDeviceIoCapabilityPropertyIoctl @ 0x1401B7E64
 * Callers:
 *     RaUnitStorageQueryPropertyIoctl @ 0x1401B2144 (RaUnitStorageQueryPropertyIoctl.c)
 * Callees:
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int64 __fastcall RaUnitStorageQueryDeviceIoCapabilityPropertyIoctl(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rsi
  int v4; // ebx
  size_t v6; // r8
  int v7; // edx
  unsigned int v8; // r14d
  bool v9; // zf
  unsigned __int64 v10; // rcx
  __int64 v11; // rdx
  const EVENT_DESCRIPTOR *v13; // rdx
  int *v14; // rax
  char v15; // al
  __int64 v16; // rdx
  char *v17; // r10
  char v18; // r11
  unsigned int v19; // eax
  char v20; // si
  char v21; // r10
  char v22; // r15
  _DWORD *v23; // rax
  _DWORD *v24; // rax
  _BYTE *v25; // r9
  unsigned __int8 v26; // bp
  char *v27; // r15
  unsigned int v28; // r13d
  _DWORD *v29; // rax
  __int64 v30; // rax
  unsigned __int64 v31; // r12
  __int64 v32; // r8
  int v33; // ecx
  char v34; // r12
  char v35; // cl
  char v36; // r8
  int v37; // [rsp+20h] [rbp-88h]
  char v38; // [rsp+60h] [rbp-48h]
  char v39; // [rsp+61h] [rbp-47h]
  unsigned int v40; // [rsp+64h] [rbp-44h]
  GUID v41; // [rsp+68h] [rbp-40h] BYREF

  v3 = *(_DWORD **)(a2 + 24);
  v4 = 0;
  v6 = *(unsigned int *)(*(_QWORD *)(a2 + 184) + 8LL);
  v7 = v3[1];
  if ( v7 )
  {
    if ( v7 == 1 )
    {
LABEL_5:
      v8 = 0;
      goto LABEL_6;
    }
    v8 = -1073741637;
  }
  else
  {
    if ( (unsigned int)v6 >= 8 )
    {
      if ( (unsigned int)v6 >= 0x10 )
      {
        memset_0(v3, 0, v6);
        *v3 = 16;
        v3[1] = 16;
        v23 = *(_DWORD **)(a1 + 24);
        if ( v23 )
        {
          if ( *v23 == 1094997074 )
          {
            v24 = v23 + 94;
          }
          else if ( *v23 == 1314275652 )
          {
            v24 = v23 + 42;
          }
          else
          {
            v24 = 0LL;
          }
          v3[2] = v24[54];
          v29 = *(_DWORD **)(a1 + 24);
          if ( *v29 == 1094997074 )
          {
            v30 = (__int64)(v29 + 147);
          }
          else if ( *v29 == 1314275652 )
          {
            v30 = (__int64)(v29 + 95);
          }
          else
          {
            v30 = 212LL;
          }
          v3[3] = *(_DWORD *)v30;
        }
        *(_QWORD *)(a2 + 56) = 16LL;
      }
      else
      {
        *v3 = 16;
        v3[1] = 16;
        *(_QWORD *)(a2 + 56) = 8LL;
      }
      goto LABEL_5;
    }
    v8 = -1073741789;
    *(_QWORD *)(a2 + 56) = 0LL;
  }
LABEL_6:
  v9 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v8;
  if ( v9 )
    goto LABEL_10;
  v41 = 0LL;
  IoGetActivityIdIrp(a2, &v41);
  v11 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v11 == 14 )
  {
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_10;
    v37 = *(_DWORD *)(a2 + 48);
    v13 = &EventNonReadWriteRequestComplete;
    goto LABEL_15;
  }
  if ( *(_BYTE *)v11 != 15 )
  {
    if ( *(_BYTE *)v11 != 27 )
      goto LABEL_10;
    if ( *(_BYTE *)(v11 + 1) == 7 && !*(_DWORD *)(v11 + 8) )
    {
      if ( (byte_140173442 & 0x40) != 0 )
      {
        v14 = *(int **)(a2 + 56);
        if ( v14 )
          v4 = *v14;
        McTemplateK0pqd_EtwWriteTransfer(v10, v11, &v41, a2, v4, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_10;
    }
    if ( (byte_140173442 & 0x20) == 0 )
      goto LABEL_10;
    v13 = &EventPnpRequestComplete;
    v37 = *(_DWORD *)(a2 + 48);
LABEL_15:
    McTemplateK0pd_EtwWriteTransfer(v10, v13, &v41, a2, v37);
    goto LABEL_10;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_10;
  v16 = *(_QWORD *)(v11 + 8);
  v25 = 0LL;
  v38 = 0;
  v26 = 0;
  v18 = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  if ( *(_BYTE *)(v16 + 2) != 40 )
  {
    v35 = *(_BYTE *)(v16 + 72);
    v25 = *(_BYTE **)(v16 + 32);
    v26 = *(_BYTE *)(v16 + 11);
    v34 = *(_BYTE *)(v16 + 4);
    if ( *(_BYTE *)(v16 + 2) )
      goto LABEL_10;
LABEL_87:
    LOBYTE(v10) = v35 - 8;
    if ( (v10 & 0x5D) != 0 )
      goto LABEL_10;
    v36 = *(_BYTE *)(v16 + 3);
    if ( v36 == 1 || !v25 || !v26 )
      goto LABEL_38;
    v15 = *v25 & 0x7F;
    if ( v15 == 114 || v15 == 115 )
    {
      v10 = (unsigned __int64)&v25[v26];
      LOBYTE(v16) = 0;
      if ( (unsigned __int64)(v25 + 8) > v10 )
      {
LABEL_36:
        if ( (_BYTE)v16 )
          v22 = 1;
LABEL_38:
        if ( byte_140173441 < 0 )
        {
          if ( !v22 )
          {
            v21 = 0;
            v20 = 0;
            v18 = 0;
          }
          McTemplateK0pduuuuup_EtwWriteTransfer(v10, v16, &v41, a2, *(_DWORD *)(a2 + 48), v36, v34, v18, v20, v21, a2);
        }
        goto LABEL_10;
      }
      v20 = v25[2];
      v18 = v25[1] & 0xF;
      v21 = v25[3];
    }
    else
    {
      v10 = (unsigned __int64)&v25[v26];
      LOBYTE(v16) = 0;
      if ( (unsigned __int64)(v25 + 8) > v10 )
        goto LABEL_36;
      v17 = v25 + 13;
      v18 = v25[2] & 0xF;
      v19 = v26;
      if ( (unsigned int)(unsigned __int8)v25[7] + 8 <= v26 )
        v19 = (unsigned __int8)v25[7] + 8;
      v10 = (unsigned __int64)&v25[v19];
      if ( (unsigned __int64)v17 <= v10 )
        v20 = v25[12];
      if ( (unsigned __int64)(v25 + 14) > v10 )
        v21 = 0;
      else
        v21 = *v17;
    }
    LOBYTE(v16) = 1;
    goto LABEL_36;
  }
  v27 = 0LL;
  v39 = 0;
  if ( *(_DWORD *)(v16 + 20) )
    goto LABEL_10;
  v28 = 0;
  v40 = *(_DWORD *)(v16 + 56);
  if ( !v40 )
    goto LABEL_10;
  while ( 1 )
  {
    v10 = *(unsigned int *)(v16 + 4LL * v28 + 120);
    if ( (unsigned int)v10 >= 0x80 )
    {
      v31 = *(unsigned int *)(v16 + 16);
      if ( (unsigned int)v10 < (unsigned int)v31 )
        break;
    }
LABEL_77:
    if ( ++v28 >= v40 )
    {
LABEL_78:
      v34 = v38;
      goto LABEL_79;
    }
  }
  v32 = (unsigned int)v10;
  v33 = *(_DWORD *)(v10 + v16) - 64;
  if ( v33 )
  {
    v10 = (unsigned int)(v33 - 1);
    if ( (_DWORD)v10 )
    {
      if ( (_DWORD)v10 == 1 )
      {
        v10 = v32 + 40;
        if ( v32 + 40 <= v31 )
        {
          if ( *(_DWORD *)(v32 + v16 + 12) )
            v27 = (char *)(v32 + v16 + 32);
          v25 = *(_BYTE **)(v32 + v16 + 24);
          goto LABEL_85;
        }
      }
    }
    else
    {
      v10 = v32 + 56;
      if ( v32 + 56 <= v31 )
      {
        v39 = 1;
        if ( *(_BYTE *)(v32 + v16 + 10) )
          v27 = (char *)(v32 + v16 + 24);
        v25 = *(_BYTE **)(v32 + v16 + 16);
        v26 = *(_BYTE *)(v32 + v16 + 9);
        v38 = *(_BYTE *)(v32 + v16 + 8);
      }
    }
    goto LABEL_76;
  }
  v10 = v32 + 40;
  if ( v32 + 40 > v31 )
  {
LABEL_76:
    if ( v39 )
      goto LABEL_78;
    goto LABEL_77;
  }
  if ( *(_BYTE *)(v32 + v16 + 10) )
    v27 = (char *)(v32 + v16 + 24);
  v25 = *(_BYTE **)(v32 + v16 + 16);
LABEL_85:
  v34 = *(_BYTE *)(v32 + v16 + 8);
  v26 = *(_BYTE *)(v32 + v16 + 9);
LABEL_79:
  if ( v27 )
  {
    v35 = *v27;
    v22 = 0;
    goto LABEL_87;
  }
LABEL_10:
  IofCompleteRequest((PIRP)a2, 0);
  return v8;
}
