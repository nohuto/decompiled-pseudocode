/*
 * XREFs of NvmeNamespaceStorageQueryPropertyIoctl @ 0x1401B9BD8
 * Callers:
 *     NvmeNamespaceDeviceControlIrp @ 0x1401BBC8C (NvmeNamespaceDeviceControlIrp.c)
 * Callees:
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     NvmeCommonGetStorageProtocolSpecificProperty @ 0x14011F36C (NvmeCommonGetStorageProtocolSpecificProperty.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     NvmeNamespaceStorageQueryAccessAlignmentPropertyIoctl @ 0x140183048 (NvmeNamespaceStorageQueryAccessAlignmentPropertyIoctl.c)
 *     NvmeNamespaceGetStorageStackPropertyIoctl @ 0x1401A65F4 (NvmeNamespaceGetStorageStackPropertyIoctl.c)
 *     NvmeNamespaceStorageQueryDeviceEndurancePropertyIoctl @ 0x1401AAF40 (NvmeNamespaceStorageQueryDeviceEndurancePropertyIoctl.c)
 *     NvmeNamespaceStorageQueryDeviceIdPropertyIoctl @ 0x1401AC0E0 (NvmeNamespaceStorageQueryDeviceIdPropertyIoctl.c)
 *     NvmeNamespaceStorageQueryDeviceIoCapabilityPropertyIoctl @ 0x1401AC4AC (NvmeNamespaceStorageQueryDeviceIoCapabilityPropertyIoctl.c)
 *     NvmeNamespaceStorageQueryDeviceLedStatePropertyIoctl @ 0x1401AC8C0 (NvmeNamespaceStorageQueryDeviceLedStatePropertyIoctl.c)
 *     NvmeNamespaceStorageQueryDeviceNumaPropertyIoctl @ 0x1401AD7C4 (NvmeNamespaceStorageQueryDeviceNumaPropertyIoctl.c)
 *     NvmeNamespaceStorageQueryDevicePowerPropertyIoctl @ 0x1401ADBE0 (NvmeNamespaceStorageQueryDevicePowerPropertyIoctl.c)
 *     NvmeNamespaceStorageQueryDeviceTrimPropertyIoctl @ 0x1401ADFDC (NvmeNamespaceStorageQueryDeviceTrimPropertyIoctl.c)
 *     NvmeNamespaceStorageQueryDeviceWriteCachePropertyIoctl @ 0x1401AE3DC (NvmeNamespaceStorageQueryDeviceWriteCachePropertyIoctl.c)
 *     NvmeNamespaceStorageQueryAdapterPropertyIoctl @ 0x1401BACC8 (NvmeNamespaceStorageQueryAdapterPropertyIoctl.c)
 *     NvmeNamespaceStorageQueryDeviceSeekPenaltyPropertyIoctl @ 0x1401BD840 (NvmeNamespaceStorageQueryDeviceSeekPenaltyPropertyIoctl.c)
 *     NvmeNamespaceStorageQueryDevicePropertyIoctl @ 0x1401BDE9C (NvmeNamespaceStorageQueryDevicePropertyIoctl.c)
 */

