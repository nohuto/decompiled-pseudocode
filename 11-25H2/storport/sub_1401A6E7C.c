/*
 * XREFs of sub_1401A6E7C @ 0x1401A6E7C
 * Callers:
 *     sub_14010216C @ 0x14010216C (sub_14010216C.c)
 * Callees:
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     sub_1400BB0A4 @ 0x1400BB0A4 (sub_1400BB0A4.c)
 *     sub_1400F78BC @ 0x1400F78BC (sub_1400F78BC.c)
 *     sub_1400F905C @ 0x1400F905C (sub_1400F905C.c)
 *     sub_140108588 @ 0x140108588 (sub_140108588.c)
 *     sub_1401114CC @ 0x1401114CC (sub_1401114CC.c)
 *     sub_140111A1C @ 0x140111A1C (sub_140111A1C.c)
 *     sub_14012C040 @ 0x14012C040 (sub_14012C040.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14013C5D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall sub_1401A6E7C(__int64 a1, __int64 a2)
{
  int v2; // edi
  void (__fastcall *v3)(_QWORD, _QWORD); // rax
  __int64 v6; // rbx
  const char *v7; // r8
  bool v8; // zf
  unsigned __int64 v9; // rcx
  __int64 v10; // rdx
  int *v11; // rax
  const EVENT_DESCRIPTOR *v12; // rdx
  unsigned __int64 v13; // rdx
  char v14; // r15
  _BYTE *v15; // r9
  unsigned __int8 v16; // r10
  char v17; // bl
  char v18; // r11
  char v19; // r12
  char *v20; // r11
  char v21; // r13
  unsigned int v22; // r14d
  unsigned __int64 v23; // rsi
  __int64 v24; // r8
  int v25; // ecx
  char v26; // cl
  char v27; // r8
  _BYTE *v28; // rax
  unsigned int v29; // eax
  char v30; // al
  __int64 v32; // [rsp+20h] [rbp-B8h]
  __int64 v33; // [rsp+28h] [rbp-B0h]
  __int64 v34; // [rsp+30h] [rbp-A8h]
  __int64 v35; // [rsp+38h] [rbp-A0h]
  __int64 v36; // [rsp+40h] [rbp-98h]
  __int64 v37; // [rsp+48h] [rbp-90h]
  char v38; // [rsp+80h] [rbp-58h]
  unsigned int v39; // [rsp+84h] [rbp-54h]
  GUID v40; // [rsp+88h] [rbp-50h] BYREF

  v2 = 0;
  _InterlockedExchange((volatile __int32 *)(a1 + 96), 5);
  v3 = *(void (__fastcall **)(_QWORD, _QWORD))(a1 + 280);
  if ( v3 )
  {
    v3(0LL, 0LL);
    *(_QWORD *)(a1 + 280) = 0LL;
  }
  if ( (byte_1401694FA & 0x10) != 0 )
  {
    v6 = *(_QWORD *)(a1 + 16);
    v7 = (const char *)&dword_140149108;
    if ( *(_QWORD *)(v6 + 752) )
      v7 = *(const char **)(v6 + 752);
    sub_1400F78BC(
      v6 + 841,
      v6 + 800,
      (__int64)v7,
      *(_DWORD *)(*(_QWORD *)(v6 + 128) + 56LL),
      *(_QWORD *)(v6 + 128) + 1032LL,
      *(const wchar_t **)(*(_QWORD *)(v6 + 128) + 1016LL),
      *(const char **)(v6 + 792),
      *(_WORD *)(v6 + 4),
      *(_DWORD *)(a1 + 56),
      *(_BYTE *)(v6 + 744),
      v7,
      (const char *)(v6 + 800),
      (const char *)(v6 + 841),
      a1 + 160,
      (*(_BYTE *)(v6 + 136) & 2) != 0 ? 20 : 17);
  }
  sub_1400BB0A4(a1);
  sub_1400F905C(a1);
  sub_1401114CC(a1);
  *(_QWORD *)(a1 + 112) &= ~2uLL;
  sub_140108588(a1);
  sub_140111A1C(a1);
  sub_14012C040(a1);
  v8 = byte_140168DAA == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = 0;
  if ( v8 )
    goto LABEL_71;
  v40 = 0LL;
  IoGetActivityIdIrp(a2, &v40);
  v10 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v10 == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_71;
    v12 = &stru_140148B18;
    goto LABEL_70;
  }
  if ( *(_BYTE *)v10 != 15 )
  {
    if ( *(_BYTE *)v10 != 27 )
      goto LABEL_71;
    if ( *(_BYTE *)(v10 + 1) == 7 && !*(_DWORD *)(v10 + 8) )
    {
      if ( (byte_1401694F2 & 0x40) != 0 )
      {
        v11 = *(int **)(a2 + 56);
        if ( v11 )
          v2 = *v11;
        LODWORD(v33) = *(_DWORD *)(a2 + 48);
        LODWORD(v32) = v2;
        sub_140056AB0(v9, v10, &v40, a2, v32, v33);
      }
      goto LABEL_71;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_71;
    v12 = &stru_140149FE8;
LABEL_70:
    LODWORD(v32) = *(_DWORD *)(a2 + 48);
    sub_140052F3C(v9, v12, &v40, a2, v32);
    goto LABEL_71;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_71;
  v13 = *(_QWORD *)(v10 + 8);
  v14 = 0;
  v15 = 0LL;
  v38 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  if ( *(_BYTE *)(v13 + 2) != 40 )
  {
    v26 = *(_BYTE *)(v13 + 72);
    v15 = *(_BYTE **)(v13 + 32);
    v16 = *(_BYTE *)(v13 + 11);
    v14 = *(_BYTE *)(v13 + 4);
    if ( !*(_BYTE *)(v13 + 2) )
      goto LABEL_47;
    goto LABEL_71;
  }
  v20 = 0LL;
  v21 = 0;
  if ( *(_DWORD *)(v13 + 20) )
    goto LABEL_71;
  v22 = 0;
  v39 = *(_DWORD *)(v13 + 56);
  if ( !v39 )
    goto LABEL_44;
  while ( 1 )
  {
    v9 = *(unsigned int *)(v13 + 4LL * v22 + 120);
    if ( (unsigned int)v9 >= 0x80 )
    {
      v23 = *(unsigned int *)(v13 + 16);
      if ( (unsigned int)v9 < (unsigned int)v23 )
        break;
    }
LABEL_38:
    if ( ++v22 >= v39 )
      goto LABEL_44;
  }
  v24 = (unsigned int)v9;
  v25 = *(_DWORD *)(v9 + v13) - 64;
  if ( v25 )
  {
    v9 = (unsigned int)(v25 - 1);
    if ( (_DWORD)v9 )
    {
      if ( (_DWORD)v9 == 1 )
      {
        v9 = v24 + 40;
        if ( v24 + 40 <= v23 )
        {
          if ( *(_DWORD *)(v24 + v13 + 12) )
            v20 = (char *)(v24 + v13 + 32);
          v15 = *(_BYTE **)(v24 + v13 + 24);
          goto LABEL_43;
        }
      }
    }
    else
    {
      v9 = v24 + 56;
      if ( v24 + 56 <= v23 )
      {
        v21 = 1;
        if ( *(_BYTE *)(v24 + v13 + 10) )
          v20 = (char *)(v24 + v13 + 24);
        v14 = *(_BYTE *)(v24 + v13 + 8);
        v15 = *(_BYTE **)(v24 + v13 + 16);
        v16 = *(_BYTE *)(v24 + v13 + 9);
      }
    }
    goto LABEL_37;
  }
  v9 = v24 + 40;
  if ( v24 + 40 > v23 )
  {
LABEL_37:
    if ( v21 )
      goto LABEL_44;
    goto LABEL_38;
  }
  if ( *(_BYTE *)(v24 + v13 + 10) )
    v20 = (char *)(v24 + v13 + 24);
  v15 = *(_BYTE **)(v24 + v13 + 16);
LABEL_43:
  v16 = *(_BYTE *)(v24 + v13 + 9);
  v14 = *(_BYTE *)(v24 + v13 + 8);
LABEL_44:
  if ( v20 )
  {
    v26 = *v20;
    v18 = 0;
LABEL_47:
    LOBYTE(v9) = v26 - 8;
    if ( (v9 & 0x5D) == 0 )
    {
      v27 = *(_BYTE *)(v13 + 3);
      if ( v27 == 1 || !v15 || !v16 )
        goto LABEL_66;
      LOBYTE(v13) = 0;
      v9 = (unsigned __int64)&v15[v16];
      v28 = v15 + 8;
      if ( (unsigned __int8)((*v15 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v28 <= v9 )
        {
          LOBYTE(v13) = 1;
          v18 = v15[2];
          v17 = v15[1] & 0xF;
          v19 = v15[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v28 <= v9 )
        {
          v17 = v15[2] & 0xF;
          v29 = v16;
          if ( (unsigned int)(unsigned __int8)v15[7] + 8 <= v16 )
            v29 = (unsigned __int8)v15[7] + 8;
          v9 = (unsigned __int64)(v15 + 13);
          v13 = (unsigned __int64)&v15[v29];
          if ( (unsigned __int64)(v15 + 13) > v13 )
            v38 = 0;
          else
            v38 = v15[12];
          if ( (unsigned __int64)(v15 + 14) <= v13 )
            v19 = *(_BYTE *)v9;
          LOBYTE(v13) = 1;
        }
        v18 = v38;
      }
      if ( (_BYTE)v13 )
      {
        LOBYTE(v2) = v18;
        v30 = v19;
      }
      else
      {
LABEL_66:
        v17 = 0;
        v30 = 0;
      }
      LOBYTE(v37) = v30;
      LOBYTE(v36) = v2;
      LOBYTE(v35) = v17;
      LOBYTE(v34) = v14;
      LOBYTE(v33) = v27;
      LODWORD(v32) = *(_DWORD *)(a2 + 48);
      sub_140052E64(v9, v13, &v40, a2, v32, v33, v34, v35, v36, v37, a2);
    }
  }
LABEL_71:
  IofCompleteRequest((PIRP)a2, 0);
  return 0LL;
}
