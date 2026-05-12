/*
 * XREFs of sub_1400E74D0 @ 0x1400E74D0
 * Callers:
 *     sub_1400E2990 @ 0x1400E2990 (sub_1400E2990.c)
 *     sub_1400E63C4 @ 0x1400E63C4 (sub_1400E63C4.c)
 *     sub_1400E91B4 @ 0x1400E91B4 (sub_1400E91B4.c)
 * Callees:
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     sub_1400C9458 @ 0x1400C9458 (sub_1400C9458.c)
 *     sub_1400DF424 @ 0x1400DF424 (sub_1400DF424.c)
 *     sub_1400EC40C @ 0x1400EC40C (sub_1400EC40C.c)
 *     sub_1400F2254 @ 0x1400F2254 (sub_1400F2254.c)
 *     sub_1401154D0 @ 0x1401154D0 (sub_1401154D0.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14013C5D0 (_guard_dispatch_icall.c)
 */

char __fastcall sub_1400E74D0(__int64 a1, char a2, int a3)
{
  int v3; // esi
  unsigned int v4; // edi
  __int64 v5; // r13
  int v7; // r15d
  bool v8; // zf
  __int64 v9; // rax
  unsigned int v10; // edx
  __int64 v11; // r8
  __int64 v12; // rbp
  __int64 v13; // rcx
  __int64 v14; // r12
  __int64 v15; // rcx
  __int64 v16; // rsi
  __int64 v17; // rdi
  __int64 v18; // r14
  unsigned int v19; // r15d
  void (__fastcall *v20)(__int64, __int64, __int64, _QWORD, __int64, __int64); // r10
  __int64 v21; // r11
  __int64 v22; // rcx
  char v23; // r14
  __int64 v24; // rdx
  void (__fastcall *v25)(__int64, _QWORD, _QWORD); // rax
  __int64 v26; // rax
  unsigned __int64 v27; // rsi
  __int64 v28; // rdi
  __int64 v29; // rcx
  __int64 v30; // rdx
  unsigned int *v31; // rax
  __int64 v32; // rcx
  const EVENT_DESCRIPTOR *v33; // rdx
  __int64 v34; // rdx
  _BYTE *v35; // r9
  unsigned __int8 v36; // r11
  char v37; // si
  char v38; // r15
  int v39; // eax
  unsigned __int8 v40; // r14
  char *v41; // r14
  unsigned int v42; // esi
  unsigned int v43; // r12d
  __int64 v44; // rcx
  unsigned __int64 v45; // r10
  __int64 v46; // r8
  int v47; // ecx
  int v48; // ecx
  char v49; // r10
  char v50; // cl
  char v51; // r8
  _BYTE *v52; // rax
  unsigned __int8 *v53; // rdx
  unsigned int v54; // eax
  unsigned __int64 v55; // rcx
  char v56; // al
  __int64 v57; // rcx
  int v58; // eax
  unsigned int i; // edx
  __int64 v60; // rcx
  signed __int32 v62[8]; // [rsp+0h] [rbp-D8h] BYREF
  __int64 v63; // [rsp+20h] [rbp-B8h]
  __int64 v64; // [rsp+28h] [rbp-B0h]
  __int64 v65; // [rsp+30h] [rbp-A8h]
  __int64 v66; // [rsp+38h] [rbp-A0h]
  __int64 v67; // [rsp+40h] [rbp-98h]
  __int64 v68; // [rsp+48h] [rbp-90h]
  __int64 v69; // [rsp+50h] [rbp-88h]
  char v70; // [rsp+60h] [rbp-78h]
  char v71; // [rsp+61h] [rbp-77h]
  unsigned __int8 v72; // [rsp+62h] [rbp-76h]
  char v73; // [rsp+63h] [rbp-75h]
  char v74; // [rsp+64h] [rbp-74h]
  char v75; // [rsp+65h] [rbp-73h]
  unsigned int v76; // [rsp+68h] [rbp-70h]
  int v77; // [rsp+6Ch] [rbp-6Ch]
  unsigned __int64 v78; // [rsp+70h] [rbp-68h]
  unsigned int v79; // [rsp+78h] [rbp-60h]
  int v80; // [rsp+7Ch] [rbp-5Ch]
  __int64 v81; // [rsp+80h] [rbp-58h]
  __int64 v82; // [rsp+88h] [rbp-50h]
  union _LARGE_INTEGER Interval; // [rsp+90h] [rbp-48h] BYREF
  GUID v84; // [rsp+98h] [rbp-40h] BYREF

  v4 = *(_DWORD *)(a1 + 124);
  v5 = *(_QWORD *)(a1 + 88);
  Interval.QuadPart = 0LL;
  LOBYTE(v3) = 0;
  v74 = a2;
  v7 = a3;
  v80 = a3;
  v8 = (*(_BYTE *)(v5 + 136) & 2) == 0;
  v77 = v3;
  if ( v8 )
    --v4;
  v82 = 0LL;
  v79 = v4;
  v70 = 0;
  LOBYTE(v9) = sub_1400C9458(v5, a1);
  if ( !(_BYTE)v9 )
    return v9;
  *(_QWORD *)(a1 + 112) |= 4uLL;
  _InterlockedOr(v62, 0);
  v10 = 0;
  v76 = 0;
  if ( !v4 )
    goto LABEL_105;
  v11 = 0LL;
  v81 = 0LL;
  do
  {
    v9 = *(_QWORD *)(a1 + 32);
    v12 = v11 << 7;
    if ( (*(_BYTE *)(v9 + (v11 << 7) + 60) & 1) != 0 )
    {
      v13 = *(_QWORD *)(a1 + 32);
      v14 = *(unsigned __int16 *)(v13 + v12 + 56);
      *(_BYTE *)(v13 + v12 + 60) &= ~1u;
      v15 = *(_QWORD *)(a1 + 32);
      if ( (*(_BYTE *)(v5 + 136) & 2) != 0 )
      {
        v16 = *(_QWORD *)(v15 + v12 + 24);
        if ( *(_BYTE *)(v16 + 2) == 40 )
          v17 = *(_QWORD *)(v16 + 96);
        else
          v17 = *(_QWORD *)(v16 + 48);
        if ( !v17 )
          goto LABEL_99;
        if ( *(char *)(v17 + 17) < 0 )
        {
          v23 = 1;
          v70 = 1;
LABEL_100:
          v9 = *(_QWORD *)(a1 + 32);
          v4 = v79;
          LOBYTE(v3) = v77;
          v7 = v80;
          *(_WORD *)(v9 + v12 + 56) = -1;
          goto LABEL_102;
        }
        if ( *(_DWORD *)(v5 + 572) == 1 )
          v82 = sub_1400EC40C(v5, *(unsigned int *)(v15 + v12 + 80));
        *(_BYTE *)(v16 + 3) = v74;
        v18 = *(_QWORD *)(v17 + 160);
        v19 = *(_DWORD *)(v17 + 20);
        sub_1400DF424(v17);
        if ( v20 )
          v20(v5, v16, v18, v19, v82, v21);
        else
          KeSetEvent((PRKEVENT)(v17 + 664), 0, 0);
        v22 = 2 * v14;
        *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v22) = 0LL;
        *(_WORD *)(*(_QWORD *)(a1 + 24) + 8 * v22 + 8) = -1;
        *(_QWORD *)(*(_QWORD *)(a1 + 32) + v12 + 24) = 0LL;
        *(_DWORD *)(*(_QWORD *)(a1 + 32) + v12 + 80) = 0;
        *(_QWORD *)(*(_QWORD *)(a1 + 32) + v12 + 32) = 0LL;
        *(_QWORD *)(*(_QWORD *)(a1 + 32) + v12 + 40) = 0LL;
LABEL_19:
        v10 = v76;
        v11 = v81;
LABEL_99:
        v23 = v70;
        goto LABEL_100;
      }
      if ( *(_QWORD *)(v15 + v12 + 16) )
        sub_1401154D0(v5, *(unsigned __int16 *)(v15 + v12 + 52));
      v24 = *(_QWORD *)(a1 + 32);
      v25 = *(void (__fastcall **)(__int64, _QWORD, _QWORD))(v24 + v12 + 32);
      if ( v25 )
        v25(v5, *(_QWORD *)(v24 + v12 + 40), 0LL);
      v3 = (unsigned __int8)v3;
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 32) + v12 + 60) & 0x20) != 0 )
        v3 = 1;
      v26 = *(_QWORD *)(a1 + 32);
      v77 = v3;
      v27 = (unsigned __int64)v76 << 7;
      v78 = v27;
      v28 = _InterlockedExchange64((volatile __int64 *)(v26 + v27 + 24), 0LL);
      if ( !v28 || (*(_BYTE *)(*(_QWORD *)(a1 + 32) + v12 + 60) & 2) != 0 )
      {
LABEL_96:
        ExpInterlockedPushEntrySList((PSLIST_HEADER)(a1 + 64), (PSLIST_ENTRY)(v27 + *(_QWORD *)(a1 + 32)));
        goto LABEL_19;
      }
      v8 = byte_140168DAA == 0;
      *(_BYTE *)(v28 + 141) = -84;
      *(_DWORD *)(v28 + 48) = v7;
      if ( v8 )
        goto LABEL_95;
      v84 = 0LL;
      IoGetActivityIdIrp(v28, &v84);
      v30 = *(_QWORD *)(v28 + 184);
      if ( *(_BYTE *)v30 == 14 )
      {
        if ( (byte_1401694F2 & 8) == 0 )
          goto LABEL_95;
        v33 = (const EVENT_DESCRIPTOR *)&unk_140148B18;
        goto LABEL_42;
      }
      if ( *(_BYTE *)v30 != 15 )
      {
        if ( *(_BYTE *)v30 == 27 )
        {
          if ( *(_BYTE *)(v30 + 1) == 7 && !*(_DWORD *)(v30 + 8) )
          {
            if ( (byte_1401694F2 & 0x40) != 0 )
            {
              v31 = *(unsigned int **)(v28 + 56);
              if ( v31 )
                v32 = *v31;
              else
                v32 = 0LL;
              LODWORD(v64) = *(_DWORD *)(v28 + 48);
              LODWORD(v63) = v32;
              sub_140056AB0(v32, v30, &v84, v28, v63, v64);
            }
            goto LABEL_95;
          }
          if ( (byte_1401694F2 & 0x20) != 0 )
          {
            v33 = &stru_140149FE8;
LABEL_42:
            LODWORD(v63) = *(_DWORD *)(v28 + 48);
            sub_140052F3C(v29, v33, &v84, v28, v63);
          }
        }
LABEL_95:
        IofCompleteRequest((PIRP)v28, 0);
        goto LABEL_96;
      }
      if ( byte_1401694F1 >= 0 )
        goto LABEL_95;
      v34 = *(_QWORD *)(v30 + 8);
      v35 = 0LL;
      v71 = 0;
      v36 = 0;
      v37 = 0;
      v75 = 0;
      v38 = 0;
      v73 = 0;
      v39 = *(unsigned __int8 *)(v34 + 2);
      v40 = 0;
      v72 = 0;
      if ( (_BYTE)v39 == 40 )
      {
        v41 = 0LL;
        if ( *(_DWORD *)(v34 + 20) )
          goto LABEL_94;
        v42 = 0;
        v43 = *(_DWORD *)(v34 + 56);
        if ( v43 )
        {
          do
          {
            v44 = *(unsigned int *)(v34 + 4LL * v42 + 120);
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
                      v35 = *(_BYTE **)(v46 + v34 + 24);
LABEL_56:
                      v49 = *(_BYTE *)(v46 + v34 + 8);
                      v36 = *(_BYTE *)(v46 + v34 + 9);
                      goto LABEL_65;
                    }
                  }
                  else if ( v46 + 56 <= v45 )
                  {
                    v38 = 1;
                    if ( *(_BYTE *)(v46 + v34 + 10) )
                      v41 = (char *)(v46 + v34 + 24);
                    v35 = *(_BYTE **)(v46 + v34 + 16);
                    v36 = *(_BYTE *)(v46 + v34 + 9);
                    v71 = *(_BYTE *)(v46 + v34 + 8);
                  }
                }
                else if ( v46 + 40 <= v45 )
                {
                  if ( *(_BYTE *)(v46 + v34 + 10) )
                    v41 = (char *)(v46 + v34 + 24);
                  v35 = *(_BYTE **)(v46 + v34 + 16);
                  goto LABEL_56;
                }
                if ( v38 )
                  break;
              }
            }
            ++v42;
          }
          while ( v42 < v43 );
          v49 = v71;
        }
        else
        {
          v49 = 0;
        }
