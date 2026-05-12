/*
 * XREFs of sub_1401B259C @ 0x1401B259C
 * Callers:
 *     sub_14002D1F0 @ 0x14002D1F0 (sub_14002D1F0.c)
 * Callees:
 *     sub_14001F350 @ 0x14001F350 (sub_14001F350.c)
 *     sub_140035D98 @ 0x140035D98 (sub_140035D98.c)
 *     sub_140039638 @ 0x140039638 (sub_140039638.c)
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     sub_1401AAA18 @ 0x1401AAA18 (sub_1401AAA18.c)
 *     sub_1401AD6E8 @ 0x1401AD6E8 (sub_1401AD6E8.c)
 */

__int64 __fastcall sub_1401B259C(__int64 a1, __int64 a2, char a3)
{
  int v6; // ebx
  unsigned __int8 *v7; // rdx
  unsigned __int8 *v8; // rax
  _BYTE *v9; // rdx
  unsigned __int8 v10; // bp
  unsigned int v11; // esi
  __int64 *v12; // rsi
  __int64 v13; // rax
  unsigned int v14; // r10d
  unsigned int v15; // r11d
  bool v17; // zf
  unsigned __int64 v18; // rcx
  __int64 v19; // rdx
  int *v20; // rax
  const EVENT_DESCRIPTOR *v21; // rdx
  unsigned __int64 v22; // rdx
  char v23; // r12
  _BYTE *v24; // r9
  unsigned __int8 v25; // r10
  char v26; // bp
  char v27; // r11
  char v28; // r13
  char *v29; // r11
  unsigned int v30; // r15d
  unsigned __int64 v31; // r14
  __int64 v32; // r8
  int v33; // ecx
  char v34; // cl
  char v35; // r8
  _BYTE *v36; // rax
  unsigned int v37; // eax
  char v38; // al
  int v39; // [rsp+20h] [rbp-98h]
  int v40; // [rsp+30h] [rbp-88h]
  char v41; // [rsp+60h] [rbp-58h]
  char v42; // [rsp+61h] [rbp-57h]
  unsigned int v43; // [rsp+64h] [rbp-54h] BYREF
  GUID v44; // [rsp+68h] [rbp-50h] BYREF

  v6 = 0;
  v43 = 0;
  if ( (int)sub_1401AD6E8((IRP *)a2, &v43, (_BYTE *)&v43 + 1, (char *)&v43 + 2) < 0 )
  {
LABEL_15:
    v11 = -1073741810;
    goto LABEL_16;
  }
  if ( sub_140035D98(a2) )
  {
    v8 = v7 + 56;
    v9 = v7 + 57;
  }
  else
  {
    v8 = v7 + 36;
    v9 = v7 + 37;
  }
  v10 = *v8;
  if ( !byte_1401688B4 || v10 != 0xA2 && v10 != 0xB5 || *v9 != 0xEE )
  {
    v12 = sub_14001F350(a1, v43);
    if ( v12 )
    {
      v13 = *(_QWORD *)(a2 + 184);
      if ( *(_BYTE *)(v13 + 1) || (v12[63] & 1) == 0 )
      {
        *(_BYTE *)(v13 + 3) |= 1u;
        sub_140039638(v10);
        sub_1401AAA18(
          (struct _DEVICE_OBJECT *)v12[1],
          (IRP *)a2,
          a3,
          byte_1401688AC != 0 ? 0x2000000 : 0,
          v15,
          v14,
          v40,
          (__int64)v12);
        return 259LL;
      }
      v11 = -1073741808;
      goto LABEL_16;
    }
    goto LABEL_15;
  }
  v11 = -1073741637;
LABEL_16:
  v17 = byte_140168DAA == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v11;
  if ( v17 )
    goto LABEL_80;
  v44 = 0LL;
  IoGetActivityIdIrp(a2, &v44);
  v19 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v19 == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_80;
    v18 = *(unsigned int *)(a2 + 48);
    v21 = &stru_140148B18;
    v39 = *(_DWORD *)(a2 + 48);
    goto LABEL_79;
  }
  if ( *(_BYTE *)v19 != 15 )
  {
    if ( *(_BYTE *)v19 != 27 )
      goto LABEL_80;
    if ( *(_BYTE *)(v19 + 1) == 7 && !*(_DWORD *)(v19 + 8) )
    {
      if ( (byte_1401694F2 & 0x40) != 0 )
      {
        v20 = *(int **)(a2 + 56);
        if ( v20 )
          v6 = *v20;
        sub_140056AB0(v18, v19, &v44, a2, v6, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_80;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_80;
    v21 = &stru_140149FE8;
    v39 = *(_DWORD *)(a2 + 48);
LABEL_79:
    sub_140052F3C(v18, v21, &v44, a2, v39);
    goto LABEL_80;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_80;
  v22 = *(_QWORD *)(v19 + 8);
  v23 = 0;
  v24 = 0LL;
  v41 = 0;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  v28 = 0;
  if ( *(_BYTE *)(v22 + 2) != 40 )
  {
    v34 = *(_BYTE *)(v22 + 72);
    v24 = *(_BYTE **)(v22 + 32);
    v25 = *(_BYTE *)(v22 + 11);
    v23 = *(_BYTE *)(v22 + 4);
    if ( !*(_BYTE *)(v22 + 2) )
      goto LABEL_56;
    goto LABEL_80;
  }
  v29 = 0LL;
  v42 = 0;
  if ( *(_DWORD *)(v22 + 20) )
    goto LABEL_80;
  v30 = 0;
  v43 = *(_DWORD *)(v22 + 56);
  if ( !v43 )
    goto LABEL_53;
  while ( 1 )
  {
    v18 = *(unsigned int *)(v22 + 4LL * v30 + 120);
    if ( (unsigned int)v18 >= 0x80 )
    {
      v31 = *(unsigned int *)(v22 + 16);
      if ( (unsigned int)v18 < (unsigned int)v31 )
        break;
    }
LABEL_47:
    if ( ++v30 >= v43 )
      goto LABEL_53;
  }
  v32 = (unsigned int)v18;
  v33 = *(_DWORD *)(v18 + v22) - 64;
  if ( v33 )
  {
    v18 = (unsigned int)(v33 - 1);
    if ( (_DWORD)v18 )
    {
      if ( (_DWORD)v18 == 1 )
      {
        v18 = v32 + 40;
        if ( v32 + 40 <= v31 )
        {
          if ( *(_DWORD *)(v32 + v22 + 12) )
            v29 = (char *)(v32 + v22 + 32);
          v24 = *(_BYTE **)(v32 + v22 + 24);
          goto LABEL_52;
        }
      }
    }
    else
    {
      v18 = v32 + 56;
      if ( v32 + 56 <= v31 )
      {
        v42 = 1;
        if ( *(_BYTE *)(v32 + v22 + 10) )
          v29 = (char *)(v32 + v22 + 24);
        v23 = *(_BYTE *)(v32 + v22 + 8);
        v24 = *(_BYTE **)(v32 + v22 + 16);
        v25 = *(_BYTE *)(v32 + v22 + 9);
      }
    }
    goto LABEL_46;
  }
  v18 = v32 + 40;
  if ( v32 + 40 > v31 )
  {
LABEL_46:
    if ( v42 )
      goto LABEL_53;
    goto LABEL_47;
  }
  if ( *(_BYTE *)(v32 + v22 + 10) )
    v29 = (char *)(v32 + v22 + 24);
  v24 = *(_BYTE **)(v32 + v22 + 16);
LABEL_52:
  v25 = *(_BYTE *)(v32 + v22 + 9);
  v23 = *(_BYTE *)(v32 + v22 + 8);
LABEL_53:
  if ( v29 )
  {
    v34 = *v29;
    v27 = 0;
LABEL_56:
    LOBYTE(v18) = v34 - 8;
    if ( (v18 & 0x5D) == 0 )
    {
      v35 = *(_BYTE *)(v22 + 3);
      if ( v35 == 1 || !v24 || !v25 )
        goto LABEL_75;
      LOBYTE(v22) = 0;
      v18 = (unsigned __int64)&v24[v25];
      v36 = v24 + 8;
      if ( (unsigned __int8)((*v24 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v36 <= v18 )
        {
          LOBYTE(v22) = 1;
          v27 = v24[2];
          v26 = v24[1] & 0xF;
          v28 = v24[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v36 <= v18 )
        {
          v26 = v24[2] & 0xF;
          v37 = v25;
          if ( (unsigned int)(unsigned __int8)v24[7] + 8 <= v25 )
            v37 = (unsigned __int8)v24[7] + 8;
          v18 = (unsigned __int64)(v24 + 13);
          v22 = (unsigned __int64)&v24[v37];
          if ( (unsigned __int64)(v24 + 13) > v22 )
            v41 = 0;
          else
            v41 = v24[12];
          if ( (unsigned __int64)(v24 + 14) <= v22 )
            v28 = *(_BYTE *)v18;
          LOBYTE(v22) = 1;
        }
        v27 = v41;
      }
      if ( (_BYTE)v22 )
      {
        LOBYTE(v6) = v27;
        v38 = v28;
      }
      else
      {
LABEL_75:
        v26 = 0;
        v38 = 0;
      }
      sub_140052E64(v18, v22, &v44, a2, *(_DWORD *)(a2 + 48), v35, v23, v26, v6, v38, a2);
    }
  }
LABEL_80:
  IofCompleteRequest((PIRP)a2, 0);
  return v11;
}
