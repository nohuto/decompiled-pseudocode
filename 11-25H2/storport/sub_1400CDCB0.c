/*
 * XREFs of sub_1400CDCB0 @ 0x1400CDCB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     sub_1400A870C @ 0x1400A870C (sub_1400A870C.c)
 *     sub_140122C20 @ 0x140122C20 (sub_140122C20.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

void __fastcall sub_1400CDCB0(__int64 a1, char a2, __int64 a3)
{
  __int64 v5; // r14
  __int64 v6; // rbx
  int v7; // ebp
  bool v8; // zf
  unsigned __int64 v9; // rcx
  __int64 v10; // rdx
  int *v11; // rax
  const EVENT_DESCRIPTOR *v12; // rdx
  __int64 v13; // rdx
  char v14; // di
  _BYTE *v15; // r9
  unsigned __int8 v16; // r10
  char v17; // r11
  char v18; // r12
  char v19; // r15
  char *v20; // rbx
  unsigned int *v21; // r13
  __int64 v22; // rax
  unsigned __int64 v23; // rsi
  char v24; // cl
  char v25; // r8
  _BYTE *v26; // rax
  char *v27; // r15
  unsigned int v28; // eax
  char v29; // al
  __int64 v30; // [rsp+20h] [rbp-E8h]
  __int64 v31; // [rsp+28h] [rbp-E0h]
  __int64 v32; // [rsp+30h] [rbp-D8h]
  __int64 v33; // [rsp+38h] [rbp-D0h]
  __int64 v34; // [rsp+40h] [rbp-C8h]
  __int64 v35; // [rsp+48h] [rbp-C0h]
  char v36; // [rsp+A0h] [rbp-68h]
  int v37; // [rsp+A4h] [rbp-64h]
  unsigned int v38; // [rsp+A8h] [rbp-60h]
  GUID v39; // [rsp+B0h] [rbp-58h] BYREF

  *(_QWORD *)(a1 + 968) &= ~0x800uLL;
  *(_QWORD *)(a1 + 968) &= ~0x400uLL;
  *(_QWORD *)(a1 + 968) &= ~0x800000uLL;
  v5 = *(_QWORD *)(*(_QWORD *)a3 + 4184LL);
  v6 = *(_QWORD *)(*(_QWORD *)a3 + 4224LL);
  v7 = 0;
  *(_QWORD *)(v5 + 56) = 0LL;
  *(_DWORD *)(v5 + 48) = a2 == 0 ? 0xC0000185 : 0;
  sub_1400A870C(
    a1,
    1,
    a2 != 0 ? 4 : 2,
    (__int64)L"Controller reset after firmware activation.",
    L"ResetSuccessful",
    a2,
    &dword_140149108,
    0,
    &dword_140149108,
    0,
    &dword_140149108,
    0,
    (void *)&dword_140149108,
    0,
    (void *)&dword_140149108,
    0,
    (void *)&dword_140149108,
    0,
    (void *)&dword_140149108,
    0);
  _interlockedbittestandreset((volatile signed __int32 *)(*(_QWORD *)a3 + 4256LL), 3u);
  sub_140122C20(a1, a3);
  ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v6 + 152));
  v8 = byte_140168DAA == 0;
  *(_BYTE *)(v5 + 141) = -84;
  if ( v8 )
    goto LABEL_66;
  v39 = 0LL;
  IoGetActivityIdIrp(v5, &v39);
  v10 = *(_QWORD *)(v5 + 184);
  if ( *(_BYTE *)v10 == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_66;
    v12 = (const EVENT_DESCRIPTOR *)&unk_140148B18;
    goto LABEL_65;
  }
  if ( *(_BYTE *)v10 != 15 )
  {
    if ( *(_BYTE *)v10 != 27 )
      goto LABEL_66;
    if ( *(_BYTE *)(v10 + 1) == 7 && !*(_DWORD *)(v10 + 8) )
    {
      if ( (byte_1401694F2 & 0x40) != 0 )
      {
        v11 = *(int **)(v5 + 56);
        if ( v11 )
          v7 = *v11;
        LODWORD(v31) = *(_DWORD *)(v5 + 48);
        LODWORD(v30) = v7;
        sub_140056AB0(v9, v10, &v39, v5, v30, v31);
      }
      goto LABEL_66;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_66;
    v12 = &stru_140149FE8;
LABEL_65:
    LODWORD(v30) = *(_DWORD *)(v5 + 48);
    sub_140052F3C(v9, v12, &v39, v5, v30);
    goto LABEL_66;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_66;
  v13 = *(_QWORD *)(v10 + 8);
  v14 = 0;
  v15 = 0LL;
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
    if ( *(_BYTE *)(v13 + 2) )
      goto LABEL_66;
LABEL_43:
    LOBYTE(v9) = v24 - 8;
    if ( (v9 & 0x5D) != 0 )
      goto LABEL_66;
    v25 = *(_BYTE *)(v13 + 3);
    if ( v25 == 1 || !v15 || !v16 )
      goto LABEL_61;
    LOBYTE(v13) = 0;
    v9 = (unsigned __int64)&v15[v16];
    v26 = v15 + 8;
    if ( (unsigned __int8)((*v15 & 0x7F) - 114) <= 1u )
    {
      if ( (unsigned __int64)v26 > v9 )
        goto LABEL_59;
      v18 = v15[2];
      v17 = v15[1] & 0xF;
      v19 = v15[3];
    }
    else
    {
      if ( (unsigned __int64)v26 > v9 )
        goto LABEL_59;
      v27 = v15 + 13;
      v17 = v15[2] & 0xF;
      v28 = v16;
      if ( (unsigned int)(unsigned __int8)v15[7] + 8 <= v16 )
        v28 = (unsigned __int8)v15[7] + 8;
      v9 = (unsigned __int64)&v15[v28];
      if ( (unsigned __int64)v27 <= v9 )
        v18 = v15[12];
      if ( (unsigned __int64)(v15 + 14) > v9 )
        v19 = 0;
      else
        v19 = *v27;
    }
    LOBYTE(v13) = 1;
LABEL_59:
    if ( (_BYTE)v13 )
    {
      LOBYTE(v7) = v18;
      v29 = v19;
LABEL_62:
      LOBYTE(v35) = v29;
      LOBYTE(v34) = v7;
      LOBYTE(v33) = v17;
      LOBYTE(v32) = v14;
      LOBYTE(v31) = v25;
      LODWORD(v30) = *(_DWORD *)(v5 + 48);
      sub_140052E64(v9, v13, &v39, v5, v30, v31, v32, v33, v34, v35, v5);
      goto LABEL_66;
    }
LABEL_61:
    v17 = 0;
    v29 = 0;
    goto LABEL_62;
  }
  v20 = 0LL;
  v36 = 0;
  if ( *(_DWORD *)(v13 + 20) )
    goto LABEL_66;
  v9 = 0LL;
  v37 = 0;
  v38 = *(_DWORD *)(v13 + 56);
  if ( !v38 )
    goto LABEL_40;
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
LABEL_34:
    v9 = (unsigned int)(v9 + 1);
    ++v21;
    v37 = v9;
    if ( (unsigned int)v9 >= v38 )
      goto LABEL_40;
  }
  if ( *(_DWORD *)(v22 + v13) != 64 )
  {
    v9 = (unsigned int)(*(_DWORD *)(v22 + v13) - 65);
    if ( *(_DWORD *)(v22 + v13) == 65 )
    {
      v9 = v22 + 56;
      if ( v22 + 56 <= v23 )
      {
        v36 = 1;
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
        goto LABEL_39;
      }
    }
    goto LABEL_32;
  }
  v9 = v22 + 40;
  if ( v22 + 40 > v23 )
  {
LABEL_32:
    if ( v36 )
      goto LABEL_40;
    LODWORD(v9) = v37;
    goto LABEL_34;
  }
  if ( *(_BYTE *)(v22 + v13 + 10) )
    v20 = (char *)(v22 + v13 + 24);
  v15 = *(_BYTE **)(v22 + v13 + 16);
LABEL_39:
  v16 = *(_BYTE *)(v22 + v13 + 9);
  v14 = *(_BYTE *)(v22 + v13 + 8);
LABEL_40:
  if ( v20 )
  {
    v24 = *v20;
    goto LABEL_43;
  }
LABEL_66:
  IofCompleteRequest((PIRP)v5, 1);
}
