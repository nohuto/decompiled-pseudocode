/*
 * XREFs of sub_140059080 @ 0x140059080
 * Callers:
 *     sub_140066700 @ 0x140066700 (sub_140066700.c)
 * Callees:
 *     sub_1400066C0 @ 0x1400066C0 (sub_1400066C0.c)
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_140028C24 @ 0x140028C24 (sub_140028C24.c)
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     sub_14006D53C @ 0x14006D53C (sub_14006D53C.c)
 *     sub_1400A5DD0 @ 0x1400A5DD0 (sub_1400A5DD0.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

void __fastcall sub_140059080(KSPIN_LOCK *a1)
{
  KSPIN_LOCK v1; // rcx
  __int64 v2; // rax
  __int64 v3; // rcx
  _QWORD *v4; // rdi
  __int64 v5; // rbx
  __int64 v6; // r13
  char v7; // si
  unsigned __int64 v8; // r8
  signed __int32 v9; // eax
  signed __int32 v10; // ett
  __int64 v11; // rbx
  __int64 v12; // rax
  char v13; // al
  char v14; // cl
  char v15; // cl
  char v16; // al
  int v17; // eax
  char v18; // al
  bool v19; // zf
  __int64 v20; // rcx
  __int64 v21; // rdx
  unsigned int *v22; // rax
  __int64 v23; // rcx
  const EVENT_DESCRIPTOR *v24; // rdx
  unsigned __int64 v25; // rdx
  char v26; // r10
  char v27; // di
  unsigned __int8 v28; // bl
  char v29; // r12
  _BYTE *v30; // r9
  unsigned __int8 v31; // r11
  char *v32; // rbx
  char v33; // r14
  unsigned int v34; // r15d
  unsigned int v35; // esi
  unsigned int *v36; // rdi
  __int64 v37; // rax
  unsigned __int64 v38; // r10
  char v39; // cl
  char v40; // r8
  _BYTE *v41; // rcx
  _BYTE *v42; // rax
  unsigned int v43; // eax
  unsigned __int64 v44; // rcx
  char v45; // al
  unsigned __int8 v46; // al
  char v47; // al
  __int64 v48; // rcx
  unsigned int v49; // r13d
  KSPIN_LOCK *v50; // rbx
  unsigned int v51; // r14d
  KSPIN_LOCK *v52; // r15
  unsigned int v53; // r12d
  KSPIN_LOCK *v54; // rsi
  KSPIN_LOCK *i; // rdi
  KSPIN_LOCK *v56; // rbx
  __int64 v57; // rax
  unsigned int v58; // edi
  KSPIN_LOCK *v59; // rbx
  unsigned int v60; // r15d
  KSPIN_LOCK v61; // rax
  unsigned __int64 v62; // rcx
  unsigned int v63; // eax
  KSPIN_LOCK v64; // r8
  unsigned __int64 v65; // r9
  signed __int32 v66; // eax
  signed __int32 v67; // ett
  __int64 v68; // rax
  __int64 v69; // rcx
  _QWORD *v70; // rdi
  __int64 v71; // r8
  __int64 v72; // r14
  char v73; // si
  __int64 v74; // rbx
  unsigned __int64 v75; // r9
  signed __int32 v76; // eax
  signed __int32 v77; // ett
  __int64 v78; // rax
  char v79; // al
  char v80; // cl
  char v81; // cl
  char v82; // al
  int v83; // eax
  char v84; // al
  __int64 v85; // rcx
  __int64 v86; // rdx
  unsigned int *v87; // rax
  __int64 v88; // rcx
  const EVENT_DESCRIPTOR *v89; // rdx
  unsigned __int64 v90; // rdx
  char v91; // di
  char v92; // bl
  unsigned __int8 v93; // r10
  _BYTE *v94; // r9
  unsigned __int8 v95; // r11
  char v96; // r13
  char *v97; // rbx
  char v98; // r15
  unsigned int v99; // r12d
  unsigned int v100; // esi
  unsigned int *v101; // rdi
  __int64 v102; // rax
  unsigned __int64 v103; // r10
  char v104; // cl
  char v105; // r8
  _BYTE *v106; // rcx
  _BYTE *v107; // rax
  unsigned int v108; // eax
  unsigned __int64 v109; // rcx
  char v110; // al
  unsigned __int8 v111; // al
  char v112; // al
  __int64 v113; // rcx
  __int64 v114; // [rsp+28h] [rbp-79h]
  __int64 v115; // [rsp+30h] [rbp-71h]
  __int64 v116; // [rsp+38h] [rbp-69h]
  __int64 v117; // [rsp+40h] [rbp-61h]
  __int64 v118; // [rsp+48h] [rbp-59h]
  __int64 v119; // [rsp+50h] [rbp-51h]
  char v120; // [rsp+68h] [rbp-39h]
  unsigned __int8 v121; // [rsp+68h] [rbp-39h]
  unsigned __int8 v122; // [rsp+69h] [rbp-38h]
  char v123; // [rsp+69h] [rbp-38h]
  char v124; // [rsp+6Ah] [rbp-37h]
  _QWORD v125[2]; // [rsp+70h] [rbp-31h] BYREF
  unsigned int v126; // [rsp+80h] [rbp-21h]
  int v127; // [rsp+84h] [rbp-1Dh]
  unsigned int v128; // [rsp+8Ch] [rbp-15h]
  KSPIN_LOCK *v129; // [rsp+90h] [rbp-11h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+98h] [rbp-9h] BYREF
  GUID v131; // [rsp+B0h] [rbp+Fh] BYREF
  GUID v132; // [rsp+C0h] [rbp+1Fh] BYREF

  v129 = a1;
  v126 = 0;
  v1 = a1[120];
  v125[1] = v125;
  v125[0] = v125;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v127 = dword_140168440;
  v128 = sub_1400A5DD0(v1, (unsigned int)dword_140168440, v125);
  while ( 1 )
  {
    v2 = v125[0];
    if ( (_QWORD *)v125[0] == v125 )
      break;
    if ( *(_QWORD **)(v125[0] + 8LL) != v125
      || (v3 = *(_QWORD *)v125[0], *(_QWORD *)(*(_QWORD *)v125[0] + 8LL) != v125[0]) )
    {
LABEL_217:
      __fastfail(3u);
    }
    v125[0] = *(_QWORD *)v125[0];
    *(_QWORD *)(v3 + 8) = v125;
    v4 = (_QWORD *)(v2 - 24);
    v5 = *(_QWORD *)(v2 - 24 + 48);
    v6 = *(_QWORD *)(v2 - 24 + 40);
    v7 = *(_BYTE *)(v5 + 506);
    sub_140028C24(v5 + 720, *(_BYTE *)(v6 + 142) & 1);
    _InterlockedIncrement64((volatile signed __int64 *)(v5 + 2248));
    v8 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
    v9 = *(_DWORD *)(v8 + *(_QWORD *)(v5 + 40));
    while ( (v9 & 1) == 0 )
    {
      v10 = v9;
      v9 = _InterlockedCompareExchange((volatile signed __int32 *)(v8 + *(_QWORD *)(v5 + 40)), v9 - 2, v9);
      if ( v10 == v9 )
        goto LABEL_11;
    }
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 1032), 0xFFFFFFFF) == 1 )
      KeSetEvent((PRKEVENT)(v5 + 520), 0, 0);
LABEL_11:
    v11 = *(_QWORD *)(*(_QWORD *)(v6 + 184) + 8LL);
    v12 = v4[2];
    if ( *(_BYTE *)(v11 + 2) == 40 )
    {
      *(_QWORD *)(v11 + 96) = v12;
    }
    else
    {
      *(_QWORD *)(v11 + 56) = 0LL;
      *(_QWORD *)(v11 + 40) = 0LL;
      *(_QWORD *)(v11 + 48) = v12;
    }
    ExFreePoolWithTag(v4, 0x54436152u);
    v13 = *(_BYTE *)(v11 + 2);
    v14 = *(_BYTE *)(v11 + 3);
    if ( (v7 & 2) != 0 )
    {
      if ( v13 == 40 )
      {
        v15 = ((v14 >> 7) & 0x80) + 56;
      }
      else
      {
        v16 = 56;
        if ( v14 < 0 )
          v16 = -72;
        v15 = v16;
      }
      v17 = -1073740534;
    }
    else
    {
      if ( v13 == 40 )
      {
        v15 = ((v14 >> 7) & 0x80) + 9;
      }
      else
      {
        v18 = 9;
        if ( v14 < 0 )
          v18 = -119;
        v15 = v18;
      }
      v17 = 258;
    }
    *(_BYTE *)(v11 + 3) = v15;
    v19 = byte_140168DAA == 0;
    *(_BYTE *)(v6 + 141) = -84;
    *(_DWORD *)(v6 + 48) = v17;
    if ( v19 )
      goto LABEL_95;
    v131 = 0LL;
    IoGetActivityIdIrp(v6, &v131);
    v21 = *(_QWORD *)(v6 + 184);
    if ( *(_BYTE *)v21 == 14 )
    {
      if ( (byte_1401694F2 & 8) == 0 )
        goto LABEL_95;
      v24 = (const EVENT_DESCRIPTOR *)&unk_140148B18;
      goto LABEL_94;
    }
    if ( *(_BYTE *)v21 != 15 )
    {
      if ( *(_BYTE *)v21 != 27 )
        goto LABEL_95;
      if ( *(_BYTE *)(v21 + 1) == 7 && !*(_DWORD *)(v21 + 8) )
      {
        if ( (byte_1401694F2 & 0x40) != 0 )
        {
          v22 = *(unsigned int **)(v6 + 56);
          if ( v22 )
            v23 = *v22;
          else
            v23 = 0LL;
          LODWORD(v115) = *(_DWORD *)(v6 + 48);
          LODWORD(v114) = v23;
          sub_140056AB0(v23, v21, &v131, v6, v114, v115);
        }
        goto LABEL_95;
      }
      if ( (byte_1401694F2 & 0x20) == 0 )
        goto LABEL_95;
      v24 = (const EVENT_DESCRIPTOR *)&unk_140149FE8;
LABEL_94:
      LODWORD(v114) = *(_DWORD *)(v6 + 48);
      sub_140052F3C(v20, v24, &v131, v6, v114);
      goto LABEL_95;
    }
    if ( byte_1401694F1 >= 0 )
      goto LABEL_95;
    v25 = *(_QWORD *)(v21 + 8);
    v26 = 0;
    v27 = 0;
    v28 = 0;
    v120 = 0;
    v29 = 0;
    v122 = 0;
    v30 = 0LL;
    v31 = 0;
    if ( *(_BYTE *)(v25 + 2) != 40 )
    {
      v39 = *(_BYTE *)(v25 + 72);
      v30 = *(_BYTE **)(v25 + 32);
      v31 = *(_BYTE *)(v25 + 11);
      v29 = *(_BYTE *)(v25 + 4);
      if ( !*(_BYTE *)(v25 + 2) )
        goto LABEL_70;
      goto LABEL_95;
    }
    v32 = 0LL;
    v33 = 0;
    if ( *(_DWORD *)(v25 + 20) )
      goto LABEL_95;
    v34 = *(_DWORD *)(v25 + 56);
    v35 = 0;
    if ( !v34 )
      goto LABEL_67;
    v36 = (unsigned int *)(v25 + 120);
    while ( 1 )
    {
      v37 = *v36;
      if ( (unsigned int)v37 >= 0x80 )
      {
        v38 = *(unsigned int *)(v25 + 16);
        if ( (unsigned int)v37 < (unsigned int)v38 )
          break;
      }
LABEL_60:
      ++v35;
      ++v36;
      if ( v35 >= v34 )
        goto LABEL_66;
    }
    if ( *(_DWORD *)(v37 + v25) != 64 )
    {
      if ( *(_DWORD *)(v37 + v25) == 65 )
      {
        if ( v37 + 56 <= v38 )
        {
          v33 = 1;
          if ( *(_BYTE *)(v37 + v25 + 10) )
            v32 = (char *)(v37 + v25 + 24);
          v29 = *(_BYTE *)(v37 + v25 + 8);
          v30 = *(_BYTE **)(v37 + v25 + 16);
          v31 = *(_BYTE *)(v37 + v25 + 9);
        }
      }
      else if ( *(_DWORD *)(v37 + v25) == 66 && v37 + 40 <= v38 )
      {
        if ( *(_DWORD *)(v37 + v25 + 12) )
          v32 = (char *)(v37 + v25 + 32);
        v30 = *(_BYTE **)(v37 + v25 + 24);
        goto LABEL_65;
      }
LABEL_59:
      if ( v33 )
        goto LABEL_66;
      goto LABEL_60;
    }
    if ( v37 + 40 > v38 )
      goto LABEL_59;
    if ( *(_BYTE *)(v37 + v25 + 10) )
      v32 = (char *)(v37 + v25 + 24);
    v30 = *(_BYTE **)(v37 + v25 + 16);
LABEL_65:
    v31 = *(_BYTE *)(v37 + v25 + 9);
    v29 = *(_BYTE *)(v37 + v25 + 8);
LABEL_66:
    v26 = 0;
    v27 = 0;
LABEL_67:
    if ( v32 )
    {
      v39 = *v32;
      v28 = 0;
LABEL_70:
      if ( ((v39 - 8) & 0x5D) == 0 )
      {
        v40 = *(_BYTE *)(v25 + 3);
        if ( v40 == 1 || !v30 || !v31 )
          goto LABEL_90;
        LOBYTE(v25) = 0;
        v41 = &v30[v31];
        v42 = v30 + 8;
        if ( (unsigned __int8)((*v30 & 0x7F) - 114) <= 1u )
        {
          if ( v42 <= v41 )
          {
            LOBYTE(v25) = 1;
            v27 = v30[2];
            v26 = v30[1] & 0xF;
            v28 = v30[3];
          }
        }
        else
        {
          if ( v42 <= v41 )
          {
            v25 = (unsigned __int64)(v30 + 13);
            v26 = v30[2] & 0xF;
            v43 = v31;
            if ( (unsigned int)(unsigned __int8)v30[7] + 8 <= v31 )
              v43 = (unsigned __int8)v30[7] + 8;
            v44 = (unsigned __int64)&v30[v43];
            if ( v25 > v44 )
              v45 = 0;
            else
              v45 = v30[12];
            v120 = v45;
            if ( (unsigned __int64)(v30 + 14) > v44 )
              v46 = 0;
            else
              v46 = *(_BYTE *)v25;
            v122 = v46;
            LOBYTE(v25) = 1;
          }
          v28 = v122;
          v27 = v120;
        }
        if ( (_BYTE)v25 )
        {
          v47 = v27;
          v48 = v28;
        }
        else
        {
LABEL_90:
          v26 = 0;
          v47 = 0;
          v48 = 0LL;
        }
        LOBYTE(v119) = v48;
        LOBYTE(v118) = v47;
        LOBYTE(v117) = v26;
        LOBYTE(v116) = v29;
        LOBYTE(v115) = v40;
        LODWORD(v114) = *(_DWORD *)(v6 + 48);
        sub_140052E64(v48, v25, &v131, v6, v114, v115, v116, v117, v118, v119, v6);
      }
    }
LABEL_95:
    IofCompleteRequest((PIRP)v6, 0);
  }
  v49 = v128;
  if ( v127 != v128 )
  {
    v50 = v129;
    KeAcquireInStackQueuedSpinLock(v129 + 17, &LockHandle);
    v51 = *((_DWORD *)v50 + 40);
    if ( v51 )
    {
      v129 = (KSPIN_LOCK *)sub_1400143E0(64LL, 8LL * v51, 1280663890LL, v50[1]);
      v52 = v129;
      if ( v129 )
      {
        v53 = v126;
        v54 = v50 + 18;
        for ( i = (KSPIN_LOCK *)v50[18]; i != v54; i = (KSPIN_LOCK *)*i )
        {
          v56 = i - 8;
          if ( *((_BYTE *)i + 3304)
            && (*((_DWORD *)v56 + 848) != -1 || (*((_BYTE *)v56 + 506) & 2) != 0)
            && (int)sub_1400066C0((__int64)(i - 8), 0LL, 0) >= 0 )
          {
            v57 = v53++;
            v52[v57] = (KSPIN_LOCK)v56;
          }
        }
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        if ( v53 < v51 )
          v52[v53] = 0LL;
        v58 = 0;
        v59 = v52;
        v60 = v127;
        do
        {
          v61 = *v59;
          if ( !*v59 )
            break;
          v62 = 0LL;
          if ( v60 > v49 )
          {
            v63 = sub_14006D53C(v61 + 720, v60 - v49, v125);
            v62 = v63;
            v49 += v63;
            v61 = *v59;
          }
          if ( v62 )
            _InterlockedAdd64((volatile signed __int64 *)(v61 + 2256), v62);
          v64 = *v59;
          v65 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
          v66 = *(_DWORD *)(v65 + *(_QWORD *)(*v59 + 40));
          while ( (v66 & 1) == 0 )
          {
            v67 = v66;
            v66 = _InterlockedCompareExchange((volatile signed __int32 *)(v65 + *(_QWORD *)(v64 + 40)), v66 - 2, v66);
            if ( v67 == v66 )
              goto LABEL_121;
          }
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v64 + 1032), 0xFFFFFFFF) == 1 )
            KeSetEvent((PRKEVENT)(v64 + 520), 0, 0);
LABEL_121:
          ++v58;
          ++v59;
        }
        while ( v58 < v51 );
        ExFreePoolWithTag(v129, 0x4C556152u);
        while ( 2 )
        {
          v68 = v125[0];
          if ( (_QWORD *)v125[0] == v125 )
            return;
          if ( *(_QWORD **)(v125[0] + 8LL) != v125 )
            goto LABEL_217;
          v69 = *(_QWORD *)v125[0];
          if ( *(_QWORD *)(*(_QWORD *)v125[0] + 8LL) != v125[0] )
            goto LABEL_217;
          v125[0] = *(_QWORD *)v125[0];
          v70 = (_QWORD *)(v68 - 24);
          *(_QWORD *)(v69 + 8) = v125;
          v71 = *(_QWORD *)(v68 - 24 + 48);
          v72 = *(_QWORD *)(v68 - 24 + 40);
          v73 = *(_BYTE *)(v71 + 506);
          v74 = *(_QWORD *)(*(_QWORD *)(v72 + 184) + 8LL);
          v75 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
          v76 = *(_DWORD *)(v75 + *(_QWORD *)(v71 + 40));
          while ( (v76 & 1) == 0 )
          {
            v77 = v76;
            v76 = _InterlockedCompareExchange((volatile signed __int32 *)(v75 + *(_QWORD *)(v71 + 40)), v76 - 2, v76);
            if ( v77 == v76 )
              goto LABEL_132;
          }
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v71 + 1032), 0xFFFFFFFF) == 1 )
            KeSetEvent((PRKEVENT)(v71 + 520), 0, 0);
LABEL_132:
          v78 = v70[2];
          if ( *(_BYTE *)(v74 + 2) == 40 )
          {
            *(_QWORD *)(v74 + 96) = v78;
          }
          else
          {
            *(_QWORD *)(v74 + 56) = 0LL;
            *(_QWORD *)(v74 + 40) = 0LL;
            *(_QWORD *)(v74 + 48) = v78;
          }
          ExFreePoolWithTag(v70, 0x54436152u);
          v79 = *(_BYTE *)(v74 + 2);
          v80 = *(_BYTE *)(v74 + 3);
          if ( (v73 & 2) != 0 )
          {
            if ( v79 == 40 )
            {
              v81 = ((v80 >> 7) & 0x80) + 56;
            }
            else
            {
              v82 = 56;
              if ( v80 < 0 )
                v82 = -72;
              v81 = v82;
            }
            v83 = -1073740534;
          }
          else
          {
            if ( v79 == 40 )
            {
              v81 = ((v80 >> 7) & 0x80) + 9;
            }
            else
            {
              v84 = 9;
              if ( v80 < 0 )
                v84 = -119;
              v81 = v84;
            }
            v83 = 258;
          }
          *(_BYTE *)(v74 + 3) = v81;
          v19 = byte_140168DAA == 0;
          *(_BYTE *)(v72 + 141) = -84;
          *(_DWORD *)(v72 + 48) = v83;
          if ( !v19 )
          {
            v132 = 0LL;
            IoGetActivityIdIrp(v72, &v132);
            v86 = *(_QWORD *)(v72 + 184);
            switch ( *(_BYTE *)v86 )
            {
              case 0xE:
                if ( (byte_1401694F2 & 8) != 0 )
                {
                  v89 = (const EVENT_DESCRIPTOR *)&unk_140148B18;
LABEL_215:
                  LODWORD(v114) = *(_DWORD *)(v72 + 48);
                  sub_140052F3C(v85, v89, &v132, v72, v114);
                }
                break;
              case 0xF:
                if ( byte_1401694F1 < 0 )
                {
                  v90 = *(_QWORD *)(v86 + 8);
                  v91 = 0;
                  v92 = 0;
                  v124 = 0;
                  v93 = 0;
                  v123 = 0;
                  v94 = 0LL;
                  v121 = 0;
                  v95 = 0;
                  v96 = 0;
                  if ( *(_BYTE *)(v90 + 2) == 40 )
                  {
                    v97 = 0LL;
                    v98 = 0;
                    if ( *(_DWORD *)(v90 + 20) )
                      break;
                    v99 = *(_DWORD *)(v90 + 56);
                    v100 = 0;
                    if ( v99 )
                    {
                      v101 = (unsigned int *)(v90 + 120);
                      do
                      {
                        v102 = *v101;
                        if ( (unsigned int)v102 >= 0x80 )
                        {
                          v103 = *(unsigned int *)(v90 + 16);
                          if ( (unsigned int)v102 < (unsigned int)v103 )
                          {
                            if ( *(_DWORD *)(v102 + v90) == 64 )
                            {
                              if ( v102 + 40 <= v103 )
                              {
                                if ( *(_BYTE *)(v102 + v90 + 10) )
                                  v97 = (char *)((unsigned int)v102 + v90 + 24);
                                v94 = *(_BYTE **)(v102 + v90 + 16);
                                goto LABEL_175;
                              }
                            }
                            else if ( *(_DWORD *)(v102 + v90) == 65 )
                            {
                              if ( v102 + 56 <= v103 )
                              {
                                v98 = 1;
                                if ( *(_BYTE *)(v102 + v90 + 10) )
                                  v97 = (char *)((unsigned int)v102 + v90 + 24);
                                v94 = *(_BYTE **)((unsigned int)v102 + v90 + 16);
                                v95 = *(_BYTE *)((unsigned int)v102 + v90 + 9);
                                v124 = *(_BYTE *)(v102 + v90 + 8);
                              }
                            }
                            else if ( *(_DWORD *)(v102 + v90) == 66 && v102 + 40 <= v103 )
                            {
                              if ( *(_DWORD *)(v102 + v90 + 12) )
                                v97 = (char *)(v102 + v90 + 32);
                              v94 = *(_BYTE **)(v102 + v90 + 24);
LABEL_175:
                              v91 = *(_BYTE *)(v102 + v90 + 8);
                              v95 = *(_BYTE *)(v102 + v90 + 9);
                              goto LABEL_184;
                            }
                            if ( v98 )
                              break;
                          }
                        }
                        ++v100;
                        ++v101;
                      }
                      while ( v100 < v99 );
                      v91 = v124;
LABEL_184:
                      v93 = 0;
                    }
                    if ( !v97 )
                      break;
                    v104 = *v97;
                    v92 = 0;
                  }
                  else
                  {
                    v104 = *(_BYTE *)(v90 + 72);
                    v94 = *(_BYTE **)(v90 + 32);
                    v95 = *(_BYTE *)(v90 + 11);
                    v91 = *(_BYTE *)(v90 + 4);
                    if ( *(_BYTE *)(v90 + 2) )
                      break;
                  }
                  if ( ((v104 - 8) & 0x5D) == 0 )
                  {
                    v105 = *(_BYTE *)(v90 + 3);
                    if ( v105 == 1 || !v94 || !v95 )
                      goto LABEL_211;
                    LOBYTE(v90) = 0;
                    v106 = &v94[v95];
                    v107 = v94 + 8;
                    if ( (unsigned __int8)((*v94 & 0x7F) - 114) <= 1u )
                    {
                      if ( v107 <= v106 )
                      {
                        LOBYTE(v90) = 1;
                        v92 = v94[2];
                        v96 = v94[1] & 0xF;
                        v93 = v94[3];
                      }
                    }
                    else
                    {
                      if ( v107 <= v106 )
                      {
                        v90 = (unsigned __int64)(v94 + 13);
                        v96 = v94[2] & 0xF;
                        v108 = v95;
                        if ( (unsigned int)(unsigned __int8)v94[7] + 8 <= v95 )
                          v108 = (unsigned __int8)v94[7] + 8;
                        v109 = (unsigned __int64)&v94[v108];
                        if ( v90 > v109 )
                          v110 = 0;
                        else
                          v110 = v94[12];
                        v123 = v110;
                        if ( (unsigned __int64)(v94 + 14) > v109 )
                          v111 = 0;
                        else
                          v111 = *(_BYTE *)v90;
                        v121 = v111;
                        LOBYTE(v90) = 1;
                      }
                      v93 = v121;
                      v92 = v123;
                    }
                    if ( (_BYTE)v90 )
                    {
                      v112 = v92;
                      v113 = v93;
                    }
                    else
                    {
LABEL_211:
                      v96 = 0;
                      v112 = 0;
                      v113 = 0LL;
                    }
                    LOBYTE(v119) = v113;
                    LOBYTE(v118) = v112;
                    LOBYTE(v117) = v96;
                    LOBYTE(v116) = v91;
                    LOBYTE(v115) = v105;
                    LODWORD(v114) = *(_DWORD *)(v72 + 48);
                    sub_140052E64(v113, v90, &v132, v72, v114, v115, v116, v117, v118, v119, v72);
                  }
                }
                break;
              case 0x1B:
                if ( *(_BYTE *)(v86 + 1) == 7 && !*(_DWORD *)(v86 + 8) )
                {
                  if ( (byte_1401694F2 & 0x40) != 0 )
                  {
                    v87 = *(unsigned int **)(v72 + 56);
                    if ( v87 )
                      v88 = *v87;
                    else
                      v88 = 0LL;
                    LODWORD(v115) = *(_DWORD *)(v72 + 48);
                    LODWORD(v114) = v88;
                    sub_140056AB0(v88, v86, &v132, v72, v114, v115);
                  }
                  break;
                }
                if ( (byte_1401694F2 & 0x20) != 0 )
                {
                  v89 = (const EVENT_DESCRIPTOR *)&unk_140149FE8;
                  goto LABEL_215;
                }
                break;
            }
          }
          IofCompleteRequest((PIRP)v72, 0);
          continue;
        }
      }
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
}
