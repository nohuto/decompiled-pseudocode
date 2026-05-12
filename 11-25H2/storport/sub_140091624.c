/*
 * XREFs of sub_140091624 @ 0x140091624
 * Callers:
 *     sub_14002E460 @ 0x14002E460 (sub_14002E460.c)
 * Callees:
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140055C18 @ 0x140055C18 (sub_140055C18.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     sub_14009D8DC @ 0x14009D8DC (sub_14009D8DC.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int64 __fastcall sub_140091624(__int64 a1, __int64 a2)
{
  int v2; // ebx
  unsigned int v4; // esi
  __int64 v5; // rax
  __int64 v6; // rdx
  bool v7; // zf
  unsigned __int64 v8; // rcx
  __int64 v9; // rdx
  int *v10; // rax
  const EVENT_DESCRIPTOR *v11; // rdx
  unsigned __int64 v12; // rdx
  char v13; // r15
  _BYTE *v14; // r9
  unsigned __int8 v15; // r10
  char v16; // bp
  char v17; // r11
  char v18; // r12
  char *v19; // r11
  unsigned int *v20; // r13
  __int64 v21; // rax
  unsigned __int64 v22; // r14
  char v23; // cl
  char v24; // r8
  _BYTE *v25; // rax
  unsigned int v26; // eax
  char v27; // al
  char v29; // [rsp+60h] [rbp-68h]
  char v30; // [rsp+61h] [rbp-67h]
  int v31; // [rsp+64h] [rbp-64h]
  unsigned int v32; // [rsp+68h] [rbp-60h]
  GUID v33; // [rsp+70h] [rbp-58h] BYREF

  v2 = 0;
  if ( *(_DWORD *)(*(_QWORD *)(a2 + 184) + 16LL) < 0x10u )
  {
    if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
      && (HIDWORD(off_140168120->Timer) & 0x10) != 0
      && BYTE1(off_140168120->Timer) >= 2u )
    {
      sub_140055C18((__int64)off_140168120->AttachedDevice, 0x36u, (__int64)&unk_14014D880, a1);
    }
    v4 = -1073741820;
    goto LABEL_17;
  }
  v5 = *(_QWORD *)(a2 + 24);
  if ( v5 )
  {
    v6 = *(unsigned int *)(v5 + 8);
    if ( (unsigned int)v6 <= 1 )
    {
      if ( *(_DWORD *)(v5 + 12) == 0x80000000 )
        v4 = sub_14009D8DC(a1, v6, a1);
      else
        v4 = -1073741637;
      goto LABEL_17;
    }
  }
  else if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
         && (HIDWORD(off_140168120->Timer) & 0x10) != 0
         && BYTE1(off_140168120->Timer) >= 2u )
  {
    sub_140055C18((__int64)off_140168120->AttachedDevice, 0x37u, (__int64)&unk_14014D880, a1);
  }
  v4 = -1073741811;
LABEL_17:
  v7 = byte_140168DAA == 0;
  *(_QWORD *)(a2 + 56) = 0LL;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v4;
  if ( v7 )
    goto LABEL_83;
  v33 = 0LL;
  IoGetActivityIdIrp(a2, &v33);
  v9 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v9 == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_83;
    v11 = (const EVENT_DESCRIPTOR *)&unk_140148B18;
    goto LABEL_82;
  }
  if ( *(_BYTE *)v9 != 15 )
  {
    if ( *(_BYTE *)v9 != 27 )
      goto LABEL_83;
    if ( *(_BYTE *)(v9 + 1) == 7 && !*(_DWORD *)(v9 + 8) )
    {
      if ( (byte_1401694F2 & 0x40) != 0 )
      {
        v10 = *(int **)(a2 + 56);
        if ( v10 )
          v2 = *v10;
        sub_140056AB0(v8, v9, &v33, a2, v2, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_83;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_83;
    v11 = &stru_140149FE8;
LABEL_82:
    sub_140052F3C(v8, v11, &v33, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_83;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_83;
  v12 = *(_QWORD *)(v9 + 8);
  v13 = 0;
  v14 = 0LL;
  v29 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  if ( *(_BYTE *)(v12 + 2) != 40 )
  {
    v23 = *(_BYTE *)(v12 + 72);
    v14 = *(_BYTE **)(v12 + 32);
    v15 = *(_BYTE *)(v12 + 11);
    v13 = *(_BYTE *)(v12 + 4);
    if ( !*(_BYTE *)(v12 + 2) )
      goto LABEL_59;
    goto LABEL_83;
  }
  v19 = 0LL;
  v30 = 0;
  if ( *(_DWORD *)(v12 + 20) )
    goto LABEL_83;
  v8 = 0LL;
  v31 = 0;
  v32 = *(_DWORD *)(v12 + 56);
  if ( !v32 )
    goto LABEL_56;
  v20 = (unsigned int *)(v12 + 120);
  while ( 1 )
  {
    v21 = *v20;
    if ( (unsigned int)v21 >= 0x80 )
    {
      v22 = *(unsigned int *)(v12 + 16);
      if ( (unsigned int)v21 < (unsigned int)v22 )
        break;
    }
LABEL_50:
    v8 = (unsigned int)(v8 + 1);
    ++v20;
    v31 = v8;
    if ( (unsigned int)v8 >= v32 )
      goto LABEL_56;
  }
  if ( *(_DWORD *)(v21 + v12) != 64 )
  {
    v8 = (unsigned int)(*(_DWORD *)(v21 + v12) - 65);
    if ( *(_DWORD *)(v21 + v12) == 65 )
    {
      v8 = v21 + 56;
      if ( v21 + 56 <= v22 )
      {
        v30 = 1;
        if ( *(_BYTE *)(v21 + v12 + 10) )
          v19 = (char *)(v21 + v12 + 24);
        v13 = *(_BYTE *)(v21 + v12 + 8);
        v14 = *(_BYTE **)(v21 + v12 + 16);
        v15 = *(_BYTE *)(v21 + v12 + 9);
      }
    }
    else if ( *(_DWORD *)(v21 + v12) == 66 )
    {
      v8 = v21 + 40;
      if ( v21 + 40 <= v22 )
      {
        if ( *(_DWORD *)(v21 + v12 + 12) )
          v19 = (char *)(v21 + v12 + 32);
        v14 = *(_BYTE **)(v21 + v12 + 24);
        goto LABEL_55;
      }
    }
    goto LABEL_48;
  }
  v8 = v21 + 40;
  if ( v21 + 40 > v22 )
  {
LABEL_48:
    if ( v30 )
      goto LABEL_56;
    LODWORD(v8) = v31;
    goto LABEL_50;
  }
  if ( *(_BYTE *)(v21 + v12 + 10) )
    v19 = (char *)(v21 + v12 + 24);
  v14 = *(_BYTE **)(v21 + v12 + 16);
LABEL_55:
  v15 = *(_BYTE *)(v21 + v12 + 9);
  v13 = *(_BYTE *)(v21 + v12 + 8);
LABEL_56:
  if ( v19 )
  {
    v23 = *v19;
    v17 = 0;
LABEL_59:
    LOBYTE(v8) = v23 - 8;
    if ( (v8 & 0x5D) == 0 )
    {
      v24 = *(_BYTE *)(v12 + 3);
      if ( v24 == 1 || !v14 || !v15 )
        goto LABEL_78;
      LOBYTE(v12) = 0;
      v8 = (unsigned __int64)&v14[v15];
      v25 = v14 + 8;
      if ( (unsigned __int8)((*v14 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v25 <= v8 )
        {
          LOBYTE(v12) = 1;
          v17 = v14[2];
          v16 = v14[1] & 0xF;
          v18 = v14[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v25 <= v8 )
        {
          v16 = v14[2] & 0xF;
          v26 = v15;
          if ( (unsigned int)(unsigned __int8)v14[7] + 8 <= v15 )
            v26 = (unsigned __int8)v14[7] + 8;
          v8 = (unsigned __int64)(v14 + 13);
          v12 = (unsigned __int64)&v14[v26];
          if ( (unsigned __int64)(v14 + 13) > v12 )
            v29 = 0;
          else
            v29 = v14[12];
          if ( (unsigned __int64)(v14 + 14) <= v12 )
            v18 = *(_BYTE *)v8;
          LOBYTE(v12) = 1;
        }
        v17 = v29;
      }
      if ( (_BYTE)v12 )
      {
        LOBYTE(v2) = v17;
        v27 = v18;
      }
      else
      {
LABEL_78:
        v16 = 0;
        v27 = 0;
      }
      sub_140052E64(v8, v12, &v33, a2, *(_DWORD *)(a2 + 48), v24, v13, v16, v2, v27, a2);
    }
  }
LABEL_83:
  IofCompleteRequest((PIRP)a2, 0);
  return v4;
}
