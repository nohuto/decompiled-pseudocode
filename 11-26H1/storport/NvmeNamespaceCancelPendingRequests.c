/*
 * XREFs of NvmeNamespaceCancelPendingRequests @ 0x1401017CC
 * Callers:
 *     NvmeNamespaceDisableDeviceIrp @ 0x140103A74 (NvmeNamespaceDisableDeviceIrp.c)
 *     NvmeNamespaceSurpriseRemovalIrp @ 0x1401AF2A0 (NvmeNamespaceSurpriseRemovalIrp.c)
 * Callees:
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     StorPopRequestFromDeviceQueue @ 0x14011E470 (StorPopRequestFromDeviceQueue.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall NvmeNamespaceCancelPendingRequests(__int64 a1)
{
  unsigned int v1; // eax
  __int64 v2; // r15
  __int64 i; // rdx
  _BYTE *v4; // rcx
  bool v5; // zf
  unsigned __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  const EVENT_DESCRIPTOR *v9; // rdx
  __int64 v10; // rdx
  _BYTE *v11; // r9
  unsigned __int8 v12; // r10
  char v13; // di
  char v14; // si
  char v15; // r11
  char v16; // r14
  char *v17; // r14
  char v18; // r12
  unsigned int v19; // r13d
  __int64 v20; // r15
  unsigned __int64 v21; // rbp
  __int64 v22; // r8
  int v23; // ecx
  char v24; // bp
  char v25; // cl
  char v26; // r8
  char v27; // al
  char *v28; // r11
  unsigned int v29; // eax
  __int64 v30; // rax
  __int64 v31; // rbx
  __int64 v33; // [rsp+20h] [rbp-98h]
  __int64 v34; // [rsp+28h] [rbp-90h]
  __int64 v35; // [rsp+30h] [rbp-88h]
  __int64 v36; // [rsp+38h] [rbp-80h]
  __int64 v37; // [rsp+40h] [rbp-78h]
  __int64 v38; // [rsp+48h] [rbp-70h]
  char v39; // [rsp+60h] [rbp-58h]
  unsigned int v40; // [rsp+64h] [rbp-54h]
  _DWORD *v42; // [rsp+70h] [rbp-48h]
  GUID v43; // [rsp+78h] [rbp-40h] BYREF

  v1 = 0;
  v2 = a1;
  v40 = 0;
  v42 = g_CpuInfo;
  if ( *((_DWORD *)g_CpuInfo + 2) )
  {
    do
    {
      for ( i = v1; ; i = v40 )
      {
        v30 = StorPopRequestFromDeviceQueue(*(_QWORD *)(v2 + 256), i);
        v31 = v30;
        if ( !v30 )
          break;
        v4 = *(_BYTE **)(v30 + 184);
        *(_QWORD *)(v30 + 56) = 0LL;
        if ( *v4 == 15 )
          ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v2 + 120));
        v5 = StorEtwLoggingEnabled == 0;
        *(_BYTE *)(v31 + 141) = -84;
        *(_DWORD *)(v31 + 48) = -1073741536;
        if ( !v5 )
        {
          v43 = 0LL;
          IoGetActivityIdIrp(v31, &v43);
          v7 = *(_QWORD *)(v31 + 184);
          switch ( *(_BYTE *)v7 )
          {
            case 0xE:
              if ( (byte_140173442 & 8) != 0 )
              {
                v9 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
LABEL_17:
                LODWORD(v33) = *(_DWORD *)(v31 + 48);
                McTemplateK0pd_EtwWriteTransfer(v6, v9, &v43, v31, v33);
              }
              break;
            case 0xF:
              if ( byte_140173441 >= 0 )
                break;
              v10 = *(_QWORD *)(v7 + 8);
              v39 = 0;
              v11 = 0LL;
              v12 = 0;
              v13 = 0;
              v14 = 0;
              v15 = 0;
              v16 = 0;
              if ( *(_BYTE *)(v10 + 2) != 40 )
              {
                v25 = *(_BYTE *)(v10 + 72);
                v11 = *(_BYTE **)(v10 + 32);
                v12 = *(_BYTE *)(v10 + 11);
                v24 = *(_BYTE *)(v10 + 4);
                if ( *(_BYTE *)(v10 + 2) )
                  break;
LABEL_46:
                LOBYTE(v6) = v25 - 8;
                if ( (v6 & 0x5D) != 0 )
                  break;
                v26 = *(_BYTE *)(v10 + 3);
                if ( v26 != 1 && v11 && v12 )
                {
                  v27 = *v11 & 0x7F;
                  if ( v27 == 114 || v27 == 115 )
                  {
                    v6 = (unsigned __int64)&v11[v12];
                    LOBYTE(v10) = 0;
                    if ( (unsigned __int64)(v11 + 8) <= v6 )
                    {
                      v14 = v11[2];
                      v13 = v11[1] & 0xF;
                      v15 = v11[3];
                      goto LABEL_62;
                    }
                  }
                  else
                  {
                    v6 = (unsigned __int64)&v11[v12];
                    LOBYTE(v10) = 0;
                    if ( (unsigned __int64)(v11 + 8) <= v6 )
                    {
                      v28 = v11 + 13;
                      v13 = v11[2] & 0xF;
                      v29 = v12;
                      if ( (unsigned int)(unsigned __int8)v11[7] + 8 <= v12 )
                        v29 = (unsigned __int8)v11[7] + 8;
                      v6 = (unsigned __int64)&v11[v29];
                      if ( (unsigned __int64)v28 <= v6 )
                        v14 = v11[12];
                      if ( (unsigned __int64)(v11 + 14) > v6 )
                        v15 = 0;
                      else
                        v15 = *v28;
LABEL_62:
                      LOBYTE(v10) = 1;
                    }
                  }
                  if ( (_BYTE)v10 )
                    v16 = 1;
                }
                if ( byte_140173441 < 0 )
                {
                  if ( !v16 )
                  {
                    v15 = 0;
                    v14 = 0;
                    v13 = 0;
                  }
                  LOBYTE(v38) = v15;
                  LOBYTE(v37) = v14;
                  LOBYTE(v36) = v13;
                  LOBYTE(v35) = v24;
                  LOBYTE(v34) = v26;
                  LODWORD(v33) = *(_DWORD *)(v31 + 48);
                  McTemplateK0pduuuuup_EtwWriteTransfer(v6, v10, &v43, v31, v33, v34, v35, v36, v37, v38, v31);
                }
                break;
              }
              v17 = 0LL;
              v18 = 0;
              if ( *(_DWORD *)(v10 + 20) )
                break;
              v19 = *(_DWORD *)(v10 + 56);
              v20 = 0LL;
              if ( !v19 )
              {
                v2 = a1;
                break;
              }
              do
              {
                v6 = *(unsigned int *)(v10 + 4 * v20 + 120);
                if ( (unsigned int)v6 >= 0x80 )
                {
                  v21 = *(unsigned int *)(v10 + 16);
                  if ( (unsigned int)v6 < (unsigned int)v21 )
                  {
                    v22 = (unsigned int)v6;
                    v23 = *(_DWORD *)(v6 + v10) - 64;
                    if ( v23 )
                    {
                      v6 = (unsigned int)(v23 - 1);
                      if ( (_DWORD)v6 )
                      {
                        if ( (_DWORD)v6 == 1 )
                        {
                          v6 = v22 + 40;
                          if ( v22 + 40 <= v21 )
                          {
                            if ( *(_DWORD *)(v22 + v10 + 12) )
                              v17 = (char *)(v22 + v10 + 32);
                            v11 = *(_BYTE **)(v22 + v10 + 24);
LABEL_31:
                            v24 = *(_BYTE *)(v22 + v10 + 8);
                            v12 = *(_BYTE *)(v22 + v10 + 9);
                            goto LABEL_40;
                          }
                        }
                      }
                      else
                      {
                        v6 = v22 + 56;
                        if ( v22 + 56 <= v21 )
                        {
                          v18 = 1;
                          if ( *(_BYTE *)(v22 + v10 + 10) )
                            v17 = (char *)(v22 + v10 + 24);
                          v11 = *(_BYTE **)(v22 + v10 + 16);
                          v12 = *(_BYTE *)(v22 + v10 + 9);
                          v39 = *(_BYTE *)(v22 + v10 + 8);
                        }
                      }
                    }
                    else
                    {
                      v6 = v22 + 40;
                      if ( v22 + 40 <= v21 )
                      {
                        if ( *(_BYTE *)(v22 + v10 + 10) )
                          v17 = (char *)(v22 + v10 + 24);
                        v11 = *(_BYTE **)(v22 + v10 + 16);
                        goto LABEL_31;
                      }
                    }
                    if ( v18 )
                      break;
                  }
                }
                v20 = (unsigned int)(v20 + 1);
              }
              while ( (unsigned int)v20 < v19 );
              v24 = v39;
LABEL_40:
              v2 = a1;
              if ( v17 )
              {
                v25 = *v17;
                v16 = 0;
                goto LABEL_46;
              }
              break;
            case 0x1B:
              if ( *(_BYTE *)(v7 + 1) != 7 || *(_DWORD *)(v7 + 8) )
              {
                if ( (byte_140173442 & 0x20) == 0 )
                  break;
                v9 = &EventPnpRequestComplete;
                goto LABEL_17;
              }
              if ( (byte_140173442 & 0x40) != 0 )
              {
                v8 = *(_QWORD *)(v31 + 56);
                if ( v8 )
                  v8 = *(unsigned int *)v8;
                LODWORD(v34) = *(_DWORD *)(v31 + 48);
                LODWORD(v33) = v8;
                McTemplateK0pqd_EtwWriteTransfer(v8, v7, &v43, v31, v33, v34);
              }
              break;
            default:
              break;
          }
        }
        IofCompleteRequest((PIRP)v31, 0);
      }
      v1 = v40 + 1;
      v40 = v1;
    }
    while ( v1 < v42[2] );
  }
  return 0LL;
}
