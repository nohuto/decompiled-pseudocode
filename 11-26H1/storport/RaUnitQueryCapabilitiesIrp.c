/*
 * XREFs of RaUnitQueryCapabilitiesIrp @ 0x1401B4F4C
 * Callers:
 *     RaUnitPnpIrp @ 0x14003FBDC (RaUnitPnpIrp.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     RaidUnitCheckAndAcquirePoFx @ 0x140018BD0 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidPnPPassToMiniPort @ 0x14001A8BC (RaidPnPPassToMiniPort.c)
 *     RaidAdapterPoFxIdleComponent @ 0x14002517C (RaidAdapterPoFxIdleComponent.c)
 *     RaidAdapterPoFxActivateComponent @ 0x14003DA54 (RaidAdapterPoFxActivateComponent.c)
 *     RaUnitIsSMRDisabled @ 0x1400480C8 (RaUnitIsSMRDisabled.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     RaidUnitSetDefaultWriteCachePolicy @ 0x1400A97E0 (RaidUnitSetDefaultWriteCachePolicy.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 *     PortWdmGetDeviceCapabilities @ 0x1401B58E8 (PortWdmGetDeviceCapabilities.c)
 *     PortGetDeviceType @ 0x1401B5A5C (PortGetDeviceType.c)
 */

