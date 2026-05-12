/*
 * XREFs of sub_1400CD01C @ 0x1400CD01C
 * Callers:
 *     sub_1400D2464 @ 0x1400D2464 (sub_1400D2464.c)
 * Callees:
 *     sub_140018DDC @ 0x140018DDC (sub_140018DDC.c)
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     sub_1400BC3FC @ 0x1400BC3FC (sub_1400BC3FC.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1400CD01C(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  int v4; // ebx
  volatile signed __int32 *v6; // rsi
  int v7; // r14d
  char v8; // r15
  unsigned int v9; // r12d
  bool v10; // zf
  unsigned __int64 v11; // rcx
  __int64 v12; // rdx
  int *v13; // rax
  const EVENT_DESCRIPTOR *v14; // rdx
  unsigned __int64 v15; // rdx
  char v16; // r14
  _BYTE *v17; // r9
  unsigned __int8 v18; // r10
  char v19; // si
  char v20; // r11
  char v21; // r15
  char *v22; // r11
  unsigned int v23; // r13d
  unsigned int *v24; // r12
  __int64 v25; // rax
  unsigned __int64 v26; // rbp
  char v27; // cl
  char v28; // r8
  _BYTE *v29; // rax
  unsigned int v30; // eax
  char v31; // al
  char v33; // [rsp+60h] [rbp-68h]
  char v34; // [rsp+61h] [rbp-67h]
  int v35; // [rsp+64h] [rbp-64h]
  unsigned int v36; // [rsp+68h] [rbp-60h]
  GUID v37; // [rsp+70h] [rbp-58h] BYREF

  v2 = *(_QWORD *)(a2 + 184);
  v4 = 0;
  v6 = 0LL;
  v7 = *(_DWORD *)(v2 + 16);
  v8 = *(_BYTE *)(v2 + 8);
  if ( v7 == 1 )
  {
    v6 = (volatile signed __int32 *)(a1 + 88);
  }
  else if ( *(_DWORD *)(v2 + 16) == 2 )
  {
    v6 = (volatile signed __int32 *)(a1 + 96);
  }
  else if ( *(_DWORD *)(v2 + 16) == 3 )
  {
    v6 = (volatile signed __int32 *)(a1 + 92);
  }
  v35 = sub_140018DDC(*(struct _DEVICE_OBJECT **)(a1 + 24), (IRP *)a2);
  v9 = v35;
  if ( v35 >= 0 && v6 )
  {
    if ( v8 )
      _InterlockedIncrement(v6);
    else
      _InterlockedDecrement(v6);
    IoInvalidateDeviceState(*(PDEVICE_OBJECT *)(a1 + 32));
    if ( v7 == 1 )
      sub_1400BC3FC(*(_QWORD *)(a1 + 32), *v6);
  }
  v10 = byte_140168DAA == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v35;
  if ( v10 )
    goto LABEL_80;
  v37 = 0LL;
  IoGetActivityIdIrp(a2, &v37);
  v12 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v12 == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_80;
    v14 = (const EVENT_DESCRIPTOR *)&unk_140148B18;
    goto LABEL_79;
  }
  if ( *(_BYTE *)v12 != 15 )
  {
    if ( *(_BYTE *)v12 != 27 )
      goto LABEL_80;
    if ( *(_BYTE *)(v12 + 1) == 7 && !*(_DWORD *)(v12 + 8) )
    {
      if ( (byte_1401694F2 & 0x40) != 0 )
      {
        v13 = *(int **)(a2 + 56);
        if ( v13 )
          v4 = *v13;
        sub_140056AB0(v11, v12, &v37, a2, v4, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_80;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_80;
    v14 = &stru_140149FE8;
LABEL_79:
    sub_140052F3C(v11, v14, &v37, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_80;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_80;
  v15 = *(_QWORD *)(v12 + 8);
  v16 = 0;
  v17 = 0LL;
  v33 = 0;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  if ( *(_BYTE *)(v15 + 2) != 40 )
  {
    v27 = *(_BYTE *)(v15 + 72);
    v17 = *(_BYTE **)(v15 + 32);
    v18 = *(_BYTE *)(v15 + 11);
    v16 = *(_BYTE *)(v15 + 4);
    if ( !*(_BYTE *)(v15 + 2) )
      goto LABEL_56;
    goto LABEL_80;
  }
  v22 = 0LL;
  v34 = 0;
  if ( *(_DWORD *)(v15 + 20) )
    goto LABEL_80;
  v23 = 0;
  v36 = *(_DWORD *)(v15 + 56);
  if ( !v36 )
    goto LABEL_53;
  v24 = (unsigned int *)(v15 + 120);
  while ( 1 )
  {
    v25 = *v24;
    if ( (unsigned int)v25 >= 0x80 )
    {
      v26 = *(unsigned int *)(v15 + 16);
      if ( (unsigned int)v25 < (unsigned int)v26 )
        break;
    }
LABEL_46:
    ++v23;
    ++v24;
    if ( v23 >= v36 )
      goto LABEL_52;
  }
  if ( *(_DWORD *)(v25 + v15) != 64 )
  {
    v11 = (unsigned int)(*(_DWORD *)(v25 + v15) - 65);
    if ( *(_DWORD *)(v25 + v15) == 65 )
    {
      v11 = v25 + 56;
      if ( v25 + 56 <= v26 )
      {
        v34 = 1;
        if ( *(_BYTE *)(v25 + v15 + 10) )
          v22 = (char *)(v25 + v15 + 24);
        v16 = *(_BYTE *)(v25 + v15 + 8);
        v17 = *(_BYTE **)(v25 + v15 + 16);
        v18 = *(_BYTE *)(v25 + v15 + 9);
      }
    }
    else if ( *(_DWORD *)(v25 + v15) == 66 )
    {
      v11 = v25 + 40;
      if ( v25 + 40 <= v26 )
      {
        if ( *(_DWORD *)(v25 + v15 + 12) )
          v22 = (char *)(v25 + v15 + 32);
        v17 = *(_BYTE **)(v25 + v15 + 24);
        goto LABEL_51;
      }
    }
    goto LABEL_45;
  }
  v11 = v25 + 40;
  if ( v25 + 40 > v26 )
  {
LABEL_45:
    if ( v34 )
      goto LABEL_52;
    goto LABEL_46;
  }
  if ( *(_BYTE *)(v25 + v15 + 10) )
    v22 = (char *)(v25 + v15 + 24);
  v17 = *(_BYTE **)(v25 + v15 + 16);
LABEL_51:
  v18 = *(_BYTE *)(v25 + v15 + 9);
  v16 = *(_BYTE *)(v25 + v15 + 8);
LABEL_52:
  v9 = v35;
LABEL_53:
  if ( v22 )
  {
    v27 = *v22;
    v20 = 0;
LABEL_56:
    LOBYTE(v11) = v27 - 8;
    if ( (v11 & 0x5D) == 0 )
    {
      v28 = *(_BYTE *)(v15 + 3);
      if ( v28 == 1 || !v17 || !v18 )
        goto LABEL_75;
      LOBYTE(v15) = 0;
      v11 = (unsigned __int64)&v17[v18];
      v29 = v17 + 8;
      if ( (unsigned __int8)((*v17 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v29 <= v11 )
        {
          LOBYTE(v15) = 1;
          v20 = v17[2];
          v19 = v17[1] & 0xF;
          v21 = v17[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v29 <= v11 )
        {
          v19 = v17[2] & 0xF;
          v30 = v18;
          if ( (unsigned int)(unsigned __int8)v17[7] + 8 <= v18 )
            v30 = (unsigned __int8)v17[7] + 8;
          v11 = (unsigned __int64)(v17 + 13);
          v15 = (unsigned __int64)&v17[v30];
          if ( (unsigned __int64)(v17 + 13) > v15 )
            v33 = 0;
          else
            v33 = v17[12];
          if ( (unsigned __int64)(v17 + 14) <= v15 )
            v21 = *(_BYTE *)v11;
          LOBYTE(v15) = 1;
        }
        v20 = v33;
      }
      if ( (_BYTE)v15 )
      {
        LOBYTE(v4) = v20;
        v31 = v21;
      }
      else
      {
LABEL_75:
        v19 = 0;
        v31 = 0;
      }
      sub_140052E64(v11, v15, &v37, a2, *(_DWORD *)(a2 + 48), v28, v16, v19, v4, v31, a2);
    }
  }
LABEL_80:
  IofCompleteRequest((PIRP)a2, 0);
  return v9;
}