__int64 __fastcall NvmeNamespaceStorageQueryPropertyIoctl(__int64 a1, __int64 a2, _BYTE *a3)
{
  __int64 v3; // rax
  int v4; // ebx
  int *v6; // r8
  __int64 v8; // rax
  __int64 v9; // rdx
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
  int v35; // r8d
  int v36; // r8d
  int v37; // r8d
  int v38; // r8d
  int v39; // r8d
  int v40; // r8d
  int v42; // r8d
  int v43; // r8d
  int v44; // r8d
  int v45; // r8d
  int v46; // r8d
  int v47; // r8d
  unsigned int v48; // r13d
  unsigned __int64 v49; // r12
  int v50; // ecx
  unsigned int v51; // r13d
  unsigned __int64 v52; // r12
  int v53; // ecx
  unsigned int v54; // r13d
  unsigned __int64 v55; // r12
  __int64 v56; // r8
  int v57; // ecx
  unsigned int v58; // r13d
  unsigned __int64 v59; // r12
  int v60; // ecx
  unsigned int StorageProtocolSpecificProperty; // eax
  unsigned int v63; // esi
  unsigned __int64 v64; // rcx
  __int64 v65; // rdx
  int *v66; // rax
  const EVENT_DESCRIPTOR *v67; // rdx
  __int64 v68; // rdx
  _BYTE *v69; // r9
  unsigned __int8 v70; // r15
  char v71; // r11
  char v72; // r14
  char v73; // r10
  char v74; // r12
  char *v75; // r12
  __int64 v76; // rax
  unsigned __int64 v77; // r13
  __int64 v78; // r8
  int v79; // ecx
  char v80; // r13
  char v81; // cl
  char v82; // r8
  char v83; // al
  char *v84; // r10
  unsigned int v85; // eax
  unsigned __int64 v86; // rcx
  __int64 v87; // rdx
  int *v88; // rax
  const EVENT_DESCRIPTOR *v89; // rdx
  __int64 v90; // rdx
  _BYTE *v91; // r9
  unsigned __int8 v92; // r14
  char v93; // r11
  char v94; // si
  char v95; // r10
  char v96; // r15
  char *v97; // r15
  unsigned int v98; // r13d
  unsigned __int64 v99; // r12
  __int64 v100; // r8
  int v101; // ecx
  char v102; // r12
  char v103; // cl
  char v104; // r8
  char v105; // al
  char *v106; // r10
  unsigned int v107; // eax
  int v108; // [rsp+20h] [rbp-49h]
  int v109; // [rsp+20h] [rbp-49h]
  char v110; // [rsp+60h] [rbp-9h]
  char v111; // [rsp+60h] [rbp-9h]
  char v112; // [rsp+60h] [rbp-9h]
  char v113; // [rsp+61h] [rbp-8h]
  char v114; // [rsp+61h] [rbp-8h]
  char v115; // [rsp+61h] [rbp-8h]
  char v116; // [rsp+61h] [rbp-8h]
  char v117; // [rsp+61h] [rbp-8h]
  char v118; // [rsp+61h] [rbp-8h]
  char v119; // [rsp+61h] [rbp-8h]
  unsigned int v120; // [rsp+64h] [rbp-5h]
  unsigned int v121; // [rsp+64h] [rbp-5h]
  unsigned int v122; // [rsp+64h] [rbp-5h]
  unsigned int v123; // [rsp+64h] [rbp-5h]
  unsigned int v124; // [rsp+64h] [rbp-5h]
  unsigned int v125; // [rsp+64h] [rbp-5h]
  unsigned int v126; // [rsp+64h] [rbp-5h]
  unsigned int v127; // [rsp+68h] [rbp-1h]
  int v128; // [rsp+68h] [rbp-1h]
  GUID v129; // [rsp+70h] [rbp+7h] BYREF

  v3 = *(_QWORD *)(a2 + 184);
  v4 = 0;
  *a3 = 1;
  v6 = *(int **)(a2 + 24);
  if ( !v6 || *(_DWORD *)(v3 + 16) < 8u )
  {
    v10 = StorEtwLoggingEnabled == 0;
    *(_QWORD *)(a2 + 56) = 0LL;
    *(_BYTE *)(a2 + 141) = -84;
    *(_DWORD *)(a2 + 48) = -1073741811;
    if ( v10 )
      goto LABEL_340;
    v129 = 0LL;
    IoGetActivityIdIrp(a2, &v129);
    v87 = *(_QWORD *)(a2 + 184);
    if ( *(_BYTE *)v87 == 14 )
    {
      if ( (byte_140173442 & 8) != 0 )
      {
        v86 = *(unsigned int *)(a2 + 48);
        v89 = &EventNonReadWriteRequestComplete;
        v109 = *(_DWORD *)(a2 + 48);
        goto LABEL_339;
      }
LABEL_340:
      IofCompleteRequest((PIRP)a2, 0);
      return 3221225485LL;
    }
    if ( *(_BYTE *)v87 != 15 )
    {
      if ( *(_BYTE *)v87 == 27 )
      {
        if ( *(_BYTE *)(v87 + 1) == 7 && !*(_DWORD *)(v87 + 8) )
        {
          if ( (byte_140173442 & 0x40) != 0 )
          {
            v88 = *(int **)(a2 + 56);
            if ( v88 )
              v4 = *v88;
            McTemplateK0pqd_EtwWriteTransfer(v86, v87, &v129, a2, v4, *(_DWORD *)(a2 + 48));
          }
          goto LABEL_340;
        }
        if ( (byte_140173442 & 0x20) != 0 )
        {
          v89 = &EventPnpRequestComplete;
          v109 = *(_DWORD *)(a2 + 48);
LABEL_339:
          McTemplateK0pd_EtwWriteTransfer(v86, v89, &v129, a2, v109);
          goto LABEL_340;
        }
      }
      goto LABEL_340;
    }
    if ( byte_140173441 >= 0 )
      goto LABEL_340;
    v90 = *(_QWORD *)(v87 + 8);
    v91 = 0LL;
    v112 = 0;
    v92 = 0;
    v93 = 0;
    v94 = 0;
    v95 = 0;
    v96 = 0;
    if ( *(_BYTE *)(v90 + 2) == 40 )
    {
      v97 = 0LL;
      v119 = 0;
      if ( *(_DWORD *)(v90 + 20) )
        goto LABEL_340;
      v98 = 0;
      v126 = *(_DWORD *)(v90 + 56);
      if ( !v126 )
        goto LABEL_340;
      do
      {
        v86 = *(unsigned int *)(v90 + 4LL * v98 + 120);
        if ( (unsigned int)v86 >= 0x80 )
        {
          v99 = *(unsigned int *)(v90 + 16);
          if ( (unsigned int)v86 < (unsigned int)v99 )
          {
            v100 = (unsigned int)v86;
            v101 = *(_DWORD *)(v86 + v90) - 64;
            if ( v101 )
            {
              v86 = (unsigned int)(v101 - 1);
              if ( (_DWORD)v86 )
              {
                if ( (_DWORD)v86 == 1 )
                {
                  v86 = v100 + 40;
                  if ( v100 + 40 <= v99 )
                  {
                    if ( *(_DWORD *)(v100 + v90 + 12) )
                      v97 = (char *)(v100 + v90 + 32);
                    v91 = *(_BYTE **)(v100 + v90 + 24);
LABEL_299:
                    v102 = *(_BYTE *)(v100 + v90 + 8);
                    v92 = *(_BYTE *)(v100 + v90 + 9);
                    goto LABEL_308;
                  }
                }
              }
              else
              {
                v86 = v100 + 56;
                if ( v100 + 56 <= v99 )
                {
                  v119 = 1;
                  if ( *(_BYTE *)(v100 + v90 + 10) )
                    v97 = (char *)(v100 + v90 + 24);
                  v91 = *(_BYTE **)(v100 + v90 + 16);
                  v92 = *(_BYTE *)(v100 + v90 + 9);
                  v112 = *(_BYTE *)(v100 + v90 + 8);
                }
              }
            }
            else
            {
              v86 = v100 + 40;
              if ( v100 + 40 <= v99 )
              {
                if ( *(_BYTE *)(v100 + v90 + 10) )
                  v97 = (char *)(v100 + v90 + 24);
                v91 = *(_BYTE **)(v100 + v90 + 16);
                goto LABEL_299;
              }
            }
            if ( v119 )
              break;
          }
        }
        ++v98;
      }
      while ( v98 < v126 );
      v102 = v112;
LABEL_308:
      if ( !v97 )
        goto LABEL_340;
      v103 = *v97;
      v96 = 0;
    }
    else
    {
      v103 = *(_BYTE *)(v90 + 72);
      v91 = *(_BYTE **)(v90 + 32);
      v92 = *(_BYTE *)(v90 + 11);
      v102 = *(_BYTE *)(v90 + 4);
      if ( *(_BYTE *)(v90 + 2) )
        goto LABEL_340;
    }
    LOBYTE(v86) = v103 - 8;
    if ( (v86 & 0x5D) != 0 )
      goto LABEL_340;
    v104 = *(_BYTE *)(v90 + 3);
    if ( v104 == 1 || !v91 || !v92 )
    {
LABEL_333:
      if ( byte_140173441 < 0 )
      {
        if ( !v96 )
        {
          v95 = 0;
          v94 = 0;
          v93 = 0;
        }
        McTemplateK0pduuuuup_EtwWriteTransfer(v86, v90, &v129, a2, *(_DWORD *)(a2 + 48), v104, v102, v93, v94, v95, a2);
      }
      goto LABEL_340;
    }
    v105 = *v91 & 0x7F;
    if ( v105 == 114 || v105 == 115 )
    {
      v86 = (unsigned __int64)&v91[v92];
      LOBYTE(v90) = 0;
      if ( (unsigned __int64)(v91 + 8) > v86 )
        goto LABEL_331;
      v94 = v91[2];
      v93 = v91[1] & 0xF;
      v95 = v91[3];
    }
    else
    {
      v86 = (unsigned __int64)&v91[v92];
      LOBYTE(v90) = 0;
      if ( (unsigned __int64)(v91 + 8) > v86 )
        goto LABEL_331;
      v106 = v91 + 13;
      v93 = v91[2] & 0xF;
      v107 = v92;
      if ( (unsigned int)(unsigned __int8)v91[7] + 8 <= v92 )
        v107 = (unsigned __int8)v91[7] + 8;
      v86 = (unsigned __int64)&v91[v107];
      if ( (unsigned __int64)v106 <= v86 )
        v94 = v91[12];
      if ( (unsigned __int64)(v91 + 14) > v86 )
        v95 = 0;
      else
        v95 = *v106;
    }
    LOBYTE(v90) = 1;
LABEL_331:
    if ( (_BYTE)v90 )
      v96 = 1;
    goto LABEL_333;
  }
  v8 = *(_QWORD *)(a1 + 16);
  v9 = *(_QWORD *)(v8 + 136) & 2LL;
  if ( (*(_QWORD *)(v8 + 136) & 2) != 0 && *(_DWORD *)(v8 + 568) != 2 )
  {
    v10 = StorEtwLoggingEnabled == 0;
    v127 = -1073741300;
    *(_DWORD *)(a2 + 48) = -1073741300;
    *(_QWORD *)(a2 + 56) = 0LL;
    *(_BYTE *)(a2 + 141) = -84;
    if ( v10 )
      goto LABEL_201;
    v129 = 0LL;
    IoGetActivityIdIrp(a2, &v129);
    v12 = *(unsigned __int8 **)(a2 + 184);
    if ( *v12 != 14 )
    {
      v13 = *v12 - 15;
      if ( *v12 != 15 )
      {
LABEL_8:
        if ( v13 != 12 )
          goto LABEL_201;
        if ( v12[1] == 7 && !*((_DWORD *)v12 + 2) )
        {
          if ( (byte_140173442 & 0x40) != 0 )
          {
            v14 = *(int **)(a2 + 56);
            if ( v14 )
              v4 = *v14;
            McTemplateK0pqd_EtwWriteTransfer(v11, (__int64)v12, &v129, a2, v4, *(_DWORD *)(a2 + 48));
          }
          goto LABEL_201;
        }
        if ( (byte_140173442 & 0x20) == 0 )
          goto LABEL_201;
        v15 = &EventPnpRequestComplete;
        v108 = *(_DWORD *)(a2 + 48);
LABEL_200:
        McTemplateK0pd_EtwWriteTransfer(v11, v15, &v129, a2, v108);
        goto LABEL_201;
      }
      if ( byte_140173441 >= 0 )
        goto LABEL_201;
      v16 = *((_QWORD *)v12 + 1);
      v17 = 0LL;
      v110 = 0;
      v18 = 0;
      v19 = 0;
      v20 = 0;
      v21 = 0;
      v22 = 0;
      v23 = *(unsigned __int8 *)(v16 + 2);
      if ( (_BYTE)v23 == 40 )
      {
        v24 = 0LL;
        v113 = 0;
        if ( !*(_DWORD *)(v16 + 20) )
        {
          v25 = 0;
          v120 = *(_DWORD *)(v16 + 56);
          if ( v120 )
          {
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
                          goto LABEL_27;
                      }
                    }
                    else
                    {
                      v11 = v27 + 56;
                      if ( v27 + 56 <= v26 )
                      {
                        v113 = 1;
                        if ( *(_BYTE *)(v16 + v27 + 10) )
                          v24 = (char *)(v27 + v16 + 24);
                        v17 = *(_BYTE **)(v16 + v27 + 16);
                        v18 = *(_BYTE *)(v16 + v27 + 9);
                        v110 = *(_BYTE *)(v16 + v27 + 8);
                      }
                    }
                  }
                  else
                  {
                    v11 = v27 + 40;
                    if ( v27 + 40 <= v26 )
                      goto LABEL_41;
                  }
                  if ( v113 )
                    goto LABEL_38;
                }
              }
              if ( ++v25 >= v120 )
                goto LABEL_38;
            }
          }
        }
        goto LABEL_201;
      }
      goto LABEL_44;
    }
    goto LABEL_68;
  }
  v35 = *v6;
  if ( v35 <= 12 )
  {
    if ( v35 == 12 )
      return (unsigned int)NvmeNamespaceStorageQueryDevicePowerPropertyIoctl(a1, a2);
    if ( !v35 )
      return (unsigned int)NvmeNamespaceStorageQueryDevicePropertyIoctl(a1, a2);
    v36 = v35 - 1;
    if ( !v36 )
      return (unsigned int)NvmeNamespaceStorageQueryAdapterPropertyIoctl(a1, a2);
    v37 = v36 - 1;
    if ( !v37 )
      return (unsigned int)NvmeNamespaceStorageQueryDeviceIdPropertyIoctl(a1, a2);
    v38 = v37 - 2;
    if ( !v38 )
      return (unsigned int)NvmeNamespaceStorageQueryDeviceWriteCachePropertyIoctl(a1, a2);
    v39 = v38 - 2;
    if ( !v39 )
      return (unsigned int)NvmeNamespaceStorageQueryAccessAlignmentPropertyIoctl((_DWORD *)a1, a2);
    v40 = v39 - 1;
    if ( !v40 )
      return (unsigned int)NvmeNamespaceStorageQueryDeviceSeekPenaltyPropertyIoctl(a1, a2);
    if ( v40 == 1 )
      return (unsigned int)NvmeNamespaceStorageQueryDeviceTrimPropertyIoctl(a1, a2);
LABEL_94:
    ++*(_BYTE *)(a2 + 67);
    *(_QWORD *)(a2 + 184) += 72LL;
    return (unsigned int)IofCallDriver(*(PDEVICE_OBJECT *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 128LL) + 8LL), (PIRP)a2);
  }
  v42 = v35 - 48;
  if ( !v42 )
    return (unsigned int)NvmeNamespaceStorageQueryDeviceIoCapabilityPropertyIoctl(a1, a2);
  v43 = v42 - 2;
  if ( v43 )
  {
    v44 = v43 - 9;
    if ( v44 )
    {
      v45 = v44 - 3;
      if ( v45 )
      {
        v46 = v45 - 1;
        if ( v46 )
        {
          v47 = v46 - 3;
          if ( !v47 )
            return (unsigned int)NvmeNamespaceGetStorageStackPropertyIoctl(a1, a2);
          if ( v47 != 2 )
            goto LABEL_94;
          goto LABEL_171;
        }
        if ( !v9 )
          return (unsigned int)NvmeNamespaceStorageQueryDeviceLedStatePropertyIoctl(a1, a2);
        v10 = StorEtwLoggingEnabled == 0;
        v127 = -1073741637;
        *(_DWORD *)(a2 + 48) = -1073741637;
        *(_QWORD *)(a2 + 56) = 0LL;
        *(_BYTE *)(a2 + 141) = -84;
        if ( v10 )
          goto LABEL_201;
        v129 = 0LL;
        IoGetActivityIdIrp(a2, &v129);
        v12 = *(unsigned __int8 **)(a2 + 184);
        if ( *v12 != 14 )
        {
          v13 = *v12 - 15;
          if ( *v12 != 15 )
            goto LABEL_8;
          if ( byte_140173441 >= 0 )
            goto LABEL_201;
          v16 = *((_QWORD *)v12 + 1);
          v17 = 0LL;
          v110 = 0;
          v18 = 0;
          v19 = 0;
          v20 = 0;
          v21 = 0;
          v22 = 0;
          v23 = *(unsigned __int8 *)(v16 + 2);
          if ( (_BYTE)v23 == 40 )
          {
            v24 = 0LL;
            v114 = 0;
            if ( !*(_DWORD *)(v16 + 20) )
            {
              v48 = 0;
              v121 = *(_DWORD *)(v16 + 56);
              if ( v121 )
              {
                while ( 1 )
                {
                  v11 = *(unsigned int *)(v16 + 4LL * v48 + 120);
                  if ( (unsigned int)v11 >= 0x80 )
                  {
                    v49 = *(unsigned int *)(v16 + 16);
                    if ( (unsigned int)v11 < (unsigned int)v49 )
                    {
                      v27 = (unsigned int)v11;
                      v50 = *(_DWORD *)(v16 + v11) - 64;
                      if ( v50 )
                      {
                        v11 = (unsigned int)(v50 - 1);
                        if ( (_DWORD)v11 )
                        {
                          if ( (_DWORD)v11 == 1 )
                          {
                            v11 = v27 + 40;
                            if ( v27 + 40 <= v49 )
                              goto LABEL_27;
                          }
                        }
                        else
                        {
                          v11 = v27 + 56;
                          if ( v27 + 56 <= v49 )
                          {
                            v114 = 1;
                            if ( *(_BYTE *)(v16 + v27 + 10) )
                              v24 = (char *)(v27 + v16 + 24);
                            v17 = *(_BYTE **)(v16 + v27 + 16);
                            v18 = *(_BYTE *)(v16 + v27 + 9);
                            v110 = *(_BYTE *)(v16 + v27 + 8);
                          }
                        }
                      }
                      else
                      {
                        v11 = v27 + 40;
                        if ( v27 + 40 <= v49 )
                          goto LABEL_41;
                      }
                      if ( v114 )
                        goto LABEL_38;
                    }
                  }
                  if ( ++v48 >= v121 )
                    goto LABEL_38;
                }
              }
            }
            goto LABEL_201;
          }
          goto LABEL_44;
        }
      }
      else
      {
        if ( !v9 )
          return (unsigned int)NvmeNamespaceStorageQueryDeviceEndurancePropertyIoctl(a1, a2);
        v10 = StorEtwLoggingEnabled == 0;
        v127 = -1073741637;
        *(_DWORD *)(a2 + 48) = -1073741637;
        *(_QWORD *)(a2 + 56) = 0LL;
        *(_BYTE *)(a2 + 141) = -84;
        if ( v10 )
          goto LABEL_201;
        v129 = 0LL;
        IoGetActivityIdIrp(a2, &v129);
        v12 = *(unsigned __int8 **)(a2 + 184);
        if ( *v12 != 14 )
        {
          v13 = *v12 - 15;
          if ( *v12 != 15 )
            goto LABEL_8;
          if ( byte_140173441 >= 0 )
            goto LABEL_201;
          v16 = *((_QWORD *)v12 + 1);
          v17 = 0LL;
          v110 = 0;
          v18 = 0;
          v19 = 0;
          v20 = 0;
          v21 = 0;
          v22 = 0;
          v23 = *(unsigned __int8 *)(v16 + 2);
          if ( (_BYTE)v23 == 40 )
          {
            v24 = 0LL;
            v115 = 0;
            if ( *(_DWORD *)(v16 + 20) )
              goto LABEL_201;
            v51 = 0;
            v122 = *(_DWORD *)(v16 + 56);
            if ( !v122 )
              goto LABEL_201;
            while ( 1 )
            {
              v11 = *(unsigned int *)(v16 + 4LL * v51 + 120);
              if ( (unsigned int)v11 >= 0x80 )
              {
                v52 = *(unsigned int *)(v16 + 16);
                if ( (unsigned int)v11 < (unsigned int)v52 )
                {
                  v27 = (unsigned int)v11;
                  v53 = *(_DWORD *)(v16 + v11) - 64;
                  if ( v53 )
                  {
                    v11 = (unsigned int)(v53 - 1);
                    if ( (_DWORD)v11 )
                    {
                      if ( (_DWORD)v11 == 1 )
                      {
                        v11 = v27 + 40;
                        if ( v27 + 40 <= v52 )
                        {
LABEL_27:
                          if ( *(_DWORD *)(v16 + v27 + 12) )
                            v24 = (char *)(v27 + v16 + 32);
                          v17 = *(_BYTE **)(v16 + v27 + 24);
                          goto LABEL_30;
                        }
                      }
                    }
                    else
                    {
                      v11 = v27 + 56;
                      if ( v27 + 56 <= v52 )
                      {
                        v115 = 1;
                        if ( *(_BYTE *)(v16 + v27 + 10) )
                          v24 = (char *)(v27 + v16 + 24);
                        v17 = *(_BYTE **)(v16 + v27 + 16);
                        v18 = *(_BYTE *)(v16 + v27 + 9);
                        v110 = *(_BYTE *)(v16 + v27 + 8);
                      }
                    }
                  }
                  else
                  {
                    v11 = v27 + 40;
                    if ( v27 + 40 <= v52 )
                    {
LABEL_41:
                      if ( *(_BYTE *)(v16 + v27 + 10) )
                        v24 = (char *)(v27 + v16 + 24);
                      v17 = *(_BYTE **)(v16 + v27 + 16);
LABEL_30:
                      v29 = *(_BYTE *)(v16 + v27 + 8);
                      v18 = *(_BYTE *)(v16 + v27 + 9);
LABEL_39:
                      if ( v24 )
                      {
                        v30 = *v24;
                        v22 = 0;
                        goto LABEL_45;
                      }
                      goto LABEL_201;
                    }
                  }
                  if ( v115 )
                    goto LABEL_38;
                }
              }
              if ( ++v51 >= v122 )
                goto LABEL_38;
            }
          }
          goto LABEL_44;
        }
      }
    }
    else
    {
      if ( !v9 )
        return (unsigned int)NvmeNamespaceStorageQueryDeviceNumaPropertyIoctl(a1, a2);
      v10 = StorEtwLoggingEnabled == 0;
      v127 = -1073741637;
      *(_DWORD *)(a2 + 48) = -1073741637;
      *(_QWORD *)(a2 + 56) = 0LL;
      *(_BYTE *)(a2 + 141) = -84;
      if ( v10 )
        goto LABEL_201;
      v129 = 0LL;
      IoGetActivityIdIrp(a2, &v129);
      v12 = *(unsigned __int8 **)(a2 + 184);
      if ( *v12 != 14 )
      {
        v13 = *v12 - 15;
        if ( *v12 != 15 )
          goto LABEL_8;
        if ( byte_140173441 >= 0 )
          goto LABEL_201;
        v16 = *((_QWORD *)v12 + 1);
        v17 = 0LL;
        v110 = 0;
        v18 = 0;
        v19 = 0;
        v20 = 0;
        v21 = 0;
        v22 = 0;
        v23 = *(unsigned __int8 *)(v16 + 2);
        if ( (_BYTE)v23 == 40 )
        {
          v24 = 0LL;
          v116 = 0;
          if ( *(_DWORD *)(v16 + 20) )
            goto LABEL_201;
          v54 = 0;
          v123 = *(_DWORD *)(v16 + 56);
          if ( !v123 )
            goto LABEL_201;
          while ( 1 )
          {
            v11 = *(unsigned int *)(v16 + 4LL * v54 + 120);
            if ( (unsigned int)v11 >= 0x80 )
            {
              v55 = *(unsigned int *)(v16 + 16);
              if ( (unsigned int)v11 < (unsigned int)v55 )
              {
                v56 = (unsigned int)v11;
                v57 = *(_DWORD *)(v11 + v16) - 64;
                if ( v57 )
                {
                  v11 = (unsigned int)(v57 - 1);
                  if ( (_DWORD)v11 )
                  {
                    if ( (_DWORD)v11 == 1 )
                    {
                      v11 = v56 + 40;
                      if ( v56 + 40 <= v55 )
                      {
LABEL_158:
                        if ( *(_DWORD *)(v56 + v16 + 12) )
                          v24 = (char *)(v56 + v16 + 32);
                        v17 = *(_BYTE **)(v56 + v16 + 24);
LABEL_161:
                        v29 = *(_BYTE *)(v56 + v16 + 8);
                        v18 = *(_BYTE *)(v56 + v16 + 9);
                        goto LABEL_39;
                      }
                    }
                  }
                  else
                  {
                    v11 = v56 + 56;
                    if ( v56 + 56 <= v55 )
                    {
                      v116 = 1;
                      if ( *(_BYTE *)(v56 + v16 + 10) )
                        v24 = (char *)(v56 + v16 + 24);
                      v17 = *(_BYTE **)(v56 + v16 + 16);
                      v18 = *(_BYTE *)(v56 + v16 + 9);
                      v110 = *(_BYTE *)(v56 + v16 + 8);
                    }
                  }
                }
                else
                {
                  v11 = v56 + 40;
                  if ( v56 + 40 <= v55 )
                  {
LABEL_194:
                    if ( *(_BYTE *)(v56 + v16 + 10) )
                      v24 = (char *)(v56 + v16 + 24);
                    v17 = *(_BYTE **)(v56 + v16 + 16);
                    goto LABEL_161;
                  }
                }
                if ( v116 )
                  goto LABEL_38;
              }
            }
            if ( ++v54 >= v123 )
            {
LABEL_38:
              v29 = v110;
              goto LABEL_39;
            }
          }
        }
        goto LABEL_44;
      }
    }
LABEL_68:
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_201;
    v108 = *(_DWORD *)(a2 + 48);
LABEL_199:
    v15 = &EventNonReadWriteRequestComplete;
    goto LABEL_200;
  }
