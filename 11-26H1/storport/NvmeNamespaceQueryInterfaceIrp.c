/*
 * XREFs of NvmeNamespaceQueryInterfaceIrp @ 0x14010B414
 * Callers:
 *     NvmeNamespacePnpIrp @ 0x140040B50 (NvmeNamespacePnpIrp.c)
 * Callees:
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     RaUnitIgnorePnpIrp @ 0x140189560 (RaUnitIgnorePnpIrp.c)
 *     PortQueryInterfacePdoInfo @ 0x1401B1940 (PortQueryInterfacePdoInfo.c)
 */

__int64 __fastcall NvmeNamespaceQueryInterfaceIrp(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  int v3; // ebx
  GUID *v6; // rcx
  GUID *v7; // rcx
  __int64 v8; // rcx
  bool v10; // zf
  unsigned __int64 v11; // rcx
  unsigned __int8 *v12; // rdx
  int v13; // eax
  int *v14; // rax
  const EVENT_DESCRIPTOR *v15; // rdx
  __int64 v16; // rdx
  _BYTE *v17; // r9
  unsigned __int8 v18; // r14
  char v19; // r11
  char v20; // si
  char v21; // r10
  char v22; // r15
  int v23; // eax
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
  int v35; // eax
  __int64 v36; // r8
  unsigned int InterfacePdoInfo; // eax
  unsigned int v38; // r13d
  unsigned __int64 v39; // r12
  __int64 v40; // r8
  int v41; // ecx
  unsigned int v42; // r13d
  unsigned __int64 v43; // r12
  int v44; // ecx
  __int64 v45; // [rsp+28h] [rbp-39h]
  __int64 v46; // [rsp+30h] [rbp-31h]
  __int64 v47; // [rsp+38h] [rbp-29h]
  char v48; // [rsp+68h] [rbp+7h]
  char v49; // [rsp+69h] [rbp+8h]
  char v50; // [rsp+69h] [rbp+8h]
  char v51; // [rsp+69h] [rbp+8h]
  __int64 v52; // [rsp+70h] [rbp+Fh] BYREF
  unsigned int v53; // [rsp+78h] [rbp+17h]
  GUID v54; // [rsp+80h] [rbp+1Fh] BYREF

  v2 = *(_QWORD *)(a2 + 184);
  v3 = 0;
  v52 = 0LL;
  v6 = *(GUID **)(v2 + 8);
  if ( v6 == &GUID_STORAGE_QUERY_PDO_INFO || RtlCompareMemory(v6, &GUID_STORAGE_QUERY_PDO_INFO, 0x10uLL) == 16 )
  {
    v35 = *(_DWORD *)(a1 + 96);
    if ( v35 && (unsigned int)(v35 - 5) > 1 )
    {
      v36 = *(_QWORD *)(a1 + 16);
      LODWORD(v52) = 1699567182;
      InterfacePdoInfo = PortQueryInterfacePdoInfo(
                           (*(_BYTE *)(v36 + 136) & 2) != 0 ? 20 : 17,
                           a2,
                           *(_QWORD *)(*(_QWORD *)(v36 + 128) + 8LL),
                           (unsigned int)&v52,
                           *(_QWORD *)(v36 + 592) + 24LL,
                           0,
                           (*(_BYTE *)(v36 + 136) & 2) != 0 ? 20 : 17);
      v10 = StorEtwLoggingEnabled == 0;
      v53 = InterfacePdoInfo;
      *(_BYTE *)(a2 + 141) = -84;
      *(_DWORD *)(a2 + 48) = InterfacePdoInfo;
      if ( v10 )
        goto LABEL_124;
      v54 = 0LL;
      IoGetActivityIdIrp(a2, &v54);
      v12 = *(unsigned __int8 **)(a2 + 184);
      if ( *v12 != 14 )
      {
        v13 = *v12 - 15;
        if ( *v12 != 15 )
          goto LABEL_9;
        if ( byte_140173441 >= 0 )
          goto LABEL_124;
        v16 = *((_QWORD *)v12 + 1);
        v17 = 0LL;
        v48 = 0;
        v18 = 0;
        v19 = 0;
        v20 = 0;
        v21 = 0;
        v22 = 0;
        v23 = *(unsigned __int8 *)(v16 + 2);
        if ( (_BYTE)v23 == 40 )
        {
          v24 = 0LL;
          v50 = 0;
          if ( *(_DWORD *)(v16 + 20) )
            goto LABEL_124;
          v38 = 0;
          LODWORD(v52) = *(_DWORD *)(v16 + 56);
          if ( !(_DWORD)v52 )
            goto LABEL_124;
          while ( 1 )
          {
            v11 = *(unsigned int *)(v16 + 4LL * v38 + 120);
            if ( (unsigned int)v11 >= 0x80 )
            {
              v39 = *(unsigned int *)(v16 + 16);
              if ( (unsigned int)v11 < (unsigned int)v39 )
              {
                v40 = (unsigned int)v11;
                v41 = *(_DWORD *)(v11 + v16) - 64;
                if ( v41 )
                {
                  v11 = (unsigned int)(v41 - 1);
                  if ( (_DWORD)v11 )
                  {
                    if ( (_DWORD)v11 == 1 )
                    {
                      v11 = v40 + 40;
                      if ( v40 + 40 <= v39 )
                        goto LABEL_75;
                    }
                  }
                  else
                  {
                    v11 = v40 + 56;
                    if ( v40 + 56 <= v39 )
                    {
                      v50 = 1;
                      if ( *(_BYTE *)(v40 + v16 + 10) )
                        v24 = (char *)(v40 + v16 + 24);
                      v17 = *(_BYTE **)(v40 + v16 + 16);
                      v18 = *(_BYTE *)(v40 + v16 + 9);
                      v48 = *(_BYTE *)(v40 + v16 + 8);
                    }
                  }
                }
                else
                {
                  v11 = v40 + 40;
                  if ( v40 + 40 <= v39 )
                    goto LABEL_87;
                }
                if ( v50 )
                  goto LABEL_39;
              }
            }
            if ( ++v38 >= (unsigned int)v52 )
              goto LABEL_39;
          }
        }
        goto LABEL_45;
      }
    }
    else
    {
      v10 = StorEtwLoggingEnabled == 0;
      v53 = -1073741810;
      *(_DWORD *)(a2 + 48) = -1073741810;
      *(_QWORD *)(a2 + 56) = 0LL;
      *(_BYTE *)(a2 + 141) = -84;
      if ( v10 )
        goto LABEL_124;
      v54 = 0LL;
      IoGetActivityIdIrp(a2, &v54);
      v12 = *(unsigned __int8 **)(a2 + 184);
      if ( *v12 != 14 )
      {
        v13 = *v12 - 15;
        if ( *v12 != 15 )
          goto LABEL_9;
        if ( byte_140173441 >= 0 )
          goto LABEL_124;
        v16 = *((_QWORD *)v12 + 1);
        v17 = 0LL;
        v48 = 0;
        v18 = 0;
        v19 = 0;
        v20 = 0;
        v21 = 0;
        v22 = 0;
        v23 = *(unsigned __int8 *)(v16 + 2);
        if ( (_BYTE)v23 == 40 )
        {
          v24 = 0LL;
          v51 = 0;
          if ( *(_DWORD *)(v16 + 20) )
            goto LABEL_124;
          v42 = 0;
          LODWORD(v52) = *(_DWORD *)(v16 + 56);
          if ( !(_DWORD)v52 )
            goto LABEL_124;
          while ( 1 )
          {
            v11 = *(unsigned int *)(v16 + 4LL * v42 + 120);
            if ( (unsigned int)v11 >= 0x80 )
            {
              v43 = *(unsigned int *)(v16 + 16);
              if ( (unsigned int)v11 < (unsigned int)v43 )
              {
                v40 = (unsigned int)v11;
                v44 = *(_DWORD *)(v11 + v16) - 64;
                if ( v44 )
                {
                  v11 = (unsigned int)(v44 - 1);
                  if ( (_DWORD)v11 )
                  {
                    if ( (_DWORD)v11 == 1 )
                    {
                      v11 = v40 + 40;
                      if ( v40 + 40 <= v43 )
                      {
LABEL_75:
                        if ( *(_DWORD *)(v40 + v16 + 12) )
                          v24 = (char *)(v40 + v16 + 32);
                        v17 = *(_BYTE **)(v40 + v16 + 24);
LABEL_78:
                        v29 = *(_BYTE *)(v40 + v16 + 8);
                        v18 = *(_BYTE *)(v40 + v16 + 9);
                        goto LABEL_40;
                      }
                    }
                  }
                  else
                  {
                    v11 = v40 + 56;
                    if ( v40 + 56 <= v43 )
                    {
                      v51 = 1;
                      if ( *(_BYTE *)(v40 + v16 + 10) )
                        v24 = (char *)(v40 + v16 + 24);
                      v17 = *(_BYTE **)(v40 + v16 + 16);
                      v18 = *(_BYTE *)(v40 + v16 + 9);
                      v48 = *(_BYTE *)(v40 + v16 + 8);
                    }
                  }
                }
                else
                {
                  v11 = v40 + 40;
                  if ( v40 + 40 <= v43 )
                  {
LABEL_87:
                    if ( *(_BYTE *)(v40 + v16 + 10) )
                      v24 = (char *)(v40 + v16 + 24);
                    v17 = *(_BYTE **)(v40 + v16 + 16);
                    goto LABEL_78;
                  }
                }
                if ( v51 )
                  goto LABEL_39;
              }
            }
            if ( ++v42 >= (unsigned int)v52 )
            {
LABEL_39:
              v29 = v48;
              goto LABEL_40;
            }
          }
        }
        goto LABEL_45;
      }
    }
LABEL_121:
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_124;
    v15 = &EventNonReadWriteRequestComplete;
    goto LABEL_123;
  }
  v7 = *(GUID **)(v2 + 8);
  if ( v7 != &GUID_THERMAL_COOLING_INTERFACE && RtlCompareMemory(v7, &GUID_THERMAL_COOLING_INTERFACE, 0x10uLL) != 16 )
    return RaUnitIgnorePnpIrp(v8, a2);
  v10 = StorEtwLoggingEnabled == 0;
  v53 = -1073741637;
  *(_DWORD *)(a2 + 48) = -1073741637;
  *(_BYTE *)(a2 + 141) = -84;
  if ( v10 )
    goto LABEL_124;
  v54 = 0LL;
  IoGetActivityIdIrp(a2, &v54);
  v12 = *(unsigned __int8 **)(a2 + 184);
  if ( *v12 == 14 )
    goto LABEL_121;
  v13 = *v12 - 15;
  if ( *v12 != 15 )
  {
LABEL_9:
    if ( v13 != 12 )
      goto LABEL_124;
    if ( v12[1] == 7 && !*((_DWORD *)v12 + 2) )
    {
      if ( (byte_140173442 & 0x40) != 0 )
      {
        v14 = *(int **)(a2 + 56);
        if ( v14 )
          v3 = *v14;
        LODWORD(v46) = *(_DWORD *)(a2 + 48);
        LODWORD(v45) = v3;
        McTemplateK0pqd_EtwWriteTransfer(v11, (__int64)v12, &v54, a2, v45, v46);
      }
      goto LABEL_124;
    }
    if ( (byte_140173442 & 0x20) == 0 )
      goto LABEL_124;
    v15 = &EventPnpRequestComplete;
LABEL_123:
    LODWORD(v45) = *(_DWORD *)(a2 + 48);
    McTemplateK0pd_EtwWriteTransfer(v11, v15, &v54, a2, v45);
    goto LABEL_124;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_124;
  v16 = *((_QWORD *)v12 + 1);
  v17 = 0LL;
  v48 = 0;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  v23 = *(unsigned __int8 *)(v16 + 2);
  if ( (_BYTE)v23 == 40 )
  {
    v24 = 0LL;
    v49 = 0;
    if ( *(_DWORD *)(v16 + 20) )
      goto LABEL_124;
    v25 = 0;
    LODWORD(v52) = *(_DWORD *)(v16 + 56);
    if ( !(_DWORD)v52 )
      goto LABEL_124;
    while ( 1 )
    {
      v11 = *(unsigned int *)(v16 + 4LL * v25 + 120);
      if ( (unsigned int)v11 >= 0x80 )
      {
        v26 = *(unsigned int *)(v16 + 16);
        if ( (unsigned int)v11 < (unsigned int)v26 )
        {
          v27 = (unsigned int)v11;
          v28 = *(_DWORD *)(v16 + v11) - 64;
          if ( v28 )
          {
            v11 = (unsigned int)(v28 - 1);
            if ( (_DWORD)v11 )
            {
              if ( (_DWORD)v11 == 1 )
              {
                v11 = v27 + 40;
                if ( v27 + 40 <= v26 )
                {
                  if ( *(_DWORD *)(v16 + v27 + 12) )
                    v24 = (char *)(v27 + v16 + 32);
                  v17 = *(_BYTE **)(v16 + v27 + 24);
                  goto LABEL_31;
                }
              }
            }
            else
            {
              v11 = v27 + 56;
              if ( v27 + 56 <= v26 )
              {
                v49 = 1;
                if ( *(_BYTE *)(v16 + v27 + 10) )
                  v24 = (char *)(v27 + v16 + 24);
                v17 = *(_BYTE **)(v16 + v27 + 16);
                v18 = *(_BYTE *)(v16 + v27 + 9);
                v48 = *(_BYTE *)(v16 + v27 + 8);
              }
            }
          }
          else
          {
            v11 = v27 + 40;
            if ( v27 + 40 <= v26 )
            {
              if ( *(_BYTE *)(v16 + v27 + 10) )
                v24 = (char *)(v27 + v16 + 24);
              v17 = *(_BYTE **)(v16 + v27 + 16);
LABEL_31:
              v29 = *(_BYTE *)(v16 + v27 + 8);
              v18 = *(_BYTE *)(v16 + v27 + 9);
LABEL_40:
              if ( v24 )
              {
                v30 = *v24;
                v22 = 0;
                goto LABEL_46;
              }
              goto LABEL_124;
            }
          }
          if ( v49 )
            goto LABEL_39;
        }
      }
      if ( ++v25 >= (unsigned int)v52 )
        goto LABEL_39;
    }
  }
LABEL_45:
  v30 = *(_BYTE *)(v16 + 72);
  v17 = *(_BYTE **)(v16 + 32);
  v18 = *(_BYTE *)(v16 + 11);
  v29 = *(_BYTE *)(v16 + 4);
  if ( v23 )
    goto LABEL_124;
LABEL_46:
  LOBYTE(v11) = v30 - 8;
  if ( (v11 & 0x5D) == 0 )
  {
    v31 = *(_BYTE *)(v16 + 3);
    if ( v31 == 1 || !v17 || !v18 )
    {
LABEL_117:
      if ( byte_140173441 < 0 )
      {
        if ( !v22 )
        {
          v21 = 0;
          v20 = 0;
          v19 = 0;
        }
        LOBYTE(v47) = v29;
        LOBYTE(v46) = v31;
        LODWORD(v45) = *(_DWORD *)(a2 + 48);
        McTemplateK0pduuuuup_EtwWriteTransfer(v11, v16, &v54, a2, v45, v46, v47, v19, v20, v21, a2);
      }
      goto LABEL_124;
    }
    v32 = *v17 & 0x7F;
    if ( v32 == 114 || v32 == 115 )
    {
      v11 = (unsigned __int64)&v17[v18];
      LOBYTE(v16) = 0;
      if ( (unsigned __int64)(v17 + 8) > v11 )
        goto LABEL_115;
      v20 = v17[2];
      v19 = v17[1] & 0xF;
      v21 = v17[3];
    }
    else
    {
      v11 = (unsigned __int64)&v17[v18];
      LOBYTE(v16) = 0;
      if ( (unsigned __int64)(v17 + 8) > v11 )
        goto LABEL_115;
      v33 = v17 + 13;
      v19 = v17[2] & 0xF;
      v34 = v18;
      if ( (unsigned int)(unsigned __int8)v17[7] + 8 <= v18 )
        v34 = (unsigned __int8)v17[7] + 8;
      v11 = (unsigned __int64)&v17[v34];
      if ( (unsigned __int64)v33 <= v11 )
        v20 = v17[12];
      if ( (unsigned __int64)(v17 + 14) > v11 )
        v21 = 0;
      else
        v21 = *v33;
    }
    LOBYTE(v16) = 1;
LABEL_115:
    if ( (_BYTE)v16 )
      v22 = 1;
    goto LABEL_117;
  }
LABEL_124:
  IofCompleteRequest((PIRP)a2, 0);
  return v53;
}
