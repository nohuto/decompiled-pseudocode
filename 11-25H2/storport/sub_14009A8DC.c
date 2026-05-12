/*
 * XREFs of sub_14009A8DC @ 0x14009A8DC
 * Callers:
 *     sub_14002E460 @ 0x14002E460 (sub_14002E460.c)
 * Callees:
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall sub_14009A8DC(__int64 a1, __int64 a2)
{
  int v3; // ebx
  __int64 v5; // rax
  __int64 v6; // rcx
  int v7; // r15d
  bool v9; // zf
  unsigned __int64 v10; // rcx
  __int64 v11; // rdx
  int *v12; // rax
  const EVENT_DESCRIPTOR *v13; // rdx
  unsigned __int64 v14; // rdx
  char v15; // r14
  _BYTE *v16; // r9
  unsigned __int8 v17; // r10
  char v18; // si
  char v19; // r11
  char v20; // r13
  char *v21; // r11
  unsigned int *v22; // r12
  __int64 v23; // rax
  unsigned __int64 v24; // rbp
  char v25; // cl
  char v26; // r8
  _BYTE *v27; // rax
  unsigned int v28; // eax
  char v29; // al
  int v30; // [rsp+20h] [rbp-A8h]
  char v31; // [rsp+60h] [rbp-68h]
  char v32; // [rsp+61h] [rbp-67h]
  int v33; // [rsp+64h] [rbp-64h]
  unsigned int v34; // [rsp+68h] [rbp-60h]
  GUID v35; // [rsp+70h] [rbp-58h] BYREF

  v3 = 0;
  v5 = *(_QWORD *)(a2 + 184);
  *(_QWORD *)(a2 + 56) = 0LL;
  if ( *(_DWORD *)(v5 + 16) < 0x28u || *(_DWORD *)(v5 + 8) < 0x1028u )
  {
    v7 = -1073741789;
  }
  else
  {
    v6 = *(_QWORD *)(a2 + 24);
    if ( v6 )
    {
      if ( *(_DWORD *)(v6 + 32) == 2 )
      {
        ++*(_BYTE *)(a2 + 67);
        *(_QWORD *)(a2 + 184) = v5 + 72;
        return IofCallDriver(*(PDEVICE_OBJECT *)(*(_QWORD *)(a1 + 24) + 8LL), (PIRP)a2);
      }
      v7 = -1073741822;
    }
    else
    {
      v7 = -1073741811;
    }
  }
  v9 = byte_140168DAA == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v7;
  if ( v9 )
    goto LABEL_75;
  v35 = 0LL;
  IoGetActivityIdIrp(a2, &v35);
  v11 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v11 == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_75;
    v10 = *(unsigned int *)(a2 + 48);
    v13 = (const EVENT_DESCRIPTOR *)&unk_140148B18;
    v30 = *(_DWORD *)(a2 + 48);
    goto LABEL_74;
  }
  if ( *(_BYTE *)v11 != 15 )
  {
    if ( *(_BYTE *)v11 != 27 )
      goto LABEL_75;
    if ( *(_BYTE *)(v11 + 1) == 7 && !*(_DWORD *)(v11 + 8) )
    {
      if ( (byte_1401694F2 & 0x40) != 0 )
      {
        v12 = *(int **)(a2 + 56);
        if ( v12 )
          v3 = *v12;
        sub_140056AB0(v10, v11, &v35, a2, v3, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_75;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_75;
    v13 = &stru_140149FE8;
    v30 = *(_DWORD *)(a2 + 48);
LABEL_74:
    sub_140052F3C(v10, v13, &v35, a2, v30);
    goto LABEL_75;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_75;
  v14 = *(_QWORD *)(v11 + 8);
  v15 = 0;
  v16 = 0LL;
  v31 = 0;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  if ( *(_BYTE *)(v14 + 2) != 40 )
  {
    v25 = *(_BYTE *)(v14 + 72);
    v16 = *(_BYTE **)(v14 + 32);
    v17 = *(_BYTE *)(v14 + 11);
    v15 = *(_BYTE *)(v14 + 4);
    if ( !*(_BYTE *)(v14 + 2) )
      goto LABEL_51;
    goto LABEL_75;
  }
  v21 = 0LL;
  v32 = 0;
  if ( *(_DWORD *)(v14 + 20) )
    goto LABEL_75;
  v10 = 0LL;
  v33 = 0;
  v34 = *(_DWORD *)(v14 + 56);
  if ( !v34 )
    goto LABEL_48;
  v22 = (unsigned int *)(v14 + 120);
  while ( 1 )
  {
    v23 = *v22;
    if ( (unsigned int)v23 >= 0x80 )
    {
      v24 = *(unsigned int *)(v14 + 16);
      if ( (unsigned int)v23 < (unsigned int)v24 )
        break;
    }
LABEL_42:
    v10 = (unsigned int)(v10 + 1);
    ++v22;
    v33 = v10;
    if ( (unsigned int)v10 >= v34 )
      goto LABEL_48;
  }
  if ( *(_DWORD *)(v23 + v14) != 64 )
  {
    v10 = (unsigned int)(*(_DWORD *)(v23 + v14) - 65);
    if ( *(_DWORD *)(v23 + v14) == 65 )
    {
      v10 = v23 + 56;
      if ( v23 + 56 <= v24 )
      {
        v32 = 1;
        if ( *(_BYTE *)(v23 + v14 + 10) )
          v21 = (char *)(v23 + v14 + 24);
        v15 = *(_BYTE *)(v23 + v14 + 8);
        v16 = *(_BYTE **)(v23 + v14 + 16);
        v17 = *(_BYTE *)(v23 + v14 + 9);
      }
    }
    else if ( *(_DWORD *)(v23 + v14) == 66 )
    {
      v10 = v23 + 40;
      if ( v23 + 40 <= v24 )
      {
        if ( *(_DWORD *)(v23 + v14 + 12) )
          v21 = (char *)(v23 + v14 + 32);
        v16 = *(_BYTE **)(v23 + v14 + 24);
        goto LABEL_47;
      }
    }
    goto LABEL_40;
  }
  v10 = v23 + 40;
  if ( v23 + 40 > v24 )
  {
LABEL_40:
    if ( v32 )
      goto LABEL_48;
    LODWORD(v10) = v33;
    goto LABEL_42;
  }
  if ( *(_BYTE *)(v23 + v14 + 10) )
    v21 = (char *)(v23 + v14 + 24);
  v16 = *(_BYTE **)(v23 + v14 + 16);
LABEL_47:
  v17 = *(_BYTE *)(v23 + v14 + 9);
  v15 = *(_BYTE *)(v23 + v14 + 8);
LABEL_48:
  if ( v21 )
  {
    v25 = *v21;
    v19 = 0;
LABEL_51:
    LOBYTE(v10) = v25 - 8;
    if ( (v10 & 0x5D) == 0 )
    {
      v26 = *(_BYTE *)(v14 + 3);
      if ( v26 == 1 || !v16 || !v17 )
        goto LABEL_70;
      LOBYTE(v14) = 0;
      v10 = (unsigned __int64)&v16[v17];
      v27 = v16 + 8;
      if ( (unsigned __int8)((*v16 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v27 <= v10 )
        {
          LOBYTE(v14) = 1;
          v19 = v16[2];
          v18 = v16[1] & 0xF;
          v20 = v16[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v27 <= v10 )
        {
          v18 = v16[2] & 0xF;
          v28 = v17;
          if ( (unsigned int)(unsigned __int8)v16[7] + 8 <= v17 )
            v28 = (unsigned __int8)v16[7] + 8;
          v10 = (unsigned __int64)(v16 + 13);
          v14 = (unsigned __int64)&v16[v28];
          if ( (unsigned __int64)(v16 + 13) > v14 )
            v31 = 0;
          else
            v31 = v16[12];
          if ( (unsigned __int64)(v16 + 14) <= v14 )
            v20 = *(_BYTE *)v10;
          LOBYTE(v14) = 1;
        }
        v19 = v31;
      }
      if ( (_BYTE)v14 )
      {
        LOBYTE(v3) = v19;
        v29 = v20;
      }
      else
      {
LABEL_70:
        v18 = 0;
        v29 = 0;
      }
      sub_140052E64(v10, v14, &v35, a2, *(_DWORD *)(a2 + 48), v26, v15, v18, v3, v29, a2);
    }
  }
LABEL_75:
  IofCompleteRequest((PIRP)a2, 0);
  return v7;
}
