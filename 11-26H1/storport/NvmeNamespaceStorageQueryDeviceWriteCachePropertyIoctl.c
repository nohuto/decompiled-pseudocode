/*
 * XREFs of NvmeNamespaceStorageQueryDeviceWriteCachePropertyIoctl @ 0x1401AE3DC
 * Callers:
 *     NvmeNamespaceStorageQueryPropertyIoctl @ 0x1401B9BD8 (NvmeNamespaceStorageQueryPropertyIoctl.c)
 * Callees:
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int64 __fastcall NvmeNamespaceStorageQueryDeviceWriteCachePropertyIoctl(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rsi
  int v3; // ebx
  __int64 v4; // r14
  __int64 v6; // rax
  int v7; // ecx
  __int64 v8; // r15
  unsigned int v9; // edx
  __int64 v10; // rbp
  unsigned int v11; // r15d
  int v12; // eax
  bool v13; // zf
  unsigned __int64 v14; // rcx
  __int64 v15; // rdx
  int *v16; // rax
  const EVENT_DESCRIPTOR *v17; // rdx
  __int64 v18; // rdx
  _BYTE *v19; // r9
  unsigned __int8 v20; // bp
  char v21; // r11
  char v22; // si
  char v23; // r10
  char v24; // r14
  char *v25; // r14
  unsigned int v26; // r13d
  unsigned __int64 v27; // r12
  __int64 v28; // r8
  int v29; // ecx
  char v30; // r12
  char v31; // cl
  char v32; // r8
  char v33; // al
  char *v34; // r10
  unsigned int v35; // eax
  int v37; // [rsp+20h] [rbp-88h]
  char v38; // [rsp+60h] [rbp-48h]
  char v39; // [rsp+61h] [rbp-47h]
  unsigned int v40; // [rsp+64h] [rbp-44h]
  GUID v41; // [rsp+68h] [rbp-40h] BYREF

  v2 = *(_DWORD **)(a2 + 24);
  v3 = 0;
  v4 = *(_QWORD *)(a1 + 16);
  v6 = *(_QWORD *)(a2 + 184);
  v7 = v2[1];
  v8 = *(_QWORD *)(v4 + 592);
  v9 = *(_DWORD *)(v6 + 8);
  if ( v7 )
  {
    v10 = 0LL;
    if ( v7 != 1 )
    {
      v11 = -1073741637;
      goto LABEL_13;
    }
  }
  else
  {
    if ( v9 < 8 )
    {
      v11 = -1073741789;
      v10 = 0LL;
      goto LABEL_13;
    }
    v10 = 28LL;
    if ( v9 >= 0x1C )
    {
      memset_0(v2, 0, *(unsigned int *)(v6 + 8));
      *v2 = 28;
      *(_QWORD *)(v2 + 1) = 28LL;
      *(_WORD *)((char *)v2 + 25) = 0;
      v2[3] = 0;
      v2[4] = 1;
      if ( (*(_BYTE *)(v8 + 525) & 1) != 0 )
      {
        v2[3] = ((*(_DWORD *)(v4 + 136) & 0x80000) != 0LL) + 1;
        v12 = (*(_DWORD *)(v4 + 136) >> 18) & 2;
        v2[4] = 2;
        v2[2] = v12;
        if ( (*(_BYTE *)(v4 + 136) & 2) == 0 )
          *((_BYTE *)v2 + 24) = 1;
      }
      v2[5] = 2;
    }
    else
    {
      *v2 = 28;
      v2[1] = 28;
      v10 = 8LL;
    }
  }
  v11 = 0;
LABEL_13:
  *(_QWORD *)(a2 + 56) = v10;
  v13 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v11;
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
    v17 = &EventNonReadWriteRequestComplete;
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
          v3 = *v16;
        McTemplateK0pqd_EtwWriteTransfer(v14, v15, &v41, a2, v3, *(_DWORD *)(a2 + 48));
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
  v19 = 0LL;
  v38 = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  if ( *(_BYTE *)(v18 + 2) != 40 )
  {
    v31 = *(_BYTE *)(v18 + 72);
    v19 = *(_BYTE **)(v18 + 32);
    v20 = *(_BYTE *)(v18 + 11);
    v30 = *(_BYTE *)(v18 + 4);
    if ( *(_BYTE *)(v18 + 2) )
      goto LABEL_79;
LABEL_53:
    LOBYTE(v14) = v31 - 8;
    if ( (v14 & 0x5D) != 0 )
      goto LABEL_79;
    v32 = *(_BYTE *)(v18 + 3);
    if ( v32 == 1 || !v19 || !v20 )
      goto LABEL_72;
    v33 = *v19 & 0x7F;
    if ( v33 == 114 || v33 == 115 )
    {
      v14 = (unsigned __int64)&v19[v20];
      LOBYTE(v18) = 0;
      if ( (unsigned __int64)(v19 + 8) > v14 )
        goto LABEL_70;
      v22 = v19[2];
      v21 = v19[1] & 0xF;
      v23 = v19[3];
    }
    else
    {
      v14 = (unsigned __int64)&v19[v20];
      LOBYTE(v18) = 0;
      if ( (unsigned __int64)(v19 + 8) > v14 )
        goto LABEL_70;
      v34 = v19 + 13;
      v21 = v19[2] & 0xF;
      v35 = v20;
      if ( (unsigned int)(unsigned __int8)v19[7] + 8 <= v20 )
        v35 = (unsigned __int8)v19[7] + 8;
      v14 = (unsigned __int64)&v19[v35];
      if ( (unsigned __int64)v34 <= v14 )
        v22 = v19[12];
      if ( (unsigned __int64)(v19 + 14) > v14 )
        v23 = 0;
      else
        v23 = *v34;
    }
    LOBYTE(v18) = 1;
LABEL_70:
    if ( (_BYTE)v18 )
      v24 = 1;
LABEL_72:
    if ( byte_140173441 < 0 )
    {
      if ( !v24 )
      {
        v23 = 0;
        v22 = 0;
        v21 = 0;
      }
      McTemplateK0pduuuuup_EtwWriteTransfer(v14, v18, &v41, a2, *(_DWORD *)(a2 + 48), v32, v30, v21, v22, v23, a2);
    }
    goto LABEL_79;
  }
  v25 = 0LL;
  v39 = 0;
  if ( !*(_DWORD *)(v18 + 20) )
  {
    v26 = 0;
    v40 = *(_DWORD *)(v18 + 56);
    if ( v40 )
    {
      do
      {
        v14 = *(unsigned int *)(v18 + 4LL * v26 + 120);
        if ( (unsigned int)v14 >= 0x80 )
        {
          v27 = *(unsigned int *)(v18 + 16);
          if ( (unsigned int)v14 < (unsigned int)v27 )
          {
            v28 = (unsigned int)v14;
            v29 = *(_DWORD *)(v14 + v18) - 64;
            if ( v29 )
            {
              v14 = (unsigned int)(v29 - 1);
              if ( (_DWORD)v14 )
              {
                if ( (_DWORD)v14 == 1 )
                {
                  v14 = v28 + 40;
                  if ( v28 + 40 <= v27 )
                  {
                    if ( *(_DWORD *)(v28 + v18 + 12) )
                      v25 = (char *)(v28 + v18 + 32);
                    v19 = *(_BYTE **)(v28 + v18 + 24);
LABEL_38:
                    v30 = *(_BYTE *)(v28 + v18 + 8);
                    v20 = *(_BYTE *)(v28 + v18 + 9);
                    goto LABEL_47;
                  }
                }
              }
              else
              {
                v14 = v28 + 56;
                if ( v28 + 56 <= v27 )
                {
                  v39 = 1;
                  if ( *(_BYTE *)(v28 + v18 + 10) )
                    v25 = (char *)(v28 + v18 + 24);
                  v19 = *(_BYTE **)(v28 + v18 + 16);
                  v20 = *(_BYTE *)(v28 + v18 + 9);
                  v38 = *(_BYTE *)(v28 + v18 + 8);
                }
              }
            }
            else
            {
              v14 = v28 + 40;
              if ( v28 + 40 <= v27 )
              {
                if ( *(_BYTE *)(v28 + v18 + 10) )
                  v25 = (char *)(v28 + v18 + 24);
                v19 = *(_BYTE **)(v28 + v18 + 16);
                goto LABEL_38;
              }
            }
            if ( v39 )
              break;
          }
        }
        ++v26;
      }
      while ( v26 < v40 );
      v30 = v38;
LABEL_47:
      if ( v25 )
      {
        v31 = *v25;
        v24 = 0;
        goto LABEL_53;
      }
    }
  }
LABEL_79:
  IofCompleteRequest((PIRP)a2, 0);
  return v11;
}
