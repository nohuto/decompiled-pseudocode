/*
 * XREFs of NvmeNamespaceDiskSetCacheInformationIoctl @ 0x1401A577C
 * Callers:
 *     NvmeNamespaceDeviceControlIrp @ 0x1401BBC8C (NvmeNamespaceDeviceControlIrp.c)
 * Callees:
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     NvmeControllerSetCurrentWriteCacheState @ 0x1400CFB68 (NvmeControllerSetCurrentWriteCacheState.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall NvmeNamespaceDiskSetCacheInformationIoctl(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  int v3; // ebx
  __int64 v4; // rcx
  __int64 v6; // rdx
  unsigned int v7; // r15d
  unsigned int v8; // r8d
  __int64 v9; // rax
  bool v10; // zf
  unsigned __int64 v11; // rcx
  __int64 v12; // rdx
  int *v13; // rax
  const EVENT_DESCRIPTOR *v14; // rdx
  __int64 v15; // rdx
  _BYTE *v16; // r9
  unsigned __int8 v17; // bp
  char v18; // si
  char v19; // r11
  char v20; // r10
  char v21; // r14
  char *v22; // r14
  unsigned int v23; // r13d
  unsigned __int64 v24; // r12
  __int64 v25; // r8
  int v26; // ecx
  char v27; // r12
  char v28; // cl
  char v29; // r8
  char v30; // al
  char *v31; // r10
  unsigned int v32; // eax
  char v34; // [rsp+60h] [rbp-58h]
  char v35; // [rsp+61h] [rbp-57h]
  unsigned int v36; // [rsp+64h] [rbp-54h]
  GUID v37; // [rsp+68h] [rbp-50h] BYREF

  v2 = *(_QWORD *)(a2 + 184);
  v3 = 0;
  v4 = *(_QWORD *)(a1 + 16);
  v6 = *(_QWORD *)(a2 + 24);
  v7 = 0;
  v8 = *(_DWORD *)(v2 + 16);
  v9 = *(_QWORD *)(v4 + 592);
  if ( !v6 )
  {
    v7 = -1073741811;
LABEL_3:
    *(_QWORD *)(a2 + 56) = 0LL;
    goto LABEL_10;
  }
  if ( v8 < 0x18 )
  {
    v7 = -1073741789;
    goto LABEL_3;
  }
  if ( !v9 )
  {
    v7 = -1073741637;
    goto LABEL_3;
  }
  if ( (*(_BYTE *)(v9 + 525) & 1) != 0 )
    v7 = NvmeControllerSetCurrentWriteCacheState(v4, *(_BYTE *)(v6 + 2) != 0);
LABEL_10:
  v10 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v7;
  if ( v10 )
    goto LABEL_76;
  v37 = 0LL;
  IoGetActivityIdIrp(a2, &v37);
  v12 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v12 == 14 )
  {
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_76;
    v14 = &EventNonReadWriteRequestComplete;
    goto LABEL_75;
  }
  if ( *(_BYTE *)v12 != 15 )
  {
    if ( *(_BYTE *)v12 != 27 )
      goto LABEL_76;
    if ( *(_BYTE *)(v12 + 1) == 7 && !*(_DWORD *)(v12 + 8) )
    {
      if ( (byte_140173442 & 0x40) != 0 )
      {
        v13 = *(int **)(a2 + 56);
        if ( v13 )
          v3 = *v13;
        McTemplateK0pqd_EtwWriteTransfer(v11, v12, &v37, a2, v3, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_76;
    }
    if ( (byte_140173442 & 0x20) == 0 )
      goto LABEL_76;
    v14 = &EventPnpRequestComplete;
LABEL_75:
    McTemplateK0pd_EtwWriteTransfer(v11, v14, &v37, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_76;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_76;
  v15 = *(_QWORD *)(v12 + 8);
  v16 = 0LL;
  v34 = 0;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  if ( *(_BYTE *)(v15 + 2) != 40 )
  {
    v28 = *(_BYTE *)(v15 + 72);
    v16 = *(_BYTE **)(v15 + 32);
    v17 = *(_BYTE *)(v15 + 11);
    v27 = *(_BYTE *)(v15 + 4);
    if ( *(_BYTE *)(v15 + 2) )
      goto LABEL_76;
LABEL_50:
    LOBYTE(v11) = v28 - 8;
    if ( (v11 & 0x5D) != 0 )
      goto LABEL_76;
    v29 = *(_BYTE *)(v15 + 3);
    if ( v29 == 1 || !v16 || !v17 )
      goto LABEL_69;
    v30 = *v16 & 0x7F;
    if ( v30 == 114 || v30 == 115 )
    {
      v11 = (unsigned __int64)&v16[v17];
      LOBYTE(v15) = 0;
      if ( (unsigned __int64)(v16 + 8) > v11 )
        goto LABEL_67;
      v19 = v16[2];
      v18 = v16[1] & 0xF;
      v20 = v16[3];
    }
    else
    {
      v11 = (unsigned __int64)&v16[v17];
      LOBYTE(v15) = 0;
      if ( (unsigned __int64)(v16 + 8) > v11 )
        goto LABEL_67;
      v31 = v16 + 13;
      v18 = v16[2] & 0xF;
      v32 = v17;
      if ( (unsigned int)(unsigned __int8)v16[7] + 8 <= v17 )
        v32 = (unsigned __int8)v16[7] + 8;
      v11 = (unsigned __int64)&v16[v32];
      if ( (unsigned __int64)v31 <= v11 )
        v19 = v16[12];
      if ( (unsigned __int64)(v16 + 14) > v11 )
        v20 = 0;
      else
        v20 = *v31;
    }
    LOBYTE(v15) = 1;
LABEL_67:
    if ( (_BYTE)v15 )
      v21 = 1;
LABEL_69:
    if ( byte_140173441 < 0 )
    {
      if ( !v21 )
      {
        v20 = 0;
        v19 = 0;
        v18 = 0;
      }
      McTemplateK0pduuuuup_EtwWriteTransfer(v11, v15, &v37, a2, *(_DWORD *)(a2 + 48), v29, v27, v18, v19, v20, a2);
    }
    goto LABEL_76;
  }
  v22 = 0LL;
  v35 = 0;
  if ( !*(_DWORD *)(v15 + 20) )
  {
    v23 = 0;
    v36 = *(_DWORD *)(v15 + 56);
    if ( v36 )
    {
      do
      {
        v11 = *(unsigned int *)(v15 + 4LL * v23 + 120);
        if ( (unsigned int)v11 >= 0x80 )
        {
          v24 = *(unsigned int *)(v15 + 16);
          if ( (unsigned int)v11 < (unsigned int)v24 )
          {
            v25 = (unsigned int)v11;
            v26 = *(_DWORD *)(v11 + v15) - 64;
            if ( v26 )
            {
              v11 = (unsigned int)(v26 - 1);
              if ( (_DWORD)v11 )
              {
                if ( (_DWORD)v11 == 1 )
                {
                  v11 = v25 + 40;
                  if ( v25 + 40 <= v24 )
                  {
                    if ( *(_DWORD *)(v25 + v15 + 12) )
                      v22 = (char *)(v25 + v15 + 32);
                    v16 = *(_BYTE **)(v25 + v15 + 24);
LABEL_35:
                    v27 = *(_BYTE *)(v25 + v15 + 8);
                    v17 = *(_BYTE *)(v25 + v15 + 9);
                    goto LABEL_44;
                  }
                }
              }
              else
              {
                v11 = v25 + 56;
                if ( v25 + 56 <= v24 )
                {
                  v35 = 1;
                  if ( *(_BYTE *)(v25 + v15 + 10) )
                    v22 = (char *)(v25 + v15 + 24);
                  v16 = *(_BYTE **)(v25 + v15 + 16);
                  v17 = *(_BYTE *)(v25 + v15 + 9);
                  v34 = *(_BYTE *)(v25 + v15 + 8);
                }
              }
            }
            else
            {
              v11 = v25 + 40;
              if ( v25 + 40 <= v24 )
              {
                if ( *(_BYTE *)(v25 + v15 + 10) )
                  v22 = (char *)(v25 + v15 + 24);
                v16 = *(_BYTE **)(v25 + v15 + 16);
                goto LABEL_35;
              }
            }
            if ( v35 )
              break;
          }
        }
        ++v23;
      }
      while ( v23 < v36 );
      v27 = v34;
LABEL_44:
      if ( v22 )
      {
        v28 = *v22;
        v21 = 0;
        goto LABEL_50;
      }
    }
  }
LABEL_76:
  IofCompleteRequest((PIRP)a2, 0);
  return v7;
}
