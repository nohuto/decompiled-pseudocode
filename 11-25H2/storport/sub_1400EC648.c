/*
 * XREFs of sub_1400EC648 @ 0x1400EC648
 * Callers:
 *     sub_140195100 @ 0x140195100 (sub_140195100.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_1400BD378 @ 0x1400BD378 (sub_1400BD378.c)
 *     sub_1400DB0A4 @ 0x1400DB0A4 (sub_1400DB0A4.c)
 *     sub_1400E736C @ 0x1400E736C (sub_1400E736C.c)
 *     sub_1400F5FEC @ 0x1400F5FEC (sub_1400F5FEC.c)
 *     sub_1401225EC @ 0x1401225EC (sub_1401225EC.c)
 *     sub_140122C20 @ 0x140122C20 (sub_140122C20.c)
 *     sub_140122D58 @ 0x140122D58 (sub_140122D58.c)
 *     memmove @ 0x14013C680 (memmove.c)
 */

__int64 __fastcall sub_1400EC648(_QWORD *SystemArgument2, char a2, char a3, unsigned int *a4, _QWORD *a5)
{
  __int64 v5; // rax
  __int64 v6; // r15
  char v8; // r12
  unsigned int v10; // r13d
  __int64 *v11; // rdi
  int v12; // ebx
  __int64 v13; // r8
  int v14; // eax
  unsigned int v15; // r8d
  unsigned int v16; // r14d
  unsigned int v17; // r14d
  _OWORD *v18; // rax
  _BYTE *v19; // r15
  _OWORD *v20; // rcx
  __int64 v21; // rdx
  __int128 v22; // xmm1
  unsigned int v23; // r8d
  unsigned int v24; // edx
  unsigned int v25; // r8d
  unsigned int v26; // r12d
  unsigned int v27; // r12d
  bool v28; // zf
  int v29; // r8d
  int v30; // r8d
  int v32; // [rsp+30h] [rbp-59h]
  int v33; // [rsp+30h] [rbp-59h]
  int v34; // [rsp+40h] [rbp-49h]
  int v35; // [rsp+40h] [rbp-49h]
  unsigned int v36; // [rsp+68h] [rbp-21h]
  __int64 v37; // [rsp+68h] [rbp-21h]
  __int128 v38; // [rsp+70h] [rbp-19h] BYREF
  void *Src[2]; // [rsp+80h] [rbp-9h] BYREF
  int v40; // [rsp+E8h] [rbp+5Fh]

  v5 = SystemArgument2[16];
  v6 = SystemArgument2[74];
  *(_OWORD *)Src = 0LL;
  v8 = a2;
  v38 = 0LL;
  v28 = (*(_BYTE *)(v6 + 261) & 8) == 0;
  v10 = 0;
  v36 = *(_DWORD *)(v5 + 200);
  v11 = 0LL;
  *a4 = 0;
  *a5 = 0LL;
  if ( v28 )
  {
    v12 = -1073741637;
    goto LABEL_36;
  }
  v11 = (__int64 *)sub_1401225EC(SystemArgument2);
  if ( !v11 )
  {
LABEL_4:
    v12 = -1073741670;
    goto LABEL_36;
  }
  v14 = sub_1400E736C((__int64)SystemArgument2, 0x200u, v13, (void **)&v38, (_QWORD *)&v38 + 1, 0);
  v15 = 0;
  v12 = v14;
  if ( v14 >= 0 )
  {
    *(_DWORD *)(*v11 + 4256) |= 1u;
    *(_DWORD *)(*v11 + 4256) |= 0x20u;
    *(_DWORD *)(*v11 + 4256) |= 2u;
    *(_DWORD *)(*v11 + 4256) &= ~0x40u;
    *(_WORD *)(*v11 + 4252) = 0;
    *(_QWORD *)(*v11 + 4184) = 0LL;
    *(_QWORD *)(*v11 + 4192) = sub_1400E90F0;
    *(_QWORD *)(*v11 + 4200) = v11;
    *(_OWORD *)(*v11 + 4160) = v38;
    *(_DWORD *)(*v11 + 4248) = 512;
    LOBYTE(v15) = v8;
    sub_1400DB0A4(
      (__int64)SystemArgument2,
      *v11 + 4096,
      v15,
      0x200u,
      *((__int64 *)&v38 + 1),
      v32,
      0LL,
      v34,
      *v11,
      v11[1],
      1u);
    v12 = sub_1400BD378(SystemArgument2, (__int64)v11);
    if ( v12 >= 0 )
    {
      if ( a3 )
      {
        v16 = 512;
      }
      else
      {
        v17 = *(unsigned __int16 *)(v38 + 12);
        if ( (*(_BYTE *)(v6 + 261) & 0x40) != 0 && v17 <= *(_DWORD *)(v38 + 16) )
          v17 = *(_DWORD *)(v38 + 16);
        v16 = (v17 + 1) << 9;
      }
      v18 = (_OWORD *)sub_1400143E0(64LL, v16, 1280205138LL, 0LL);
      v19 = v18;
      if ( !v18 )
        goto LABEL_4;
      v20 = (_OWORD *)v38;
      v21 = 4LL;
      do
      {
        *v18 = *v20;
        v18[1] = v20[1];
        v18[2] = v20[2];
        v18[3] = v20[3];
        v18[4] = v20[4];
        v18[5] = v20[5];
        v18[6] = v20[6];
        v18 += 8;
        v22 = v20[7];
        v20 += 8;
        *(v18 - 1) = v22;
        --v21;
      }
      while ( v21 );
      if ( !a3 )
      {
        v10 = v36;
        v40 = 512;
        if ( v16 - 512 < v36 )
          v10 = v16 - 512;
        v12 = sub_1400E736C((__int64)SystemArgument2, v10, 128LL, Src, &Src[1], v21);
        if ( v12 < 0 )
          goto LABEL_34;
        if ( v16 > 0x200 )
        {
          v24 = 512;
          while ( 1 )
          {
            v25 = v24;
            v37 = v24;
            v26 = v10;
            if ( v16 - v24 < v10 )
              v26 = v16 - v24;
            *(void **)(*v11 + 4160) = Src[0];
            v27 = v26 & 0xFFFFFE00;
            *(void **)(*v11 + 4168) = Src[1];
            *(_DWORD *)(*v11 + 4248) = v27;
            LOBYTE(v25) = a2;
            sub_1400DB0A4(
              (__int64)SystemArgument2,
              *v11 + 4096,
              v25,
              v27,
              (__int64)Src[1],
              v33,
              v24,
              v35,
              *v11,
              v11[1],
              1u);
            v12 = sub_1400BD378(SystemArgument2, (__int64)v11);
            if ( v12 < 0 )
              goto LABEL_34;
            sub_140122D58(SystemArgument2, v11);
            memmove(&v19[v37], Src[0], v27);
            v24 = v27 + v40;
            v40 = v24;
            if ( v24 >= v16 )
            {
              v8 = a2;
              break;
            }
          }
        }
        LOBYTE(v23) = v8;
        *(_OWORD *)(*v11 + 4160) = v38;
        *(_DWORD *)(*v11 + 4248) = 512;
        sub_1400DB0A4(
          (__int64)SystemArgument2,
          *v11 + 4096,
          v23,
          0x200u,
          *((__int64 *)&v38 + 1),
          v33,
          0LL,
          v35,
          *v11,
          v11[1],
          0);
        v12 = sub_1400BD378(SystemArgument2, (__int64)v11);
        if ( v12 < 0 )
        {
LABEL_34:
          ExFreePoolWithTag(v19, 0x4C4E6152u);
          goto LABEL_36;
        }
        if ( !*(_BYTE *)(v38 + 382)
          || (!v8 ? (v28 = *(_BYTE *)(v38 + 383) == v19[383]) : (v28 = *(_BYTE *)(v38 + 381) == v19[381]), !v28) )
        {
          v12 = 304;
          goto LABEL_34;
        }
      }
      *a4 = v16;
      *a5 = v19;
    }
  }
LABEL_36:
  sub_140122C20(SystemArgument2, v11);
  sub_1400F5FEC((_DWORD)SystemArgument2, 512, v29, v38, *((__int64 *)&v38 + 1));
  sub_1400F5FEC((_DWORD)SystemArgument2, v10, v30, Src[0], (__int64)Src[1]);
  return (unsigned int)v12;
}