LABEL_171:
  if ( !v9 )
  {
    StorageProtocolSpecificProperty = NvmeCommonGetStorageProtocolSpecificProperty(
                                        *(_QWORD *)(a1 + 8),
                                        (_QWORD *)a2,
                                        a3);
    v63 = StorageProtocolSpecificProperty;
    if ( StorageProtocolSpecificProperty == 259 )
    {
      *a3 = 0;
      return v63;
    }
    v10 = StorEtwLoggingEnabled == 0;
    *(_BYTE *)(a2 + 141) = -84;
    *(_DWORD *)(a2 + 48) = StorageProtocolSpecificProperty;
    if ( v10 )
      goto LABEL_270;
    v129 = 0LL;
    IoGetActivityIdIrp(a2, &v129);
    v65 = *(_QWORD *)(a2 + 184);
    if ( *(_BYTE *)v65 == 14 )
    {
      if ( (byte_140173442 & 8) != 0 )
      {
        v67 = &EventNonReadWriteRequestComplete;
        goto LABEL_269;
      }
LABEL_270:
      IofCompleteRequest((PIRP)a2, 0);
      return v63;
    }
    if ( *(_BYTE *)v65 != 15 )
    {
      if ( *(_BYTE *)v65 == 27 )
      {
        if ( *(_BYTE *)(v65 + 1) == 7 && !*(_DWORD *)(v65 + 8) )
        {
          if ( (byte_140173442 & 0x40) != 0 )
          {
            v66 = *(int **)(a2 + 56);
            if ( v66 )
              v4 = *v66;
            McTemplateK0pqd_EtwWriteTransfer(v64, v65, &v129, a2, v4, *(_DWORD *)(a2 + 48));
          }
          goto LABEL_270;
        }
        if ( (byte_140173442 & 0x20) != 0 )
        {
          v67 = &EventPnpRequestComplete;
LABEL_269:
          McTemplateK0pd_EtwWriteTransfer(v64, v67, &v129, a2, *(_DWORD *)(a2 + 48));
          goto LABEL_270;
        }
      }
      goto LABEL_270;
    }
    if ( byte_140173441 >= 0 )
      goto LABEL_270;
    v68 = *(_QWORD *)(v65 + 8);
    v69 = 0LL;
    v111 = 0;
    v70 = 0;
    v71 = 0;
    v72 = 0;
    v73 = 0;
    v74 = 0;
    if ( *(_BYTE *)(v68 + 2) == 40 )
    {
      v75 = 0LL;
      v118 = 0;
      if ( *(_DWORD *)(v68 + 20) )
        goto LABEL_270;
      v76 = 0LL;
      v128 = 0;
      v125 = *(_DWORD *)(v68 + 56);
      if ( !v125 )
        goto LABEL_270;
      do
      {
        v64 = *(unsigned int *)(v68 + 4 * v76 + 120);
        if ( (unsigned int)v64 >= 0x80 )
        {
          v77 = *(unsigned int *)(v68 + 16);
          if ( (unsigned int)v64 < (unsigned int)v77 )
          {
            v78 = (unsigned int)v64;
            v79 = *(_DWORD *)(v64 + v68) - 64;
            if ( v79 )
            {
              v64 = (unsigned int)(v79 - 1);
              if ( (_DWORD)v64 )
              {
                if ( (_DWORD)v64 == 1 )
                {
                  v64 = v78 + 40;
                  if ( v78 + 40 <= v77 )
                  {
                    if ( *(_DWORD *)(v78 + v68 + 12) )
                      v75 = (char *)(v78 + v68 + 32);
                    v69 = *(_BYTE **)(v78 + v68 + 24);
LABEL_229:
                    v80 = *(_BYTE *)(v78 + v68 + 8);
                    v70 = *(_BYTE *)(v78 + v68 + 9);
                    goto LABEL_238;
                  }
                }
              }
              else
              {
                v64 = v78 + 56;
                if ( v78 + 56 <= v77 )
                {
                  v118 = 1;
                  if ( *(_BYTE *)(v78 + v68 + 10) )
                    v75 = (char *)(v78 + v68 + 24);
                  v69 = *(_BYTE **)(v78 + v68 + 16);
                  v70 = *(_BYTE *)(v78 + v68 + 9);
                  v111 = *(_BYTE *)(v78 + v68 + 8);
                }
              }
            }
            else
            {
              v64 = v78 + 40;
              if ( v78 + 40 <= v77 )
              {
                if ( *(_BYTE *)(v78 + v68 + 10) )
                  v75 = (char *)(v78 + v68 + 24);
                v69 = *(_BYTE **)(v78 + v68 + 16);
                goto LABEL_229;
              }
            }
            if ( v118 )
              break;
          }
        }
        v76 = (unsigned int)(v128 + 1);
        v128 = v76;
      }
      while ( (unsigned int)v76 < v125 );
      v80 = v111;
LABEL_238:
      if ( !v75 )
        goto LABEL_270;
      v81 = *v75;
      v74 = 0;
    }
    else
    {
      v81 = *(_BYTE *)(v68 + 72);
      v69 = *(_BYTE **)(v68 + 32);
      v70 = *(_BYTE *)(v68 + 11);
      v80 = *(_BYTE *)(v68 + 4);
      if ( *(_BYTE *)(v68 + 2) )
        goto LABEL_270;
    }
    LOBYTE(v64) = v81 - 8;
    if ( (v64 & 0x5D) != 0 )
      goto LABEL_270;
    v82 = *(_BYTE *)(v68 + 3);
    if ( v82 == 1 || !v69 || !v70 )
    {
LABEL_263:
      if ( byte_140173441 < 0 )
      {
        if ( !v74 )
        {
          v73 = 0;
          v72 = 0;
          v71 = 0;
        }
        McTemplateK0pduuuuup_EtwWriteTransfer(v64, v68, &v129, a2, *(_DWORD *)(a2 + 48), v82, v80, v71, v72, v73, a2);
      }
      goto LABEL_270;
    }
    v83 = *v69 & 0x7F;
    if ( v83 == 114 || v83 == 115 )
    {
      v64 = (unsigned __int64)&v69[v70];
      LOBYTE(v68) = 0;
      if ( (unsigned __int64)(v69 + 8) > v64 )
        goto LABEL_261;
      v72 = v69[2];
      v71 = v69[1] & 0xF;
      v73 = v69[3];
    }
    else
    {
      v64 = (unsigned __int64)&v69[v70];
      LOBYTE(v68) = 0;
      if ( (unsigned __int64)(v69 + 8) > v64 )
        goto LABEL_261;
      v84 = v69 + 13;
      v71 = v69[2] & 0xF;
      v85 = v70;
      if ( (unsigned int)(unsigned __int8)v69[7] + 8 <= v70 )
        v85 = (unsigned __int8)v69[7] + 8;
      v64 = (unsigned __int64)&v69[v85];
      if ( (unsigned __int64)v84 <= v64 )
        v72 = v69[12];
      if ( (unsigned __int64)(v69 + 14) > v64 )
        v73 = 0;
      else
        v73 = *v84;
    }
    LOBYTE(v68) = 1;
LABEL_261:
    if ( (_BYTE)v68 )
      v74 = 1;
    goto LABEL_263;
  }
  v10 = StorEtwLoggingEnabled == 0;
  v127 = -1073741637;
  *(_DWORD *)(a2 + 48) = -1073741637;
  *(_QWORD *)(a2 + 56) = 0LL;
  *(_BYTE *)(a2 + 141) = -84;
  if ( v10 )
    goto LABEL_201;
  v129 = 0LL;
  IoGetActivityIdIrp(a2, &v129);
  v12 = *(unsigned __int8 **)(a2 + 184);
  if ( *v12 == 14 )
  {
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_201;
    v11 = *(unsigned int *)(a2 + 48);
    v108 = *(_DWORD *)(a2 + 48);
    goto LABEL_199;
  }
  v13 = *v12 - 15;
  if ( *v12 != 15 )
    goto LABEL_8;
  if ( byte_140173441 >= 0 )
    goto LABEL_201;
  v16 = *((_QWORD *)v12 + 1);
  v17 = 0LL;
  v110 = 0;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  v23 = *(unsigned __int8 *)(v16 + 2);
  if ( (_BYTE)v23 == 40 )
  {
    v24 = 0LL;
    v117 = 0;
    if ( !*(_DWORD *)(v16 + 20) )
    {
      v58 = 0;
      v124 = *(_DWORD *)(v16 + 56);
      if ( v124 )
      {
        while ( 1 )
        {
          v11 = *(unsigned int *)(v16 + 4LL * v58 + 120);
          if ( (unsigned int)v11 >= 0x80 )
          {
            v59 = *(unsigned int *)(v16 + 16);
            if ( (unsigned int)v11 < (unsigned int)v59 )
            {
              v56 = (unsigned int)v11;
              v60 = *(_DWORD *)(v11 + v16) - 64;
              if ( v60 )
              {
                v11 = (unsigned int)(v60 - 1);
                if ( (_DWORD)v11 )
                {
                  if ( (_DWORD)v11 == 1 )
                  {
                    v11 = v56 + 40;
                    if ( v56 + 40 <= v59 )
                      goto LABEL_158;
                  }
                }
                else
                {
                  v11 = v56 + 56;
                  if ( v56 + 56 <= v59 )
                  {
                    v117 = 1;
                    if ( *(_BYTE *)(v56 + v16 + 10) )
                      v24 = (char *)(v56 + v16 + 24);
                    v17 = *(_BYTE **)(v56 + v16 + 16);
                    v18 = *(_BYTE *)(v56 + v16 + 9);
                    v110 = *(_BYTE *)(v56 + v16 + 8);
                  }
                }
              }
              else
              {
                v11 = v56 + 40;
                if ( v56 + 40 <= v59 )
                  goto LABEL_194;
              }
              if ( v117 )
                goto LABEL_38;
            }
          }
          if ( ++v58 >= v124 )
            goto LABEL_38;
        }
      }
    }
    goto LABEL_201;
  }
