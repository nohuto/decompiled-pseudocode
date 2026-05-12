/*
 * XREFs of sub_1400F16A4 @ 0x1400F16A4
 * Callers:
 *     sub_1400F1650 @ 0x1400F1650 (sub_1400F1650.c)
 * Callees:
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     sub_1400DF424 @ 0x1400DF424 (sub_1400DF424.c)
 *     sub_1400EC40C @ 0x1400EC40C (sub_1400EC40C.c)
 *     sub_1400F0514 @ 0x1400F0514 (sub_1400F0514.c)
 *     sub_1400F73A0 @ 0x1400F73A0 (sub_1400F73A0.c)
 *     sub_1401154D0 @ 0x1401154D0 (sub_1401154D0.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14013C5D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall sub_1400F16A4(__int64 a1)
{
  __int64 v1; // r13
  unsigned int v2; // esi
  unsigned int v3; // edx
  __int16 v4; // r8
  __int64 v6; // r12
  __int64 result; // rax
  __int64 v8; // rbx
  __int64 v9; // rcx
  bool v10; // bp
  __int64 v11; // r15
  __int64 v12; // rcx
  __int64 v13; // rsi
  bool v14; // zf
  __int64 v15; // r14
  __int64 v16; // rcx
  unsigned int v17; // ebp
  __int64 v18; // rcx
  void (__fastcall *v19)(__int64, __int64, __int64, _QWORD, __int64, __int64); // r10
  __int64 v20; // r11
  __int64 v21; // rcx
  char v22; // r15
  __int64 v23; // rcx
  __int64 v24; // rsi
  __int64 v25; // rdx
  __int64 v26; // rcx
  unsigned int v27; // eax
  __int64 v28; // r9
  __int64 v29; // rcx
  __int64 v30; // rdx
  unsigned int *v31; // rax
  __int64 v32; // rcx
  const EVENT_DESCRIPTOR *v33; // rdx
  unsigned __int64 v34; // rdx
  char v35; // r13
  _BYTE *v36; // r9
  unsigned __int8 v37; // r11
  char v38; // r10
  char v39; // r14
  unsigned __int8 v40; // bp
  char *v41; // r14
  unsigned int v42; // r12d
  unsigned int v43; // ebp
  __int64 v44; // rcx
  unsigned __int64 v45; // r10
  __int64 v46; // r8
  int v47; // ecx
  int v48; // ecx
  char v49; // cl
  char v50; // r8
  _BYTE *v51; // rcx
  _BYTE *v52; // rax
  unsigned int v53; // eax
  unsigned __int64 v54; // rcx
  char v55; // al
  __int64 v56; // rcx
  __int64 v57; // [rsp+20h] [rbp-A8h]
  __int64 v58; // [rsp+28h] [rbp-A0h]
  __int64 v59; // [rsp+30h] [rbp-98h]
  __int64 v60; // [rsp+38h] [rbp-90h]
  __int64 v61; // [rsp+40h] [rbp-88h]
  __int64 v62; // [rsp+48h] [rbp-80h]
  unsigned __int8 v63; // [rsp+61h] [rbp-67h]
  char v64; // [rsp+62h] [rbp-66h]
  unsigned int v65; // [rsp+64h] [rbp-64h]
  __int16 v66; // [rsp+68h] [rbp-60h]
  unsigned int v67; // [rsp+6Ch] [rbp-5Ch]
  __int64 v68; // [rsp+70h] [rbp-58h]
  __int64 v69; // [rsp+78h] [rbp-50h]
  __int64 v70; // [rsp+80h] [rbp-48h]
  GUID v71; // [rsp+88h] [rbp-40h] BYREF

  v1 = *(_QWORD *)(a1 + 88);
  v2 = *(_DWORD *)(a1 + 124);
  v3 = 0;
  v4 = *(_WORD *)(a1 + 136);
  v66 = v4;
  v6 = 0LL;
  result = v2 - 1;
  v68 = v1;
  if ( (*(_BYTE *)(v1 + 136) & 2) == 0 )
    --v2;
  v67 = 0;
  v65 = v2;
  if ( v2 )
  {
    result = 0LL;
    v69 = 0LL;
    while ( 1 )
    {
      v8 = result << 7;
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 32) + (result << 7) + 60) & 1) != 0 )
        break;
LABEL_31:
      ++v3;
      result = v69 + 1;
      v67 = v3;
      ++v69;
      if ( v3 >= v2 )
        goto LABEL_32;
    }
    v9 = *(_QWORD *)(a1 + 32);
    v10 = (*(_BYTE *)(v8 + v9 + 60) & 8) != 0;
    v11 = *(unsigned __int16 *)(v8 + v9 + 56);
    *(_BYTE *)(v8 + v9 + 60) &= ~1u;
    v12 = *(_QWORD *)(a1 + 32);
    if ( (*(_BYTE *)(v1 + 136) & 2) != 0 )
    {
      v13 = *(_QWORD *)(v8 + v12 + 24);
      if ( *(_DWORD *)(v1 + 572) == 1 )
        v6 = sub_1400EC40C(v1, *(_DWORD *)(v8 + v12 + 80));
      v14 = *(_BYTE *)(v13 + 2) == 40;
      v15 = *(_QWORD *)(v8 + *(_QWORD *)(a1 + 32) + 40);
      *(_BYTE *)(v13 + 3) = 14;
      if ( v14 )
        v16 = *(_QWORD *)(v13 + 96);
      else
        v16 = *(_QWORD *)(v13 + 48);
      v17 = *(_DWORD *)(v16 + 20);
      sub_1400DF424(v16);
      if ( v19 )
        v19(v1, v13, v20, v17, v6, v15);
      else
        KeSetEvent((PRKEVENT)(v18 + 664), 0, 0);
      v21 = 2 * v11;
      *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v21) = 0LL;
      *(_WORD *)(*(_QWORD *)(a1 + 24) + 8 * v21 + 8) = -1;
      *(_QWORD *)(v8 + *(_QWORD *)(a1 + 32) + 24) = 0LL;
      *(_DWORD *)(v8 + *(_QWORD *)(a1 + 32) + 80) = 0;
      *(_QWORD *)(v8 + *(_QWORD *)(a1 + 32) + 32) = 0LL;
      *(_QWORD *)(v8 + *(_QWORD *)(a1 + 32) + 40) = 0LL;
      goto LABEL_29;
    }
    v22 = 0;
    if ( *(_QWORD *)(v8 + v12 + 16) )
    {
      sub_1401154D0(v1, *(unsigned __int16 *)(v8 + *(_QWORD *)(a1 + 32) + 52));
      v3 = v67;
      v4 = v66;
    }
    if ( (*(_BYTE *)(v8 + *(_QWORD *)(a1 + 32) + 60) & 0x10) != 0
      || (*(_BYTE *)(v8 + *(_QWORD *)(a1 + 32) + 61) & 2) != 0 )
    {
      goto LABEL_30;
    }
    v23 = *(_QWORD *)(a1 + 32);
    if ( !v4 )
    {
      sub_1400F0514(v1, *(unsigned int **)(v23 + v8 + 40), *(unsigned __int16 *)(v23 + v8 + 52));
LABEL_30:
      v3 = v67;
      v4 = v66;
      *(_WORD *)(v8 + *(_QWORD *)(a1 + 32) + 56) = -1;
      goto LABEL_31;
    }
    v6 = 0LL;
    v24 = _InterlockedExchange64((volatile __int64 *)(((unsigned __int64)v3 << 7) + v23 + 24), 0LL);
    v25 = *(_QWORD *)(a1 + 32);
    v26 = v1;
    v27 = *(_DWORD *)(v8 + v25 + 80);
    if ( !v27 )
      goto LABEL_28;
    v70 = sub_1400EC40C(v1, v27);
    v6 = v70;
    if ( v70 )
    {
      if ( (*(_BYTE *)(v8 + *(_QWORD *)(a1 + 32) + 60) & 2) == 0 )
      {
        if ( v24 )
        {
          LOBYTE(v28) = v10;
          sub_1400F73A0(
            v70,
            v24,
            *(unsigned __int16 *)(v8 + *(_QWORD *)(a1 + 32) + 52),
            v28,
            *(_QWORD *)(v8 + *(_QWORD *)(a1 + 32) + 40));
        }
        goto LABEL_29;
      }
      v25 = *(_QWORD *)(a1 + 32);
      v26 = v1;
LABEL_28:
      sub_1400F0514(v26, *(unsigned int **)(v8 + v25 + 40), *(unsigned __int16 *)(v8 + v25 + 52));
LABEL_29:
      v2 = v65;
      goto LABEL_30;
    }
    if ( !v24 )
      goto LABEL_29;
    v14 = byte_140168DAA == 0;
    *(_BYTE *)(v24 + 141) = -84;
    *(_DWORD *)(v24 + 48) = -2147483619;
    if ( v14 )
      goto LABEL_99;
    v71 = 0LL;
    IoGetActivityIdIrp(v24, &v71);
    v30 = *(_QWORD *)(v24 + 184);
    if ( *(_BYTE *)v30 == 14 )
    {
      if ( (byte_1401694F2 & 8) == 0 )
        goto LABEL_99;
      v33 = (const EVENT_DESCRIPTOR *)&unk_140148B18;
      goto LABEL_47;
    }
    if ( *(_BYTE *)v30 != 15 )
    {
      if ( *(_BYTE *)v30 == 27 )
      {
        if ( *(_BYTE *)(v30 + 1) == 7 && !*(_DWORD *)(v30 + 8) )
        {
          if ( (byte_1401694F2 & 0x40) != 0 )
          {
            v31 = *(unsigned int **)(v24 + 56);
            if ( v31 )
              v32 = *v31;
            else
              v32 = 0LL;
            LODWORD(v58) = *(_DWORD *)(v24 + 48);
            LODWORD(v57) = v32;
            sub_140056AB0(v32, v30, &v71, v24, v57, v58);
          }
          goto LABEL_99;
        }
        if ( (byte_1401694F2 & 0x20) != 0 )
        {
          v33 = &stru_140149FE8;
LABEL_47:
          LODWORD(v57) = *(_DWORD *)(v24 + 48);
          sub_140052F3C(v29, v33, &v71, v24, v57);
        }
      }
LABEL_99:
      IofCompleteRequest((PIRP)v24, 0);
      v6 = 0LL;
      goto LABEL_29;
    }
    if ( byte_1401694F1 >= 0 )
      goto LABEL_99;
    v34 = *(_QWORD *)(v30 + 8);
    v35 = 0;
    v36 = 0LL;
    v37 = 0;
    v64 = 0;
    v38 = 0;
    v63 = 0;
    v39 = 0;
    v40 = 0;
    if ( *(_BYTE *)(v34 + 2) == 40 )
    {
      v41 = 0LL;
      if ( *(_DWORD *)(v34 + 20) )
        goto LABEL_98;
      v42 = *(_DWORD *)(v34 + 56);
      v43 = 0;
      if ( v42 )
      {
        do
        {
          v44 = *(unsigned int *)(v34 + 4LL * v43 + 120);
          if ( (unsigned int)v44 >= 0x80 )
          {
            v45 = *(unsigned int *)(v34 + 16);
            if ( (unsigned int)v44 < (unsigned int)v45 )
            {
              v46 = (unsigned int)v44;
              v47 = *(_DWORD *)(v44 + v34) - 64;
              if ( v47 )
              {
                v48 = v47 - 1;
                if ( v48 )
                {
                  if ( v48 == 1 && v46 + 40 <= v45 )
                  {
                    if ( *(_DWORD *)(v46 + v34 + 12) )
                      v41 = (char *)(v46 + v34 + 32);
                    v36 = *(_BYTE **)(v46 + v34 + 24);
LABEL_61:
                    v35 = *(_BYTE *)(v46 + v34 + 8);
                    v38 = 0;
                    v37 = *(_BYTE *)(v46 + v34 + 9);
                    goto LABEL_70;
                  }
                }
                else if ( v46 + 56 <= v45 )
                {
                  v22 = 1;
                  if ( *(_BYTE *)(v46 + v34 + 10) )
                    v41 = (char *)(v46 + v34 + 24);
                  v35 = *(_BYTE *)(v46 + v34 + 8);
                  v36 = *(_BYTE **)(v46 + v34 + 16);
                  v37 = *(_BYTE *)(v46 + v34 + 9);
                }
              }
              else if ( v46 + 40 <= v45 )
              {
                if ( *(_BYTE *)(v46 + v34 + 10) )
                  v41 = (char *)(v46 + v34 + 24);
                v36 = *(_BYTE **)(v46 + v34 + 16);
                goto LABEL_61;
              }
              if ( v22 )
                break;
            }
          }
          ++v43;
        }
        while ( v43 < v42 );
        v38 = 0;
      }
LABEL_70:
      if ( !v41 )
        goto LABEL_98;
      v40 = 0;
      v49 = *v41;
      v39 = 0;
    }
    else
    {
      v49 = *(_BYTE *)(v34 + 72);
      v36 = *(_BYTE **)(v34 + 32);
      v37 = *(_BYTE *)(v34 + 11);
      v35 = *(_BYTE *)(v34 + 4);
      if ( *(_BYTE *)(v34 + 2) )
      {
LABEL_98:
        v1 = v68;
        goto LABEL_99;
      }
    }
    if ( ((v49 - 8) & 0x5D) == 0 )
    {
      v50 = *(_BYTE *)(v34 + 3);
      if ( v50 == 1 || !v36 || !v37 )
        goto LABEL_96;
      LOBYTE(v34) = 0;
      v51 = &v36[v37];
      v52 = v36 + 8;
      if ( (unsigned __int8)((*v36 & 0x7F) - 114) <= 1u )
      {
        if ( v52 <= v51 )
        {
          LOBYTE(v34) = 1;
          v39 = v36[2];
          v38 = v36[1] & 0xF;
          v40 = v36[3];
        }
      }
      else
      {
        if ( v52 <= v51 )
        {
          v34 = (unsigned __int64)(v36 + 13);
          v38 = v36[2] & 0xF;
          v53 = v37;
          if ( (unsigned int)(unsigned __int8)v36[7] + 8 <= v37 )
            v53 = (unsigned __int8)v36[7] + 8;
          v54 = (unsigned __int64)&v36[v53];
          if ( v34 > v54 )
            v64 = 0;
          else
            v64 = v36[12];
          if ( (unsigned __int64)(v36 + 14) > v54 )
            v63 = 0;
          else
            v63 = *(_BYTE *)v34;
          LOBYTE(v34) = 1;
        }
        v40 = v63;
        v39 = v64;
      }
      if ( (_BYTE)v34 )
      {
        v55 = v39;
        v56 = v40;
      }
      else
      {
LABEL_96:
        v38 = 0;
        v55 = 0;
        v56 = 0LL;
      }
      LOBYTE(v62) = v56;
      LOBYTE(v61) = v55;
      LOBYTE(v60) = v38;
      LOBYTE(v59) = v35;
      LOBYTE(v58) = v50;
      LODWORD(v57) = *(_DWORD *)(v24 + 48);
      sub_140052E64(v56, v34, &v71, v24, v57, v58, v59, v60, v61, v62, v24);
    }
    goto LABEL_98;
  }
LABEL_32:
  *(_DWORD *)(a1 + 140) = 0;
  *(_WORD *)(a1 + 148) = 0;
  return result;
}
