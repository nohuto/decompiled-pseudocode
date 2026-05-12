/*
 * XREFs of sub_140003D0C @ 0x140003D0C
 * Callers:
 *     sub_140004890 @ 0x140004890 (sub_140004890.c)
 *     sub_140005A20 @ 0x140005A20 (sub_140005A20.c)
 * Callees:
 *     sub_140003FEC @ 0x140003FEC (sub_140003FEC.c)
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int64 __fastcall sub_140003D0C(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // r8
  unsigned int v5; // ebx
  bool v6; // zf
  __int64 v7; // rcx
  __int64 v8; // rdx
  int *v10; // rax
  int v11; // ecx
  unsigned __int64 v12; // rdx
  _BYTE *v13; // rcx
  _BYTE *v14; // rax
  char v15; // si
  unsigned int v16; // eax
  unsigned __int8 v17; // r15
  char v18; // r11
  char v19; // al
  int v20; // ecx
  char v21; // r14
  _BYTE *v22; // r9
  unsigned __int8 v23; // r10
  char *v24; // r11
  unsigned int v25; // r13d
  unsigned int *v26; // r12
  __int64 v27; // rax
  unsigned __int64 v28; // rbp
  char v29; // cl
  char v30; // r8
  char v31; // [rsp+60h] [rbp-58h]
  char v32; // [rsp+61h] [rbp-57h]
  unsigned int v33; // [rsp+64h] [rbp-54h]
  __int128 v34; // [rsp+68h] [rbp-50h] BYREF

  v5 = 0;
  if ( (int)sub_140003FEC(a1 + 720) > 0 )
  {
    *(_QWORD *)(v3 + 1984) = a2;
    *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
    IoQueueWorkItem(*(PIO_WORKITEM *)(v3 + 1976), sub_1400287D0, CriticalWorkQueue, (PVOID)(v3 + 1976));
    return 259;
  }
  v6 = byte_140168DAA == 0;
  *(_BYTE *)(v4 + 3) = 1;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = 0;
  if ( v6 )
    goto LABEL_6;
  v34 = 0LL;
  IoGetActivityIdIrp(a2, &v34);
  v8 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v8 == 14 )
  {
    if ( (byte_1401694F2 & 8) != 0 )
      sub_140052F3C(v7, &unk_140148B18, &v34, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_6;
  }
  if ( *(_BYTE *)v8 != 15 )
  {
    if ( *(_BYTE *)v8 == 27 )
    {
      if ( *(_BYTE *)(v8 + 1) == 7 && !*(_DWORD *)(v8 + 8) )
      {
        if ( (byte_1401694F2 & 0x40) != 0 )
        {
          v10 = *(int **)(a2 + 56);
          if ( v10 )
            v11 = *v10;
          else
            v11 = 0;
          sub_140056AB0(v11, v8, (unsigned int)&v34, a2, v11, *(_DWORD *)(a2 + 48));
        }
      }
      else if ( (byte_1401694F2 & 0x20) != 0 )
      {
        sub_140052F3C(v7, &unk_140149FE8, &v34, a2, *(_DWORD *)(a2 + 48));
      }
    }
    goto LABEL_6;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_6;
  v12 = *(_QWORD *)(v8 + 8);
  v21 = 0;
  v22 = 0LL;
  v31 = 0;
  v23 = 0;
  v15 = 0;
  v18 = 0;
  v17 = 0;
  if ( *(_BYTE *)(v12 + 2) != 40 )
  {
    v29 = *(_BYTE *)(v12 + 72);
    v22 = *(_BYTE **)(v12 + 32);
    v23 = *(_BYTE *)(v12 + 11);
    v21 = *(_BYTE *)(v12 + 4);
    if ( !*(_BYTE *)(v12 + 2) )
      goto LABEL_69;
    goto LABEL_6;
  }
  v24 = 0LL;
  v32 = 0;
  if ( *(_DWORD *)(v12 + 20) )
    goto LABEL_6;
  v25 = 0;
  v33 = *(_DWORD *)(v12 + 56);
  if ( !v33 )
    goto LABEL_66;
  v26 = (unsigned int *)(v12 + 120);
  while ( 1 )
  {
    v27 = *v26;
    if ( (unsigned int)v27 >= 0x80 )
    {
      v28 = *(unsigned int *)(v12 + 16);
      if ( (unsigned int)v27 < (unsigned int)v28 )
        break;
    }
LABEL_59:
    ++v25;
    ++v26;
    if ( v25 >= v33 )
      goto LABEL_66;
  }
  if ( *(_DWORD *)(v27 + v12) != 64 )
  {
    if ( *(_DWORD *)(v27 + v12) == 65 )
    {
      if ( v27 + 56 <= v28 )
      {
        v32 = 1;
        if ( *(_BYTE *)(v27 + v12 + 10) )
          v24 = (char *)(v27 + v12 + 24);
        v21 = *(_BYTE *)(v27 + v12 + 8);
        v22 = *(_BYTE **)(v27 + v12 + 16);
        v23 = *(_BYTE *)(v27 + v12 + 9);
      }
    }
    else if ( *(_DWORD *)(v27 + v12) == 66 && v27 + 40 <= v28 )
    {
      if ( *(_DWORD *)(v27 + v12 + 12) )
        v24 = (char *)(v27 + v12 + 32);
      v22 = *(_BYTE **)(v27 + v12 + 24);
      goto LABEL_65;
    }
    goto LABEL_58;
  }
  if ( v27 + 40 > v28 )
  {
LABEL_58:
    if ( v32 )
      goto LABEL_66;
    goto LABEL_59;
  }
  if ( *(_BYTE *)(v27 + v12 + 10) )
    v24 = (char *)(v27 + v12 + 24);
  v22 = *(_BYTE **)(v27 + v12 + 16);
LABEL_65:
  v23 = *(_BYTE *)(v27 + v12 + 9);
  v21 = *(_BYTE *)(v27 + v12 + 8);
LABEL_66:
  if ( v24 )
  {
    v29 = *v24;
    v18 = 0;
LABEL_69:
    if ( ((v29 - 8) & 0x5D) == 0 )
    {
      v30 = *(_BYTE *)(v12 + 3);
      if ( v30 == 1 || !v22 || !v23 )
        goto LABEL_32;
      LOBYTE(v12) = 0;
      v13 = &v22[v23];
      v14 = v22 + 8;
      if ( (unsigned __int8)((*v22 & 0x7F) - 114) <= 1u )
      {
        if ( v14 <= v13 )
        {
          LOBYTE(v12) = 1;
          v18 = v22[2];
          v15 = v22[1] & 0xF;
          v17 = v22[3];
        }
      }
      else
      {
        if ( v14 <= v13 )
        {
          v15 = v22[2] & 0xF;
          v16 = v23;
          if ( (unsigned int)(unsigned __int8)v22[7] + 8 <= v23 )
            v16 = (unsigned __int8)v22[7] + 8;
          v12 = (unsigned __int64)&v22[v16];
          if ( (unsigned __int64)(v22 + 13) > v12 )
            v31 = 0;
          else
            v31 = v22[12];
          if ( (unsigned __int64)(v22 + 14) <= v12 )
            v17 = v22[13];
          LOBYTE(v12) = 1;
        }
        v18 = v31;
      }
      if ( (_BYTE)v12 )
      {
        v19 = v18;
        v20 = v17;
      }
      else
      {
LABEL_32:
        v15 = 0;
        v19 = 0;
        v20 = 0;
      }
      sub_140052E64(v20, v12, (unsigned int)&v34, a2, *(_DWORD *)(a2 + 48), v30, v21, v15, v19, v20, a2);
    }
  }
LABEL_6:
  IofCompleteRequest((PIRP)a2, 0);
  return v5;
}
