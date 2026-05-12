/*
 * XREFs of NvmeNamespaceQueryCapabilitiesIrp @ 0x1401A7078
 * Callers:
 *     NvmeNamespacePnpIrp @ 0x140040B50 (NvmeNamespacePnpIrp.c)
 * Callees:
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 *     PortWdmGetDeviceCapabilities @ 0x1401B58E8 (PortWdmGetDeviceCapabilities.c)
 */

__int64 __fastcall NvmeNamespaceQueryCapabilitiesIrp(__int64 a1, __int64 a2)
{
  int v4; // eax
  int v5; // edi
  __int64 v6; // rbx
  unsigned int DeviceCapabilities; // eax
  bool v8; // zf
  unsigned __int64 v9; // rcx
  __int64 v10; // rdx
  int *v11; // rax
  const EVENT_DESCRIPTOR *v12; // rdx
  __int64 v13; // rdx
  _BYTE *v14; // r9
  unsigned __int8 v15; // r14
  char v16; // r11
  char v17; // bl
  char v18; // r10
  char v19; // r15
  char *v20; // r15
  unsigned int v21; // r13d
  unsigned __int64 v22; // r12
  __int64 v23; // r8
  int v24; // ecx
  char v25; // r12
  char v26; // cl
  char v27; // r8
  char v28; // al
  char *v29; // r10
  unsigned int v30; // eax
  unsigned __int64 v32; // rcx
  __int64 v33; // rdx
  int *v34; // rax
  const EVENT_DESCRIPTOR *v35; // rdx
  __int64 v36; // rdx
  _BYTE *v37; // r9
  unsigned __int8 v38; // r14
  char v39; // r11
  char v40; // bl
  char v41; // r10
  char v42; // r15
  char *v43; // r15
  unsigned int v44; // r13d
  unsigned __int64 v45; // r12
  __int64 v46; // r8
  int v47; // ecx
  char v48; // r12
  char v49; // cl
  char v50; // r8
  char v51; // al
  char *v52; // r10
  unsigned int v53; // eax
  int v54; // [rsp+20h] [rbp-89h]
  char v55; // [rsp+60h] [rbp-49h]
  char v56; // [rsp+60h] [rbp-49h]
  char v57; // [rsp+61h] [rbp-48h]
  char v58; // [rsp+61h] [rbp-48h]
  unsigned int v59; // [rsp+64h] [rbp-45h]
  unsigned int v60; // [rsp+64h] [rbp-45h]
  unsigned int v61; // [rsp+68h] [rbp-41h]
  GUID v62; // [rsp+70h] [rbp-39h] BYREF
  _OWORD v63[4]; // [rsp+80h] [rbp-29h] BYREF

  memset_0(v63, 0, sizeof(v63));
  v4 = *(_DWORD *)(a1 + 96);
  v5 = 0;
  if ( v4 && (unsigned int)(v4 - 5) > 1 )
  {
    v6 = *(_QWORD *)(*(_QWORD *)(a2 + 184) + 8LL);
    DeviceCapabilities = PortWdmGetDeviceCapabilities(
                           *(PDEVICE_OBJECT *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 128LL) + 8LL),
                           v63);
    *(_OWORD *)v6 = v63[0];
    v59 = DeviceCapabilities;
    *(_OWORD *)(v6 + 16) = v63[1];
    *(_OWORD *)(v6 + 32) = v63[2];
    *(_OWORD *)(v6 + 48) = v63[3];
    *(_DWORD *)(v6 + 4) |= 0x1C0u;
    v8 = StorEtwLoggingEnabled == 0;
    *(_BYTE *)(a2 + 141) = -84;
    *(_DWORD *)(a2 + 48) = DeviceCapabilities;
    if ( v8 )
      goto LABEL_69;
    v62 = 0LL;
    IoGetActivityIdIrp(a2, &v62);
    v10 = *(_QWORD *)(a2 + 184);
    if ( *(_BYTE *)v10 == 14 )
    {
      if ( (byte_140173442 & 8) != 0 )
      {
        v12 = &EventNonReadWriteRequestComplete;
        goto LABEL_68;
      }
LABEL_69:
      IofCompleteRequest((PIRP)a2, 0);
      return v59;
    }
    if ( *(_BYTE *)v10 != 15 )
    {
      if ( *(_BYTE *)v10 == 27 )
      {
        if ( *(_BYTE *)(v10 + 1) == 7 && !*(_DWORD *)(v10 + 8) )
        {
          if ( (byte_140173442 & 0x40) != 0 )
          {
            v11 = *(int **)(a2 + 56);
            if ( v11 )
              v5 = *v11;
            McTemplateK0pqd_EtwWriteTransfer(v9, v10, &v62, a2, v5, *(_DWORD *)(a2 + 48));
          }
          goto LABEL_69;
        }
        if ( (byte_140173442 & 0x20) != 0 )
        {
          v12 = &EventPnpRequestComplete;
LABEL_68:
          McTemplateK0pd_EtwWriteTransfer(v9, v12, &v62, a2, *(_DWORD *)(a2 + 48));
          goto LABEL_69;
        }
      }
      goto LABEL_69;
    }
    if ( byte_140173441 >= 0 )
      goto LABEL_69;
    v13 = *(_QWORD *)(v10 + 8);
    v14 = 0LL;
    v55 = 0;
    v15 = 0;
    v16 = 0;
    v17 = 0;
    v18 = 0;
    v19 = 0;
    if ( *(_BYTE *)(v13 + 2) == 40 )
    {
      v20 = 0LL;
      v57 = 0;
      if ( *(_DWORD *)(v13 + 20) )
        goto LABEL_69;
      v21 = 0;
      v61 = *(_DWORD *)(v13 + 56);
      if ( !v61 )
        goto LABEL_69;
      do
      {
        v9 = *(unsigned int *)(v13 + 4LL * v21 + 120);
        if ( (unsigned int)v9 >= 0x80 )
        {
          v22 = *(unsigned int *)(v13 + 16);
          if ( (unsigned int)v9 < (unsigned int)v22 )
          {
            v23 = (unsigned int)v9;
            v24 = *(_DWORD *)(v9 + v13) - 64;
            if ( v24 )
            {
              v9 = (unsigned int)(v24 - 1);
              if ( (_DWORD)v9 )
              {
                if ( (_DWORD)v9 == 1 )
                {
                  v9 = v23 + 40;
                  if ( v23 + 40 <= v22 )
                  {
                    if ( *(_DWORD *)(v23 + v13 + 12) )
                      v20 = (char *)(v23 + v13 + 32);
                    v14 = *(_BYTE **)(v23 + v13 + 24);
LABEL_28:
                    v25 = *(_BYTE *)(v23 + v13 + 8);
                    v15 = *(_BYTE *)(v23 + v13 + 9);
                    goto LABEL_37;
                  }
                }
              }
              else
              {
                v9 = v23 + 56;
                if ( v23 + 56 <= v22 )
                {
                  v57 = 1;
                  if ( *(_BYTE *)(v23 + v13 + 10) )
                    v20 = (char *)(v23 + v13 + 24);
                  v14 = *(_BYTE **)(v23 + v13 + 16);
                  v15 = *(_BYTE *)(v23 + v13 + 9);
                  v55 = *(_BYTE *)(v23 + v13 + 8);
                }
              }
            }
            else
            {
              v9 = v23 + 40;
              if ( v23 + 40 <= v22 )
              {
                if ( *(_BYTE *)(v23 + v13 + 10) )
                  v20 = (char *)(v23 + v13 + 24);
                v14 = *(_BYTE **)(v23 + v13 + 16);
                goto LABEL_28;
              }
            }
            if ( v57 )
              break;
          }
        }
        ++v21;
      }
      while ( v21 < v61 );
      v25 = v55;
LABEL_37:
      if ( !v20 )
        goto LABEL_69;
      v26 = *v20;
      v19 = 0;
    }
    else
    {
      v26 = *(_BYTE *)(v13 + 72);
      v14 = *(_BYTE **)(v13 + 32);
      v15 = *(_BYTE *)(v13 + 11);
      v25 = *(_BYTE *)(v13 + 4);
      if ( *(_BYTE *)(v13 + 2) )
        goto LABEL_69;
    }
    LOBYTE(v9) = v26 - 8;
    if ( (v9 & 0x5D) != 0 )
      goto LABEL_69;
    v27 = *(_BYTE *)(v13 + 3);
    if ( v27 == 1 || !v14 || !v15 )
    {
LABEL_62:
      if ( byte_140173441 < 0 )
      {
        if ( !v19 )
        {
          v18 = 0;
          v17 = 0;
          v16 = 0;
        }
        McTemplateK0pduuuuup_EtwWriteTransfer(v9, v13, &v62, a2, *(_DWORD *)(a2 + 48), v27, v25, v16, v17, v18, a2);
      }
      goto LABEL_69;
    }
    v28 = *v14 & 0x7F;
    if ( v28 == 114 || v28 == 115 )
    {
      v9 = (unsigned __int64)&v14[v15];
      LOBYTE(v13) = 0;
      if ( (unsigned __int64)(v14 + 8) > v9 )
        goto LABEL_60;
      v17 = v14[2];
      v16 = v14[1] & 0xF;
      v18 = v14[3];
    }
    else
    {
      v9 = (unsigned __int64)&v14[v15];
      LOBYTE(v13) = 0;
      if ( (unsigned __int64)(v14 + 8) > v9 )
        goto LABEL_60;
      v29 = v14 + 13;
      v16 = v14[2] & 0xF;
      v30 = v15;
      if ( (unsigned int)(unsigned __int8)v14[7] + 8 <= v15 )
        v30 = (unsigned __int8)v14[7] + 8;
      v9 = (unsigned __int64)&v14[v30];
      if ( (unsigned __int64)v29 <= v9 )
        v17 = v14[12];
      if ( (unsigned __int64)(v14 + 14) > v9 )
        v18 = 0;
      else
        v18 = *v29;
    }
    LOBYTE(v13) = 1;
LABEL_60:
    if ( (_BYTE)v13 )
      v19 = 1;
    goto LABEL_62;
  }
  v8 = StorEtwLoggingEnabled == 0;
  *(_QWORD *)(a2 + 56) = 0LL;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = -1073741810;
  if ( v8 )
    goto LABEL_136;
  v62 = 0LL;
  IoGetActivityIdIrp(a2, &v62);
  v33 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v33 != 14 )
  {
    if ( *(_BYTE *)v33 != 15 )
    {
      if ( *(_BYTE *)v33 == 27 )
      {
        if ( *(_BYTE *)(v33 + 1) == 7 && !*(_DWORD *)(v33 + 8) )
        {
          if ( (byte_140173442 & 0x40) != 0 )
          {
            v34 = *(int **)(a2 + 56);
            if ( v34 )
              v5 = *v34;
            McTemplateK0pqd_EtwWriteTransfer(v32, v33, &v62, a2, v5, *(_DWORD *)(a2 + 48));
          }
          goto LABEL_136;
        }
        if ( (byte_140173442 & 0x20) != 0 )
        {
          v35 = &EventPnpRequestComplete;
          v54 = *(_DWORD *)(a2 + 48);
LABEL_135:
          McTemplateK0pd_EtwWriteTransfer(v32, v35, &v62, a2, v54);
          goto LABEL_136;
        }
      }
      goto LABEL_136;
    }
    if ( byte_140173441 >= 0 )
      goto LABEL_136;
    v36 = *(_QWORD *)(v33 + 8);
    v37 = 0LL;
    v56 = 0;
    v38 = 0;
    v39 = 0;
    v40 = 0;
    v41 = 0;
    v42 = 0;
    if ( *(_BYTE *)(v36 + 2) == 40 )
    {
      v43 = 0LL;
      v58 = 0;
      if ( *(_DWORD *)(v36 + 20) )
        goto LABEL_136;
      v44 = 0;
      v60 = *(_DWORD *)(v36 + 56);
      if ( !v60 )
        goto LABEL_136;
      do
      {
        v32 = *(unsigned int *)(v36 + 4LL * v44 + 120);
        if ( (unsigned int)v32 >= 0x80 )
        {
          v45 = *(unsigned int *)(v36 + 16);
          if ( (unsigned int)v32 < (unsigned int)v45 )
          {
            v46 = (unsigned int)v32;
            v47 = *(_DWORD *)(v32 + v36) - 64;
            if ( v47 )
            {
              v32 = (unsigned int)(v47 - 1);
              if ( (_DWORD)v32 )
              {
                if ( (_DWORD)v32 == 1 )
                {
                  v32 = v46 + 40;
                  if ( v46 + 40 <= v45 )
                  {
                    if ( *(_DWORD *)(v46 + v36 + 12) )
                      v43 = (char *)(v46 + v36 + 32);
                    v37 = *(_BYTE **)(v46 + v36 + 24);
LABEL_95:
                    v48 = *(_BYTE *)(v46 + v36 + 8);
                    v38 = *(_BYTE *)(v46 + v36 + 9);
                    goto LABEL_104;
                  }
                }
              }
              else
              {
                v32 = v46 + 56;
                if ( v46 + 56 <= v45 )
                {
                  v58 = 1;
                  if ( *(_BYTE *)(v46 + v36 + 10) )
                    v43 = (char *)(v46 + v36 + 24);
                  v37 = *(_BYTE **)(v46 + v36 + 16);
                  v38 = *(_BYTE *)(v46 + v36 + 9);
                  v56 = *(_BYTE *)(v46 + v36 + 8);
                }
              }
            }
            else
            {
              v32 = v46 + 40;
              if ( v46 + 40 <= v45 )
              {
                if ( *(_BYTE *)(v46 + v36 + 10) )
                  v43 = (char *)(v46 + v36 + 24);
                v37 = *(_BYTE **)(v46 + v36 + 16);
                goto LABEL_95;
              }
            }
            if ( v58 )
              break;
          }
        }
        ++v44;
      }
      while ( v44 < v60 );
      v48 = v56;
LABEL_104:
      if ( !v43 )
        goto LABEL_136;
      v49 = *v43;
      v42 = 0;
    }
    else
    {
      v49 = *(_BYTE *)(v36 + 72);
      v37 = *(_BYTE **)(v36 + 32);
      v38 = *(_BYTE *)(v36 + 11);
      v48 = *(_BYTE *)(v36 + 4);
      if ( *(_BYTE *)(v36 + 2) )
        goto LABEL_136;
    }
    LOBYTE(v32) = v49 - 8;
    if ( (v32 & 0x5D) != 0 )
      goto LABEL_136;
    v50 = *(_BYTE *)(v36 + 3);
    if ( v50 == 1 || !v37 || !v38 )
    {
LABEL_129:
      if ( byte_140173441 < 0 )
      {
        if ( !v42 )
        {
          v41 = 0;
          v40 = 0;
          v39 = 0;
        }
        McTemplateK0pduuuuup_EtwWriteTransfer(v32, v36, &v62, a2, *(_DWORD *)(a2 + 48), v50, v48, v39, v40, v41, a2);
      }
      goto LABEL_136;
    }
    v51 = *v37 & 0x7F;
    if ( v51 == 114 || v51 == 115 )
    {
      v32 = (unsigned __int64)&v37[v38];
      LOBYTE(v36) = 0;
      if ( (unsigned __int64)(v37 + 8) > v32 )
        goto LABEL_127;
      v40 = v37[2];
      v39 = v37[1] & 0xF;
      v41 = v37[3];
    }
    else
    {
      v32 = (unsigned __int64)&v37[v38];
      LOBYTE(v36) = 0;
      if ( (unsigned __int64)(v37 + 8) > v32 )
        goto LABEL_127;
      v52 = v37 + 13;
      v39 = v37[2] & 0xF;
      v53 = v38;
      if ( (unsigned int)(unsigned __int8)v37[7] + 8 <= v38 )
        v53 = (unsigned __int8)v37[7] + 8;
      v32 = (unsigned __int64)&v37[v53];
      if ( (unsigned __int64)v52 <= v32 )
        v40 = v37[12];
      if ( (unsigned __int64)(v37 + 14) > v32 )
        v41 = 0;
      else
        v41 = *v52;
    }
    LOBYTE(v36) = 1;
LABEL_127:
    if ( (_BYTE)v36 )
      v42 = 1;
    goto LABEL_129;
  }
  if ( (byte_140173442 & 8) != 0 )
  {
    v32 = *(unsigned int *)(a2 + 48);
    v35 = &EventNonReadWriteRequestComplete;
    v54 = *(_DWORD *)(a2 + 48);
    goto LABEL_135;
  }
LABEL_136:
  IofCompleteRequest((PIRP)a2, 0);
  return 3221225486LL;
}
