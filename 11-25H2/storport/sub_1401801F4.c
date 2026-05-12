/*
 * XREFs of sub_1401801F4 @ 0x1401801F4
 * Callers:
 *     sub_14002E460 @ 0x14002E460 (sub_14002E460.c)
 * Callees:
 *     sub_1400215B0 @ 0x1400215B0 (sub_1400215B0.c)
 *     sub_140021760 @ 0x140021760 (sub_140021760.c)
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     sub_14006DF7C @ 0x14006DF7C (sub_14006DF7C.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall sub_1401801F4(__int64 a1, __int64 a2)
{
  _DWORD *v2; // r13
  __int64 *v3; // r14
  int v4; // ebx
  int v7; // esi
  __int64 v8; // rdx
  int v9; // ecx
  int v10; // eax
  int v12; // eax
  _DWORD *v13; // rcx
  __int64 v14; // rcx
  bool v15; // zf
  unsigned __int64 v16; // rcx
  __int64 v17; // rdx
  int *v18; // rax
  const EVENT_DESCRIPTOR *v19; // rdx
  unsigned __int64 v20; // rdx
  char v21; // r12
  _BYTE *v22; // r9
  unsigned __int8 v23; // r10
  char v24; // r14
  char v25; // r11
  char v26; // r13
  char *v27; // r11
  unsigned int v28; // r8d
  unsigned int *v29; // rax
  __int64 v30; // rax
  unsigned __int64 v31; // r15
  char v32; // cl
  char v33; // r8
  _BYTE *v34; // rax
  unsigned int v35; // eax
  char v36; // al
  char v37; // [rsp+60h] [rbp-39h]
  char v38; // [rsp+61h] [rbp-38h]
  int v39; // [rsp+68h] [rbp-31h]
  unsigned __int64 v40; // [rsp+70h] [rbp-29h]
  GUID v41; // [rsp+A8h] [rbp+Fh] BYREF

  v2 = *(_DWORD **)(a2 + 24);
  v3 = (__int64 *)(a2 + 184);
  v4 = 0;
  v7 = 0;
  if ( !v2 )
    goto LABEL_24;
  v8 = *v3;
  if ( *(_DWORD *)(*v3 + 16) < 0x1Cu )
  {
    v7 = -1073741820;
    goto LABEL_25;
  }
  if ( *v2 != 28 || v2[1] != 28 || (v9 = v2[3]) == 0 || v9 >= 3 || (v10 = v2[4], v10 >= 0) && v10 != 1 )
  {
LABEL_24:
    v7 = -1073741811;
    goto LABEL_25;
  }
  if ( (v2[2] & 1) != 0 )
  {
    ++*(_BYTE *)(a2 + 67);
    *v3 = v8 + 72;
    return IofCallDriver(*(PDEVICE_OBJECT *)(*(_QWORD *)(a1 + 24) + 8LL), (PIRP)a2);
  }
  if ( v9 == 1 )
  {
    v12 = sub_14006DF7C((__int64)v2, 1LL);
  }
  else
  {
    if ( v9 != 2 )
      goto LABEL_25;
    if ( !sub_1400215B0(a1, 14) )
    {
      v7 = -1073741637;
      goto LABEL_25;
    }
    v13 = *(_DWORD **)(a1 + 24);
    if ( *v13 == 1094997074 )
    {
      v14 = (__int64)(v13 + 94);
    }
    else if ( *v13 == 1314275652 )
    {
      v14 = (__int64)(v13 + 42);
    }
    else
    {
      v14 = 0LL;
    }
    v12 = sub_140021760(v14);
  }
  v7 = v12;
LABEL_25:
  v15 = byte_140168DAA == 0;
  *(_QWORD *)(a2 + 56) = 0LL;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v7;
  if ( v15 )
    goto LABEL_91;
  v41 = 0LL;
  IoGetActivityIdIrp(a2, &v41);
  v17 = *v3;
  if ( *(_BYTE *)*v3 == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_91;
    v19 = &stru_140148B18;
    goto LABEL_90;
  }
  if ( *(_BYTE *)*v3 != 15 )
  {
    if ( *(_BYTE *)*v3 != 27 )
      goto LABEL_91;
    if ( *(_BYTE *)(v17 + 1) == 7 && !*(_DWORD *)(v17 + 8) )
    {
      if ( (byte_1401694F2 & 0x40) != 0 )
      {
        v18 = *(int **)(a2 + 56);
        if ( v18 )
          v4 = *v18;
        sub_140056AB0(v16, v17, &v41, a2, v4, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_91;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_91;
    v19 = &stru_140149FE8;
LABEL_90:
    sub_140052F3C(v16, v19, &v41, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_91;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_91;
  v20 = *(_QWORD *)(v17 + 8);
  v21 = 0;
  v22 = 0LL;
  v37 = 0;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  if ( *(_BYTE *)(v20 + 2) != 40 )
  {
    v32 = *(_BYTE *)(v20 + 72);
    v22 = *(_BYTE **)(v20 + 32);
    v23 = *(_BYTE *)(v20 + 11);
    v21 = *(_BYTE *)(v20 + 4);
    if ( !*(_BYTE *)(v20 + 2) )
      goto LABEL_67;
    goto LABEL_91;
  }
  v27 = 0LL;
  v38 = 0;
  if ( *(_DWORD *)(v20 + 20) )
    goto LABEL_91;
  v16 = 0LL;
  v39 = 0;
  if ( !*(_DWORD *)(v20 + 56) )
    goto LABEL_64;
  v28 = *(_DWORD *)(v20 + 56);
  v29 = (unsigned int *)(v20 + 120);
  v40 = v20 + 120;
  while ( 1 )
  {
    v30 = *v29;
    if ( (unsigned int)v30 >= 0x80 )
    {
      v31 = *(unsigned int *)(v20 + 16);
      if ( (unsigned int)v30 < (unsigned int)v31 )
        break;
    }
LABEL_58:
    v16 = (unsigned int)(v16 + 1);
    v29 = (unsigned int *)(v40 + 4);
    v39 = v16;
    v40 += 4LL;
    if ( (unsigned int)v16 >= v28 )
      goto LABEL_64;
  }
  if ( *(_DWORD *)(v30 + v20) != 64 )
  {
    v16 = (unsigned int)(*(_DWORD *)(v30 + v20) - 65);
    if ( *(_DWORD *)(v30 + v20) == 65 )
    {
      v16 = v30 + 56;
      if ( v30 + 56 <= v31 )
      {
        v38 = 1;
        if ( *(_BYTE *)(v30 + v20 + 10) )
          v27 = (char *)(v30 + v20 + 24);
        v21 = *(_BYTE *)(v30 + v20 + 8);
        v22 = *(_BYTE **)(v30 + v20 + 16);
        v23 = *(_BYTE *)(v30 + v20 + 9);
      }
    }
    else if ( *(_DWORD *)(v30 + v20) == 66 )
    {
      v16 = v30 + 40;
      if ( v30 + 40 <= v31 )
      {
        if ( *(_DWORD *)(v30 + v20 + 12) )
          v27 = (char *)(v30 + v20 + 32);
        v22 = *(_BYTE **)(v30 + v20 + 24);
        goto LABEL_63;
      }
    }
    goto LABEL_56;
  }
  v16 = v30 + 40;
  if ( v30 + 40 > v31 )
  {
LABEL_56:
    if ( v38 )
      goto LABEL_64;
    LODWORD(v16) = v39;
    v28 = *(_DWORD *)(v20 + 56);
    goto LABEL_58;
  }
  if ( *(_BYTE *)(v30 + v20 + 10) )
    v27 = (char *)(v30 + v20 + 24);
  v22 = *(_BYTE **)(v30 + v20 + 16);
LABEL_63:
  v23 = *(_BYTE *)(v30 + v20 + 9);
  v21 = *(_BYTE *)(v30 + v20 + 8);
LABEL_64:
  if ( v27 )
  {
    v32 = *v27;
    v25 = 0;
LABEL_67:
    LOBYTE(v16) = v32 - 8;
    if ( (v16 & 0x5D) == 0 )
    {
      v33 = *(_BYTE *)(v20 + 3);
      if ( v33 == 1 || !v22 || !v23 )
        goto LABEL_86;
      LOBYTE(v20) = 0;
      v16 = (unsigned __int64)&v22[v23];
      v34 = v22 + 8;
      if ( (unsigned __int8)((*v22 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v34 <= v16 )
        {
          LOBYTE(v20) = 1;
          v25 = v22[2];
          v24 = v22[1] & 0xF;
          v26 = v22[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v34 <= v16 )
        {
          v24 = v22[2] & 0xF;
          v35 = v23;
          if ( (unsigned int)(unsigned __int8)v22[7] + 8 <= v23 )
            v35 = (unsigned __int8)v22[7] + 8;
          v16 = (unsigned __int64)(v22 + 13);
          v20 = (unsigned __int64)&v22[v35];
          if ( (unsigned __int64)(v22 + 13) > v20 )
            v37 = 0;
          else
            v37 = v22[12];
          if ( (unsigned __int64)(v22 + 14) <= v20 )
            v26 = *(_BYTE *)v16;
          LOBYTE(v20) = 1;
        }
        v25 = v37;
      }
      if ( (_BYTE)v20 )
      {
        LOBYTE(v4) = v25;
        v36 = v26;
      }
      else
      {
LABEL_86:
        v24 = 0;
        v36 = 0;
      }
      sub_140052E64(v16, v20, &v41, a2, *(_DWORD *)(a2 + 48), v33, v21, v24, v4, v36, a2);
    }
  }
LABEL_91:
  IofCompleteRequest((PIRP)a2, 0);
  return v7;
}