__int64 __fastcall RaUnitQueryCapabilitiesIrp(__int64 a1, __int64 a2)
{
  __int64 v4; // r13
  int v5; // edi
  int v6; // eax
  char v7; // bl
  __int64 v8; // r15
  _DWORD *Pool; // r12
  int v10; // r8d
  int v11; // edx
  int v12; // r8d
  int v13; // edx
  int v14; // edx
  int v15; // eax
  int v16; // ecx
  int v17; // eax
  int v18; // ecx
  int v19; // eax
  int v20; // ecx
  int v21; // eax
  int v22; // ecx
  int v23; // edx
  char v24; // cl
  __int64 v25; // rcx
  __int64 v26; // r15
  bool v27; // zf
  unsigned __int64 v28; // rcx
  __int64 v29; // rdx
  volatile signed __int32 *v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rcx
  int v34; // eax
  int v35; // ecx
  int v36; // eax
  int v37; // ecx
  int v38; // eax
  int v39; // ecx
  int v40; // eax
  int v41; // ecx
  int v42; // eax
  int v43; // ecx
  int v44; // eax
  int v45; // ecx
  int v46; // eax
  unsigned __int64 v47; // rcx
  __int64 v48; // rdx
  const EVENT_DESCRIPTOR *v49; // rdx
  int *v50; // rax
  const EVENT_DESCRIPTOR *v51; // rdx
  int *v52; // rax
  char v53; // al
  char v54; // r8
  char *v55; // r11
  char v56; // r10
  unsigned int v57; // eax
  char v58; // bl
  char v59; // r11
  char v60; // r15
  char v61; // al
  char v62; // r8
  char *v63; // r11
  char v64; // r10
  unsigned int v65; // eax
  char v66; // bl
  char v67; // r11
  char v68; // r15
  __int64 v69; // rdx
  char v70; // r12
  _BYTE *v71; // r9
  unsigned __int8 v72; // r14
  char *v73; // r15
  __int64 v74; // rax
  __int64 v75; // rdx
  char v76; // r12
  _BYTE *v77; // r9
  unsigned __int8 v78; // r14
  char *v79; // r15
  __int64 v80; // rax
  unsigned __int64 v81; // r13
  __int64 v82; // r8
  int v83; // ecx
  char v84; // cl
  unsigned __int64 v85; // r13
  __int64 v86; // r8
  int v87; // ecx
  char v88; // cl
  __int64 v89; // [rsp+20h] [rbp-89h]
  int v90; // [rsp+20h] [rbp-89h]
  int v91; // [rsp+28h] [rbp-81h]
  char v92; // [rsp+60h] [rbp-49h]
  char v93; // [rsp+60h] [rbp-49h]
  int v94; // [rsp+64h] [rbp-45h]
  int v95; // [rsp+64h] [rbp-45h]
  __int64 v96; // [rsp+68h] [rbp-41h]
  unsigned int v97; // [rsp+68h] [rbp-41h]
  unsigned int v98; // [rsp+68h] [rbp-41h]
  GUID v99; // [rsp+70h] [rbp-39h] BYREF
  _OWORD v100[4]; // [rsp+80h] [rbp-29h] BYREF

  memset_0(v100, 0, sizeof(v100));
  v4 = *(_QWORD *)(a1 + 24);
  v5 = 0;
  if ( !v4 || (v6 = *(_DWORD *)(a1 + 56)) == 0 || (unsigned int)(v6 - 5) <= 1 )
  {
    v27 = StorEtwLoggingEnabled == 0;
    *(_QWORD *)(a2 + 56) = 0LL;
    *(_BYTE *)(a2 + 141) = -84;
    *(_DWORD *)(a2 + 48) = -1073741810;
    if ( v27 )
      goto LABEL_50;
    v99 = 0LL;
    IoGetActivityIdIrp(a2, &v99);
    v48 = *(_QWORD *)(a2 + 184);
    switch ( *(_BYTE *)v48 )
    {
      case 0xE:
        if ( (byte_140173442 & 8) == 0 )
          goto LABEL_50;
        v47 = *(unsigned int *)(a2 + 48);
        v51 = &EventNonReadWriteRequestComplete;
        v90 = *(_DWORD *)(a2 + 48);
        break;
      case 0xF:
        if ( byte_140173441 >= 0 )
          goto LABEL_50;
        v75 = *(_QWORD *)(v48 + 8);
        v76 = 0;
        v77 = 0LL;
        v78 = 0;
        v64 = 0;
        v66 = 0;
        v67 = 0;
        v68 = 0;
        if ( *(_BYTE *)(v75 + 2) == 40 )
        {
          v79 = 0LL;
          v93 = 0;
          if ( *(_DWORD *)(v75 + 20) )
            goto LABEL_50;
          v80 = 0LL;
          v95 = 0;
          v98 = *(_DWORD *)(v75 + 56);
          if ( !v98 )
            goto LABEL_50;
          while ( 1 )
          {
            v47 = *(unsigned int *)(v75 + 4 * v80 + 120);
            if ( (unsigned int)v47 >= 0x80 )
            {
              v85 = *(unsigned int *)(v75 + 16);
              if ( (unsigned int)v47 < (unsigned int)v85 )
              {
                v86 = (unsigned int)v47;
                v87 = *(_DWORD *)(v47 + v75) - 64;
                if ( v87 )
                {
                  v47 = (unsigned int)(v87 - 1);
                  if ( (_DWORD)v47 )
                  {
                    if ( (_DWORD)v47 == 1 )
                    {
                      v47 = v86 + 40;
                      if ( v86 + 40 <= v85 )
                      {
                        if ( *(_DWORD *)(v86 + v75 + 12) )
                          v79 = (char *)(v86 + v75 + 32);
                        v77 = *(_BYTE **)(v86 + v75 + 24);
                        goto LABEL_174;
                      }
                    }
                  }
                  else
                  {
                    v47 = v86 + 56;
                    if ( v86 + 56 <= v85 )
                    {
                      v93 = 1;
                      if ( *(_BYTE *)(v86 + v75 + 10) )
                        v79 = (char *)(v86 + v75 + 24);
                      v76 = *(_BYTE *)(v86 + v75 + 8);
                      v77 = *(_BYTE **)(v86 + v75 + 16);
                      v78 = *(_BYTE *)(v86 + v75 + 9);
                    }
                  }
                }
                else
                {
                  v47 = v86 + 40;
                  if ( v86 + 40 <= v85 )
                  {
                    if ( *(_BYTE *)(v86 + v75 + 10) )
                      v79 = (char *)(v86 + v75 + 24);
                    v77 = *(_BYTE **)(v86 + v75 + 16);
LABEL_174:
                    v78 = *(_BYTE *)(v86 + v75 + 9);
                    v76 = *(_BYTE *)(v86 + v75 + 8);
LABEL_175:
                    if ( v79 )
                    {
                      v88 = *v79;
                      v68 = 0;
                      goto LABEL_178;
                    }
                    goto LABEL_50;
                  }
                }
                if ( v93 )
                  goto LABEL_175;
              }
            }
            v80 = (unsigned int)(v95 + 1);
            v95 = v80;
            if ( (unsigned int)v80 >= v98 )
              goto LABEL_175;
          }
        }
        v88 = *(_BYTE *)(v75 + 72);
        v77 = *(_BYTE **)(v75 + 32);
        v78 = *(_BYTE *)(v75 + 11);
        v76 = *(_BYTE *)(v75 + 4);
        if ( *(_BYTE *)(v75 + 2) )
          goto LABEL_50;
LABEL_178:
        LOBYTE(v47) = v88 - 8;
        if ( (v47 & 0x5D) != 0 )
        {
LABEL_50:
          IofCompleteRequest((PIRP)a2, 0);
          return 3221225486LL;
        }
        if ( *(_BYTE *)(v75 + 3) == 1 || !v77 || !v78 )
        {
LABEL_106:
          if ( byte_140173441 < 0 )
          {
            if ( !v68 )
            {
              v67 = 0;
              v66 = 0;
              v64 = 0;
            }
            McTemplateK0pduuuuup_EtwWriteTransfer(
              v47,
              v75,
              &v99,
              a2,
              *(_DWORD *)(a2 + 48),
              *(_BYTE *)(v75 + 3),
              v76,
              v64,
              v66,
              v67,
              a2);
          }
          goto LABEL_50;
        }
        v61 = *v77 & 0x7F;
        if ( v61 == 114 || v61 == 115 )
        {
          v47 = (unsigned __int64)&v77[v78];
          v62 = 0;
          if ( (unsigned __int64)(v77 + 8) > v47 )
          {
LABEL_104:
            if ( v62 )
              v68 = 1;
            goto LABEL_106;
          }
          v66 = v77[2];
          v64 = v77[1] & 0xF;
          v67 = v77[3];
        }
        else
        {
          v47 = (unsigned __int64)&v77[v78];
          v62 = 0;
          if ( (unsigned __int64)(v77 + 8) > v47 )
            goto LABEL_104;
          v63 = v77 + 13;
          v64 = v77[2] & 0xF;
          v65 = v78;
          if ( (unsigned int)(unsigned __int8)v77[7] + 8 <= v78 )
            v65 = (unsigned __int8)v77[7] + 8;
          v47 = (unsigned __int64)&v77[v65];
          if ( (unsigned __int64)v63 <= v47 )
            v66 = v77[12];
          if ( (unsigned __int64)(v77 + 14) > v47 )
            v67 = 0;
          else
            v67 = *v63;
        }
        v62 = 1;
        goto LABEL_104;
      case 0x1B:
        if ( *(_BYTE *)(v48 + 1) == 7 && !*(_DWORD *)(v48 + 8) )
        {
          if ( (byte_140173442 & 0x40) != 0 )
          {
            v52 = *(int **)(a2 + 56);
            if ( v52 )
              v5 = *v52;
            McTemplateK0pqd_EtwWriteTransfer(v47, v48, &v99, a2, v5, *(_DWORD *)(a2 + 48));
          }
          goto LABEL_50;
        }
        if ( (byte_140173442 & 0x20) == 0 )
          goto LABEL_50;
        v51 = &EventPnpRequestComplete;
        v90 = *(_DWORD *)(a2 + 48);
        break;
      default:
        goto LABEL_50;
    }
    McTemplateK0pd_EtwWriteTransfer(v47, v51, &v99, a2, v90);
    goto LABEL_50;
  }
  if ( *(_QWORD *)(v4 + 5024) )
  {
    RaidAdapterPoFxActivateComponent(*(_QWORD *)(a1 + 24), 0LL, 1LL);
    v7 = 2;
  }
  else
  {
    v7 = 0;
  }
  if ( RaidUnitCheckAndAcquirePoFx(a1) )
  {
    if ( (*(_BYTE *)(v4 + 108) & 1) != 0 )
    {
      _InterlockedAdd64((volatile signed __int64 *)(a1 + 2168), 1uLL);
      if ( (*(_BYTE *)(v4 + 108) & 2) != 0 )
        _InterlockedAdd64((volatile signed __int64 *)(a1 + 2176), 1uLL);
    }
    v31 = *(volatile signed __int32 **)(a1 + 1872);
    if ( (v31[37] & 1) != 0 )
    {
      _InterlockedAdd(v31 + 36, 1u);
      v31 = *(volatile signed __int32 **)(a1 + 1872);
    }
    v32 = 5LL;
    v33 = *(_QWORD *)v31;
    if ( !*(_DWORD *)(a1 + 1036) )
      v32 = 1LL;
    PoFxActivateComponent(v33, 0LL, v32);
    v7 |= 1u;
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1864));
  }
  v8 = *(_QWORD *)(*(_QWORD *)(a2 + 184) + 8LL);
  v96 = 4 * (*(_DWORD *)(*(_QWORD *)(v4 + 608) + 184LL) & 4 | 2u);
  Pool = (_DWORD *)RaidAllocatePool(64LL, v96, 1918067026LL, *(_QWORD *)(a1 + 8));
  PortWdmGetDeviceCapabilities(*(PDEVICE_OBJECT *)(v4 + 8), v100);
  v10 = 256;
  *(_OWORD *)v8 = v100[0];
  *(_OWORD *)(v8 + 16) = v100[1];
  *(_OWORD *)(v8 + 32) = v100[2];
  *(_OWORD *)(v8 + 48) = v100[3];
  v11 = *(_DWORD *)(v8 + 4);
  *(_DWORD *)(v8 + 4) = v11 | 0x100;
  if ( (*(_DWORD *)(a1 + 1952) & 0x20) != 0 || *(_BYTE *)(PortGetDeviceType(**(_BYTE **)(a1 + 112) & 0x1F) + 24) )
    *(_DWORD *)(v8 + 4) = v11 | 0x180;
  *(_DWORD *)(v8 + 8) = (unsigned __int8)BYTE1(*(_DWORD *)(a1 + 104));
  if ( Pool )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(v4 + 608) + 184LL) & 4) != 0 )
    {
      v34 = Pool[1];
      *Pool = 1572865;
      v35 = v34 ^ (*(_DWORD *)(v8 + 4) ^ v34) & 1;
      Pool[1] = v35;
      v36 = v35 ^ (*(_DWORD *)(v8 + 4) ^ v35) & 2;
      Pool[1] = v36;
      v37 = v36 ^ (*(_DWORD *)(v8 + 4) ^ v36) & 4;
      Pool[1] = v37;
      v38 = v37 ^ (*(_DWORD *)(v8 + 4) ^ v37) & 8;
      Pool[1] = v38;
      v39 = v38 ^ (*(_DWORD *)(v8 + 4) ^ v38) & 0x10;
      Pool[1] = v39;
      v40 = v39 ^ (*(_DWORD *)(v8 + 4) ^ v39) & 0x20;
      Pool[1] = v40;
      v41 = v40 ^ (*(_DWORD *)(v8 + 4) ^ v40) & 0x40;
      Pool[1] = v41;
      v42 = v41 ^ (*(_DWORD *)(v8 + 4) ^ v41) & 0x80;
      Pool[1] = v42;
      v43 = v42 ^ v10 & (*(_DWORD *)(v8 + 4) ^ v42);
      Pool[1] = v43;
      v44 = v43 ^ (*(_DWORD *)(v8 + 4) ^ v43) & 0x200;
      Pool[1] = v44;
      v45 = v44 ^ ((unsigned __int16)v44 ^ (unsigned __int16)(*(_DWORD *)(v8 + 4) >> 7)) & 0x400;
      Pool[1] = v45;
      Pool[3] = *(_DWORD *)(v8 + 12);
      if ( v4 != -4800 && *(_BYTE *)(v4 + 4811) == 1 && *(_BYTE *)(v4 + 4810) == 6 )
        v46 = (*(unsigned __int8 *)(a1 + 104) << 16) | 0xFFFF;
      else
        v46 = *(_DWORD *)(v8 + 8);
      Pool[2] = v46;
      Pool[1] = v45 & 0xFFFFF7FF;
    }
    v91 = 0;
    if ( (int)RaidPnPPassToMiniPort(*(_QWORD *)(a1 + 8), 9u, 0LL, (__int64)Pool, v96) >= 0 )
    {
      v12 = *(_DWORD *)(v8 + 4);
      v13 = Pool[1] ^ v12;
      if ( (*(_DWORD *)(*(_QWORD *)(v4 + 608) + 184LL) & 4) != 0 )
      {
        v14 = v12 ^ v13 & 1;
        *(_DWORD *)(v8 + 4) = v14;
        v15 = v14 ^ (Pool[1] ^ v14) & 2;
        *(_DWORD *)(v8 + 4) = v15;
        v16 = v15 ^ (Pool[1] ^ v15) & 4;
        *(_DWORD *)(v8 + 4) = v16;
        v17 = v16 ^ (Pool[1] ^ v16) & 8;
        *(_DWORD *)(v8 + 4) = v17;
        v18 = v17 ^ (Pool[1] ^ v17) & 0x10;
        *(_DWORD *)(v8 + 4) = v18;
        v19 = v18 ^ (Pool[1] ^ v18) & 0x20;
        *(_DWORD *)(v8 + 4) = v19;
        v20 = v19 ^ (Pool[1] ^ v19) & 0x40;
        *(_DWORD *)(v8 + 4) = v20;
        v21 = v20 ^ (Pool[1] ^ v20) & 0x80;
        *(_DWORD *)(v8 + 4) = v21;
        v22 = v21 ^ (Pool[1] ^ v21) & 0x100;
        *(_DWORD *)(v8 + 4) = v22;
        v23 = v22 ^ (Pool[1] ^ v22) & 0x200;
        *(_DWORD *)(v8 + 4) = v23;
        *(_DWORD *)(v8 + 4) = v23 ^ (v23 ^ (Pool[1] << 7)) & 0x20000;
        *(_DWORD *)(v8 + 12) = Pool[3];
        *(_DWORD *)(v8 + 8) = Pool[2];
        if ( (Pool[1] & 0x800) != 0 )
        {
          *(_DWORD *)(a1 + 1952) |= 0x10u;
          RaidUnitSetDefaultWriteCachePolicy(a1);
        }
      }
      else
      {
        *(_DWORD *)(v8 + 4) = v12 ^ v13 & 0x10;
      }
    }
    ExFreePoolWithTag(Pool, 0x72536152u);
  }
  if ( OverrideDeviceUniqueIDCapability )
    *(_DWORD *)(v8 + 4) &= ~0x40u;
  v24 = *(_BYTE *)(a1 + 506) ^ (*(_BYTE *)(a1 + 506) ^ ((unsigned __int8)(*(_DWORD *)(v8 + 4) >> 4) << 6)) & 0x40;
  *(_BYTE *)(a1 + 506) = v24;
  *(_BYTE *)(a1 + 506) = v24 & 0x7F | ((unsigned __int8)(*(_DWORD *)(v8 + 4) >> 9) << 7);
  if ( (unsigned int)RaUnitIsSMRDisabled(a1) )
    *(_DWORD *)(v8 + 4) |= 0x20000u;
  v26 = *(_QWORD *)(a1 + 24);
  if ( (v7 & 1) != 0 && RaidUnitCheckAndAcquirePoFx(v25) )
  {
    PoFxIdleComponent(**(_QWORD **)(a1 + 1872), 0LL, 0LL);
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1864));
  }
  if ( (unsigned __int8)v7 >= 2u && *(_QWORD *)(v26 + 5024) )
    RaidAdapterPoFxIdleComponent(v26, 0LL, 0LL);
  v27 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = 0;
  if ( v27 )
    goto LABEL_26;
  v99 = 0LL;
  IoGetActivityIdIrp(a2, &v99);
  v29 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v29 == 14 )
  {
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_26;
    v49 = &EventNonReadWriteRequestComplete;
    goto LABEL_53;
  }
  if ( *(_BYTE *)v29 != 15 )
  {
    if ( *(_BYTE *)v29 != 27 )
      goto LABEL_26;
    if ( *(_BYTE *)(v29 + 1) == 7 && !*(_DWORD *)(v29 + 8) )
    {
      if ( (byte_140173442 & 0x40) != 0 )
      {
        v50 = *(int **)(a2 + 56);
        if ( v50 )
          v5 = *v50;
        LODWORD(v89) = v5;
        McTemplateK0pqd_EtwWriteTransfer(v28, v29, &v99, a2, v89, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_26;
    }
    if ( (byte_140173442 & 0x20) == 0 )
      goto LABEL_26;
    v49 = &EventPnpRequestComplete;
LABEL_53:
    LODWORD(v89) = *(_DWORD *)(a2 + 48);
    McTemplateK0pd_EtwWriteTransfer(v28, v49, &v99, a2, v89, v91);
    goto LABEL_26;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_26;
  v69 = *(_QWORD *)(v29 + 8);
  v70 = 0;
  v71 = 0LL;
  v72 = 0;
  v56 = 0;
  v58 = 0;
  v59 = 0;
  v60 = 0;
  if ( *(_BYTE *)(v69 + 2) == 40 )
  {
    v73 = 0LL;
    v92 = 0;
    if ( *(_DWORD *)(v69 + 20) )
      goto LABEL_26;
    v74 = 0LL;
    v94 = 0;
    v97 = *(_DWORD *)(v69 + 56);
    if ( !v97 )
      goto LABEL_26;
    while ( 1 )
    {
      v28 = *(unsigned int *)(v69 + 4 * v74 + 120);
      if ( (unsigned int)v28 >= 0x80 )
      {
        v81 = *(unsigned int *)(v69 + 16);
        if ( (unsigned int)v28 < (unsigned int)v81 )
        {
          v82 = (unsigned int)v28;
          v83 = *(_DWORD *)(v69 + v28) - 64;
          if ( v83 )
          {
            v28 = (unsigned int)(v83 - 1);
            if ( (_DWORD)v28 )
            {
              if ( (_DWORD)v28 == 1 )
              {
                v28 = v82 + 40;
                if ( v82 + 40 <= v81 )
                {
                  if ( *(_DWORD *)(v69 + v82 + 12) )
                    v73 = (char *)(v82 + v69 + 32);
                  v71 = *(_BYTE **)(v69 + v82 + 24);
                  goto LABEL_142;
                }
              }
            }
            else
            {
              v28 = v82 + 56;
              if ( v82 + 56 <= v81 )
              {
                v92 = 1;
                if ( *(_BYTE *)(v69 + v82 + 10) )
                  v73 = (char *)(v82 + v69 + 24);
                v70 = *(_BYTE *)(v69 + v82 + 8);
                v71 = *(_BYTE **)(v69 + v82 + 16);
                v72 = *(_BYTE *)(v69 + v82 + 9);
              }
            }
          }
          else
          {
            v28 = v82 + 40;
            if ( v82 + 40 <= v81 )
            {
              if ( *(_BYTE *)(v69 + v82 + 10) )
                v73 = (char *)(v82 + v69 + 24);
              v71 = *(_BYTE **)(v69 + v82 + 16);
LABEL_142:
              v72 = *(_BYTE *)(v69 + v82 + 9);
              v70 = *(_BYTE *)(v69 + v82 + 8);
LABEL_143:
              if ( v73 )
              {
                v84 = *v73;
                v60 = 0;
                goto LABEL_149;
              }
              goto LABEL_26;
            }
          }
          if ( v92 )
            goto LABEL_143;
        }
      }
      v74 = (unsigned int)(v94 + 1);
      v94 = v74;
      if ( (unsigned int)v74 >= v97 )
        goto LABEL_143;
    }
  }
  v84 = *(_BYTE *)(v69 + 72);
  v71 = *(_BYTE **)(v69 + 32);
  v72 = *(_BYTE *)(v69 + 11);
  v70 = *(_BYTE *)(v69 + 4);
  if ( *(_BYTE *)(v69 + 2) )
    goto LABEL_26;
LABEL_149:
  LOBYTE(v28) = v84 - 8;
  if ( (v28 & 0x5D) == 0 )
  {
    if ( *(_BYTE *)(v69 + 3) == 1 || !v71 || !v72 )
    {
LABEL_89:
      if ( byte_140173441 < 0 )
      {
        if ( !v60 )
        {
          v59 = 0;
          v58 = 0;
          v56 = 0;
        }
        LOBYTE(v91) = *(_BYTE *)(v69 + 3);
        LODWORD(v89) = *(_DWORD *)(a2 + 48);
        McTemplateK0pduuuuup_EtwWriteTransfer(v28, v69, &v99, a2, v89, v91, v70, v56, v58, v59, a2);
      }
      goto LABEL_26;
    }
    v53 = *v71 & 0x7F;
    if ( v53 == 114 || v53 == 115 )
    {
      v28 = (unsigned __int64)&v71[v72];
      v54 = 0;
      if ( (unsigned __int64)(v71 + 8) > v28 )
      {
LABEL_87:
        if ( v54 )
          v60 = 1;
        goto LABEL_89;
      }
      v58 = v71[2];
      v56 = v71[1] & 0xF;
      v59 = v71[3];
    }
    else
    {
      v28 = (unsigned __int64)&v71[v72];
      v54 = 0;
      if ( (unsigned __int64)(v71 + 8) > v28 )
        goto LABEL_87;
      v55 = v71 + 13;
      v56 = v71[2] & 0xF;
      v57 = v72;
      if ( (unsigned int)(unsigned __int8)v71[7] + 8 <= v72 )
        v57 = (unsigned __int8)v71[7] + 8;
      v28 = (unsigned __int64)&v71[v57];
      if ( (unsigned __int64)v55 <= v28 )
        v58 = v71[12];
      if ( (unsigned __int64)(v71 + 14) > v28 )
        v59 = 0;
      else
        v59 = *v55;
    }
    v54 = 1;
    goto LABEL_87;
  }
LABEL_26:
  IofCompleteRequest((PIRP)a2, 0);
  return 0LL;
}