LABEL_65:
        if ( !v41 )
          goto LABEL_94;
        v37 = v75;
        v50 = *v41;
        v38 = v75;
        v40 = v75;
      }
      else
      {
        v50 = *(_BYTE *)(v34 + 72);
        v35 = *(_BYTE **)(v34 + 32);
        v36 = *(_BYTE *)(v34 + 11);
        v49 = *(_BYTE *)(v34 + 4);
        if ( v39 )
        {
LABEL_94:
          v27 = v78;
          goto LABEL_95;
        }
      }
      if ( ((v50 - 8) & 0x5D) == 0 )
      {
        v51 = *(_BYTE *)(v34 + 3);
        if ( v51 == 1 || !v35 || !v36 )
          goto LABEL_92;
        LOBYTE(v34) = 0;
        v52 = v35 + 8;
        if ( (unsigned __int8)((*v35 & 0x7F) - 114) <= 1u )
        {
          if ( v52 <= &v35[v36] )
          {
            v34 = 1LL;
            v38 = v35[2];
            v37 = v35[1] & 0xF;
            v40 = v35[3];
          }
        }
        else
        {
          if ( v52 <= &v35[v36] )
          {
            v53 = v35 + 13;
            v37 = v35[2] & 0xF;
            v54 = v36;
            if ( (unsigned int)(unsigned __int8)v35[7] + 8 <= v36 )
              v54 = (unsigned __int8)v35[7] + 8;
            v55 = (unsigned __int64)&v35[v54];
            if ( (unsigned __int64)v53 > v55 )
              v73 = 0;
            else
              v73 = v35[12];
            if ( (unsigned __int64)(v35 + 14) > v55 )
              v72 = 0;
            else
              v72 = *v53;
            v34 = 1LL;
          }
          v40 = v72;
          v38 = v73;
        }
        if ( (_BYTE)v34 )
        {
          v56 = v38;
          v57 = v40;
        }
        else
        {
LABEL_92:
          v37 = 0;
          v56 = 0;
          v57 = 0LL;
        }
        v69 = v28;
        LOBYTE(v68) = v57;
        LOBYTE(v67) = v56;
        v58 = *(_DWORD *)(v28 + 48);
        LOBYTE(v66) = v37;
        LOBYTE(v65) = v49;
        LOBYTE(v64) = v51;
        LODWORD(v63) = v58;
        sub_140052E64(v57, v34, &v84, v28, v63, v64, v65, v66, v67, v68, v28);
      }
      goto LABEL_94;
    }
    v23 = v70;
LABEL_102:
    ++v10;
    ++v11;
    v76 = v10;
    v81 = v11;
  }
  while ( v10 < v4 );
  if ( v23 )
  {
    Interval.QuadPart = -10000000LL;
    LOBYTE(v9) = KeDelayExecutionThread(0, 0, &Interval);
  }
LABEL_105:
  for ( i = 0; i < *(_DWORD *)(a1 + 124); *(_WORD *)(v9 + 8 * v60 + 8) = -1 )
  {
    v60 = i++;
    v60 *= 2LL;
    *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v60) = 0LL;
    v9 = *(_QWORD *)(a1 + 24);
  }
  *(_DWORD *)(a1 + 140) = 0;
  *(_WORD *)(a1 + 148) = 0;
  if ( (_BYTE)v3 )
  {
    _interlockedbittestandreset((volatile signed __int32 *)(v5 + 948), 1u);
    LOBYTE(v9) = sub_1400F2254(v5);
  }
  *(_QWORD *)(a1 + 112) &= ~4uLL;
  return v9;
}
