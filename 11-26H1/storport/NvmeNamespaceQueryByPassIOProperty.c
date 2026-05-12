/*
 * XREFs of NvmeNamespaceQueryByPassIOProperty @ 0x140109C4C
 * Callers:
 *     NvmeNamespaceInternalQueryPropertyIoctl @ 0x1401072B8 (NvmeNamespaceInternalQueryPropertyIoctl.c)
 * Callees:
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int64 __fastcall NvmeNamespaceQueryByPassIOProperty(__int64 a1, __int64 a2, _BYTE *a3)
{
  int v3; // ebx
  _DWORD *v4; // rsi
  size_t v8; // rbp
  unsigned int v9; // r14d
  __int64 v10; // rax
  __int64 v11; // rax
  bool v12; // zf
  unsigned __int64 v13; // rcx
  __int64 v14; // rdx
  int *v15; // rax
  const EVENT_DESCRIPTOR *v16; // rdx
  __int64 v17; // rdx
  _BYTE *v18; // r9
  unsigned __int8 v19; // bp
  char v20; // r11
  char v21; // si
  char v22; // r10
  char v23; // r15
  char *v24; // r15
  unsigned int v25; // r13d
  unsigned __int64 v26; // r12
  __int64 v27; // r8
  int v28; // ecx
  char v29; // r12
  char v30; // cl
  char v31; // r8
  char v32; // al
  char *v33; // r10
  unsigned int v34; // eax
  int v36; // [rsp+20h] [rbp-98h]
  char v37; // [rsp+60h] [rbp-58h]
  char v38; // [rsp+61h] [rbp-57h]
  unsigned int v39; // [rsp+64h] [rbp-54h]
  GUID v40; // [rsp+68h] [rbp-50h] BYREF

  v3 = 0;
  v4 = *(_DWORD **)(a2 + 24);
  v8 = *(unsigned int *)(*(_QWORD *)(a2 + 184) + 8LL);
  if ( !a3 )
  {
    v9 = -1073741811;
LABEL_3:
    v10 = 0LL;
    goto LABEL_15;
  }
  *a3 = 1;
  if ( *(_BYTE *)(a2 + 64) )
  {
    v9 = -1073741790;
    goto LABEL_3;
  }
  if ( (unsigned int)v8 < 8 )
  {
    v9 = -1073741789;
    goto LABEL_3;
  }
  memset_0(v4, 0, v8);
  *v4 = 40;
  v4[1] = 40;
  if ( (unsigned int)v8 >= 0x28 )
  {
    v11 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 1048LL);
    if ( v11 && (*(_DWORD *)(v11 + 24) & 0x20000) != 0 )
    {
      v9 = -1073741637;
      goto LABEL_3;
    }
    *((_QWORD *)v4 + 1) = *(_QWORD *)(a1 + 8);
    *((_QWORD *)v4 + 2) = NvmeNamespaceDereferenceDeviceObject;
    *((_QWORD *)v4 + 3) = NvmeNamespaceStartBypassIo;
    v10 = 40LL;
    *a3 = 0;
  }
  else
  {
    v10 = 8LL;
  }
  v9 = 0;
LABEL_15:
  v12 = StorEtwLoggingEnabled == 0;
  *(_QWORD *)(a2 + 56) = v10;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v9;
  if ( v12 )
    goto LABEL_81;
  v40 = 0LL;
  IoGetActivityIdIrp(a2, &v40);
  v14 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v14 == 14 )
  {
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_81;
    v36 = *(_DWORD *)(a2 + 48);
    v16 = &EventNonReadWriteRequestComplete;
    goto LABEL_80;
  }
  if ( *(_BYTE *)v14 != 15 )
  {
    if ( *(_BYTE *)v14 != 27 )
      goto LABEL_81;
    if ( *(_BYTE *)(v14 + 1) == 7 && !*(_DWORD *)(v14 + 8) )
    {
      if ( (byte_140173442 & 0x40) != 0 )
      {
        v15 = *(int **)(a2 + 56);
        if ( v15 )
          v3 = *v15;
        McTemplateK0pqd_EtwWriteTransfer(v13, v14, &v40, a2, v3, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_81;
    }
    if ( (byte_140173442 & 0x20) == 0 )
      goto LABEL_81;
    v16 = &EventPnpRequestComplete;
    v36 = *(_DWORD *)(a2 + 48);
LABEL_80:
    McTemplateK0pd_EtwWriteTransfer(v13, v16, &v40, a2, v36);
    goto LABEL_81;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_81;
  v17 = *(_QWORD *)(v14 + 8);
  v18 = 0LL;
  v37 = 0;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  if ( *(_BYTE *)(v17 + 2) != 40 )
  {
    v30 = *(_BYTE *)(v17 + 72);
    v18 = *(_BYTE **)(v17 + 32);
    v19 = *(_BYTE *)(v17 + 11);
    v29 = *(_BYTE *)(v17 + 4);
    if ( *(_BYTE *)(v17 + 2) )
      goto LABEL_81;
LABEL_55:
    LOBYTE(v13) = v30 - 8;
    if ( (v13 & 0x5D) != 0 )
      goto LABEL_81;
    v31 = *(_BYTE *)(v17 + 3);
    if ( v31 == 1 || !v18 || !v19 )
      goto LABEL_74;
    v32 = *v18 & 0x7F;
    if ( v32 == 114 || v32 == 115 )
    {
      v13 = (unsigned __int64)&v18[v19];
      LOBYTE(v17) = 0;
      if ( (unsigned __int64)(v18 + 8) > v13 )
        goto LABEL_72;
      v21 = v18[2];
      v20 = v18[1] & 0xF;
      v22 = v18[3];
    }
    else
    {
      v13 = (unsigned __int64)&v18[v19];
      LOBYTE(v17) = 0;
      if ( (unsigned __int64)(v18 + 8) > v13 )
        goto LABEL_72;
      v33 = v18 + 13;
      v20 = v18[2] & 0xF;
      v34 = v19;
      if ( (unsigned int)(unsigned __int8)v18[7] + 8 <= v19 )
        v34 = (unsigned __int8)v18[7] + 8;
      v13 = (unsigned __int64)&v18[v34];
      if ( (unsigned __int64)v33 <= v13 )
        v21 = v18[12];
      if ( (unsigned __int64)(v18 + 14) > v13 )
        v22 = 0;
      else
        v22 = *v33;
    }
    LOBYTE(v17) = 1;
LABEL_72:
    if ( (_BYTE)v17 )
      v23 = 1;
LABEL_74:
    if ( byte_140173441 < 0 )
    {
      if ( !v23 )
      {
        v22 = 0;
        v21 = 0;
        v20 = 0;
      }
      McTemplateK0pduuuuup_EtwWriteTransfer(v13, v17, &v40, a2, *(_DWORD *)(a2 + 48), v31, v29, v20, v21, v22, a2);
    }
    goto LABEL_81;
  }
  v24 = 0LL;
  v38 = 0;
  if ( !*(_DWORD *)(v17 + 20) )
  {
    v25 = 0;
    v39 = *(_DWORD *)(v17 + 56);
    if ( v39 )
    {
      do
      {
        v13 = *(unsigned int *)(v17 + 4LL * v25 + 120);
        if ( (unsigned int)v13 >= 0x80 )
        {
          v26 = *(unsigned int *)(v17 + 16);
          if ( (unsigned int)v13 < (unsigned int)v26 )
          {
            v27 = (unsigned int)v13;
            v28 = *(_DWORD *)(v13 + v17) - 64;
            if ( v28 )
            {
              v13 = (unsigned int)(v28 - 1);
              if ( (_DWORD)v13 )
              {
                if ( (_DWORD)v13 == 1 )
                {
                  v13 = v27 + 40;
                  if ( v27 + 40 <= v26 )
                  {
                    if ( *(_DWORD *)(v27 + v17 + 12) )
                      v24 = (char *)(v27 + v17 + 32);
                    v18 = *(_BYTE **)(v27 + v17 + 24);
LABEL_40:
                    v29 = *(_BYTE *)(v27 + v17 + 8);
                    v19 = *(_BYTE *)(v27 + v17 + 9);
                    goto LABEL_49;
                  }
                }
              }
              else
              {
                v13 = v27 + 56;
                if ( v27 + 56 <= v26 )
                {
                  v38 = 1;
                  if ( *(_BYTE *)(v27 + v17 + 10) )
                    v24 = (char *)(v27 + v17 + 24);
                  v18 = *(_BYTE **)(v27 + v17 + 16);
                  v19 = *(_BYTE *)(v27 + v17 + 9);
                  v37 = *(_BYTE *)(v27 + v17 + 8);
                }
              }
            }
            else
            {
              v13 = v27 + 40;
              if ( v27 + 40 <= v26 )
              {
                if ( *(_BYTE *)(v27 + v17 + 10) )
                  v24 = (char *)(v27 + v17 + 24);
                v18 = *(_BYTE **)(v27 + v17 + 16);
                goto LABEL_40;
              }
            }
            if ( v38 )
              break;
          }
        }
        ++v25;
      }
      while ( v25 < v39 );
      v29 = v37;
LABEL_49:
      if ( v24 )
      {
        v30 = *v24;
        v23 = 0;
        goto LABEL_55;
      }
    }
  }
LABEL_81:
  IofCompleteRequest((PIRP)a2, 0);
  return v9;
}
