/*
 * XREFs of sub_14019EDA4 @ 0x14019EDA4
 * Callers:
 *     sub_14010216C @ 0x14010216C (sub_14010216C.c)
 * Callees:
 *     sub_140037A5C @ 0x140037A5C (sub_140037A5C.c)
 *     sub_140037B0C @ 0x140037B0C (sub_140037B0C.c)
 *     sub_14003F840 @ 0x14003F840 (sub_14003F840.c)
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140055D8C @ 0x140055D8C (sub_140055D8C.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     sub_140078064 @ 0x140078064 (sub_140078064.c)
 *     sub_1400AEFC8 @ 0x1400AEFC8 (sub_1400AEFC8.c)
 *     sub_1400FA5FC @ 0x1400FA5FC (sub_1400FA5FC.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int64 __fastcall sub_14019EDA4(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  int v3; // ebx
  char v6; // al
  int v7; // edx
  unsigned int v8; // r12d
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  bool v14; // zf
  unsigned __int64 v15; // rcx
  __int64 v16; // rdx
  int *v17; // rax
  const EVENT_DESCRIPTOR *v18; // rdx
  unsigned __int64 v19; // rdx
  char v20; // r15
  _BYTE *v21; // r9
  unsigned __int8 v22; // r10
  char v23; // r11
  char v24; // si
  char v25; // r13
  char *v26; // rsi
  unsigned int v27; // r12d
  unsigned __int64 v28; // r14
  __int64 v29; // r8
  int v30; // ecx
  char v31; // cl
  char v32; // r8
  _BYTE *v33; // rax
  unsigned int v34; // eax
  char v35; // al
  __int64 v37; // [rsp+20h] [rbp-E0h]
  __int64 v38; // [rsp+28h] [rbp-D8h]
  char v39; // [rsp+60h] [rbp-A0h] BYREF
  __int16 v40; // [rsp+64h] [rbp-9Ch] BYREF
  __int16 v41; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v42; // [rsp+6Ch] [rbp-94h] BYREF
  int v43; // [rsp+70h] [rbp-90h] BYREF
  int v44; // [rsp+74h] [rbp-8Ch] BYREF
  unsigned int v45; // [rsp+78h] [rbp-88h]
  __int64 v46; // [rsp+80h] [rbp-80h] BYREF
  GUID v47; // [rsp+88h] [rbp-78h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v48; // [rsp+A0h] [rbp-60h] BYREF
  __int64 *v49; // [rsp+C0h] [rbp-40h]
  __int64 v50; // [rsp+C8h] [rbp-38h]
  __int64 v51; // [rsp+D0h] [rbp-30h]
  __int64 v52; // [rsp+D8h] [rbp-28h]
  __int64 v53; // [rsp+E0h] [rbp-20h]
  __int64 v54; // [rsp+E8h] [rbp-18h]
  int *v55; // [rsp+F0h] [rbp-10h]
  __int64 v56; // [rsp+F8h] [rbp-8h]
  int *v57; // [rsp+100h] [rbp+0h]
  __int64 v58; // [rsp+108h] [rbp+8h]
  unsigned int *v59; // [rsp+110h] [rbp+10h]
  __int64 v60; // [rsp+118h] [rbp+18h]
  _BYTE v61[16]; // [rsp+120h] [rbp+20h] BYREF
  __int16 *v62; // [rsp+130h] [rbp+30h]
  __int64 v63; // [rsp+138h] [rbp+38h]
  __int16 *v64; // [rsp+140h] [rbp+40h]
  __int64 v65; // [rsp+148h] [rbp+48h]
  char *v66; // [rsp+150h] [rbp+50h]
  __int64 v67; // [rsp+158h] [rbp+58h]

  v2 = *(_QWORD *)(a1 + 16);
  v3 = 0;
  if ( *(_DWORD *)(a1 + 96) != 1 )
  {
    _InterlockedExchange((volatile __int32 *)(a1 + 96), 1);
    if ( (int)sub_140078064(*(PDEVICE_OBJECT *)(a1 + 8), (_QWORD *)(*(_QWORD *)(a1 + 128) + 16LL)) < 0 )
    {
      *(_DWORD *)(*(_QWORD *)(a1 + 128) + 136LL) &= ~4u;
    }
    else
    {
      if ( (*(_BYTE *)(a1 + 200) & 2) != 0
        || (v6 = sub_140055D8C(*(_QWORD *)(*(_QWORD *)(a1 + 128) + 16LL)), v7 = 4, !v6) )
      {
        v7 = 0;
      }
      *(_DWORD *)(*(_QWORD *)(a1 + 128) + 136LL) = v7 | *(_DWORD *)(*(_QWORD *)(a1 + 128) + 136LL) & 0xFFFFFFFB;
    }
  }
  v45 = sub_1400FA5FC(a1);
  v8 = v45;
  sub_1400AEFC8(a1);
  if ( (unsigned int)dword_140168178 > 5 && sub_14003F840(v9, 0x400000000000LL) )
  {
    v10 = *(_QWORD *)(v2 + 128);
    v49 = &v46;
    v46 = 0x1000000LL;
    v50 = 8LL;
    v52 = 16LL;
    v51 = v10 + 1032;
    v53 = a1 + 160;
    v43 = *(_DWORD *)(a1 + 56);
    v55 = &v43;
    v54 = 16LL;
    v56 = 4LL;
    v44 = *(_DWORD *)(v10 + 56);
    v57 = &v44;
    v42 = *(unsigned __int16 *)(v2 + 4);
    v59 = &v42;
    v58 = 4LL;
    v60 = 4LL;
    sub_140037B0C((__int64)v61, *(const int **)(v10 + 1016));
    v11 = *(unsigned __int16 *)(v2 + 940);
    v62 = &v40;
    v41 = *(_WORD *)(v2 + 942);
    v64 = &v41;
    v39 = *(_BYTE *)(v2 + 944);
    v66 = &v39;
    v40 = v11;
    v63 = 2LL;
    v65 = 2LL;
    v67 = 1LL;
    sub_140037A5C(v11, (unsigned __int8 *)dword_14015ADEC, v12, v13, 0xCu, &v48);
  }
  v14 = byte_140168DAA == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v8;
  if ( v14 )
    goto LABEL_75;
  v47 = 0LL;
  IoGetActivityIdIrp(a2, &v47);
  v16 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v16 == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_75;
    v18 = &stru_140148B18;
    goto LABEL_74;
  }
  if ( *(_BYTE *)v16 != 15 )
  {
    if ( *(_BYTE *)v16 != 27 )
      goto LABEL_75;
    if ( *(_BYTE *)(v16 + 1) == 7 && !*(_DWORD *)(v16 + 8) )
    {
      if ( (byte_1401694F2 & 0x40) != 0 )
      {
        v17 = *(int **)(a2 + 56);
        if ( v17 )
          v3 = *v17;
        LODWORD(v38) = *(_DWORD *)(a2 + 48);
        LODWORD(v37) = v3;
        sub_140056AB0(v15, v16, &v47, a2, v37, v38);
      }
      goto LABEL_75;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_75;
    v18 = &stru_140149FE8;
LABEL_74:
    LODWORD(v37) = *(_DWORD *)(a2 + 48);
    sub_140052F3C(v15, v18, &v47, a2, v37);
    goto LABEL_75;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_75;
  v19 = *(_QWORD *)(v16 + 8);
  v20 = 0;
  v21 = 0LL;
  LOBYTE(v40) = 0;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  if ( *(_BYTE *)(v19 + 2) != 40 )
  {
    v31 = *(_BYTE *)(v19 + 72);
    v21 = *(_BYTE **)(v19 + 32);
    v22 = *(_BYTE *)(v19 + 11);
    v20 = *(_BYTE *)(v19 + 4);
    if ( !*(_BYTE *)(v19 + 2) )
      goto LABEL_51;
    goto LABEL_75;
  }
  v26 = 0LL;
  v39 = 0;
  if ( *(_DWORD *)(v19 + 20) )
    goto LABEL_75;
  v27 = 0;
  v42 = *(_DWORD *)(v19 + 56);
  if ( !v42 )
    goto LABEL_48;
  while ( 1 )
  {
    v15 = *(unsigned int *)(v19 + 4LL * v27 + 120);
    if ( (unsigned int)v15 >= 0x80 )
    {
      v28 = *(unsigned int *)(v19 + 16);
      if ( (unsigned int)v15 < (unsigned int)v28 )
        break;
    }
LABEL_42:
    if ( ++v27 >= v42 )
      goto LABEL_48;
  }
  v29 = (unsigned int)v15;
  v30 = *(_DWORD *)(v15 + v19) - 64;
  if ( v30 )
  {
    v15 = (unsigned int)(v30 - 1);
    if ( (_DWORD)v15 )
    {
      if ( (_DWORD)v15 == 1 )
      {
        v15 = v29 + 40;
        if ( v29 + 40 <= v28 )
        {
          if ( *(_DWORD *)(v29 + v19 + 12) )
            v26 = (char *)(v29 + v19 + 32);
          v21 = *(_BYTE **)(v29 + v19 + 24);
          goto LABEL_47;
        }
      }
    }
    else
    {
      v15 = v29 + 56;
      if ( v29 + 56 <= v28 )
      {
        v39 = 1;
        if ( *(_BYTE *)(v29 + v19 + 10) )
          v26 = (char *)(v29 + v19 + 24);
        v20 = *(_BYTE *)(v29 + v19 + 8);
        v21 = *(_BYTE **)(v29 + v19 + 16);
        v22 = *(_BYTE *)(v29 + v19 + 9);
      }
    }
    goto LABEL_41;
  }
  v15 = v29 + 40;
  if ( v29 + 40 > v28 )
  {
LABEL_41:
    if ( v39 )
      goto LABEL_48;
    goto LABEL_42;
  }
  if ( *(_BYTE *)(v29 + v19 + 10) )
    v26 = (char *)(v29 + v19 + 24);
  v21 = *(_BYTE **)(v29 + v19 + 16);
LABEL_47:
  v22 = *(_BYTE *)(v29 + v19 + 9);
  v20 = *(_BYTE *)(v29 + v19 + 8);
LABEL_48:
  if ( v26 )
  {
    v31 = *v26;
    v24 = 0;
LABEL_51:
    LOBYTE(v15) = v31 - 8;
    if ( (v15 & 0x5D) == 0 )
    {
      v32 = *(_BYTE *)(v19 + 3);
      if ( v32 == 1 || !v21 || !v22 )
        goto LABEL_70;
      LOBYTE(v19) = 0;
      v15 = (unsigned __int64)&v21[v22];
      v33 = v21 + 8;
      if ( (unsigned __int8)((*v21 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v33 <= v15 )
        {
          LOBYTE(v19) = 1;
          v24 = v21[2];
          v23 = v21[1] & 0xF;
          v25 = v21[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v33 <= v15 )
        {
          v23 = v21[2] & 0xF;
          v34 = v22;
          if ( (unsigned int)(unsigned __int8)v21[7] + 8 <= v22 )
            v34 = (unsigned __int8)v21[7] + 8;
          v15 = (unsigned __int64)(v21 + 13);
          v19 = (unsigned __int64)&v21[v34];
          if ( (unsigned __int64)(v21 + 13) > v19 )
            LOBYTE(v40) = 0;
          else
            LOBYTE(v40) = v21[12];
          if ( (unsigned __int64)(v21 + 14) <= v19 )
            v25 = *(_BYTE *)v15;
          LOBYTE(v19) = 1;
        }
        v24 = v40;
      }
      if ( (_BYTE)v19 )
      {
        LOBYTE(v3) = v24;
        v35 = v25;
      }
      else
      {
LABEL_70:
        v23 = 0;
        v35 = 0;
      }
      LOBYTE(v38) = v32;
      LODWORD(v37) = *(_DWORD *)(a2 + 48);
      sub_140052E64(v15, v19, &v47, a2, v37, v38, v20, v23, v3, v35, a2);
    }
  }
LABEL_75:
  IofCompleteRequest((PIRP)a2, 0);
  return v45;
}
