/*
 * XREFs of sub_1400930B8 @ 0x1400930B8
 * Callers:
 *     sub_140004890 @ 0x140004890 (sub_140004890.c)
 *     sub_140005A20 @ 0x140005A20 (sub_140005A20.c)
 * Callees:
 *     sub_14000D760 @ 0x14000D760 (sub_14000D760.c)
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_1400530B8 @ 0x1400530B8 (sub_1400530B8.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1400930B8(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 v3; // r15
  __int64 v5; // rax
  int v6; // ebx
  _QWORD *v7; // rcx
  __int64 ***v8; // rax
  __int64 *v9; // rax
  __int64 *v10; // rcx
  __int64 v11; // r14
  __int64 v12; // rsi
  unsigned __int64 v13; // r8
  signed __int32 v14; // eax
  signed __int32 v15; // ett
  _QWORD *v16; // rcx
  bool v17; // zf
  __int64 v18; // rcx
  __int64 v19; // rdx
  unsigned int *v20; // rax
  __int64 v21; // rcx
  const EVENT_DESCRIPTOR *v22; // rdx
  unsigned __int64 v23; // rdx
  char v24; // r15
  _BYTE *v25; // r9
  unsigned __int8 v26; // r11
  char v27; // r10
  char v28; // r12
  unsigned __int8 v29; // si
  char *v30; // rsi
  char v31; // r13
  unsigned int v32; // r12d
  unsigned int *v33; // r15
  __int64 v34; // rax
  unsigned __int64 v35; // r10
  char v36; // cl
  char v37; // r8
  _BYTE *v38; // rcx
  _BYTE *v39; // rax
  unsigned int v40; // eax
  unsigned __int64 v41; // rcx
  char v42; // al
  __int64 v43; // rcx
  unsigned __int64 v44; // rcx
  __int64 v45; // rdx
  int *v46; // rax
  const EVENT_DESCRIPTOR *v47; // rdx
  unsigned __int64 v48; // rdx
  char v49; // r15
  _BYTE *v50; // r8
  unsigned __int8 v51; // r10
  char v52; // r11
  char v53; // r13
  char v54; // r12
  char *v55; // rsi
  unsigned int v56; // r9d
  unsigned int *v57; // rax
  __int64 v58; // rax
  unsigned __int64 v59; // r14
  char v60; // cl
  char v61; // r9
  _BYTE *v62; // rax
  unsigned int v63; // eax
  char v64; // al
  __int64 v66; // [rsp+20h] [rbp-69h]
  __int64 v67; // [rsp+28h] [rbp-61h]
  __int64 v68; // [rsp+30h] [rbp-59h]
  __int64 v69; // [rsp+38h] [rbp-51h]
  __int64 v70; // [rsp+40h] [rbp-49h]
  __int64 v71; // [rsp+48h] [rbp-41h]
  char v72; // [rsp+60h] [rbp-29h]
  char v73; // [rsp+60h] [rbp-29h]
  unsigned __int8 v74; // [rsp+62h] [rbp-27h]
  char v75; // [rsp+63h] [rbp-26h]
  unsigned int v76; // [rsp+64h] [rbp-25h]
  int v77; // [rsp+64h] [rbp-25h]
  unsigned int v79; // [rsp+68h] [rbp-21h]
  __int64 *v80; // [rsp+70h] [rbp-19h] BYREF
  __int64 **v81; // [rsp+78h] [rbp-11h]
  GUID v82; // [rsp+80h] [rbp-9h] BYREF
  GUID v83; // [rsp+90h] [rbp+7h] BYREF

  v81 = &v80;
  v2 = a1 + 704;
  v3 = a1;
  v80 = (__int64 *)&v80;
  v5 = sub_1400530B8(a1 + 704);
  v6 = 0;
  while ( v5 )
  {
    v7 = v81;
    v8 = (__int64 ***)(v5 + 168);
    if ( *v81 != (__int64 *)&v80 )
LABEL_90:
      __fastfail(3u);
    v8[1] = v81;
    *v8 = &v80;
    *v7 = v8;
    v81 = (__int64 **)v8;
    v5 = sub_1400530B8(v2);
  }
  *(_BYTE *)(v3 + 756) = 0;
  sub_14000D760(v3, 3);
  while ( 1 )
  {
    v9 = v80;
    if ( v80 == (__int64 *)&v80 )
      break;
    if ( (__int64 **)v80[1] != &v80 )
      goto LABEL_90;
    v10 = (__int64 *)*v80;
    if ( *(__int64 **)(*v80 + 8) != v80 )
      goto LABEL_90;
    v80 = (__int64 *)*v80;
    v11 = (__int64)(v9 - 21);
    v10[1] = (__int64)&v80;
    v12 = *(_QWORD *)(v9[2] + 8);
    *(_BYTE *)(v12 + 3) = 22;
    *(v9 - 14) = 0LL;
    v13 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
    v14 = *(_DWORD *)(v13 + *(_QWORD *)(v3 + 40));
    while ( (v14 & 1) == 0 )
    {
      v15 = v14;
      v14 = _InterlockedCompareExchange((volatile signed __int32 *)(v13 + *(_QWORD *)(v3 + 40)), v14 - 2, v14);
      if ( v15 == v14 )
        goto LABEL_15;
    }
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 1032), 0xFFFFFFFF) == 1 )
      KeSetEvent((PRKEVENT)(v3 + 520), 0, 0);
LABEL_15:
    if ( (*(_BYTE *)(v11 + 142) & 0x20) != 0 )
    {
      if ( *(_BYTE *)(v12 + 2) == 40 )
      {
        v16 = *(_QWORD **)(v12 + 96);
        *(_QWORD *)(v12 + 96) = v16[2];
      }
      else
      {
        v16 = *(_QWORD **)(v12 + 48);
        *(_QWORD *)(v12 + 48) = v16[2];
        *(_QWORD *)(v12 + 56) = 0LL;
        *(_QWORD *)(v12 + 40) = 0LL;
      }
      ExFreePoolWithTag(v16, 0x54436152u);
    }
    v17 = byte_140168DAA == 0;
    *(_BYTE *)(v11 + 141) = -84;
    *(_DWORD *)(v11 + 48) = -1073741823;
    if ( !v17 )
    {
      v82 = 0LL;
      IoGetActivityIdIrp(v11, &v82);
      v19 = *(_QWORD *)(v11 + 184);
      switch ( *(_BYTE *)v19 )
      {
        case 0xE:
          if ( (byte_1401694F2 & 8) != 0 )
          {
            v22 = (const EVENT_DESCRIPTOR *)&unk_140148B18;
LABEL_33:
            LODWORD(v66) = *(_DWORD *)(v11 + 48);
            sub_140052F3C(v18, v22, &v82, v11, v66);
          }
          break;
        case 0xF:
          if ( byte_1401694F1 >= 0 )
            break;
          v23 = *(_QWORD *)(v19 + 8);
          v24 = 0;
          v72 = 0;
          v25 = 0LL;
          v26 = 0;
          v75 = 0;
          v27 = 0;
          v74 = 0;
          v28 = 0;
          v29 = 0;
          if ( *(_BYTE *)(v23 + 2) == 40 )
          {
            v30 = 0LL;
            v31 = 0;
            if ( !*(_DWORD *)(v23 + 20) )
            {
              v32 = 0;
              v76 = *(_DWORD *)(v23 + 56);
              if ( v76 )
              {
                v33 = (unsigned int *)(v23 + 120);
                do
                {
                  v34 = *v33;
                  if ( (unsigned int)v34 >= 0x80 )
                  {
                    v35 = *(unsigned int *)(v23 + 16);
                    if ( (unsigned int)v34 < (unsigned int)v35 )
                    {
                      if ( *(_DWORD *)(v34 + v23) == 64 )
                      {
                        if ( v34 + 40 <= v35 )
                        {
                          if ( *(_BYTE *)(v34 + v23 + 10) )
                            v30 = (char *)((unsigned int)v34 + v23 + 24);
                          v25 = *(_BYTE **)(v34 + v23 + 16);
                          goto LABEL_48;
                        }
                      }
                      else if ( *(_DWORD *)(v34 + v23) == 65 )
                      {
                        if ( v34 + 56 <= v35 )
                        {
                          v31 = 1;
                          if ( *(_BYTE *)(v34 + v23 + 10) )
                            v30 = (char *)((unsigned int)v34 + v23 + 24);
                          v25 = *(_BYTE **)((unsigned int)v34 + v23 + 16);
                          v26 = *(_BYTE *)((unsigned int)v34 + v23 + 9);
                          v72 = *(_BYTE *)(v34 + v23 + 8);
                        }
                      }
                      else if ( *(_DWORD *)(v34 + v23) == 66 && v34 + 40 <= v35 )
                      {
                        if ( *(_DWORD *)(v34 + v23 + 12) )
                          v30 = (char *)(v34 + v23 + 32);
                        v25 = *(_BYTE **)(v34 + v23 + 24);
LABEL_48:
                        v24 = *(_BYTE *)(v34 + v23 + 8);
                        v26 = *(_BYTE *)(v34 + v23 + 9);
                        goto LABEL_57;
                      }
                      if ( v31 )
                        break;
                    }
                  }
                  ++v32;
                  ++v33;
                }
                while ( v32 < v76 );
                v24 = v72;
LABEL_57:
                v27 = 0;
              }
              if ( v30 )
              {
                v36 = *v30;
                v28 = 0;
                v29 = 0;
LABEL_64:
                if ( ((v36 - 8) & 0x5D) == 0 )
                {
                  v37 = *(_BYTE *)(v23 + 3);
                  if ( v37 == 1 || !v25 || !v26 )
                    goto LABEL_84;
                  LOBYTE(v23) = 0;
                  v38 = &v25[v26];
                  v39 = v25 + 8;
                  if ( (unsigned __int8)((*v25 & 0x7F) - 114) <= 1u )
                  {
                    if ( v39 <= v38 )
                    {
                      LOBYTE(v23) = 1;
                      v28 = v25[2];
                      v27 = v25[1] & 0xF;
                      v29 = v25[3];
                    }
                  }
                  else
                  {
                    if ( v39 <= v38 )
                    {
                      v23 = (unsigned __int64)(v25 + 13);
                      v27 = v25[2] & 0xF;
                      v40 = v26;
                      if ( (unsigned int)(unsigned __int8)v25[7] + 8 <= v26 )
                        v40 = (unsigned __int8)v25[7] + 8;
                      v41 = (unsigned __int64)&v25[v40];
                      if ( v23 > v41 )
                        v75 = 0;
                      else
                        v75 = v25[12];
                      if ( (unsigned __int64)(v25 + 14) > v41 )
                        v74 = 0;
                      else
                        v74 = *(_BYTE *)v23;
                      LOBYTE(v23) = 1;
                    }
                    v29 = v74;
                    v28 = v75;
                  }
                  if ( (_BYTE)v23 )
                  {
                    v42 = v28;
                    v43 = v29;
                  }
                  else
                  {
LABEL_84:
                    v27 = 0;
                    v42 = 0;
                    v43 = 0LL;
                  }
                  LOBYTE(v71) = v43;
                  LOBYTE(v70) = v42;
                  LOBYTE(v69) = v27;
                  LOBYTE(v68) = v24;
                  LOBYTE(v67) = v37;
                  LODWORD(v66) = *(_DWORD *)(v11 + 48);
                  sub_140052E64(v43, v23, &v82, v11, v66, v67, v68, v69, v70, v71, v11);
                }
              }
            }
          }
          else
          {
            v36 = *(_BYTE *)(v23 + 72);
            v25 = *(_BYTE **)(v23 + 32);
            v26 = *(_BYTE *)(v23 + 11);
            v24 = *(_BYTE *)(v23 + 4);
            if ( !*(_BYTE *)(v23 + 2) )
              goto LABEL_64;
          }
          v3 = a1;
          break;
        case 0x1B:
          if ( *(_BYTE *)(v19 + 1) != 7 || *(_DWORD *)(v19 + 8) )
          {
            if ( (byte_1401694F2 & 0x20) == 0 )
              break;
            v22 = &stru_140149FE8;
            goto LABEL_33;
          }
          if ( (byte_1401694F2 & 0x40) != 0 )
          {
            v20 = *(unsigned int **)(v11 + 56);
            if ( v20 )
              v21 = *v20;
            else
              v21 = 0LL;
            LODWORD(v67) = *(_DWORD *)(v11 + 48);
            LODWORD(v66) = v21;
            sub_140056AB0(v21, v19, &v82, v11, v66, v67);
          }
          break;
        default:
          break;
      }
    }
    IofCompleteRequest((PIRP)v11, 0);
  }
  v17 = byte_140168DAA == 0;
  *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 184) + 8LL) + 3LL) = 1;
  *(_QWORD *)(a2 + 56) = 0LL;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = 0;
  if ( v17 )
    goto LABEL_155;
  v83 = 0LL;
  IoGetActivityIdIrp(a2, &v83);
  v45 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v45 == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_155;
    v47 = (const EVENT_DESCRIPTOR *)&unk_140148B18;
    goto LABEL_154;
  }
  if ( *(_BYTE *)v45 != 15 )
  {
    if ( *(_BYTE *)v45 != 27 )
      goto LABEL_155;
    if ( *(_BYTE *)(v45 + 1) == 7 && !*(_DWORD *)(v45 + 8) )
    {
      if ( (byte_1401694F2 & 0x40) != 0 )
      {
        v46 = *(int **)(a2 + 56);
        if ( v46 )
          v6 = *v46;
        LODWORD(v67) = *(_DWORD *)(a2 + 48);
        LODWORD(v66) = v6;
        sub_140056AB0(v44, v45, &v83, a2, v66, v67);
      }
      goto LABEL_155;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_155;
    v47 = &stru_140149FE8;
LABEL_154:
    LODWORD(v66) = *(_DWORD *)(a2 + 48);
    sub_140052F3C(v44, v47, &v83, a2, v66);
    goto LABEL_155;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_155;
  v48 = *(_QWORD *)(v45 + 8);
  v49 = 0;
  v50 = 0LL;
  v51 = 0;
  v52 = 0;
  v53 = 0;
  v54 = 0;
  if ( *(_BYTE *)(v48 + 2) != 40 )
  {
    v60 = *(_BYTE *)(v48 + 72);
    v50 = *(_BYTE **)(v48 + 32);
    v51 = *(_BYTE *)(v48 + 11);
    v49 = *(_BYTE *)(v48 + 4);
    if ( *(_BYTE *)(v48 + 2) )
      goto LABEL_155;
LABEL_133:
    LOBYTE(v44) = v60 - 8;
    if ( (v44 & 0x5D) != 0 )
      goto LABEL_155;
    v61 = *(_BYTE *)(v48 + 3);
    if ( v61 == 1 || !v50 || !v51 )
      goto LABEL_150;
    LOBYTE(v48) = 0;
    v44 = (unsigned __int64)&v50[v51];
    v62 = v50 + 8;
    if ( (unsigned __int8)((*v50 & 0x7F) - 114) <= 1u )
    {
      if ( (unsigned __int64)v62 > v44 )
        goto LABEL_148;
      v53 = v50[2];
      v52 = v50[1] & 0xF;
      v54 = v50[3];
    }
    else
    {
      if ( (unsigned __int64)v62 > v44 )
        goto LABEL_148;
      v52 = v50[2] & 0xF;
      v63 = v51;
      if ( (unsigned int)(unsigned __int8)v50[7] + 8 <= v51 )
        v63 = (unsigned __int8)v50[7] + 8;
      v44 = (unsigned __int64)(v50 + 13);
      v48 = (unsigned __int64)&v50[v63];
      if ( (unsigned __int64)(v50 + 13) <= v48 )
        v53 = v50[12];
      if ( (unsigned __int64)(v50 + 14) <= v48 )
        v54 = *(_BYTE *)v44;
    }
    LOBYTE(v48) = 1;
LABEL_148:
    if ( (_BYTE)v48 )
    {
      LOBYTE(v6) = v53;
      v64 = v54;
LABEL_151:
      LOBYTE(v71) = v64;
      LOBYTE(v70) = v6;
      LOBYTE(v69) = v52;
      LOBYTE(v68) = v49;
      LOBYTE(v67) = v61;
      LODWORD(v66) = *(_DWORD *)(a2 + 48);
      sub_140052E64(v44, v48, &v83, a2, v66, v67, v68, v69, v70, v71, a2);
      goto LABEL_155;
    }
LABEL_150:
    v52 = 0;
    v64 = 0;
    goto LABEL_151;
  }
  v55 = 0LL;
  v73 = 0;
  if ( *(_DWORD *)(v48 + 20) )
    goto LABEL_155;
  v44 = 0LL;
  v77 = 0;
  v79 = *(_DWORD *)(v48 + 56);
  if ( !v79 )
    goto LABEL_130;
  v56 = *(_DWORD *)(v48 + 56);
  v57 = (unsigned int *)(v48 + 120);
  *(_QWORD *)&v82.Data1 = v48 + 120;
  while ( 2 )
  {
    v58 = *v57;
    if ( (unsigned int)v58 < 0x80 )
      goto LABEL_124;
    v59 = *(unsigned int *)(v48 + 16);
    if ( (unsigned int)v58 >= (unsigned int)v59 )
      goto LABEL_124;
    if ( *(_DWORD *)(v58 + v48) != 64 )
    {
      v44 = (unsigned int)(*(_DWORD *)(v58 + v48) - 65);
      if ( *(_DWORD *)(v58 + v48) == 65 )
      {
        v44 = v58 + 56;
        if ( v58 + 56 <= v59 )
        {
          v73 = 1;
          if ( *(_BYTE *)(v58 + v48 + 10) )
            v55 = (char *)(v58 + v48 + 24);
          v49 = *(_BYTE *)(v58 + v48 + 8);
          v50 = *(_BYTE **)(v58 + v48 + 16);
          v51 = *(_BYTE *)(v58 + v48 + 9);
        }
      }
      else if ( *(_DWORD *)(v58 + v48) == 66 )
      {
        v44 = v58 + 40;
        if ( v58 + 40 <= v59 )
        {
          if ( *(_DWORD *)(v58 + v48 + 12) )
            v55 = (char *)(v58 + v48 + 32);
          v50 = *(_BYTE **)(v58 + v48 + 24);
          goto LABEL_129;
        }
      }
LABEL_122:
      if ( v73 )
        goto LABEL_130;
      LODWORD(v44) = v77;
      v56 = v79;
LABEL_124:
      v44 = (unsigned int)(v44 + 1);
      v57 = (unsigned int *)(*(_QWORD *)&v82.Data1 + 4LL);
      v77 = v44;
      *(_QWORD *)&v82.Data1 += 4LL;
      if ( (unsigned int)v44 >= v56 )
        goto LABEL_130;
      continue;
    }
    break;
  }
  v44 = v58 + 40;
  if ( v58 + 40 > v59 )
    goto LABEL_122;
  if ( *(_BYTE *)(v58 + v48 + 10) )
    v55 = (char *)(v58 + v48 + 24);
  v50 = *(_BYTE **)(v58 + v48 + 16);
LABEL_129:
  v51 = *(_BYTE *)(v58 + v48 + 9);
  v49 = *(_BYTE *)(v58 + v48 + 8);
LABEL_130:
  if ( v55 )
  {
    v60 = *v55;
    goto LABEL_133;
  }
LABEL_155:
  IofCompleteRequest((PIRP)a2, 0);
  return 0LL;
}
