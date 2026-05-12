/*
 * XREFs of sub_1400D0158 @ 0x1400D0158
 * Callers:
 *     sub_1400CC36C @ 0x1400CC36C (sub_1400CC36C.c)
 *     sub_14018C298 @ 0x14018C298 (sub_14018C298.c)
 * Callees:
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     sub_1400BC8A4 @ 0x1400BC8A4 (sub_1400BC8A4.c)
 *     sub_1400E736C @ 0x1400E736C (sub_1400E736C.c)
 *     sub_1400F5FEC @ 0x1400F5FEC (sub_1400F5FEC.c)
 *     sub_1401225EC @ 0x1401225EC (sub_1401225EC.c)
 *     sub_140122670 @ 0x140122670 (sub_140122670.c)
 *     sub_140122C20 @ 0x140122C20 (sub_140122C20.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1400D0158(__int64 a1, void *a2, __int64 a3, _BYTE *a4)
{
  __int64 v4; // rax
  int v5; // ebx
  int v10; // esi
  _DWORD *v11; // rax
  __int64 *v12; // r14
  bool v14; // zf
  unsigned __int64 v15; // rcx
  __int64 v16; // rdx
  int *v17; // rax
  const EVENT_DESCRIPTOR *v18; // rdx
  unsigned __int64 v19; // rdx
  char v20; // r15
  _BYTE *v21; // r9
  unsigned __int8 v22; // r10
  char v23; // r11
  char v24; // r14
  char v25; // r8
  char *v26; // r14
  unsigned int v27; // r13d
  unsigned __int64 v28; // r12
  __int64 v29; // r8
  int v30; // ecx
  char v31; // cl
  char v32; // r12
  _BYTE *v33; // rax
  unsigned int v34; // eax
  char v35; // al
  __int64 v36; // [rsp+20h] [rbp-49h]
  __int64 v37; // [rsp+28h] [rbp-41h]
  __int64 v38; // [rsp+30h] [rbp-39h]
  __int64 v39; // [rsp+38h] [rbp-31h]
  __int64 v40; // [rsp+40h] [rbp-29h]
  __int64 v41; // [rsp+48h] [rbp-21h]
  char v42; // [rsp+60h] [rbp-9h]
  char v43; // [rsp+61h] [rbp-8h]
  char v44; // [rsp+62h] [rbp-7h]
  unsigned int v45; // [rsp+64h] [rbp-5h]
  __int128 v46; // [rsp+68h] [rbp-1h] BYREF
  GUID v47; // [rsp+78h] [rbp+Fh] BYREF

  v4 = *(_QWORD *)(a3 + 184);
  v5 = 0;
  *a4 = 1;
  *(_QWORD *)(a3 + 56) = 0LL;
  v46 = 0LL;
  if ( !a2 )
    goto LABEL_15;
  if ( *(_DWORD *)(v4 + 16) >= 0x10u )
  {
    if ( *(_DWORD *)(v4 + 8) < 0x38u )
    {
      v10 = -1073741789;
      goto LABEL_16;
    }
    v11 = *(_DWORD **)(a3 + 24);
    if ( *v11 == 16 && v11[1] >= 0x10u && (v11[2] & 1) != 0 )
    {
      v12 = (__int64 *)sub_1401225EC(a2);
      if ( v12 )
      {
        v10 = sub_1400E736C(a2, 512LL, a3, &v46, (char *)&v46 + 8, 0);
        if ( v10 >= 0 )
        {
          *(_DWORD *)(*v12 + 4256) |= 1u;
          *(_DWORD *)(*v12 + 4256) |= 0x20u;
          *(_DWORD *)(*v12 + 4256) |= 2u;
          *(_DWORD *)(*v12 + 4256) &= ~0x40u;
          *(_WORD *)(*v12 + 4252) = 0;
          *(_QWORD *)(*v12 + 4184) = a3;
          *(_QWORD *)(*v12 + 4192) = sub_1400D06C0;
          *(_QWORD *)(*v12 + 4200) = v12;
          *(_QWORD *)(*v12 + 4224) = a1;
          *(_OWORD *)(*v12 + 4160) = v46;
          *(_DWORD *)(*v12 + 4248) = 512;
          sub_1400BC8A4((__int64)a2, *v12 + 4096, 0x203u, 0x200u, *((__int64 *)&v46 + 1), -1, 0LL, 0, *v12, v12[1]);
          v10 = sub_140122670(a2);
          if ( v10 >= 0 )
          {
            *a4 = 0;
            return 259LL;
          }
        }
        _interlockedbittestandreset((volatile signed __int32 *)(*v12 + 4256), 3u);
        sub_140122C20(a2, v12);
      }
      else
      {
        v10 = -1073741670;
      }
      goto LABEL_16;
    }
LABEL_15:
    v10 = -1073741811;
    goto LABEL_16;
  }
  v10 = -1073741820;
LABEL_16:
  if ( (_QWORD)v46 )
    sub_1400F5FEC((_DWORD)a2, 512, a3, v46, *((__int64 *)&v46 + 1));
  v14 = byte_140168DAA == 0;
  *(_BYTE *)(a3 + 141) = -84;
  *(_DWORD *)(a3 + 48) = v10;
  if ( v14 )
    goto LABEL_84;
  v47 = 0LL;
  IoGetActivityIdIrp(a3, &v47);
  v16 = *(_QWORD *)(a3 + 184);
  if ( *(_BYTE *)v16 == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_84;
    v18 = (const EVENT_DESCRIPTOR *)&unk_140148B18;
    goto LABEL_83;
  }
  if ( *(_BYTE *)v16 != 15 )
  {
    if ( *(_BYTE *)v16 != 27 )
      goto LABEL_84;
    if ( *(_BYTE *)(v16 + 1) == 7 && !*(_DWORD *)(v16 + 8) )
    {
      if ( (byte_1401694F2 & 0x40) != 0 )
      {
        v17 = *(int **)(a3 + 56);
        if ( v17 )
          v5 = *v17;
        LODWORD(v37) = *(_DWORD *)(a3 + 48);
        LODWORD(v36) = v5;
        sub_140056AB0(v15, v16, &v47, a3, v36, v37);
      }
      goto LABEL_84;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_84;
    v18 = &stru_140149FE8;
LABEL_83:
    LODWORD(v36) = *(_DWORD *)(a3 + 48);
    sub_140052F3C(v15, v18, &v47, a3, v36);
    goto LABEL_84;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_84;
  v19 = *(_QWORD *)(v16 + 8);
  v20 = 0;
  v21 = 0LL;
  v43 = 0;
  v22 = 0;
  v42 = 0;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  if ( *(_BYTE *)(v19 + 2) != 40 )
  {
    v31 = *(_BYTE *)(v19 + 72);
    v21 = *(_BYTE **)(v19 + 32);
    v22 = *(_BYTE *)(v19 + 11);
    v20 = *(_BYTE *)(v19 + 4);
    if ( !*(_BYTE *)(v19 + 2) )
      goto LABEL_59;
    goto LABEL_84;
  }
  v26 = 0LL;
  v44 = 0;
  if ( *(_DWORD *)(v19 + 20) )
    goto LABEL_84;
  v27 = 0;
  v45 = *(_DWORD *)(v19 + 56);
  if ( !v45 )
    goto LABEL_56;
  while ( 1 )
  {
    v15 = *(unsigned int *)(v19 + 4LL * v27 + 120);
    if ( (unsigned int)v15 >= 0x80 )
    {
      v28 = *(unsigned int *)(v19 + 16);
      if ( (unsigned int)v15 < (unsigned int)v28 )
        break;
    }
LABEL_49:
    if ( ++v27 >= v45 )
      goto LABEL_55;
  }
  v29 = (unsigned int)v15;
  v30 = *(_DWORD *)(v15 + v19) - 64;
  if ( v30 )
  {
    v15 = (unsigned int)(v30 - 1);
    if ( (_DWORD)v15 )
    {
      if ( (_DWORD)v15 == 1 )
      {
        v15 = v29 + 40;
        if ( v29 + 40 <= v28 )
        {
          if ( *(_DWORD *)(v29 + v19 + 12) )
            v26 = (char *)(v29 + v19 + 32);
          v21 = *(_BYTE **)(v29 + v19 + 24);
          goto LABEL_54;
        }
      }
    }
    else
    {
      v15 = v29 + 56;
      if ( v29 + 56 <= v28 )
      {
        v44 = 1;
        if ( *(_BYTE *)(v29 + v19 + 10) )
          v26 = (char *)(v29 + v19 + 24);
        v20 = *(_BYTE *)(v29 + v19 + 8);
        v21 = *(_BYTE **)(v29 + v19 + 16);
        v22 = *(_BYTE *)(v29 + v19 + 9);
      }
    }
    goto LABEL_48;
  }
  v15 = v29 + 40;
  if ( v29 + 40 > v28 )
  {
LABEL_48:
    if ( v44 )
      goto LABEL_55;
    goto LABEL_49;
  }
  if ( *(_BYTE *)(v29 + v19 + 10) )
    v26 = (char *)(v29 + v19 + 24);
  v21 = *(_BYTE **)(v29 + v19 + 16);
LABEL_54:
  v22 = *(_BYTE *)(v29 + v19 + 9);
  v20 = *(_BYTE *)(v29 + v19 + 8);
LABEL_55:
  v25 = 0;
LABEL_56:
  if ( v26 )
  {
    v31 = *v26;
    v24 = 0;
LABEL_59:
    LOBYTE(v15) = v31 - 8;
    if ( (v15 & 0x5D) == 0 )
    {
      v32 = *(_BYTE *)(v19 + 3);
      if ( v32 == 1 || !v21 || !v22 )
        goto LABEL_79;
      LOBYTE(v19) = 0;
      v15 = (unsigned __int64)&v21[v22];
      v33 = v21 + 8;
      if ( (unsigned __int8)((*v21 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v33 <= v15 )
        {
          LOBYTE(v19) = 1;
          v24 = v21[2];
          v23 = v21[1] & 0xF;
          v25 = v21[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v33 <= v15 )
        {
          v23 = v21[2] & 0xF;
          v34 = v22;
          if ( (unsigned int)(unsigned __int8)v21[7] + 8 <= v22 )
            v34 = (unsigned __int8)v21[7] + 8;
          v15 = (unsigned __int64)(v21 + 13);
          v19 = (unsigned __int64)&v21[v34];
          if ( (unsigned __int64)(v21 + 13) > v19 )
            v43 = 0;
          else
            v43 = v21[12];
          if ( (unsigned __int64)(v21 + 14) > v19 )
            v42 = 0;
          else
            v42 = *(_BYTE *)v15;
          LOBYTE(v19) = 1;
        }
        v25 = v42;
        v24 = v43;
      }
      if ( (_BYTE)v19 )
      {
        LOBYTE(v5) = v24;
        v35 = v25;
      }
      else
      {
LABEL_79:
        v23 = 0;
        v35 = 0;
      }
      LOBYTE(v41) = v35;
      LOBYTE(v40) = v5;
      LOBYTE(v39) = v23;
      LOBYTE(v38) = v20;
      LOBYTE(v37) = v32;
      LODWORD(v36) = *(_DWORD *)(a3 + 48);
      sub_140052E64(v15, v19, &v47, a3, v36, v37, v38, v39, v40, v41, a3);
    }
  }
LABEL_84:
  IofCompleteRequest((PIRP)a3, 0);
  return (unsigned int)v10;
}
