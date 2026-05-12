/*
 * XREFs of sub_1401AB4D8 @ 0x1401AB4D8
 * Callers:
 *     sub_14002E460 @ 0x14002E460 (sub_14002E460.c)
 * Callees:
 *     sub_140015A14 @ 0x140015A14 (sub_140015A14.c)
 *     sub_140016754 @ 0x140016754 (sub_140016754.c)
 *     sub_140017A20 @ 0x140017A20 (sub_140017A20.c)
 *     sub_140017C40 @ 0x140017C40 (sub_140017C40.c)
 *     sub_140017D90 @ 0x140017D90 (sub_140017D90.c)
 *     sub_1400184D0 @ 0x1400184D0 (sub_1400184D0.c)
 *     sub_14002285C @ 0x14002285C (sub_14002285C.c)
 *     sub_1400229C8 @ 0x1400229C8 (sub_1400229C8.c)
 *     sub_14003846C @ 0x14003846C (sub_14003846C.c)
 *     sub_140039168 @ 0x140039168 (sub_140039168.c)
 *     sub_14003FC20 @ 0x14003FC20 (sub_14003FC20.c)
 *     sub_140042E78 @ 0x140042E78 (sub_140042E78.c)
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     sub_140067F28 @ 0x140067F28 (sub_140067F28.c)
 *     sub_1400680F0 @ 0x1400680F0 (sub_1400680F0.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1401AB4D8(__int64 a1, __int64 a2)
{
  _QWORD *v2; // r13
  int v3; // ebx
  _DWORD *v5; // rcx
  unsigned int *v7; // rsi
  _BYTE **v8; // r15
  unsigned __int64 v9; // rdx
  __int64 v10; // r9
  __int64 v11; // r8
  int v12; // eax
  int v13; // eax
  int v14; // r14d
  _DWORD *v15; // rax
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // r14
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // r13
  PVOID v23; // rax
  __int64 v24; // r8
  __int64 v25; // rcx
  __int64 v26; // rdx
  char *v27; // rdx
  int v28; // eax
  unsigned __int64 v29; // rcx
  int v30; // eax
  bool v31; // zf
  unsigned __int64 v32; // rcx
  _BYTE *v33; // rdx
  __int64 v35; // rax
  const EVENT_DESCRIPTOR *v36; // rdx
  int *v37; // rax
  unsigned __int64 v38; // rdx
  _BYTE *v39; // rax
  char v40; // r11
  unsigned int v41; // eax
  char v42; // r13
  char v43; // si
  char v44; // al
  char v45; // r12
  _BYTE *v46; // r9
  unsigned __int8 v47; // r10
  char *v48; // rsi
  int v49; // eax
  unsigned int v50; // r8d
  unsigned int *v51; // rax
  __int64 v52; // rax
  unsigned __int64 v53; // r15
  char v54; // cl
  char v55; // r8
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-59h]
  char v57; // [rsp+60h] [rbp-19h]
  char v58; // [rsp+61h] [rbp-18h]
  unsigned int v59; // [rsp+64h] [rbp-15h] BYREF
  int v60; // [rsp+68h] [rbp-11h]
  PVOID P; // [rsp+70h] [rbp-9h] BYREF
  unsigned __int64 v62; // [rsp+78h] [rbp-1h]
  GUID v63; // [rsp+80h] [rbp+7h] BYREF

  v2 = *(_QWORD **)(a1 + 24);
  v3 = 0;
  P = 0LL;
  v5 = *(_DWORD **)(a2 + 24);
  v59 = 0;
  v7 = 0LL;
  *(_QWORD *)&v63.Data1 = v2;
  if ( !v5
    || (v8 = (_BYTE **)(a2 + 184), v9 = *(unsigned int *)(*(_QWORD *)(a2 + 184) + 16LL), (unsigned int)v9 < 0x1C)
    || (v10 = (unsigned int)v5[6], v9 < v10 + (unsigned __int64)(unsigned int)v5[5])
    || (v11 = (unsigned int)v5[4], v9 < v11 + (unsigned __int64)(unsigned int)v5[3])
    || v9 < v11 + v10 + 28 )
  {
    v14 = -1073741811;
    v8 = (_BYTE **)(a2 + 184);
    goto LABEL_37;
  }
  v12 = v5[1];
  if ( v12 != -2147483646 )
  {
    if ( v12 == 1 || v12 == -2147483636 )
    {
      if ( byte_140168789 )
      {
LABEL_11:
        v60 = 60;
        v13 = sub_140042E78(a1, a2, (__int64 *)&P, &v59);
        goto LABEL_12;
      }
    }
    else if ( v12 == -2147483634 || v12 == -2147483633 )
    {
      goto LABEL_11;
    }
    v14 = -1073741637;
    goto LABEL_37;
  }
  v60 = 1;
  v13 = sub_14003846C(a1, a2, (__int64 *)&P, &v59);
LABEL_12:
  v14 = v13;
  if ( v13 >= 0 )
  {
    *((_DWORD *)P + 3) = v60;
    v15 = *(_DWORD **)(a1 + 24);
    if ( *v15 == 1094997074 )
    {
      v16 = (__int64)v15 + 482;
    }
    else
    {
      v16 = (__int64)v15 + 274;
      if ( *v15 != 1314275652 )
        v16 = 106LL;
    }
    v7 = (unsigned int *)sub_140015A14(*(_QWORD *)(a1 + 8), 2u, *(_BYTE *)v16, 0);
    if ( v7 )
    {
      v18 = 316LL;
      if ( *(_DWORD *)v2 != 1314275652 )
        v18 = 524LL;
      v19 = (__int64)v2;
      v20 = sub_14002285C(((*(_DWORD *)((char *)v2 + v18) + 7) & 0xFFFFFFF8) + 1184, v17, v2);
      v62 = v20;
      if ( v20 )
      {
        v22 = v20 + 48;
        sub_140017C40(v20 + 48, v21, 0, 0LL);
        v23 = P;
        v24 = v19 + 376;
        *(_QWORD *)(v22 + 184) = P;
        *(_QWORD *)(v22 + 176) = a2;
        *(_QWORD *)(v22 + 168) = v7;
        *(_QWORD *)(v22 + 224) = a1;
        if ( *(_DWORD *)v19 == 1094997074 )
        {
          v25 = v19 + 376;
        }
        else
        {
          v25 = 0LL;
          if ( *(_DWORD *)v19 == 1314275652 )
            v25 = v19 + 168;
        }
        if ( *(_BYTE *)(v25 + 106) == 1 )
        {
          v26 = v7[13];
          *((_QWORD *)v7 + 8) = v23;
          v27 = (char *)v7 + v26;
          v7[15] = v59;
          v7[10] = v60;
          *((_QWORD *)v7 + 12) = v22;
          *((_QWORD *)v7 + 10) = a2;
          v7[6] = 256;
          *((_WORD *)v27 + 1) = *(_WORD *)(*(_QWORD *)(a1 + 24) + 56LL);
          v27[8] = *(_BYTE *)(a1 + 104);
          v27[9] = *(_BYTE *)(a1 + 105);
          v27[10] = *(_BYTE *)(a1 + 106);
        }
        else
        {
          *((_QWORD *)v7 + 3) = v23;
          v7[4] = v59;
          v7[5] = v60;
          *((_QWORD *)v7 + 6) = v22;
          *((_BYTE *)v7 + 2) = 2;
          *(_WORD *)v7 = 88;
          v7[3] = 256;
          *((_BYTE *)v7 + 5) = *(_BYTE *)(a1 + 104);
          *((_BYTE *)v7 + 6) = *(_BYTE *)(a1 + 105);
          *((_BYTE *)v7 + 7) = *(_BYTE *)(a1 + 106);
        }
        v28 = *(_DWORD *)v19;
        v29 = v62 + 1184;
        if ( *((_BYTE *)v7 + 2) == 40 )
        {
          if ( v28 == 1314275652 )
            v24 = v19 + 168;
          if ( ((*(_DWORD *)(v24 + 148) + 7) & 0xFFFFFFF8) != 0 )
            *((_QWORD *)v7 + 13) = v29;
        }
        else
        {
          if ( v28 == 1314275652 )
            v24 = v19 + 168;
          if ( ((*(_DWORD *)(v24 + 148) + 7) & 0xFFFFFFF8) != 0 )
            *((_QWORD *)v7 + 7) = v29;
        }
        KeInitializeEvent((PRKEVENT)(v22 + 664), NotificationEvent, 0);
        sub_14003FC20(v22, (__int64)sub_140038660);
        if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
          && (HIDWORD(off_140168120->Timer) & 0x100) != 0
          && BYTE1(off_140168120->Timer) )
        {
          sub_1400680F0((__int64)off_140168120->AttachedDevice, 0x25u, (__int64)&unk_14014D880, v22, v7);
        }
        if ( *(_BYTE *)(v19 + 4370) )
          v30 = sub_140017D90(v19, (_QWORD *)v22);
        else
          v30 = sub_1400184D0(v19, v22);
        v14 = v30;
        if ( v30 >= 0 )
        {
          KeWaitForSingleObject((PVOID)(v22 + 664), Executive, 0, 0, 0LL);
          if ( !byte_140168789 || (v14 = *((_DWORD *)P + 5), v14 >= 0) )
            v14 = sub_1400229C8(*((_BYTE *)v7 + 3));
        }
        if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
          && (HIDWORD(off_140168120->Timer) & 0x100) != 0
          && BYTE1(off_140168120->Timer) )
        {
          LODWORD(Timeout) = *((unsigned __int8 *)v7 + 3);
          sub_140067F28((__int64)off_140168120->AttachedDevice, 0x26u, (__int64)&unk_14014D880, v14, Timeout);
        }
        sub_140017A20(v22, 0);
        v2 = *(_QWORD **)&v63.Data1;
        sub_140016754(*(__int64 *)&v63.Data1, v62);
      }
      else
      {
        v14 = -1073741670;
      }
    }
    else
    {
      v14 = -1073741670;
    }
  }
LABEL_37:
  if ( P )
    ExFreePoolWithTag(P, 0x72536152u);
  if ( v7 )
  {
    if ( *(_DWORD *)v2 == 1094997074 )
    {
      v35 = (__int64)v2 + 482;
    }
    else
    {
      v35 = (__int64)v2 + 274;
      if ( *(_DWORD *)v2 != 1314275652 )
        v35 = 106LL;
    }
    if ( *(_BYTE *)v35 == 1 )
    {
      *((_QWORD *)v7 + 10) = 0LL;
      *((_QWORD *)v7 + 13) = 0LL;
    }
    else
    {
      *((_QWORD *)v7 + 6) = 0LL;
      *((_QWORD *)v7 + 7) = 0LL;
    }
    sub_140039168(v7);
  }
  v31 = byte_140168DAA == 0;
  *(_QWORD *)(a2 + 56) = 0LL;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v14;
  if ( v31 )
    goto LABEL_44;
  v63 = 0LL;
  IoGetActivityIdIrp(a2, &v63);
  v33 = *v8;
  if ( **v8 == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_44;
    v36 = &stru_140148B18;
    goto LABEL_64;
  }
  if ( **v8 != 15 )
  {
    if ( **v8 != 27 )
      goto LABEL_44;
    if ( v33[1] == 7 && !*((_DWORD *)v33 + 2) )
    {
      if ( (byte_1401694F2 & 0x40) != 0 )
      {
        v37 = *(int **)(a2 + 56);
        if ( v37 )
          v3 = *v37;
        LODWORD(Timeout) = v3;
        sub_140056AB0(v32, (__int64)v33, &v63, a2, Timeout, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_44;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_44;
    v36 = &stru_140149FE8;
LABEL_64:
    LODWORD(Timeout) = *(_DWORD *)(a2 + 48);
    sub_140052F3C(v32, v36, &v63, a2, Timeout);
    goto LABEL_44;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_44;
  v38 = *((_QWORD *)v33 + 1);
  v45 = 0;
  v46 = 0LL;
  v57 = 0;
  v47 = 0;
  v40 = 0;
  v43 = 0;
  v42 = 0;
  if ( *(_BYTE *)(v38 + 2) != 40 )
  {
    v54 = *(_BYTE *)(v38 + 72);
    v46 = *(_BYTE **)(v38 + 32);
    v47 = *(_BYTE *)(v38 + 11);
    v45 = *(_BYTE *)(v38 + 4);
    if ( !*(_BYTE *)(v38 + 2) )
      goto LABEL_137;
    goto LABEL_44;
  }
  v48 = 0LL;
  v58 = 0;
  if ( *(_DWORD *)(v38 + 20) )
    goto LABEL_44;
  v49 = *(_DWORD *)(v38 + 56);
  v32 = 0LL;
  v59 = 0;
  v60 = v49;
  if ( !v49 )
    goto LABEL_134;
  v50 = v60;
  v51 = (unsigned int *)(v38 + 120);
  v62 = v38 + 120;
  while ( 1 )
  {
    v52 = *v51;
    if ( (unsigned int)v52 >= 0x80 )
    {
      v53 = *(unsigned int *)(v38 + 16);
      if ( (unsigned int)v52 < (unsigned int)v53 )
        break;
    }
LABEL_127:
    v32 = (unsigned int)(v32 + 1);
    v51 = (unsigned int *)(v62 + 4);
    v59 = v32;
    v62 += 4LL;
    if ( (unsigned int)v32 >= v50 )
      goto LABEL_134;
  }
  if ( *(_DWORD *)(v52 + v38) != 64 )
  {
    v32 = (unsigned int)(*(_DWORD *)(v52 + v38) - 65);
    if ( *(_DWORD *)(v52 + v38) == 65 )
    {
      v32 = v52 + 56;
      if ( v52 + 56 <= v53 )
      {
        v58 = 1;
        if ( *(_BYTE *)(v52 + v38 + 10) )
          v48 = (char *)(v52 + v38 + 24);
        v45 = *(_BYTE *)(v52 + v38 + 8);
        v46 = *(_BYTE **)(v52 + v38 + 16);
        v47 = *(_BYTE *)(v52 + v38 + 9);
      }
    }
    else if ( *(_DWORD *)(v52 + v38) == 66 )
    {
      v32 = v52 + 40;
      if ( v52 + 40 <= v53 )
      {
        if ( *(_DWORD *)(v52 + v38 + 12) )
          v48 = (char *)(v52 + v38 + 32);
        v46 = *(_BYTE **)(v52 + v38 + 24);
        goto LABEL_133;
      }
    }
    goto LABEL_125;
  }
  v32 = v52 + 40;
  if ( v52 + 40 > v53 )
  {
LABEL_125:
    if ( v58 )
      goto LABEL_134;
    LODWORD(v32) = v59;
    v50 = v60;
    goto LABEL_127;
  }
  if ( *(_BYTE *)(v52 + v38 + 10) )
    v48 = (char *)(v52 + v38 + 24);
  v46 = *(_BYTE **)(v52 + v38 + 16);
LABEL_133:
  v47 = *(_BYTE *)(v52 + v38 + 9);
  v45 = *(_BYTE *)(v52 + v38 + 8);
LABEL_134:
  if ( v48 )
  {
    v54 = *v48;
    v43 = 0;
LABEL_137:
    LOBYTE(v32) = v54 - 8;
    if ( (v32 & 0x5D) == 0 )
    {
      v55 = *(_BYTE *)(v38 + 3);
      if ( v55 == 1 || !v46 || !v47 )
        goto LABEL_87;
      LOBYTE(v38) = 0;
      v32 = (unsigned __int64)&v46[v47];
      v39 = v46 + 8;
      if ( (unsigned __int8)((*v46 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v39 <= v32 )
        {
          LOBYTE(v38) = 1;
          v43 = v46[2];
          v40 = v46[1] & 0xF;
          v42 = v46[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v39 <= v32 )
        {
          v40 = v46[2] & 0xF;
          v41 = v47;
          if ( (unsigned int)(unsigned __int8)v46[7] + 8 <= v47 )
            v41 = (unsigned __int8)v46[7] + 8;
          v32 = (unsigned __int64)(v46 + 13);
          v38 = (unsigned __int64)&v46[v41];
          if ( (unsigned __int64)(v46 + 13) > v38 )
            v57 = 0;
          else
            v57 = v46[12];
          if ( (unsigned __int64)(v46 + 14) <= v38 )
            v42 = *(_BYTE *)v32;
          LOBYTE(v38) = 1;
        }
        v43 = v57;
      }
      if ( (_BYTE)v38 )
      {
        LOBYTE(v3) = v43;
        v44 = v42;
      }
      else
      {
LABEL_87:
        v40 = 0;
        v44 = 0;
      }
      LODWORD(Timeout) = *(_DWORD *)(a2 + 48);
      sub_140052E64(v32, v38, &v63, a2, Timeout, v55, v45, v40, v3, v44, a2);
    }
  }
LABEL_44:
  IofCompleteRequest((PIRP)a2, 0);
  return (unsigned int)v14;
}
