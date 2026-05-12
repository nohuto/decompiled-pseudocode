/*
 * XREFs of sub_1400A0C74 @ 0x1400A0C74
 * Callers:
 *     sub_14002E460 @ 0x14002E460 (sub_14002E460.c)
 * Callees:
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     sub_14008E20C @ 0x14008E20C (sub_14008E20C.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall sub_1400A0C74(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  int v3; // ebx
  __int64 v4; // rsi
  unsigned int v7; // eax
  int v9; // r14d
  __int64 v10; // rdx
  int v11; // ecx
  int v12; // ecx
  __int64 v13; // rcx
  char v14; // al
  bool v15; // zf
  unsigned __int64 v16; // rcx
  __int64 v17; // rdx
  int *v18; // rax
  const EVENT_DESCRIPTOR *v19; // rdx
  unsigned __int64 v20; // rdx
  char v21; // r15
  _BYTE *v22; // r9
  unsigned __int8 v23; // r10
  char v24; // si
  char v25; // r11
  char v26; // r12
  char *v27; // r11
  unsigned int *v28; // r13
  __int64 v29; // rax
  unsigned __int64 v30; // rbp
  char v31; // cl
  char v32; // r8
  _BYTE *v33; // rax
  unsigned int v34; // eax
  char v35; // al
  int v36; // [rsp+20h] [rbp-A8h]
  char v37; // [rsp+60h] [rbp-68h]
  char v38; // [rsp+61h] [rbp-67h]
  int v39; // [rsp+64h] [rbp-64h]
  unsigned int v40; // [rsp+68h] [rbp-60h]
  GUID v41; // [rsp+70h] [rbp-58h] BYREF

  v2 = *(_QWORD *)(a2 + 184);
  v3 = 0;
  v4 = *(_QWORD *)(a2 + 24);
  *(_QWORD *)(a2 + 56) = 0LL;
  if ( *(_DWORD *)(v2 + 16) >= 0x10u
    && *(_DWORD *)v4 == 16
    && *(_DWORD *)(v4 + 4) >= 0x10u
    && (v7 = *(_DWORD *)(v4 + 8), (v7 & 0x3FF) != 0)
    && RtlNumberOfSetBitsUlongPtr(v7) == 1 )
  {
    if ( *(_DWORD *)(a1 + 3432) == 17 )
    {
      ++*(_BYTE *)(a2 + 67);
      *(_QWORD *)(a2 + 184) += 72LL;
      return IofCallDriver(*(PDEVICE_OBJECT *)(*(_QWORD *)(a1 + 24) + 8LL), (PIRP)a2);
    }
    v9 = sub_14008E20C(*(struct _DEVICE_OBJECT **)(a1 + 8), v4);
    if ( v9 >= 0 )
    {
      v10 = *(_QWORD *)(a1 + 24);
      v11 = *(_DWORD *)(v4 + 8);
      v12 = *(_BYTE *)(v4 + 12) ? *(_DWORD *)(v10 + 5776) | v11 : *(_DWORD *)(v10 + 5776) & ~v11;
      *(_DWORD *)(v10 + 5776) = v12;
      v13 = *(_QWORD *)(a1 + 24);
      v14 = *(_BYTE *)(v13 + 109);
      if ( v14 >= 0 )
        *(_BYTE *)(v13 + 109) = v14 | 0x80;
    }
  }
  else
  {
    v9 = -1073741811;
  }
  v15 = byte_140168DAA == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v9;
  if ( v15 )
    goto LABEL_81;
  v41 = 0LL;
  IoGetActivityIdIrp(a2, &v41);
  v17 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v17 == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_81;
    v16 = *(unsigned int *)(a2 + 48);
    v19 = (const EVENT_DESCRIPTOR *)&unk_140148B18;
    v36 = *(_DWORD *)(a2 + 48);
    goto LABEL_80;
  }
  if ( *(_BYTE *)v17 != 15 )
  {
    if ( *(_BYTE *)v17 != 27 )
      goto LABEL_81;
    if ( *(_BYTE *)(v17 + 1) == 7 && !*(_DWORD *)(v17 + 8) )
    {
      if ( (byte_1401694F2 & 0x40) != 0 )
      {
        v18 = *(int **)(a2 + 56);
        if ( v18 )
          v3 = *v18;
        sub_140056AB0(v16, v17, &v41, a2, v3, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_81;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_81;
    v19 = &stru_140149FE8;
    v36 = *(_DWORD *)(a2 + 48);
LABEL_80:
    sub_140052F3C(v16, v19, &v41, a2, v36);
    goto LABEL_81;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_81;
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
    v31 = *(_BYTE *)(v20 + 72);
    v22 = *(_BYTE **)(v20 + 32);
    v23 = *(_BYTE *)(v20 + 11);
    v21 = *(_BYTE *)(v20 + 4);
    if ( !*(_BYTE *)(v20 + 2) )
      goto LABEL_57;
    goto LABEL_81;
  }
  v27 = 0LL;
  v38 = 0;
  if ( *(_DWORD *)(v20 + 20) )
    goto LABEL_81;
  v16 = 0LL;
  v39 = 0;
  v40 = *(_DWORD *)(v20 + 56);
  if ( !v40 )
    goto LABEL_54;
  v28 = (unsigned int *)(v20 + 120);
  while ( 1 )
  {
    v29 = *v28;
    if ( (unsigned int)v29 >= 0x80 )
    {
      v30 = *(unsigned int *)(v20 + 16);
      if ( (unsigned int)v29 < (unsigned int)v30 )
        break;
    }
LABEL_48:
    v16 = (unsigned int)(v16 + 1);
    ++v28;
    v39 = v16;
    if ( (unsigned int)v16 >= v40 )
      goto LABEL_54;
  }
  if ( *(_DWORD *)(v29 + v20) != 64 )
  {
    v16 = (unsigned int)(*(_DWORD *)(v29 + v20) - 65);
    if ( *(_DWORD *)(v29 + v20) == 65 )
    {
      v16 = v29 + 56;
      if ( v29 + 56 <= v30 )
      {
        v38 = 1;
        if ( *(_BYTE *)(v29 + v20 + 10) )
          v27 = (char *)(v29 + v20 + 24);
        v21 = *(_BYTE *)(v29 + v20 + 8);
        v22 = *(_BYTE **)(v29 + v20 + 16);
        v23 = *(_BYTE *)(v29 + v20 + 9);
      }
    }
    else if ( *(_DWORD *)(v29 + v20) == 66 )
    {
      v16 = v29 + 40;
      if ( v29 + 40 <= v30 )
      {
        if ( *(_DWORD *)(v29 + v20 + 12) )
          v27 = (char *)(v29 + v20 + 32);
        v22 = *(_BYTE **)(v29 + v20 + 24);
        goto LABEL_53;
      }
    }
    goto LABEL_46;
  }
  v16 = v29 + 40;
  if ( v29 + 40 > v30 )
  {
LABEL_46:
    if ( v38 )
      goto LABEL_54;
    LODWORD(v16) = v39;
    goto LABEL_48;
  }
  if ( *(_BYTE *)(v29 + v20 + 10) )
    v27 = (char *)(v29 + v20 + 24);
  v22 = *(_BYTE **)(v29 + v20 + 16);
LABEL_53:
  v23 = *(_BYTE *)(v29 + v20 + 9);
  v21 = *(_BYTE *)(v29 + v20 + 8);
LABEL_54:
  if ( v27 )
  {
    v31 = *v27;
    v25 = 0;
LABEL_57:
    LOBYTE(v16) = v31 - 8;
    if ( (v16 & 0x5D) == 0 )
    {
      v32 = *(_BYTE *)(v20 + 3);
      if ( v32 == 1 || !v22 || !v23 )
        goto LABEL_76;
      LOBYTE(v20) = 0;
      v16 = (unsigned __int64)&v22[v23];
      v33 = v22 + 8;
      if ( (unsigned __int8)((*v22 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v33 <= v16 )
        {
          LOBYTE(v20) = 1;
          v25 = v22[2];
          v24 = v22[1] & 0xF;
          v26 = v22[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v33 <= v16 )
        {
          v24 = v22[2] & 0xF;
          v34 = v23;
          if ( (unsigned int)(unsigned __int8)v22[7] + 8 <= v23 )
            v34 = (unsigned __int8)v22[7] + 8;
          v16 = (unsigned __int64)(v22 + 13);
          v20 = (unsigned __int64)&v22[v34];
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
        LOBYTE(v3) = v25;
        v35 = v26;
      }
      else
      {
LABEL_76:
        v24 = 0;
        v35 = 0;
      }
      sub_140052E64(v16, v20, &v41, a2, *(_DWORD *)(a2 + 48), v32, v21, v24, v3, v35, a2);
    }
  }
LABEL_81:
  IofCompleteRequest((PIRP)a2, 0);
  return v9;
}
