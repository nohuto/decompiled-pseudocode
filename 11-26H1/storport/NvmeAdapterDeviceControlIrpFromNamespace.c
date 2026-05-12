/*
 * XREFs of NvmeAdapterDeviceControlIrpFromNamespace @ 0x14004A5A0
 * Callers:
 *     NvmeNamespaceStorageProtocolCommandIoctl @ 0x1401BCE2C (NvmeNamespaceStorageProtocolCommandIoctl.c)
 * Callees:
 *     RaForwardIrp @ 0x140037074 (RaForwardIrp.c)
 *     NvmeAdapterAcquireRemoveLock @ 0x14004B464 (NvmeAdapterAcquireRemoveLock.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pddd_EtwWriteTransfer @ 0x14005D340 (McTemplateK0pddd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     NvmeAdapterFirmwareActivateIoctl @ 0x1400D5D1C (NvmeAdapterFirmwareActivateIoctl.c)
 *     NvmeAdapterFirmwareDownloadIoctl @ 0x1400D6F6C (NvmeAdapterFirmwareDownloadIoctl.c)
 *     NvmeAdapterFirmwareGetInfoIoctl @ 0x1400D7D50 (NvmeAdapterFirmwareGetInfoIoctl.c)
 *     NvmeAdapterSetLedState @ 0x1400DCBC8 (NvmeAdapterSetLedState.c)
 *     NvmeAdapterSetTemperatureThresholdIoctl @ 0x1400DD020 (NvmeAdapterSetTemperatureThresholdIoctl.c)
 *     NvmeAdapterStorageInternalQueryPropertyIoctl @ 0x1400DF840 (NvmeAdapterStorageInternalQueryPropertyIoctl.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     NvmeAdapterStorageQueryProperty @ 0x14018377C (NvmeAdapterStorageQueryProperty.c)
 *     NvmeAdapterStorageProtocolCommandIoctl @ 0x14019FB54 (NvmeAdapterStorageProtocolCommandIoctl.c)
 */