LABEL_44:
  v29 = *(_BYTE *)(v16 + 4);
  v18 = *(_BYTE *)(v16 + 11);
  v17 = *(_BYTE **)(v16 + 32);
  v30 = *(_BYTE *)(v16 + 72);
  if ( v23 )
    goto LABEL_201;
LABEL_45:
  LOBYTE(v11) = v30 - 8;
  if ( (v11 & 0x5D) == 0 )
  {
    v31 = *(_BYTE *)(v16 + 3);
    if ( v31 == 1 || !v17 || !v18 )
    {
LABEL_64:
      if ( byte_140173441 < 0 )
      {
        if ( !v22 )
        {
          v21 = 0;
          v20 = 0;
          v19 = 0;
        }
        McTemplateK0pduuuuup_EtwWriteTransfer(v11, v16, &v129, a2, *(_DWORD *)(a2 + 48), v31, v29, v19, v20, v21, a2);
      }
      goto LABEL_201;
    }
    v32 = *v17 & 0x7F;
    if ( v32 == 114 || v32 == 115 )
    {
      v11 = (unsigned __int64)&v17[v18];
      LOBYTE(v16) = 0;
      if ( (unsigned __int64)(v17 + 8) > v11 )
        goto LABEL_62;
      v21 = v17[3];
      v19 = v17[1] & 0xF;
      v20 = v17[2];
    }
    else
    {
      v11 = (unsigned __int64)&v17[v18];
      LOBYTE(v16) = 0;
      if ( (unsigned __int64)(v17 + 8) > v11 )
        goto LABEL_62;
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
LABEL_62:
    if ( (_BYTE)v16 )
      v22 = 1;
    goto LABEL_64;
  }
LABEL_201:
  IofCompleteRequest((PIRP)a2, 0);
  return v127;
}
