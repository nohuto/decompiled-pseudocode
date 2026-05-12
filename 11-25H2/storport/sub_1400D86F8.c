/*
 * XREFs of sub_1400D86F8 @ 0x1400D86F8
 * Callers:
 *     sub_14018C298 @ 0x14018C298 (sub_14018C298.c)
 * Callees:
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     sub_140121C6C @ 0x140121C6C (sub_140121C6C.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1400D86F8(__int64 a1, __int64 a2, _BYTE *a3)
{
  int v3; // ebx
  int *v5; // rdx
  unsigned int v8; // esi
  int v9; // ecx
  int v10; // edx
  __int64 result; // rax
  bool v12; // zf
  unsigned __int64 v13; // rcx
  __int64 v14; // rdx
  int *v15; // rax
  const EVENT_DESCRIPTOR *v16; // rdx
  __int64 v17; // rdx
  char v18; // r12
  _BYTE *v19; // r9
  unsigned __int8 v20; // r10
  char v21; // bp
  char v22; // r11
  char v23; // r13
  char *v24; // r11
  unsigned int v25; // r15d
  unsigned __int64 v26; // r14
  __int64 v27; // r8
  int v28; // ecx
  char v29; // cl
  char v30; // r8
  _BYTE *v31; // rax
  unsigned int v32; // eax
  unsigned __int64 v33; // r8
  char v34; // al
  int v35; // [rsp+20h] [rbp-98h]
  char v36; // [rsp+60h] [rbp-58h]
  char v37; // [rsp+61h] [rbp-57h]
  unsigned int v38; // [rsp+64h] [rbp-54h]
  GUID v39; // [rsp+68h] [rbp-50h] BYREF

  v3 = 0;
  v5 = *(int **)(a2 + 24);
  v8 = 0;
  if ( v5 && *(_DWORD *)(*(_QWORD *)(a2 + 184) + 16LL) >= 8u )
  {
    v9 = *v5;
    if ( *v5 != 49 && v9 != 67 )
      goto LABEL_5;
    v10 = v5[1];
    if ( !v10 )
    {
      if ( v9 == 49 || v9 == 67 )
      {
        v8 = sub_140121C6C(*(_QWORD *)(a1 + 8), a2);
        result = 259LL;
        if ( v8 == 259 )
        {
          *a3 = 0;
          return result;
        }
      }
      goto LABEL_14;
    }
    if ( v10 != 1 )
    {
LABEL_5:
      *(_QWORD *)(a2 + 56) = 0LL;
      v8 = -1073741808;
    }
  }
  else
  {
    v8 = -1073741811;
  }
LABEL_14:
  v12 = byte_140168DAA == 0;
  *a3 = 1;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v8;
  if ( v12 )
    goto LABEL_78;
  v39 = 0LL;
  IoGetActivityIdIrp(a2, &v39);
  v14 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v14 == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_78;
    v35 = *(_DWORD *)(a2 + 48);
    v16 = (const EVENT_DESCRIPTOR *)&unk_140148B18;
    goto LABEL_77;
  }
  if ( *(_BYTE *)v14 != 15 )
  {
    if ( *(_BYTE *)v14 != 27 )
      goto LABEL_78;
    if ( *(_BYTE *)(v14 + 1) == 7 && !*(_DWORD *)(v14 + 8) )
    {
      if ( (byte_1401694F2 & 0x40) != 0 )
      {
        v15 = *(int **)(a2 + 56);
        if ( v15 )
          v3 = *v15;
        sub_140056AB0(v13, v14, &v39, a2, v3, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_78;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_78;
    v16 = &stru_140149FE8;
    v35 = *(_DWORD *)(a2 + 48);
LABEL_77:
    sub_140052F3C(v13, v16, &v39, a2, v35);
    goto LABEL_78;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_78;
  v17 = *(_QWORD *)(v14 + 8);
  v18 = 0;
  v19 = 0LL;
  v36 = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  if ( *(_BYTE *)(v17 + 2) != 40 )
  {
    v29 = *(_BYTE *)(v17 + 72);
    v19 = *(_BYTE **)(v17 + 32);
    v20 = *(_BYTE *)(v17 + 11);
    v18 = *(_BYTE *)(v17 + 4);
    if ( !*(_BYTE *)(v17 + 2) )
      goto LABEL_54;
    goto LABEL_78;
  }
  v24 = 0LL;
  v37 = 0;
  if ( *(_DWORD *)(v17 + 20) )
    goto LABEL_78;
  v25 = 0;
  v38 = *(_DWORD *)(v17 + 56);
  if ( !v38 )
    goto LABEL_51;
  while ( 1 )
  {
    v13 = *(unsigned int *)(v17 + 4LL * v25 + 120);
    if ( (unsigned int)v13 >= 0x80 )
    {
      v26 = *(unsigned int *)(v17 + 16);
      if ( (unsigned int)v13 < (unsigned int)v26 )
        break;
    }
LABEL_45:
    if ( ++v25 >= v38 )
      goto LABEL_51;
  }
  v27 = (unsigned int)v13;
  v28 = *(_DWORD *)(v13 + v17) - 64;
  if ( v28 )
  {
    v13 = (unsigned int)(v28 - 1);
    if ( (_DWORD)v13 )
    {
      if ( (_DWORD)v13 == 1 )
      {
        v13 = v27 + 40;
        if ( v27 + 40 <= v26 )
        {
          if ( *(_DWORD *)(v27 + v17 + 12) )
            v24 = (char *)(v27 + v17 + 32);
          v19 = *(_BYTE **)(v27 + v17 + 24);
          goto LABEL_50;
        }
      }
    }
    else
    {
      v13 = v27 + 56;
      if ( v27 + 56 <= v26 )
      {
        v37 = 1;
        if ( *(_BYTE *)(v27 + v17 + 10) )
          v24 = (char *)(v27 + v17 + 24);
        v18 = *(_BYTE *)(v27 + v17 + 8);
        v19 = *(_BYTE **)(v27 + v17 + 16);
        v20 = *(_BYTE *)(v27 + v17 + 9);
      }
    }
    goto LABEL_44;
  }
  v13 = v27 + 40;
  if ( v27 + 40 > v26 )
  {
LABEL_44:
    if ( v37 )
      goto LABEL_51;
    goto LABEL_45;
  }
  if ( *(_BYTE *)(v27 + v17 + 10) )
    v24 = (char *)(v27 + v17 + 24);
  v19 = *(_BYTE **)(v27 + v17 + 16);
LABEL_50:
  v20 = *(_BYTE *)(v27 + v17 + 9);
  v18 = *(_BYTE *)(v27 + v17 + 8);
LABEL_51:
  if ( v24 )
  {
    v29 = *v24;
    v22 = 0;
LABEL_54:
    LOBYTE(v13) = v29 - 8;
    if ( (v13 & 0x5D) == 0 )
    {
      if ( *(_BYTE *)(v17 + 3) == 1 || !v19 || !v20 )
        goto LABEL_73;
      v30 = 0;
      v13 = (unsigned __int64)&v19[v20];
      v31 = v19 + 8;
      if ( (unsigned __int8)((*v19 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v31 <= v13 )
        {
          v30 = 1;
          v22 = v19[2];
          v21 = v19[1] & 0xF;
          v23 = v19[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v31 <= v13 )
        {
          v21 = v19[2] & 0xF;
          v32 = v20;
          if ( (unsigned int)(unsigned __int8)v19[7] + 8 <= v20 )
            v32 = (unsigned __int8)v19[7] + 8;
          v13 = (unsigned __int64)(v19 + 13);
          v33 = (unsigned __int64)&v19[v32];
          if ( (unsigned __int64)(v19 + 13) > v33 )
            v36 = 0;
          else
            v36 = v19[12];
          if ( (unsigned __int64)(v19 + 14) <= v33 )
            v23 = *(_BYTE *)v13;
          v30 = 1;
        }
        v22 = v36;
      }
      if ( v30 )
      {
        LOBYTE(v3) = v22;
        v34 = v23;
      }
      else
      {
LABEL_73:
        v21 = 0;
        v34 = 0;
      }
      sub_140052E64(v13, v17, &v39, a2, *(_DWORD *)(a2 + 48), *(_BYTE *)(v17 + 3), v18, v21, v3, v34, a2);
    }
  }
LABEL_78:
  IofCompleteRequest((PIRP)a2, 0);
  return v8;
}