__int64 __fastcall NvmeAdapterDeviceControlIrpFromNamespace(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r12
  unsigned int v6; // eax
  __int64 v7; // rcx
  int v8; // ebx
  int v9; // r15d
  unsigned int v10; // esi
  bool v11; // zf
  unsigned __int64 v12; // rcx
  __int64 v13; // rdx
  int *v14; // rax
  void *v15; // rdx
  __int64 v16; // rdx
  _BYTE *v17; // r9
  unsigned __int8 v18; // r14
  char v19; // r11
  char v20; // si
  char v21; // r10
  char v22; // r15
  char *v23; // r15
  unsigned int v24; // r13d
  unsigned __int64 v25; // r12
  __int64 v26; // r8
  int v27; // ecx
  char v28; // r12
  char v29; // cl
  char v30; // r8
  char v31; // al
  char *v32; // r10
  unsigned int v33; // eax
  unsigned int v35; // esi
  unsigned int v36; // esi
  unsigned int v37; // esi
  unsigned int v38; // esi
  NTSTATUS PropertyIoctl; // eax
  unsigned int v40; // esi
  unsigned int InfoIoctl; // eax
  int v42; // ecx
  unsigned __int64 v43; // rcx
  __int64 v44; // rdx
  int *v45; // rax
  int v46; // ecx
  void *v47; // rdx
  __int64 v48; // rdx
  _BYTE *v49; // r9
  unsigned __int8 v50; // r14
  char v51; // r11
  char v52; // si
  char v53; // r10
  char v54; // r15
  char *v55; // r15
  unsigned int v56; // r13d
  unsigned __int64 v57; // r12
  __int64 v58; // r8
  int v59; // ecx
  char v60; // r12
  char v61; // cl
  char v62; // r8
  char v63; // al
  char *v64; // r10
  unsigned int v65; // eax
  unsigned __int64 v66; // rcx
  __int64 v67; // rdx
  int *v68; // rax
  int v69; // ecx
  void *v70; // rdx
  __int64 v71; // rdx
  _BYTE *v72; // r9
  unsigned __int8 v73; // r15
  char v74; // r11
  char v75; // r14
  char v76; // r10
  char v77; // r12
  char *v78; // r12
  unsigned int v79; // ecx
  __int64 v80; // rax
  unsigned __int64 v81; // r13
  __int64 v82; // r8
  int v83; // ecx
  char v84; // r13
  char v85; // cl
  char v86; // r8
  char v87; // al
  char *v88; // r10
  unsigned int v89; // eax
  unsigned int v90; // esi
  unsigned int v91; // esi
  unsigned int v92; // esi
  unsigned int v93; // esi
  unsigned __int64 v94; // rcx
  __int64 v95; // rdx
  int *v96; // rax
  void *v97; // rdx
  __int64 v98; // rdx
  _BYTE *v99; // r9
  unsigned __int8 v100; // r15
  char v101; // r11
  char v102; // r14
  char v103; // r10
  char v104; // r12
  char *v105; // r12
  unsigned int v106; // ecx
  __int64 v107; // rax
  unsigned __int64 v108; // r13
  __int64 v109; // r8
  int v110; // ecx
  char v111; // r13
  char v112; // cl
  char v113; // r8
  char v114; // al
  char *v115; // r10
  unsigned int v116; // eax
  char v117; // [rsp+60h] [rbp-29h]
  char v118; // [rsp+60h] [rbp-29h]
  char v119; // [rsp+60h] [rbp-29h]
  char v120; // [rsp+60h] [rbp-29h]
  char v121; // [rsp+61h] [rbp-28h] BYREF
  char v122; // [rsp+62h] [rbp-27h]
  unsigned int v123; // [rsp+64h] [rbp-25h]
  unsigned int v124; // [rsp+68h] [rbp-21h]
  __int128 v125; // [rsp+70h] [rbp-19h] BYREF
  __int128 v126; // [rsp+80h] [rbp-9h] BYREF
  __int128 v127; // [rsp+90h] [rbp+7h] BYREF

  *(_QWORD *)&v125 = a1;
  v127 = 0LL;
  v121 = 1;
  v5 = a1;
  v6 = NvmeAdapterAcquireRemoveLock(a1);
  v7 = *(_QWORD *)(a3 + 184);
  LOBYTE(v8) = 0;
  v9 = v6;
  v124 = v6;
  v10 = *(_DWORD *)(v7 + 24);
  if ( StorEtwLoggingEnabled )
  {
    IoGetActivityIdIrp(a3, &v127);
    if ( (byte_140173442 & 2) != 0 )
      McTemplateK0pddd_EtwWriteTransfer(
        *(unsigned __int8 *)(*(_QWORD *)(a3 + 184) + 1LL),
        (unsigned int)&EventIOCTL,
        (unsigned int)&v127,
        a3,
        **(_BYTE **)(a3 + 184),
        *(_BYTE *)(*(_QWORD *)(a3 + 184) + 1LL),
        v10);
  }
  if ( v9 < 0 )
  {
    v11 = StorEtwLoggingEnabled == 0;
    *(_QWORD *)(a3 + 56) = 0LL;
    *(_BYTE *)(a3 + 141) = -84;
    *(_DWORD *)(a3 + 48) = v9;
    if ( v11 )
      goto LABEL_71;
    v125 = 0LL;
    IoGetActivityIdIrp(a3, &v125);
    v13 = *(_QWORD *)(a3 + 184);
    if ( *(_BYTE *)v13 == 14 )
    {
      if ( (byte_140173442 & 8) != 0 )
      {
        v15 = &EventNonReadWriteRequestComplete;
        goto LABEL_70;
      }
LABEL_71:
      IofCompleteRequest((PIRP)a3, 0);
      return v124;
    }
    if ( *(_BYTE *)v13 != 15 )
    {
      if ( *(_BYTE *)v13 == 27 )
      {
        if ( *(_BYTE *)(v13 + 1) == 7 && !*(_DWORD *)(v13 + 8) )
        {
          if ( (byte_140173442 & 0x40) != 0 )
          {
            v14 = *(int **)(a3 + 56);
            if ( v14 )
              v8 = *v14;
            McTemplateK0pqd_EtwWriteTransfer(v12, v13, (unsigned int)&v125, a3, v8, *(_DWORD *)(a3 + 48));
          }
          goto LABEL_71;
        }
        if ( (byte_140173442 & 0x20) != 0 )
        {
          v15 = &EventPnpRequestComplete;
LABEL_70:
          McTemplateK0pd_EtwWriteTransfer(v12, v15, &v125, a3, *(_DWORD *)(a3 + 48));
          goto LABEL_71;
        }
      }
      goto LABEL_71;
    }
    if ( byte_140173441 >= 0 )
      goto LABEL_71;
    v16 = *(_QWORD *)(v13 + 8);
    v17 = 0LL;
    v121 = 0;
    v18 = 0;
    v19 = 0;
    v20 = 0;
    v21 = 0;
    v22 = 0;
    if ( *(_BYTE *)(v16 + 2) == 40 )
    {
      v23 = 0LL;
      v117 = 0;
      if ( *(_DWORD *)(v16 + 20) )
        goto LABEL_71;
      v24 = 0;
      v123 = *(_DWORD *)(v16 + 56);
      if ( !v123 )
        goto LABEL_71;
      do
      {
        v12 = *(unsigned int *)(v16 + 4LL * v24 + 120);
        if ( (unsigned int)v12 >= 0x80 )
        {
          v25 = *(unsigned int *)(v16 + 16);
          if ( (unsigned int)v12 < (unsigned int)v25 )
          {
            v26 = (unsigned int)v12;
            v27 = *(_DWORD *)(v12 + v16) - 64;
            if ( v27 )
            {
              LODWORD(v12) = v27 - 1;
              if ( (_DWORD)v12 )
              {
                if ( (_DWORD)v12 == 1 )
                {
                  LODWORD(v12) = v26 + 40;
                  if ( v26 + 40 <= v25 )
                  {
                    if ( *(_DWORD *)(v26 + v16 + 12) )
                      v23 = (char *)(v26 + v16 + 32);
                    v17 = *(_BYTE **)(v26 + v16 + 24);
LABEL_30:
                    v28 = *(_BYTE *)(v26 + v16 + 8);
                    v18 = *(_BYTE *)(v26 + v16 + 9);
                    goto LABEL_39;
                  }
                }
              }
              else
              {
                LODWORD(v12) = v26 + 56;
                if ( v26 + 56 <= v25 )
                {
                  v117 = 1;
                  if ( *(_BYTE *)(v26 + v16 + 10) )
                    v23 = (char *)(v26 + v16 + 24);
                  v17 = *(_BYTE **)(v26 + v16 + 16);
                  v18 = *(_BYTE *)(v26 + v16 + 9);
                  v121 = *(_BYTE *)(v26 + v16 + 8);
                }
              }
            }
            else
            {
              LODWORD(v12) = v26 + 40;
              if ( v26 + 40 <= v25 )
              {
                if ( *(_BYTE *)(v26 + v16 + 10) )
                  v23 = (char *)(v26 + v16 + 24);
                v17 = *(_BYTE **)(v26 + v16 + 16);
                goto LABEL_30;
              }
            }
            if ( v117 )
              break;
          }
        }
        ++v24;
      }
      while ( v24 < v123 );
      v28 = v121;
LABEL_39:
      if ( !v23 )
        goto LABEL_71;
      v29 = *v23;
      v22 = 0;
    }
    else
    {
      v29 = *(_BYTE *)(v16 + 72);
      v17 = *(_BYTE **)(v16 + 32);
      v18 = *(_BYTE *)(v16 + 11);
      v28 = *(_BYTE *)(v16 + 4);
      if ( *(_BYTE *)(v16 + 2) )
        goto LABEL_71;
    }
    LOBYTE(v12) = v29 - 8;
    if ( (v12 & 0x5D) != 0 )
      goto LABEL_71;
    v30 = *(_BYTE *)(v16 + 3);
    if ( v30 == 1 || !v17 || !v18 )
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
        McTemplateK0pduuuuup_EtwWriteTransfer(
          v12,
          v16,
          (unsigned int)&v125,
          a3,
          *(_DWORD *)(a3 + 48),
          v30,
          v28,
          v19,
          v20,
          v21,
          a3);
      }
      goto LABEL_71;
    }
    v31 = *v17 & 0x7F;
    if ( v31 == 114 || v31 == 115 )
    {
      v12 = (unsigned __int64)&v17[v18];
      LOBYTE(v16) = 0;
      if ( (unsigned __int64)(v17 + 8) > v12 )
        goto LABEL_62;
      v20 = v17[2];
      v19 = v17[1] & 0xF;
      v21 = v17[3];
    }
    else
    {
      v12 = (unsigned __int64)&v17[v18];
      LOBYTE(v16) = 0;
      if ( (unsigned __int64)(v17 + 8) > v12 )
        goto LABEL_62;
      v32 = v17 + 13;
      v19 = v17[2] & 0xF;
      v33 = v18;
      if ( (unsigned int)(unsigned __int8)v17[7] + 8 <= v18 )
        v33 = (unsigned __int8)v17[7] + 8;
      v12 = (unsigned __int64)&v17[v33];
      if ( (unsigned __int64)v32 <= v12 )
        v20 = v17[12];
      if ( (unsigned __int64)(v17 + 14) > v12 )
        v21 = 0;
      else
        v21 = *v32;
    }
    LOBYTE(v16) = 1;
