/*
 * XREFs of sub_14012A868 @ 0x14012A868
 * Callers:
 *     sub_1400D30D4 @ 0x1400D30D4 (sub_1400D30D4.c)
 * Callees:
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     sub_1401282DC @ 0x1401282DC (sub_1401282DC.c)
 *     sub_140128DA8 @ 0x140128DA8 (sub_140128DA8.c)
 *     sub_14012ADEC @ 0x14012ADEC (sub_14012ADEC.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall sub_14012A868(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  int v4; // ebx
  int v5; // edx
  int v6; // eax
  bool v7; // zf
  int v8; // esi
  unsigned __int64 v9; // rcx
  __int64 v10; // rdx
  int *v11; // rax
  const EVENT_DESCRIPTOR *v12; // rdx
  unsigned __int64 v13; // rdx
  char v14; // r15
  _BYTE *v15; // r9
  unsigned __int8 v16; // r10
  char v17; // bp
  char v18; // r11
  char v19; // r12
  char *v20; // r11
  unsigned int *v21; // r13
  __int64 v22; // rax
  unsigned __int64 v23; // r14
  char v24; // cl
  char v25; // r8
  _BYTE *v26; // rax
  unsigned int v27; // eax
  char v28; // al
  __int64 v29; // rdx
  char v32; // [rsp+60h] [rbp-68h]
  char v33; // [rsp+61h] [rbp-67h]
  int v34; // [rsp+64h] [rbp-64h]
  unsigned int v35; // [rsp+68h] [rbp-60h]
  GUID v36; // [rsp+70h] [rbp-58h] BYREF

  v2 = *(_QWORD *)(a2 + 184);
  v4 = 0;
  v5 = *(_DWORD *)(v2 + 16);
  v6 = *(_DWORD *)(v2 + 24);
  if ( !v5 )
  {
    if ( v6 > 6 )
    {
      *(_OWORD *)(v2 - 72) = *(_OWORD *)v2;
      *(_OWORD *)(v2 - 56) = *(_OWORD *)(v2 + 16);
      *(_OWORD *)(v2 - 40) = *(_OWORD *)(v2 + 32);
      *(_QWORD *)(v2 - 24) = *(_QWORD *)(v2 + 48);
      *(_BYTE *)(v2 - 69) = 0;
      return IofCallDriver(*(PDEVICE_OBJECT *)(a1 + 24), (PIRP)a2);
    }
    return sub_14012ADEC(a1, a2);
  }
  if ( v5 == 1 )
  {
    v29 = *(_QWORD *)(a1 + 160);
    if ( *(_DWORD *)(v29 + 68) == 1 )
    {
      if ( v6 > 1 )
        return sub_1401282DC(a1, (_QWORD *)a2);
    }
    else if ( *(int *)(v29 + 68) > 1 && v6 == 1 )
    {
      return sub_140128DA8(a1, (IRP *)a2);
    }
    ++*(_BYTE *)(a2 + 67);
    *(_QWORD *)(a2 + 184) = v2 + 72;
    return IofCallDriver(*(PDEVICE_OBJECT *)(a1 + 24), (PIRP)a2);
  }
  v7 = byte_140168DAA == 0;
  v8 = -1073741823;
  *(_DWORD *)(a2 + 48) = -1073741823;
  *(_BYTE *)(a2 + 141) = -84;
  if ( v7 )
    goto LABEL_69;
  v36 = 0LL;
  IoGetActivityIdIrp(a2, &v36);
  v10 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v10 == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_69;
    v12 = &stru_140148B18;
    goto LABEL_68;
  }
  if ( *(_BYTE *)v10 != 15 )
  {
    if ( *(_BYTE *)v10 != 27 )
      goto LABEL_69;
    if ( *(_BYTE *)(v10 + 1) == 7 && !*(_DWORD *)(v10 + 8) )
    {
      if ( (byte_1401694F2 & 0x40) != 0 )
      {
        v11 = *(int **)(a2 + 56);
        if ( v11 )
          v4 = *v11;
        sub_140056AB0(v9, v10, &v36, a2, v4, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_69;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_69;
    v12 = &stru_140149FE8;
LABEL_68:
    sub_140052F3C(v9, v12, &v36, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_69;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_69;
  v13 = *(_QWORD *)(v10 + 8);
  v14 = 0;
  v15 = 0LL;
  v32 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  if ( *(_BYTE *)(v13 + 2) != 40 )
  {
    v24 = *(_BYTE *)(v13 + 72);
    v15 = *(_BYTE **)(v13 + 32);
    v16 = *(_BYTE *)(v13 + 11);
    v14 = *(_BYTE *)(v13 + 4);
    if ( !*(_BYTE *)(v13 + 2) )
      goto LABEL_45;
    goto LABEL_69;
  }
  v20 = 0LL;
  v33 = 0;
  if ( *(_DWORD *)(v13 + 20) )
    goto LABEL_69;
  v9 = 0LL;
  v34 = 0;
  v35 = *(_DWORD *)(v13 + 56);
  if ( !v35 )
    goto LABEL_42;
  v21 = (unsigned int *)(v13 + 120);
  while ( 1 )
  {
    v22 = *v21;
    if ( (unsigned int)v22 >= 0x80 )
    {
      v23 = *(unsigned int *)(v13 + 16);
      if ( (unsigned int)v22 < (unsigned int)v23 )
        break;
    }
LABEL_36:
    v9 = (unsigned int)(v9 + 1);
    ++v21;
    v34 = v9;
    if ( (unsigned int)v9 >= v35 )
      goto LABEL_42;
  }
  if ( *(_DWORD *)(v22 + v13) != 64 )
  {
    v9 = (unsigned int)(*(_DWORD *)(v22 + v13) - 65);
    if ( *(_DWORD *)(v22 + v13) == 65 )
    {
      v9 = v22 + 56;
      if ( v22 + 56 <= v23 )
      {
        v33 = 1;
        if ( *(_BYTE *)(v22 + v13 + 10) )
          v20 = (char *)(v22 + v13 + 24);
        v14 = *(_BYTE *)(v22 + v13 + 8);
        v15 = *(_BYTE **)(v22 + v13 + 16);
        v16 = *(_BYTE *)(v22 + v13 + 9);
      }
    }
    else if ( *(_DWORD *)(v22 + v13) == 66 )
    {
      v9 = v22 + 40;
      if ( v22 + 40 <= v23 )
      {
        if ( *(_DWORD *)(v22 + v13 + 12) )
          v20 = (char *)(v22 + v13 + 32);
        v15 = *(_BYTE **)(v22 + v13 + 24);
        goto LABEL_41;
      }
    }
    goto LABEL_34;
  }
  v9 = v22 + 40;
  if ( v22 + 40 > v23 )
  {
LABEL_34:
    if ( v33 )
      goto LABEL_42;
    LODWORD(v9) = v34;
    goto LABEL_36;
  }
  if ( *(_BYTE *)(v22 + v13 + 10) )
    v20 = (char *)(v22 + v13 + 24);
  v15 = *(_BYTE **)(v22 + v13 + 16);
LABEL_41:
  v16 = *(_BYTE *)(v22 + v13 + 9);
  v14 = *(_BYTE *)(v22 + v13 + 8);
LABEL_42:
  if ( v20 )
  {
    v24 = *v20;
    v18 = 0;
LABEL_45:
    LOBYTE(v9) = v24 - 8;
    if ( (v9 & 0x5D) == 0 )
    {
      v25 = *(_BYTE *)(v13 + 3);
      if ( v25 == 1 || !v15 || !v16 )
        goto LABEL_64;
      LOBYTE(v13) = 0;
      v9 = (unsigned __int64)&v15[v16];
      v26 = v15 + 8;
      if ( (unsigned __int8)((*v15 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v26 <= v9 )
        {
          LOBYTE(v13) = 1;
          v18 = v15[2];
          v17 = v15[1] & 0xF;
          v19 = v15[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v26 <= v9 )
        {
          v17 = v15[2] & 0xF;
          v27 = v16;
          if ( (unsigned int)(unsigned __int8)v15[7] + 8 <= v16 )
            v27 = (unsigned __int8)v15[7] + 8;
          v9 = (unsigned __int64)(v15 + 13);
          v13 = (unsigned __int64)&v15[v27];
          if ( (unsigned __int64)(v15 + 13) > v13 )
            v32 = 0;
          else
            v32 = v15[12];
          if ( (unsigned __int64)(v15 + 14) <= v13 )
            v19 = *(_BYTE *)v9;
          LOBYTE(v13) = 1;
        }
        v18 = v32;
      }
      if ( (_BYTE)v13 )
      {
        LOBYTE(v4) = v18;
        v28 = v19;
      }
      else
      {
LABEL_64:
        v17 = 0;
        v28 = 0;
      }
      sub_140052E64(v9, v13, &v36, a2, *(_DWORD *)(a2 + 48), v25, v14, v17, v4, v28, a2);
    }
  }
LABEL_69:
  IofCompleteRequest((PIRP)a2, 0);
  return v8;
}
