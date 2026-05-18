/*
 * XREFs of sub_180081920 @ 0x180081920
 * Callers:
 *     sub_1800435A4 @ 0x1800435A4 (sub_1800435A4.c)
 *     sub_1800579C0 @ 0x1800579C0 (sub_1800579C0.c)
 *     sub_180080354 @ 0x180080354 (sub_180080354.c)
 *     sub_180081364 @ 0x180081364 (sub_180081364.c)
 *     sub_1800908AC @ 0x1800908AC (sub_1800908AC.c)
 *     sub_180091B00 @ 0x180091B00 (sub_180091B00.c)
 *     sub_1800BC4A0 @ 0x1800BC4A0 (sub_1800BC4A0.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011F5C @ 0x180011F5C (sub_180011F5C.c)
 *     sub_180012BF8 @ 0x180012BF8 (sub_180012BF8.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_1800141F0 @ 0x1800141F0 (sub_1800141F0.c)
 *     sub_180029310 @ 0x180029310 (sub_180029310.c)
 *     sub_180036040 @ 0x180036040 (sub_180036040.c)
 *     sub_180042A7C @ 0x180042A7C (sub_180042A7C.c)
 *     sub_180081704 @ 0x180081704 (sub_180081704.c)
 *     sub_1800817A0 @ 0x1800817A0 (sub_1800817A0.c)
 *     sub_180081B30 @ 0x180081B30 (sub_180081B30.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall sub_180081920(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v6; // r15
  __int64 v7; // rcx
  __int64 v8; // rax
  unsigned int v9; // edi
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 *v12; // rax
  __int128 v13; // xmm2
  __int128 v14; // xmm3
  __int128 v15; // xmm4
  __int64 v16; // xmm0_8
  _QWORD *v17; // rax
  int v18; // r8d
  __int64 v19; // rcx
  unsigned int v20; // edi
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v24; // [rsp+20h] [rbp-30h] BYREF
  __int64 v25; // [rsp+28h] [rbp-28h]
  __int64 v26; // [rsp+30h] [rbp-20h] BYREF
  __int64 v27; // [rsp+38h] [rbp-18h]

  v6 = (__int64 *)(a1 + 112);
  v7 = *(_QWORD *)(a1 + 112);
  if ( v7 )
  {
    LOBYTE(v8) = sub_180042A7C(v7, a2);
    if ( (_BYTE)v8 )
      return v8;
    sub_180036040(*(_QWORD *)(a1 + 72), &v26);
    v9 = 0;
    v10 = v26;
    if ( (v27 - v26) >> 4 )
    {
      v11 = 0LL;
      do
      {
        sub_180012C40(&v24, (_QWORD *)(v10 + 16 * v11));
        sub_180081B30(a1, *(unsigned int *)(v24 + 244));
        if ( v25 )
          sub_180010EC8(v25);
        v11 = ++v9;
        v10 = v26;
      }
      while ( v9 < (unsigned __int64)((v27 - v26) >> 4) );
    }
    sub_1800141F0((__int64)&v26);
  }
  else
  {
    v12 = sub_180081704(&v24);
    sub_180011F5C(v6, v12);
    if ( v25 )
      sub_180010EC8(v25);
  }
  v13 = *(_OWORD *)(a2 + 16);
  v14 = *(_OWORD *)(a2 + 32);
  v15 = *(_OWORD *)(a2 + 48);
  v16 = *(_QWORD *)(a2 + 64);
  v8 = *v6;
  *(_OWORD *)v8 = *(_OWORD *)a2;
  *(_OWORD *)(v8 + 16) = v13;
  *(_OWORD *)(v8 + 32) = v14;
  *(_OWORD *)(v8 + 48) = v15;
  *(_QWORD *)(v8 + 64) = v16;
  if ( a3 )
    LOBYTE(v8) = sub_180029310(a1, 1, 1);
  if ( (*(_BYTE *)(a1 + 40) & 1) != 0 )
  {
    if ( a3 )
    {
      v17 = (_QWORD *)sub_180012BF8(a3 + 8, &v24);
      sub_1800817A0(a1, v17);
      if ( v25 )
        sub_180010EC8(v25);
      sub_180029310(a1, 2, 0);
      LOBYTE(v8) = sub_180029310(v19, v18 + 4, v18);
    }
    else
    {
      sub_180036040(*(_QWORD *)(a1 + 72), &v26);
      v20 = 0;
      v21 = v26;
      if ( (v27 - v26) >> 4 )
      {
        v22 = 0LL;
        do
        {
          sub_180012C40(&v24, (_QWORD *)(v21 + 16 * v22));
          sub_1800817A0(a1, &v24);
          if ( v25 )
            sub_180010EC8(v25);
          v22 = ++v20;
          v21 = v26;
        }
        while ( v20 < (unsigned __int64)((v27 - v26) >> 4) );
      }
      LOBYTE(v8) = sub_1800141F0((__int64)&v26);
    }
  }
  return v8;
}
