/*
 * XREFs of sub_1401057BC @ 0x1401057BC
 * Callers:
 *     sub_1401011F4 @ 0x1401011F4 (sub_1401011F4.c)
 * Callees:
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     memmove @ 0x14013C680 (memmove.c)
 */

__int64 __fastcall sub_1401057BC(__int64 a1, __int64 a2)
{
  int v2; // ebx
  unsigned int v4; // ebp
  __int64 v5; // r8
  const void *v6; // rdx
  bool v7; // zf
  unsigned __int64 v8; // rcx
  __int64 v9; // rdx
  int *v10; // rax
  const EVENT_DESCRIPTOR *v11; // rdx
  unsigned __int64 v12; // rdx
  char v13; // r15
  _BYTE *v14; // r9
  unsigned __int8 v15; // r10
  char v16; // si
  char v17; // r11
  char v18; // r12
  char *v19; // r11
  char v20; // r13
  unsigned int v21; // r14d
  unsigned __int64 v22; // rbp
  __int64 v23; // r8
  int v24; // ecx
  char v25; // cl
  char v26; // r8
  _BYTE *v27; // rax
  unsigned int v28; // eax
  char v29; // al
  int v31; // [rsp+20h] [rbp-A8h]
  char v32; // [rsp+60h] [rbp-68h]
  unsigned int v33; // [rsp+64h] [rbp-64h]
  unsigned int v34; // [rsp+68h] [rbp-60h]
  GUID v35; // [rsp+70h] [rbp-58h] BYREF

  v2 = 0;
  v33 = 0;
  v4 = 0;
  v5 = 0LL;
  if ( *(_DWORD *)(*(_QWORD *)(a2 + 184) + 8LL) >= 0x1000u )
  {
    v6 = *(const void **)(*(_QWORD *)(a1 + 16) + 592LL);
    if ( v6 )
    {
      memmove(*(void **)(a2 + 24), v6, 0x1000uLL);
      v5 = 4096LL;
      goto LABEL_7;
    }
    v4 = -1073741637;
  }
  else
  {
    v4 = -1073741789;
  }
  v33 = v4;
LABEL_7:
  v7 = byte_140168DAA == 0;
  *(_QWORD *)(a2 + 56) = v5;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v4;
  if ( v7 )
    goto LABEL_72;
  v35 = 0LL;
  IoGetActivityIdIrp(a2, &v35);
  v9 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v9 == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_72;
    v31 = *(_DWORD *)(a2 + 48);
    v11 = &stru_140148B18;
    goto LABEL_71;
  }
  if ( *(_BYTE *)v9 != 15 )
  {
    if ( *(_BYTE *)v9 != 27 )
      goto LABEL_72;
    if ( *(_BYTE *)(v9 + 1) == 7 && !*(_DWORD *)(v9 + 8) )
    {
      if ( (byte_1401694F2 & 0x40) != 0 )
      {
        v10 = *(int **)(a2 + 56);
        if ( v10 )
          v2 = *v10;
        sub_140056AB0(v8, v9, &v35, a2, v2, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_72;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_72;
    v11 = &stru_140149FE8;
    v31 = *(_DWORD *)(a2 + 48);
LABEL_71:
    sub_140052F3C(v8, v11, &v35, a2, v31);
    goto LABEL_72;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_72;
  v12 = *(_QWORD *)(v9 + 8);
  v13 = 0;
  v14 = 0LL;
  v32 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  if ( *(_BYTE *)(v12 + 2) != 40 )
  {
    v25 = *(_BYTE *)(v12 + 72);
    v14 = *(_BYTE **)(v12 + 32);
    v15 = *(_BYTE *)(v12 + 11);
    v13 = *(_BYTE *)(v12 + 4);
    if ( !*(_BYTE *)(v12 + 2) )
      goto LABEL_48;
    goto LABEL_72;
  }
  v19 = 0LL;
  v20 = 0;
  if ( *(_DWORD *)(v12 + 20) )
    goto LABEL_72;
  v21 = 0;
  v34 = *(_DWORD *)(v12 + 56);
  if ( !v34 )
    goto LABEL_45;
  while ( 1 )
  {
    v8 = *(unsigned int *)(v12 + 4LL * v21 + 120);
    if ( (unsigned int)v8 >= 0x80 )
    {
      v22 = *(unsigned int *)(v12 + 16);
      if ( (unsigned int)v8 < (unsigned int)v22 )
        break;
    }
LABEL_38:
    if ( ++v21 >= v34 )
      goto LABEL_44;
  }
  v23 = (unsigned int)v8;
  v24 = *(_DWORD *)(v8 + v12) - 64;
  if ( v24 )
  {
    v8 = (unsigned int)(v24 - 1);
    if ( (_DWORD)v8 )
    {
      if ( (_DWORD)v8 == 1 )
      {
        v8 = v23 + 40;
        if ( v23 + 40 <= v22 )
        {
          if ( *(_DWORD *)(v23 + v12 + 12) )
            v19 = (char *)(v23 + v12 + 32);
          v14 = *(_BYTE **)(v23 + v12 + 24);
          goto LABEL_43;
        }
      }
    }
    else
    {
      v8 = v23 + 56;
      if ( v23 + 56 <= v22 )
      {
        v20 = 1;
        if ( *(_BYTE *)(v23 + v12 + 10) )
          v19 = (char *)(v23 + v12 + 24);
        v13 = *(_BYTE *)(v23 + v12 + 8);
        v14 = *(_BYTE **)(v23 + v12 + 16);
        v15 = *(_BYTE *)(v23 + v12 + 9);
      }
    }
    goto LABEL_37;
  }
  v8 = v23 + 40;
  if ( v23 + 40 > v22 )
  {
LABEL_37:
    if ( v20 )
      goto LABEL_44;
    goto LABEL_38;
  }
  if ( *(_BYTE *)(v23 + v12 + 10) )
    v19 = (char *)(v23 + v12 + 24);
  v14 = *(_BYTE **)(v23 + v12 + 16);
LABEL_43:
  v15 = *(_BYTE *)(v23 + v12 + 9);
  v13 = *(_BYTE *)(v23 + v12 + 8);
LABEL_44:
  v4 = v33;
LABEL_45:
  if ( v19 )
  {
    v25 = *v19;
    v17 = 0;
LABEL_48:
    LOBYTE(v8) = v25 - 8;
    if ( (v8 & 0x5D) == 0 )
    {
      v26 = *(_BYTE *)(v12 + 3);
      if ( v26 == 1 || !v14 || !v15 )
        goto LABEL_67;
      LOBYTE(v12) = 0;
      v8 = (unsigned __int64)&v14[v15];
      v27 = v14 + 8;
      if ( (unsigned __int8)((*v14 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v27 <= v8 )
        {
          LOBYTE(v12) = 1;
          v17 = v14[2];
          v16 = v14[1] & 0xF;
          v18 = v14[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v27 <= v8 )
        {
          v16 = v14[2] & 0xF;
          v28 = v15;
          if ( (unsigned int)(unsigned __int8)v14[7] + 8 <= v15 )
            v28 = (unsigned __int8)v14[7] + 8;
          v8 = (unsigned __int64)(v14 + 13);
          v12 = (unsigned __int64)&v14[v28];
          if ( (unsigned __int64)(v14 + 13) > v12 )
            v32 = 0;
          else
            v32 = v14[12];
          if ( (unsigned __int64)(v14 + 14) <= v12 )
            v18 = *(_BYTE *)v8;
          LOBYTE(v12) = 1;
        }
        v17 = v32;
      }
      if ( (_BYTE)v12 )
      {
        LOBYTE(v2) = v17;
        v29 = v18;
      }
      else
      {
LABEL_67:
        v16 = 0;
        v29 = 0;
      }
      sub_140052E64(v8, v12, &v35, a2, *(_DWORD *)(a2 + 48), v26, v13, v16, v2, v29, a2);
    }
  }
LABEL_72:
  IofCompleteRequest((PIRP)a2, 0);
  return v4;
}
