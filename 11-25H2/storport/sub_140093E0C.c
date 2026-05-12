/*
 * XREFs of sub_140093E0C @ 0x140093E0C
 * Callers:
 *     sub_14002E460 @ 0x14002E460 (sub_14002E460.c)
 * Callees:
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140055C18 @ 0x140055C18 (sub_140055C18.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int64 __fastcall sub_140093E0C(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v4; // rcx
  __int64 v6; // rdx
  int v7; // ebx
  unsigned int v8; // ebp
  int v9; // eax
  int v10; // r9d
  int v11; // r9d
  int v12; // r9d
  bool v13; // zf
  unsigned __int64 v14; // rcx
  __int64 v15; // rdx
  int *v16; // rax
  const EVENT_DESCRIPTOR *v17; // rdx
  unsigned __int64 v18; // rdx
  char v19; // r14
  _BYTE *v20; // r9
  unsigned __int8 v21; // r10
  char v22; // si
  char v23; // r11
  char v24; // r15
  char *v25; // r11
  unsigned int v26; // r13d
  unsigned int *v27; // r12
  __int64 v28; // rax
  unsigned __int64 v29; // rbp
  char v30; // cl
  char v31; // r8
  _BYTE *v32; // rax
  unsigned int v33; // eax
  char v34; // al
  int v36; // [rsp+20h] [rbp-A8h]
  char v37; // [rsp+60h] [rbp-68h]
  char v38; // [rsp+61h] [rbp-67h]
  unsigned int v39; // [rsp+64h] [rbp-64h]
  unsigned int v40; // [rsp+68h] [rbp-60h]
  GUID v41; // [rsp+70h] [rbp-58h] BYREF

  v2 = *(_QWORD *)(a2 + 184);
  v4 = *(_QWORD *)(a2 + 24);
  v6 = 36LL;
  if ( *(_DWORD *)(v2 + 8) >= 0x24u )
  {
    v7 = 0;
    *(_QWORD *)(v4 + 8) = 0LL;
    *(_QWORD *)(v4 + 16) = 0LL;
    *(_QWORD *)(v4 + 24) = 0LL;
    *(_DWORD *)(v4 + 32) = 0;
    *(_DWORD *)v4 = 36;
    *(_DWORD *)(v4 + 4) = 36;
    *(_BYTE *)(v4 + 8) = *(_BYTE *)(a1 + 3368);
    *(_DWORD *)(v4 + 32) = *(_DWORD *)(a1 + 3380);
    *(_DWORD *)(v4 + 12) = *(_DWORD *)(a1 + 3372);
    *(_DWORD *)(v4 + 20) = 1000 * *(_DWORD *)(a1 + 3384);
    v9 = -1;
    v10 = *(_DWORD *)(a1 + 3376);
    if ( v10 == -1 )
      v11 = -1;
    else
      v11 = 500 * v10;
    *(_DWORD *)(v4 + 28) = v11;
    v12 = *(_DWORD *)(a1 + 3392);
    if ( v12 != -1 )
      v9 = 500 * v12;
    *(_DWORD *)(v4 + 16) = v9;
    v8 = 0;
    *(_DWORD *)(v4 + 24) = 1000 * *(_DWORD *)(a1 + 3388);
  }
  else
  {
    if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
      && (HIDWORD(off_140168120->Timer) & 0x10) != 0
      && BYTE1(off_140168120->Timer) >= 2u )
    {
      sub_140055C18((__int64)off_140168120->AttachedDevice, 0x27u, (__int64)&unk_14014D880, a1);
    }
    v7 = 0;
    v8 = -1073741789;
    v6 = 0LL;
  }
  v39 = v8;
  *(_QWORD *)(a2 + 56) = v6;
  v13 = byte_140168DAA == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v8;
  if ( v13 )
    goto LABEL_79;
  v41 = 0LL;
  IoGetActivityIdIrp(a2, &v41);
  v15 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v15 == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_79;
    v36 = *(_DWORD *)(a2 + 48);
    v17 = (const EVENT_DESCRIPTOR *)&unk_140148B18;
    goto LABEL_78;
  }
  if ( *(_BYTE *)v15 != 15 )
  {
    if ( *(_BYTE *)v15 != 27 )
      goto LABEL_79;
    if ( *(_BYTE *)(v15 + 1) == 7 && !*(_DWORD *)(v15 + 8) )
    {
      if ( (byte_1401694F2 & 0x40) != 0 )
      {
        v16 = *(int **)(a2 + 56);
        if ( v16 )
          v7 = *v16;
        sub_140056AB0(v14, v15, &v41, a2, v7, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_79;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_79;
    v17 = &stru_140149FE8;
    v36 = *(_DWORD *)(a2 + 48);
LABEL_78:
    sub_140052F3C(v14, v17, &v41, a2, v36);
    goto LABEL_79;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_79;
  v18 = *(_QWORD *)(v15 + 8);
  v19 = 0;
  v20 = 0LL;
  v37 = 0;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  if ( *(_BYTE *)(v18 + 2) != 40 )
  {
    v30 = *(_BYTE *)(v18 + 72);
    v20 = *(_BYTE **)(v18 + 32);
    v21 = *(_BYTE *)(v18 + 11);
    v19 = *(_BYTE *)(v18 + 4);
    if ( !*(_BYTE *)(v18 + 2) )
      goto LABEL_55;
    goto LABEL_79;
  }
  v25 = 0LL;
  v38 = 0;
  if ( *(_DWORD *)(v18 + 20) )
    goto LABEL_79;
  v26 = 0;
  v40 = *(_DWORD *)(v18 + 56);
  if ( !v40 )
    goto LABEL_52;
  v27 = (unsigned int *)(v18 + 120);
  while ( 1 )
  {
    v28 = *v27;
    if ( (unsigned int)v28 >= 0x80 )
    {
      v29 = *(unsigned int *)(v18 + 16);
      if ( (unsigned int)v28 < (unsigned int)v29 )
        break;
    }
LABEL_45:
    ++v26;
    ++v27;
    if ( v26 >= v40 )
      goto LABEL_51;
  }
  if ( *(_DWORD *)(v28 + v18) != 64 )
  {
    v14 = (unsigned int)(*(_DWORD *)(v28 + v18) - 65);
    if ( *(_DWORD *)(v28 + v18) == 65 )
    {
      v14 = v28 + 56;
      if ( v28 + 56 <= v29 )
      {
        v38 = 1;
        if ( *(_BYTE *)(v28 + v18 + 10) )
          v25 = (char *)(v28 + v18 + 24);
        v19 = *(_BYTE *)(v28 + v18 + 8);
        v20 = *(_BYTE **)(v28 + v18 + 16);
        v21 = *(_BYTE *)(v28 + v18 + 9);
      }
    }
    else if ( *(_DWORD *)(v28 + v18) == 66 )
    {
      v14 = v28 + 40;
      if ( v28 + 40 <= v29 )
      {
        if ( *(_DWORD *)(v28 + v18 + 12) )
          v25 = (char *)(v28 + v18 + 32);
        v20 = *(_BYTE **)(v28 + v18 + 24);
        goto LABEL_50;
      }
    }
    goto LABEL_44;
  }
  v14 = v28 + 40;
  if ( v28 + 40 > v29 )
  {
LABEL_44:
    if ( v38 )
      goto LABEL_51;
    goto LABEL_45;
  }
  if ( *(_BYTE *)(v28 + v18 + 10) )
    v25 = (char *)(v28 + v18 + 24);
  v20 = *(_BYTE **)(v28 + v18 + 16);
LABEL_50:
  v21 = *(_BYTE *)(v28 + v18 + 9);
  v19 = *(_BYTE *)(v28 + v18 + 8);
LABEL_51:
  v8 = v39;
LABEL_52:
  if ( v25 )
  {
    v30 = *v25;
    v23 = 0;
LABEL_55:
    LOBYTE(v14) = v30 - 8;
    if ( (v14 & 0x5D) == 0 )
    {
      v31 = *(_BYTE *)(v18 + 3);
      if ( v31 == 1 || !v20 || !v21 )
        goto LABEL_74;
      LOBYTE(v18) = 0;
      v14 = (unsigned __int64)&v20[v21];
      v32 = v20 + 8;
      if ( (unsigned __int8)((*v20 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v32 <= v14 )
        {
          LOBYTE(v18) = 1;
          v23 = v20[2];
          v22 = v20[1] & 0xF;
          v24 = v20[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v32 <= v14 )
        {
          v22 = v20[2] & 0xF;
          v33 = v21;
          if ( (unsigned int)(unsigned __int8)v20[7] + 8 <= v21 )
            v33 = (unsigned __int8)v20[7] + 8;
          v14 = (unsigned __int64)(v20 + 13);
          v18 = (unsigned __int64)&v20[v33];
          if ( (unsigned __int64)(v20 + 13) > v18 )
            v37 = 0;
          else
            v37 = v20[12];
          if ( (unsigned __int64)(v20 + 14) <= v18 )
            v24 = *(_BYTE *)v14;
          LOBYTE(v18) = 1;
        }
        v23 = v37;
      }
      if ( (_BYTE)v18 )
      {
        LOBYTE(v7) = v23;
        v34 = v24;
      }
      else
      {
LABEL_74:
        v22 = 0;
        v34 = 0;
      }
      sub_140052E64(v14, v18, &v41, a2, *(_DWORD *)(a2 + 48), v31, v19, v22, v7, v34, a2);
    }
  }
LABEL_79:
  IofCompleteRequest((PIRP)a2, 0);
  return v8;
}