LABEL_62:
    if ( (_BYTE)v16 )
      v22 = 1;
    goto LABEL_64;
  }
  if ( v10 > 0x2DD200 )
  {
    v90 = v10 - 3003328;
    if ( v90 )
    {
      v91 = v90 - 2116;
      if ( v91 )
      {
        v92 = v91 - 4;
        if ( v92 )
        {
          v93 = v92 - 320504;
          if ( !v93 || v93 == 56 )
          {
            PropertyIoctl = RaForwardIrp(*(struct _DEVICE_OBJECT **)(v5 + 24), (IRP *)a3);
            goto LABEL_80;
          }
          goto LABEL_229;
        }
        InfoIoctl = NvmeAdapterFirmwareActivateIoctl(v5, a2, a3, 0LL, &v121);
      }
      else
      {
        InfoIoctl = NvmeAdapterFirmwareDownloadIoctl(v5, a2, a3, &v121);
      }
    }
    else
    {
      InfoIoctl = NvmeAdapterStorageProtocolCommandIoctl(v5, a2, a3, &v121);
    }
    goto LABEL_301;
  }
  if ( v10 != 3002880 )
  {
    v35 = v10 - 266268;
    if ( v35 )
    {
      v36 = v35 - 2687964;
      if ( !v36 )
      {
        PropertyIoctl = NvmeAdapterStorageInternalQueryPropertyIoctl(v5, a3);
        goto LABEL_80;
      }
      v37 = v36 - 8;
      if ( v37 )
      {
        v38 = v37 - 2048;
        if ( v38 )
        {
          if ( v38 == 204 )
          {
            PropertyIoctl = NvmeAdapterSetLedState(v5, a3);
LABEL_80:
            v40 = PropertyIoctl;
LABEL_303:
            ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v5 + 152));
            return v40;
          }
LABEL_229:
          v11 = StorEtwLoggingEnabled == 0;
          v40 = -1073741637;
          *(_DWORD *)(a3 + 48) = -1073741637;
          *(_BYTE *)(a3 + 141) = -84;
          if ( v11 )
            goto LABEL_294;
          v126 = 0LL;
          IoGetActivityIdIrp(a3, &v126);
          v95 = *(_QWORD *)(a3 + 184);
          if ( *(_BYTE *)v95 == 14 )
          {
            if ( (byte_140173442 & 8) == 0 )
              goto LABEL_294;
            v97 = &EventNonReadWriteRequestComplete;
            goto LABEL_241;
          }
          if ( *(_BYTE *)v95 != 15 )
          {
            if ( *(_BYTE *)v95 == 27 )
            {
              if ( *(_BYTE *)(v95 + 1) == 7 && !*(_DWORD *)(v95 + 8) )
              {
                if ( (byte_140173442 & 0x40) != 0 )
                {
                  v96 = *(int **)(a3 + 56);
                  if ( v96 )
                    v8 = *v96;
                  McTemplateK0pqd_EtwWriteTransfer(v94, v95, (unsigned int)&v126, a3, v8, *(_DWORD *)(a3 + 48));
                }
                goto LABEL_294;
              }
              if ( (byte_140173442 & 0x20) != 0 )
              {
                v97 = &EventPnpRequestComplete;
LABEL_241:
                McTemplateK0pd_EtwWriteTransfer(v94, v97, &v126, a3, *(_DWORD *)(a3 + 48));
              }
            }
LABEL_294:
            IofCompleteRequest((PIRP)a3, 0);
            goto LABEL_303;
          }
          if ( byte_140173441 >= 0 )
            goto LABEL_294;
          v98 = *(_QWORD *)(v95 + 8);
          v99 = 0LL;
          v120 = 0;
          v100 = 0;
          v101 = 0;
          v102 = 0;
          v103 = 0;
          v104 = 0;
          if ( *(_BYTE *)(v98 + 2) == 40 )
          {
            v105 = 0LL;
            v122 = 0;
            if ( *(_DWORD *)(v98 + 20) )
              goto LABEL_293;
            v106 = *(_DWORD *)(v98 + 56);
            v107 = 0LL;
            v123 = 0;
            v124 = v106;
            if ( !v106 )
              goto LABEL_293;
            do
            {
              v94 = *(unsigned int *)(v98 + 4 * v107 + 120);
              if ( (unsigned int)v94 >= 0x80 )
              {
                v108 = *(unsigned int *)(v98 + 16);
                if ( (unsigned int)v94 < (unsigned int)v108 )
                {
                  v109 = (unsigned int)v94;
                  v110 = *(_DWORD *)(v98 + v94) - 64;
                  if ( v110 )
                  {
                    LODWORD(v94) = v110 - 1;
                    if ( (_DWORD)v94 )
                    {
                      if ( (_DWORD)v94 == 1 )
                      {
                        LODWORD(v94) = v109 + 40;
                        if ( v109 + 40 <= v108 )
                        {
                          if ( *(_DWORD *)(v98 + v109 + 12) )
                            v105 = (char *)(v109 + v98 + 32);
                          v99 = *(_BYTE **)(v98 + v109 + 24);
LABEL_255:
                          v111 = *(_BYTE *)(v98 + v109 + 8);
                          v100 = *(_BYTE *)(v98 + v109 + 9);
                          goto LABEL_264;
                        }
                      }
                    }
                    else
                    {
                      LODWORD(v94) = v109 + 56;
                      if ( v109 + 56 <= v108 )
                      {
                        v122 = 1;
                        if ( *(_BYTE *)(v98 + v109 + 10) )
                          v105 = (char *)(v109 + v98 + 24);
                        v99 = *(_BYTE **)(v98 + v109 + 16);
                        v100 = *(_BYTE *)(v98 + v109 + 9);
                        v120 = *(_BYTE *)(v98 + v109 + 8);
                      }
                    }
                  }
                  else
                  {
                    LODWORD(v94) = v109 + 40;
                    if ( v109 + 40 <= v108 )
                    {
                      if ( *(_BYTE *)(v98 + v109 + 10) )
                        v105 = (char *)(v109 + v98 + 24);
                      v99 = *(_BYTE **)(v98 + v109 + 16);
                      goto LABEL_255;
                    }
                  }
                  if ( v122 )
                    break;
                }
              }
              v107 = v123 + 1;
              v123 = v107;
            }
            while ( (unsigned int)v107 < v124 );
            v111 = v120;
LABEL_264:
            if ( !v105 )
              goto LABEL_293;
            v112 = *v105;
            v104 = 0;
          }
          else
          {
            v112 = *(_BYTE *)(v98 + 72);
            v99 = *(_BYTE **)(v98 + 32);
            v100 = *(_BYTE *)(v98 + 11);
            v111 = *(_BYTE *)(v98 + 4);
            if ( *(_BYTE *)(v98 + 2) )
              goto LABEL_293;
          }
          LOBYTE(v94) = v112 - 8;
          if ( (v94 & 0x5D) == 0 )
          {
            v113 = *(_BYTE *)(v98 + 3);
            if ( v113 == 1 || !v99 || !v100 )
            {
LABEL_289:
              if ( byte_140173441 < 0 )
              {
                if ( !v104 )
                {
                  v103 = 0;
                  v102 = 0;
                  v101 = 0;
                }
                McTemplateK0pduuuuup_EtwWriteTransfer(
                  v94,
                  v98,
                  (unsigned int)&v126,
                  a3,
                  *(_DWORD *)(a3 + 48),
                  v113,
                  v111,
                  v101,
                  v102,
                  v103,
                  a3);
              }
              goto LABEL_293;
            }
            v114 = *v99 & 0x7F;
            if ( v114 == 114 || v114 == 115 )
            {
              v94 = (unsigned __int64)&v99[v100];
              LOBYTE(v98) = 0;
              if ( (unsigned __int64)(v99 + 8) > v94 )
                goto LABEL_287;
              v102 = v99[2];
              v101 = v99[1] & 0xF;
              v103 = v99[3];
            }
            else
            {
              v94 = (unsigned __int64)&v99[v100];
              LOBYTE(v98) = 0;
              if ( (unsigned __int64)(v99 + 8) > v94 )
                goto LABEL_287;
              v115 = v99 + 13;
              v101 = v99[2] & 0xF;
              v116 = v100;
              if ( (unsigned int)(unsigned __int8)v99[7] + 8 <= v100 )
                v116 = (unsigned __int8)v99[7] + 8;
              v94 = (unsigned __int64)&v99[v116];
              if ( (unsigned __int64)v115 <= v94 )
                v102 = v99[12];
              if ( (unsigned __int64)(v99 + 14) > v94 )
                v103 = 0;
              else
                v103 = *v115;
            }
            LOBYTE(v98) = 1;
LABEL_287:
            if ( (_BYTE)v98 )
              v104 = 1;
            goto LABEL_289;
          }
LABEL_293:
          v5 = v125;
          goto LABEL_294;
        }
        InfoIoctl = NvmeAdapterFirmwareGetInfoIoctl(v5, a2, a3, &v121);
      }
      else
      {
        InfoIoctl = NvmeAdapterStorageQueryProperty(v5, a3, &v121);
      }
      goto LABEL_301;
    }
    v42 = *(_DWORD *)(*(_QWORD *)(v5 + 400) + 184LL) >> 30;
    *(_BYTE *)(a3 + 141) = -84;
    if ( (v42 & 1) != 0 )
    {
      v11 = StorEtwLoggingEnabled == 0;
      *(_DWORD *)(a3 + 48) = 0;
      if ( v11 )
        goto LABEL_151;
      v126 = 0LL;
      IoGetActivityIdIrp(a3, &v126);
      v44 = *(_QWORD *)(a3 + 184);
      if ( *(_BYTE *)v44 == 14 )
      {
        if ( (byte_140173442 & 8) == 0 )
          goto LABEL_151;
        v47 = &EventNonReadWriteRequestComplete;
        goto LABEL_98;
      }
      if ( *(_BYTE *)v44 != 15 )
      {
        if ( *(_BYTE *)v44 == 27 )
        {
          if ( *(_BYTE *)(v44 + 1) == 7 && !*(_DWORD *)(v44 + 8) )
          {
            if ( (byte_140173442 & 0x40) != 0 )
            {
              v45 = *(int **)(a3 + 56);
              if ( v45 )
                v46 = *v45;
              else
                v46 = 0;
              McTemplateK0pqd_EtwWriteTransfer(v46, v44, (unsigned int)&v126, a3, v46, *(_DWORD *)(a3 + 48));
            }
            goto LABEL_151;
          }
          if ( (byte_140173442 & 0x20) != 0 )
          {
            v47 = &EventPnpRequestComplete;
LABEL_98:
            McTemplateK0pd_EtwWriteTransfer(v43, v47, &v126, a3, *(_DWORD *)(a3 + 48));
          }
        }
LABEL_151:
        IofCompleteRequest((PIRP)a3, 0);
        v40 = 0;
        goto LABEL_302;
      }
      if ( byte_140173441 >= 0 )
        goto LABEL_151;
      v48 = *(_QWORD *)(v44 + 8);
      v49 = 0LL;
      v118 = 0;
      v50 = 0;
      v51 = 0;
      v52 = 0;
      v53 = 0;
      v54 = 0;
      if ( *(_BYTE *)(v48 + 2) == 40 )
      {
        v55 = 0LL;
        v122 = 0;
        if ( *(_DWORD *)(v48 + 20) )
          goto LABEL_151;
        v56 = 0;
        v124 = *(_DWORD *)(v48 + 56);
        if ( !v124 )
          goto LABEL_151;
        do
        {
          v43 = *(unsigned int *)(v48 + 4LL * v56 + 120);
          if ( (unsigned int)v43 >= 0x80 )
          {
            v57 = *(unsigned int *)(v48 + 16);
            if ( (unsigned int)v43 < (unsigned int)v57 )
            {
              v58 = (unsigned int)v43;
              v59 = *(_DWORD *)(v43 + v48) - 64;
              if ( v59 )
              {
                LODWORD(v43) = v59 - 1;
                if ( (_DWORD)v43 )
                {
                  if ( (_DWORD)v43 == 1 )
                  {
                    LODWORD(v43) = v58 + 40;
                    if ( v58 + 40 <= v57 )
                    {
                      if ( *(_DWORD *)(v58 + v48 + 12) )
                        v55 = (char *)(v58 + v48 + 32);
                      v49 = *(_BYTE **)(v58 + v48 + 24);
LABEL_112:
                      v60 = *(_BYTE *)(v58 + v48 + 8);
                      v50 = *(_BYTE *)(v58 + v48 + 9);
                      goto LABEL_121;
                    }
                  }
                }
                else
                {
                  LODWORD(v43) = v58 + 56;
                  if ( v58 + 56 <= v57 )
                  {
                    v122 = 1;
                    if ( *(_BYTE *)(v58 + v48 + 10) )
                      v55 = (char *)(v58 + v48 + 24);
                    v49 = *(_BYTE **)(v58 + v48 + 16);
                    v50 = *(_BYTE *)(v58 + v48 + 9);
                    v118 = *(_BYTE *)(v58 + v48 + 8);
                  }
                }
              }
              else
              {
                LODWORD(v43) = v58 + 40;
                if ( v58 + 40 <= v57 )
                {
                  if ( *(_BYTE *)(v58 + v48 + 10) )
                    v55 = (char *)(v58 + v48 + 24);
                  v49 = *(_BYTE **)(v58 + v48 + 16);
                  goto LABEL_112;
                }
              }
              if ( v122 )
                break;
            }
          }
          ++v56;
        }
        while ( v56 < v124 );
        v60 = v118;
LABEL_121:
        if ( !v55 )
          goto LABEL_150;
        v61 = *v55;
        v54 = 0;
      }
      else
      {
        v61 = *(_BYTE *)(v48 + 72);
        v49 = *(_BYTE **)(v48 + 32);
        v50 = *(_BYTE *)(v48 + 11);
        v60 = *(_BYTE *)(v48 + 4);
        if ( *(_BYTE *)(v48 + 2) )
          goto LABEL_150;
      }
      LOBYTE(v43) = v61 - 8;
      if ( (v43 & 0x5D) == 0 )
      {
        v62 = *(_BYTE *)(v48 + 3);
        if ( v62 == 1 || !v49 || !v50 )
        {
LABEL_146:
          if ( byte_140173441 < 0 )
          {
            if ( !v54 )
            {
              v53 = 0;
              v52 = 0;
              v51 = 0;
            }
            McTemplateK0pduuuuup_EtwWriteTransfer(
              v43,
              v48,
              (unsigned int)&v126,
              a3,
              *(_DWORD *)(a3 + 48),
              v62,
              v60,
              v51,
              v52,
              v53,
              a3);
          }
          goto LABEL_150;
        }
        v63 = *v49 & 0x7F;
        if ( v63 == 114 || v63 == 115 )
        {
          v43 = (unsigned __int64)&v49[v50];
          LOBYTE(v48) = 0;
          if ( (unsigned __int64)(v49 + 8) > v43 )
            goto LABEL_144;
          v52 = v49[2];
          v51 = v49[1] & 0xF;
          v53 = v49[3];
        }
        else
        {
          v43 = (unsigned __int64)&v49[v50];
          LOBYTE(v48) = 0;
          if ( (unsigned __int64)(v49 + 8) > v43 )
            goto LABEL_144;
          v64 = v49 + 13;
          v51 = v49[2] & 0xF;
          v65 = v50;
          if ( (unsigned int)(unsigned __int8)v49[7] + 8 <= v50 )
            v65 = (unsigned __int8)v49[7] + 8;
          v43 = (unsigned __int64)&v49[v65];
          if ( (unsigned __int64)v64 <= v43 )
            v52 = v49[12];
          if ( (unsigned __int64)(v49 + 14) > v43 )
            v53 = 0;
          else
            v53 = *v64;
        }
        LOBYTE(v48) = 1;
LABEL_144:
        if ( (_BYTE)v48 )
          v54 = 1;
        goto LABEL_146;
      }
LABEL_150:
      v5 = v125;
      goto LABEL_151;
    }
    v11 = StorEtwLoggingEnabled == 0;
    v40 = -1073741637;
    *(_DWORD *)(a3 + 48) = -1073741637;
    if ( v11 )
      goto LABEL_220;
    v126 = 0LL;
    IoGetActivityIdIrp(a3, &v126);
    v67 = *(_QWORD *)(a3 + 184);
    if ( *(_BYTE *)v67 == 14 )
    {
      if ( (byte_140173442 & 8) == 0 )
        goto LABEL_220;
      v70 = &EventNonReadWriteRequestComplete;
      goto LABEL_167;
    }
    if ( *(_BYTE *)v67 != 15 )
    {
      if ( *(_BYTE *)v67 == 27 )
      {
        if ( *(_BYTE *)(v67 + 1) == 7 && !*(_DWORD *)(v67 + 8) )
        {
          if ( (byte_140173442 & 0x40) != 0 )
          {
            v68 = *(int **)(a3 + 56);
            if ( v68 )
              v69 = *v68;
            else
              v69 = 0;
            McTemplateK0pqd_EtwWriteTransfer(v69, v67, (unsigned int)&v126, a3, v69, *(_DWORD *)(a3 + 48));
          }
          goto LABEL_220;
        }
        if ( (byte_140173442 & 0x20) != 0 )
        {
          v70 = &EventPnpRequestComplete;
LABEL_167:
          McTemplateK0pd_EtwWriteTransfer(v66, v70, &v126, a3, *(_DWORD *)(a3 + 48));
        }
      }
LABEL_220:
      IofCompleteRequest((PIRP)a3, 0);
      goto LABEL_302;
    }
    if ( byte_140173441 >= 0 )
      goto LABEL_220;
    v71 = *(_QWORD *)(v67 + 8);
    v72 = 0LL;
    v119 = 0;
    v73 = 0;
    v74 = 0;
    v75 = 0;
    v76 = 0;
    v77 = 0;
    if ( *(_BYTE *)(v71 + 2) == 40 )
    {
      v78 = 0LL;
      v122 = 0;
      if ( *(_DWORD *)(v71 + 20) )
        goto LABEL_219;
      v79 = *(_DWORD *)(v71 + 56);
      v80 = 0LL;
      v123 = 0;
      v124 = v79;
      if ( !v79 )
        goto LABEL_219;
      do
      {
        v66 = *(unsigned int *)(v71 + 4 * v80 + 120);
        if ( (unsigned int)v66 >= 0x80 )
        {
          v81 = *(unsigned int *)(v71 + 16);
          if ( (unsigned int)v66 < (unsigned int)v81 )
          {
            v82 = (unsigned int)v66;
            v83 = *(_DWORD *)(v66 + v71) - 64;
            if ( v83 )
            {
              LODWORD(v66) = v83 - 1;
              if ( (_DWORD)v66 )
              {
                if ( (_DWORD)v66 == 1 )
                {
                  LODWORD(v66) = v82 + 40;
                  if ( v82 + 40 <= v81 )
                  {
                    if ( *(_DWORD *)(v82 + v71 + 12) )
                      v78 = (char *)(v82 + v71 + 32);
                    v72 = *(_BYTE **)(v82 + v71 + 24);
LABEL_181:
                    v84 = *(_BYTE *)(v82 + v71 + 8);
                    v73 = *(_BYTE *)(v82 + v71 + 9);
                    goto LABEL_190;
                  }
                }
              }
              else
              {
                LODWORD(v66) = v82 + 56;
                if ( v82 + 56 <= v81 )
                {
                  v122 = 1;
                  if ( *(_BYTE *)(v82 + v71 + 10) )
                    v78 = (char *)(v82 + v71 + 24);
                  v72 = *(_BYTE **)(v82 + v71 + 16);
                  v73 = *(_BYTE *)(v82 + v71 + 9);
                  v119 = *(_BYTE *)(v82 + v71 + 8);
                }
              }
            }
            else
            {
              LODWORD(v66) = v82 + 40;
              if ( v82 + 40 <= v81 )
              {
                if ( *(_BYTE *)(v82 + v71 + 10) )
                  v78 = (char *)(v82 + v71 + 24);
                v72 = *(_BYTE **)(v82 + v71 + 16);
                goto LABEL_181;
              }
            }
            if ( v122 )
              break;
          }
        }
        v80 = v123 + 1;
        v123 = v80;
      }
      while ( (unsigned int)v80 < v124 );
      v84 = v119;
LABEL_190:
      if ( !v78 )
        goto LABEL_219;
      v85 = *v78;
      v77 = 0;
    }
    else
    {
      v85 = *(_BYTE *)(v71 + 72);
      v72 = *(_BYTE **)(v71 + 32);
      v73 = *(_BYTE *)(v71 + 11);
      v84 = *(_BYTE *)(v71 + 4);
      if ( *(_BYTE *)(v71 + 2) )
        goto LABEL_219;
    }
    LOBYTE(v66) = v85 - 8;
    if ( (v66 & 0x5D) == 0 )
    {
      v86 = *(_BYTE *)(v71 + 3);
      if ( v86 == 1 || !v72 || !v73 )
      {
LABEL_215:
        if ( byte_140173441 < 0 )
        {
          if ( !v77 )
          {
            v76 = 0;
            v75 = 0;
            v74 = 0;
          }
          McTemplateK0pduuuuup_EtwWriteTransfer(
            v66,
            v71,
            (unsigned int)&v126,
            a3,
            *(_DWORD *)(a3 + 48),
            v86,
            v84,
            v74,
            v75,
            v76,
            a3);
        }
        goto LABEL_219;
      }
      v87 = *v72 & 0x7F;
      if ( v87 == 114 || v87 == 115 )
      {
        v66 = (unsigned __int64)&v72[v73];
        LOBYTE(v71) = 0;
        if ( (unsigned __int64)(v72 + 8) > v66 )
          goto LABEL_213;
        v75 = v72[2];
        v74 = v72[1] & 0xF;
        v76 = v72[3];
      }
      else
      {
        v66 = (unsigned __int64)&v72[v73];
        LOBYTE(v71) = 0;
        if ( (unsigned __int64)(v72 + 8) > v66 )
          goto LABEL_213;
        v88 = v72 + 13;
        v74 = v72[2] & 0xF;
        v89 = v73;
        if ( (unsigned int)(unsigned __int8)v72[7] + 8 <= v73 )
          v89 = (unsigned __int8)v72[7] + 8;
        v66 = (unsigned __int64)&v72[v89];
        if ( (unsigned __int64)v88 <= v66 )
          v75 = v72[12];
        if ( (unsigned __int64)(v72 + 14) > v66 )
          v76 = 0;
        else
          v76 = *v88;
      }
      LOBYTE(v71) = 1;
LABEL_213:
      if ( (_BYTE)v71 )
        v77 = 1;
      goto LABEL_215;
    }
LABEL_219:
    v5 = v125;
    goto LABEL_220;
  }
  InfoIoctl = NvmeAdapterSetTemperatureThresholdIoctl(v5, a3, &v121);
LABEL_301:
  v40 = InfoIoctl;
LABEL_302:
  if ( v121 )
    goto LABEL_303;
  return v40;
}
