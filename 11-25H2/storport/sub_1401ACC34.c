/*
 * XREFs of sub_1401ACC34 @ 0x1401ACC34
 * Callers:
 *     sub_140019650 @ 0x140019650 (sub_140019650.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_140016AA8 @ 0x140016AA8 (sub_140016AA8.c)
 *     sub_140021110 @ 0x140021110 (sub_140021110.c)
 *     sub_140021280 @ 0x140021280 (sub_140021280.c)
 *     sub_1400212C0 @ 0x1400212C0 (sub_1400212C0.c)
 *     sub_14003CEE0 @ 0x14003CEE0 (sub_14003CEE0.c)
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     sub_1400A0A1C @ 0x1400A0A1C (sub_1400A0A1C.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 *     sub_1401AD558 @ 0x1401AD558 (sub_1401AD558.c)
 *     sub_1401AD6C4 @ 0x1401AD6C4 (sub_1401AD6C4.c)
 */

__int64 __fastcall sub_1401ACC34(__int64 a1, __int64 a2)
{
  __int64 v4; // r13
  int v5; // edi
  int v6; // eax
  char v7; // bl
  __int64 v8; // r15
  _DWORD *v9; // r12
  int v10; // r9d
  int v11; // r8d
  int v12; // edx
  int v13; // r8d
  int v14; // edx
  int v15; // edx
  int v16; // eax
  int v17; // ecx
  int v18; // eax
  int v19; // ecx
  int v20; // eax
  int v21; // ecx
  int v22; // eax
  int v23; // ecx
  int v24; // edx
  char v25; // cl
  __int64 v26; // rcx
  __int64 v27; // r15
  bool v28; // zf
  unsigned __int64 v29; // rcx
  __int64 v30; // rdx
  volatile signed __int32 *v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rcx
  int v35; // eax
  int v36; // ecx
  int v37; // eax
  int v38; // ecx
  int v39; // eax
  int v40; // ecx
  int v41; // eax
  int v42; // ecx
  int v43; // eax
  int v44; // ecx
  int v45; // eax
  int v46; // ecx
  int v47; // eax
  unsigned __int64 v48; // rcx
  __int64 v49; // rdx
  const EVENT_DESCRIPTOR *v50; // rdx
  const EVENT_DESCRIPTOR *v51; // rdx
  int *v52; // rax
  char v53; // r8
  _BYTE *v54; // rax
  char *v55; // r12
  char v56; // r11
  unsigned int v57; // eax
  char v58; // r13
  char v59; // r12
  char v60; // al
  int *v61; // rax
  char v62; // r8
  _BYTE *v63; // rax
  char *v64; // r12
  char v65; // r11
  unsigned int v66; // eax
  char v67; // r13
  char v68; // r12
  char v69; // al
  __int64 v70; // rdx
  char v71; // r14
  _BYTE *v72; // r9
  unsigned __int8 v73; // r10
  char *v74; // rbx
  unsigned int v75; // r8d
  unsigned int *v76; // rax
  __int64 v77; // rax
  unsigned __int64 v78; // r15
  char v79; // cl
  __int64 v80; // rdx
  char v81; // r14
  _BYTE *v82; // r9
  unsigned __int8 v83; // r10
  char *v84; // rbx
  unsigned int v85; // r8d
  unsigned int *v86; // rax
  __int64 v87; // rax
  unsigned __int64 v88; // r15
  char v89; // cl
  __int64 v90; // [rsp+20h] [rbp-99h]
  int v91; // [rsp+20h] [rbp-99h]
  int v92; // [rsp+28h] [rbp-91h]
  char v93; // [rsp+60h] [rbp-59h]
  char v94; // [rsp+60h] [rbp-59h]
  int v95; // [rsp+64h] [rbp-55h]
  int v96; // [rsp+68h] [rbp-51h]
  __int64 v97; // [rsp+70h] [rbp-49h]
  __int64 v98; // [rsp+70h] [rbp-49h]
  __int64 v99; // [rsp+70h] [rbp-49h]
  GUID v100; // [rsp+78h] [rbp-41h] BYREF
  _OWORD Dst[4]; // [rsp+90h] [rbp-29h] BYREF

  memset_0(Dst, 0, sizeof(Dst));
  v4 = *(_QWORD *)(a1 + 24);
  v5 = 0;
  if ( !v4 || (v6 = *(_DWORD *)(a1 + 56)) == 0 || (unsigned int)(v6 - 5) <= 1 )
  {
    v28 = byte_140168DAA == 0;
    *(_QWORD *)(a2 + 56) = 0LL;
    *(_BYTE *)(a2 + 141) = -84;
    *(_DWORD *)(a2 + 48) = -1073741810;
    if ( v28 )
      goto LABEL_49;
    v100 = 0LL;
    IoGetActivityIdIrp(a2, &v100);
    v49 = *(_QWORD *)(a2 + 184);
    switch ( *(_BYTE *)v49 )
    {
      case 0xE:
        if ( (byte_1401694F2 & 8) == 0 )
          goto LABEL_49;
        v48 = *(unsigned int *)(a2 + 48);
        v51 = &stru_140148B18;
        v91 = *(_DWORD *)(a2 + 48);
        break;
      case 0xF:
        if ( byte_1401694F1 >= 0 )
          goto LABEL_49;
        v80 = *(_QWORD *)(v49 + 8);
        v81 = 0;
        v82 = 0LL;
        v83 = 0;
        v65 = 0;
        v67 = 0;
        v68 = 0;
        if ( *(_BYTE *)(v80 + 2) == 40 )
        {
          v84 = 0LL;
          v94 = 0;
          if ( *(_DWORD *)(v80 + 20) )
            goto LABEL_49;
          v48 = 0LL;
          v95 = 0;
          if ( !*(_DWORD *)(v80 + 56) )
            goto LABEL_168;
          v85 = *(_DWORD *)(v80 + 56);
          v86 = (unsigned int *)(v80 + 120);
          v99 = v80 + 120;
          while ( 1 )
          {
            v87 = *v86;
            if ( (unsigned int)v87 >= 0x80 )
            {
              v88 = *(unsigned int *)(v80 + 16);
              if ( (unsigned int)v87 < (unsigned int)v88 )
              {
                if ( *(_DWORD *)(v87 + v80) == 64 )
                {
                  v48 = v87 + 40;
                  if ( v87 + 40 <= v88 )
                  {
                    if ( *(_BYTE *)(v87 + v80 + 10) )
                      v84 = (char *)(v87 + v80 + 24);
                    v82 = *(_BYTE **)(v87 + v80 + 16);
LABEL_167:
                    v83 = *(_BYTE *)(v87 + v80 + 9);
                    v81 = *(_BYTE *)(v87 + v80 + 8);
LABEL_168:
                    if ( v84 )
                    {
                      v89 = *v84;
                      goto LABEL_175;
                    }
                    goto LABEL_49;
                  }
                }
                else
                {
                  v48 = (unsigned int)(*(_DWORD *)(v87 + v80) - 65);
                  if ( *(_DWORD *)(v87 + v80) == 65 )
                  {
                    v48 = v87 + 56;
                    if ( v87 + 56 <= v88 )
                    {
                      v94 = 1;
                      if ( *(_BYTE *)(v87 + v80 + 10) )
                        v84 = (char *)(v87 + v80 + 24);
                      v81 = *(_BYTE *)(v87 + v80 + 8);
                      v82 = *(_BYTE **)(v87 + v80 + 16);
                      v83 = *(_BYTE *)(v87 + v80 + 9);
                    }
                  }
                  else if ( *(_DWORD *)(v87 + v80) == 66 )
                  {
                    v48 = v87 + 40;
                    if ( v87 + 40 <= v88 )
                    {
                      if ( *(_DWORD *)(v87 + v80 + 12) )
                        v84 = (char *)(v87 + v80 + 32);
                      v82 = *(_BYTE **)(v87 + v80 + 24);
                      goto LABEL_167;
                    }
                  }
                }
                if ( v94 )
                  goto LABEL_168;
                LODWORD(v48) = v95;
                v85 = *(_DWORD *)(v80 + 56);
              }
            }
            v48 = (unsigned int)(v48 + 1);
            v86 = (unsigned int *)(v99 + 4);
            v95 = v48;
            v99 += 4LL;
            if ( (unsigned int)v48 >= v85 )
              goto LABEL_168;
          }
        }
        v89 = *(_BYTE *)(v80 + 72);
        v82 = *(_BYTE **)(v80 + 32);
        v83 = *(_BYTE *)(v80 + 11);
        v81 = *(_BYTE *)(v80 + 4);
        if ( *(_BYTE *)(v80 + 2) )
          goto LABEL_49;
LABEL_175:
        LOBYTE(v48) = v89 - 8;
        if ( (v48 & 0x5D) != 0 )
        {
LABEL_49:
          IofCompleteRequest((PIRP)a2, 0);
          return 3221225486LL;
        }
        if ( *(_BYTE *)(v80 + 3) == 1 || !v82 || !v83 )
          goto LABEL_101;
        v62 = 0;
        v48 = (unsigned __int64)&v82[v83];
        v63 = v82 + 8;
        if ( (unsigned __int8)((*v82 & 0x7F) - 114) <= 1u )
        {
          if ( (unsigned __int64)v63 > v48 )
          {
LABEL_99:
            if ( v62 )
            {
              LOBYTE(v5) = v67;
              v69 = v68;
LABEL_102:
              sub_140052E64(v48, v80, &v100, a2, *(_DWORD *)(a2 + 48), *(_BYTE *)(v80 + 3), v81, v65, v5, v69, a2);
              goto LABEL_49;
            }
LABEL_101:
            v65 = 0;
            v69 = 0;
            goto LABEL_102;
          }
          v67 = v82[2];
          v65 = v82[1] & 0xF;
          v68 = v82[3];
        }
        else
        {
          if ( (unsigned __int64)v63 > v48 )
            goto LABEL_99;
          v64 = v82 + 13;
          v65 = v82[2] & 0xF;
          v66 = v83;
          if ( (unsigned int)(unsigned __int8)v82[7] + 8 <= v83 )
            v66 = (unsigned __int8)v82[7] + 8;
          v48 = (unsigned __int64)&v82[v66];
          if ( (unsigned __int64)v64 <= v48 )
            v67 = v82[12];
          if ( (unsigned __int64)(v82 + 14) > v48 )
            v68 = 0;
          else
            v68 = *v64;
        }
        v62 = 1;
        goto LABEL_99;
      case 0x1B:
        if ( *(_BYTE *)(v49 + 1) == 7 && !*(_DWORD *)(v49 + 8) )
        {
          if ( (byte_1401694F2 & 0x40) != 0 )
          {
            v61 = *(int **)(a2 + 56);
            if ( v61 )
              v5 = *v61;
            sub_140056AB0(v48, v49, &v100, a2, v5, *(_DWORD *)(a2 + 48));
          }
          goto LABEL_49;
        }
        if ( (byte_1401694F2 & 0x20) == 0 )
          goto LABEL_49;
        v51 = &stru_140149FE8;
        v91 = *(_DWORD *)(a2 + 48);
        break;
      default:
        goto LABEL_49;
    }
    sub_140052F3C(v48, v51, &v100, a2, v91);
    goto LABEL_49;
  }
  v7 = 0;
  if ( *(_QWORD *)(v4 + 4960) )
  {
    sub_1400212C0(*(_QWORD *)(a1 + 24), 0LL, 1LL);
    v7 = 2;
  }
  if ( sub_140021280(a1) )
  {
    if ( (*(_BYTE *)(v4 + 108) & 1) != 0 )
    {
      _InterlockedAdd64((volatile signed __int64 *)(a1 + 2168), 1uLL);
      if ( (*(_BYTE *)(v4 + 108) & 2) != 0 )
        _InterlockedAdd64((volatile signed __int64 *)(a1 + 2176), 1uLL);
    }
    v32 = *(volatile signed __int32 **)(a1 + 1872);
    if ( (v32[37] & 1) != 0 )
    {
      _InterlockedAdd(v32 + 36, 1u);
      v32 = *(volatile signed __int32 **)(a1 + 1872);
    }
    v33 = 5LL;
    v34 = *(_QWORD *)v32;
    if ( !*(_DWORD *)(a1 + 1036) )
      v33 = 1LL;
    PoFxActivateComponent(v34, 0LL, v33);
    v7 |= 1u;
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1864));
  }
  v8 = *(_QWORD *)(*(_QWORD *)(a2 + 184) + 8LL);
  v97 = 4 * (*(_DWORD *)(*(_QWORD *)(v4 + 608) + 184LL) & 4 | 2u);
  v9 = (_DWORD *)sub_1400143E0(64LL, v97, 1918067026LL, *(_QWORD *)(a1 + 8));
  sub_1401AD558(*(PDEVICE_OBJECT *)(v4 + 8), Dst);
  v10 = 256;
  *(_OWORD *)v8 = Dst[0];
  *(_OWORD *)(v8 + 16) = Dst[1];
  v11 = 128;
  *(_OWORD *)(v8 + 32) = Dst[2];
  *(_OWORD *)(v8 + 48) = Dst[3];
  v12 = *(_DWORD *)(v8 + 4) | 0x100;
  *(_DWORD *)(v8 + 4) = v12;
  if ( (*(_DWORD *)(a1 + 1952) & 0x20) != 0 || *(_BYTE *)(sub_1401AD6C4(**(_BYTE **)(a1 + 112) & 0x1F) + 24) )
    *(_DWORD *)(v8 + 4) = v11 | v12;
  *(_DWORD *)(v8 + 8) = (unsigned __int8)BYTE1(*(_DWORD *)(a1 + 104));
  if ( v9 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(v4 + 608) + 184LL) & 4) != 0 )
    {
      v35 = v9[1];
      *v9 = 1572865;
      v36 = v35 ^ (*(_DWORD *)(v8 + 4) ^ v35) & 1;
      v9[1] = v36;
      v37 = v36 ^ (*(_DWORD *)(v8 + 4) ^ v36) & 2;
      v9[1] = v37;
      v38 = v37 ^ (*(_DWORD *)(v8 + 4) ^ v37) & 4;
      v9[1] = v38;
      v39 = v38 ^ (*(_DWORD *)(v8 + 4) ^ v38) & 8;
      v9[1] = v39;
      v40 = v39 ^ (*(_DWORD *)(v8 + 4) ^ v39) & 0x10;
      v9[1] = v40;
      v41 = v40 ^ (*(_DWORD *)(v8 + 4) ^ v40) & 0x20;
      v9[1] = v41;
      v42 = v41 ^ (*(_DWORD *)(v8 + 4) ^ v41) & 0x40;
      v9[1] = v42;
      v43 = v42 ^ v11 & (*(_DWORD *)(v8 + 4) ^ v42);
      v9[1] = v43;
      v44 = v43 ^ v10 & (*(_DWORD *)(v8 + 4) ^ v43);
      v9[1] = v44;
      v45 = v44 ^ (*(_DWORD *)(v8 + 4) ^ v44) & 0x200;
      v9[1] = v45;
      v46 = v45 ^ ((unsigned __int16)v45 ^ (unsigned __int16)(*(_DWORD *)(v8 + 4) >> 7)) & 0x400;
      v9[1] = v46;
      v9[3] = *(_DWORD *)(v8 + 12);
      if ( v4 != -4736 && *(_BYTE *)(v4 + 4747) == 1 && *(_BYTE *)(v4 + 4746) == 6 )
        v47 = (*(unsigned __int8 *)(a1 + 104) << 16) | 0xFFFF;
      else
        v47 = *(_DWORD *)(v8 + 8);
      v9[2] = v47;
      v9[1] = v46 & 0xFFFFF7FF;
    }
    v92 = 0;
    if ( (int)sub_140016AA8(*(_QWORD *)(a1 + 8), 9u, 0LL, (__int64)v9, v97) >= 0 )
    {
      v13 = *(_DWORD *)(v8 + 4);
      v14 = v9[1] ^ v13;
      if ( (*(_DWORD *)(*(_QWORD *)(v4 + 608) + 184LL) & 4) != 0 )
      {
        v15 = v13 ^ v14 & 1;
        *(_DWORD *)(v8 + 4) = v15;
        v16 = v15 ^ (v9[1] ^ v15) & 2;
        *(_DWORD *)(v8 + 4) = v16;
        v17 = v16 ^ (v9[1] ^ v16) & 4;
        *(_DWORD *)(v8 + 4) = v17;
        v18 = v17 ^ (v9[1] ^ v17) & 8;
        *(_DWORD *)(v8 + 4) = v18;
        v19 = v18 ^ (v9[1] ^ v18) & 0x10;
        *(_DWORD *)(v8 + 4) = v19;
        v20 = v19 ^ (v9[1] ^ v19) & 0x20;
        *(_DWORD *)(v8 + 4) = v20;
        v21 = v20 ^ (v9[1] ^ v20) & 0x40;
        *(_DWORD *)(v8 + 4) = v21;
        v22 = v21 ^ (v9[1] ^ v21) & 0x80;
        *(_DWORD *)(v8 + 4) = v22;
        v23 = v22 ^ (v9[1] ^ v22) & 0x100;
        *(_DWORD *)(v8 + 4) = v23;
        v24 = v23 ^ (v9[1] ^ v23) & 0x200;
        *(_DWORD *)(v8 + 4) = v24;
        *(_DWORD *)(v8 + 4) = v24 ^ (v24 ^ (v9[1] << 7)) & 0x20000;
        *(_DWORD *)(v8 + 12) = v9[3];
        *(_DWORD *)(v8 + 8) = v9[2];
        if ( (v9[1] & 0x800) != 0 )
        {
          *(_DWORD *)(a1 + 1952) |= 0x10u;
          sub_1400A0A1C(a1);
        }
      }
      else
      {
        *(_DWORD *)(v8 + 4) = v13 ^ v14 & 0x10;
      }
    }
    ExFreePoolWithTag(v9, 0x72536152u);
  }
  if ( byte_14016841C )
    *(_DWORD *)(v8 + 4) &= ~0x40u;
  v25 = *(_BYTE *)(a1 + 506) ^ (*(_BYTE *)(a1 + 506) ^ ((unsigned __int8)(*(_DWORD *)(v8 + 4) >> 4) << 6)) & 0x40;
  *(_BYTE *)(a1 + 506) = v25;
  *(_BYTE *)(a1 + 506) = v25 & 0x7F | ((unsigned __int8)(*(_DWORD *)(v8 + 4) >> 9) << 7);
  if ( (unsigned int)sub_14003CEE0(a1) )
    *(_DWORD *)(v8 + 4) |= 0x20000u;
  v27 = *(_QWORD *)(a1 + 24);
  if ( (v7 & 1) != 0 && sub_140021280(v26) )
  {
    PoFxIdleComponent(**(_QWORD **)(a1 + 1872), 0LL, 0LL);
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1864));
  }
  if ( (unsigned __int8)v7 >= 2u && *(_QWORD *)(v27 + 4960) )
    sub_140021110(v27, 0LL, 0LL);
  v28 = byte_140168DAA == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = 0;
  if ( v28 )
    goto LABEL_26;
  v100 = 0LL;
  IoGetActivityIdIrp(a2, &v100);
  v30 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v30 == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_26;
    v50 = &stru_140148B18;
    goto LABEL_52;
  }
  if ( *(_BYTE *)v30 != 15 )
  {
    if ( *(_BYTE *)v30 != 27 )
      goto LABEL_26;
    if ( *(_BYTE *)(v30 + 1) == 7 && !*(_DWORD *)(v30 + 8) )
    {
      if ( (byte_1401694F2 & 0x40) != 0 )
      {
        v52 = *(int **)(a2 + 56);
        if ( v52 )
          v5 = *v52;
        LODWORD(v90) = v5;
        sub_140056AB0(v29, v30, &v100, a2, v90, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_26;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_26;
    v50 = &stru_140149FE8;
LABEL_52:
    LODWORD(v90) = *(_DWORD *)(a2 + 48);
    sub_140052F3C(v29, v50, &v100, a2, v90, v92);
    goto LABEL_26;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_26;
  v70 = *(_QWORD *)(v30 + 8);
  v71 = 0;
  v72 = 0LL;
  v73 = 0;
  v56 = 0;
  v58 = 0;
  v59 = 0;
  if ( *(_BYTE *)(v70 + 2) == 40 )
  {
    v74 = 0LL;
    v93 = 0;
    if ( *(_DWORD *)(v70 + 20) )
      goto LABEL_26;
    v29 = 0LL;
    v96 = 0;
    if ( !*(_DWORD *)(v70 + 56) )
      goto LABEL_139;
    v75 = *(_DWORD *)(v70 + 56);
    v76 = (unsigned int *)(v70 + 120);
    v98 = v70 + 120;
    while ( 1 )
    {
      v77 = *v76;
      if ( (unsigned int)v77 >= 0x80 )
      {
        v78 = *(unsigned int *)(v70 + 16);
        if ( (unsigned int)v77 < (unsigned int)v78 )
        {
          if ( *(_DWORD *)(v70 + v77) == 64 )
          {
            v29 = v77 + 40;
            if ( v77 + 40 <= v78 )
            {
              if ( *(_BYTE *)(v70 + v77 + 10) )
                v74 = (char *)(v77 + v70 + 24);
              v72 = *(_BYTE **)(v70 + v77 + 16);
LABEL_138:
              v73 = *(_BYTE *)(v70 + v77 + 9);
              v71 = *(_BYTE *)(v70 + v77 + 8);
LABEL_139:
              if ( v74 )
              {
                v79 = *v74;
                goto LABEL_142;
              }
              goto LABEL_26;
            }
          }
          else
          {
            v29 = (unsigned int)(*(_DWORD *)(v70 + v77) - 65);
            if ( *(_DWORD *)(v70 + v77) == 65 )
            {
              v29 = v77 + 56;
              if ( v77 + 56 <= v78 )
              {
                v93 = 1;
                if ( *(_BYTE *)(v70 + v77 + 10) )
                  v74 = (char *)(v77 + v70 + 24);
                v71 = *(_BYTE *)(v70 + v77 + 8);
                v72 = *(_BYTE **)(v70 + v77 + 16);
                v73 = *(_BYTE *)(v70 + v77 + 9);
              }
            }
            else if ( *(_DWORD *)(v70 + v77) == 66 )
            {
              v29 = v77 + 40;
              if ( v77 + 40 <= v78 )
              {
                if ( *(_DWORD *)(v70 + v77 + 12) )
                  v74 = (char *)(v77 + v70 + 32);
                v72 = *(_BYTE **)(v70 + v77 + 24);
                goto LABEL_138;
              }
            }
          }
          if ( v93 )
            goto LABEL_139;
          LODWORD(v29) = v96;
          v75 = *(_DWORD *)(v70 + 56);
        }
      }
      v29 = (unsigned int)(v29 + 1);
      v76 = (unsigned int *)(v98 + 4);
      v96 = v29;
      v98 += 4LL;
      if ( (unsigned int)v29 >= v75 )
        goto LABEL_139;
    }
  }
  v79 = *(_BYTE *)(v70 + 72);
  v72 = *(_BYTE **)(v70 + 32);
  v73 = *(_BYTE *)(v70 + 11);
  v71 = *(_BYTE *)(v70 + 4);
  if ( *(_BYTE *)(v70 + 2) )
    goto LABEL_26;
LABEL_142:
  LOBYTE(v29) = v79 - 8;
  if ( (v29 & 0x5D) == 0 )
  {
    if ( *(_BYTE *)(v70 + 3) == 1 || !v72 || !v73 )
      goto LABEL_79;
    v53 = 0;
    v29 = (unsigned __int64)&v72[v73];
    v54 = v72 + 8;
    if ( (unsigned __int8)((*v72 & 0x7F) - 114) <= 1u )
    {
      if ( (unsigned __int64)v54 > v29 )
      {
LABEL_77:
        if ( v53 )
        {
          LOBYTE(v5) = v58;
          v60 = v59;
LABEL_80:
          LOBYTE(v92) = *(_BYTE *)(v70 + 3);
          LODWORD(v90) = *(_DWORD *)(a2 + 48);
          sub_140052E64(v29, v70, &v100, a2, v90, v92, v71, v56, v5, v60, a2);
          goto LABEL_26;
        }
LABEL_79:
        v56 = 0;
        v60 = 0;
        goto LABEL_80;
      }
      v58 = v72[2];
      v56 = v72[1] & 0xF;
      v59 = v72[3];
    }
    else
    {
      if ( (unsigned __int64)v54 > v29 )
        goto LABEL_77;
      v55 = v72 + 13;
      v56 = v72[2] & 0xF;
      v57 = v73;
      if ( (unsigned int)(unsigned __int8)v72[7] + 8 <= v73 )
        v57 = (unsigned __int8)v72[7] + 8;
      v29 = (unsigned __int64)&v72[v57];
      if ( (unsigned __int64)v55 <= v29 )
        v58 = v72[12];
      if ( (unsigned __int64)(v72 + 14) > v29 )
        v59 = 0;
      else
        v59 = *v55;
    }
    v53 = 1;
    goto LABEL_77;
  }
LABEL_26:
  IofCompleteRequest((PIRP)a2, 0);
  return 0LL;
}
