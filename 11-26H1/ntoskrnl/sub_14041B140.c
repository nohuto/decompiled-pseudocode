/*
 * XREFs of sub_14041B140 @ 0x14041B140
 * Callers:
 *     sub_1409ECDC8 @ 0x1409ECDC8 (sub_1409ECDC8.c)
 *     sub_140AAE6E4 @ 0x140AAE6E4 (sub_140AAE6E4.c)
 * Callees:
 *     sub_14041B4D0 @ 0x14041B4D0 (sub_14041B4D0.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void __fastcall sub_14041B140(__int64 a1, char *a2, char *a3, unsigned int a4, __int64 a5, unsigned int a6, _BYTE *a7)
{
  unsigned int v7; // r13d
  unsigned __int64 v10; // rdi
  __int64 v11; // r15
  unsigned int v12; // ebp
  unsigned int v13; // edi
  unsigned int v14; // r14d
  unsigned int v15; // ebp
  unsigned int v16; // edi
  unsigned int v17; // r14d
  unsigned int v18; // ebp
  unsigned int v19; // edi
  __int64 v20; // r14
  int v21; // ebp
  char *v22; // rax
  int v23; // r14d
  char *v24; // r12
  int v25; // r15d
  __int64 v26; // r13
  unsigned int v27; // r14d
  unsigned int v28; // r15d
  unsigned int v29; // ebp
  unsigned int v30; // r14d
  unsigned int v31; // r15d
  unsigned int v32; // ebp
  __int64 v33; // r14
  unsigned int v34; // r15d
  __int64 v35; // rbp
  unsigned int v36; // eax
  char *v37; // rax
  bool v38; // zf
  __int64 Src; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v40; // [rsp+28h] [rbp-50h] BYREF
  char *v41; // [rsp+30h] [rbp-48h]
  __int64 v42; // [rsp+38h] [rbp-40h]
  char *v43; // [rsp+88h] [rbp+10h]
  char *v44; // [rsp+90h] [rbp+18h]

  if ( a4 )
  {
    v44 = a3;
    v7 = a4;
    LODWORD(v10) = ~a6;
    Src = 0LL;
    v40 = a6;
    v11 = a4 & 7;
    if ( (a4 & 7) != 0 )
    {
      v12 = v10 ^ sub_14041B4D0(a1, 9LL, a5, a6);
      v13 = a6 ^ sub_14041B4D0(a1, 8LL, a5, v12);
      v14 = v12 ^ sub_14041B4D0(a1, 7LL, a5, v13);
      v15 = v13 ^ sub_14041B4D0(a1, 6LL, a5, v14);
      v16 = v14 ^ sub_14041B4D0(a1, 5LL, a5, v15);
      v17 = v15 ^ sub_14041B4D0(a1, 4LL, a5, v16);
      v18 = v16 ^ sub_14041B4D0(a1, 3LL, a5, v17);
      v19 = v17 ^ sub_14041B4D0(a1, 2LL, a5, v18);
      v20 = v18 ^ (unsigned int)sub_14041B4D0(a1, 1LL, a5, v19);
      v40 = 0LL;
      v21 = v19 ^ sub_14041B4D0(a1, 0LL, a5, v20);
      memmove(&v40, a2, (unsigned int)v11);
      v10 = v40;
      LODWORD(Src) = v40 ^ v20;
      HIDWORD(Src) = v21 ^ HIDWORD(v40);
      memset_0((char *)&Src + v11, 0, (unsigned int)(8 - v11));
      memmove(v44, &Src, (unsigned int)v11);
      a3 = v44;
      v40 = HIDWORD(v10);
    }
    v22 = &a3[v11];
    v41 = &a3[v11];
    if ( v7 >> 3 )
    {
      v23 = HIDWORD(Src);
      v24 = (char *)(a2 - a3);
      v25 = Src;
      v43 = v24;
      v42 = v7 >> 3;
      do
      {
        v26 = *(_QWORD *)&v22[(_QWORD)v24];
        v27 = HIDWORD(v26) ^ v23;
        v28 = v26 ^ sub_14041B4D0(a1, 9LL, a5, v27) ^ v25;
        v29 = v27 ^ sub_14041B4D0(a1, 8LL, a5, v28);
        v30 = v28 ^ sub_14041B4D0(a1, 7LL, a5, v29);
        v31 = v29 ^ sub_14041B4D0(a1, 6LL, a5, v30);
        v32 = v30 ^ sub_14041B4D0(a1, 5LL, a5, v31);
        v33 = v31 ^ (unsigned int)sub_14041B4D0(a1, 4LL, a5, v32);
        v34 = v32 ^ sub_14041B4D0(a1, 3LL, a5, v33);
        v35 = (unsigned int)v33 ^ (unsigned int)sub_14041B4D0(a1, 2LL, a5, v34);
        v36 = v34 ^ sub_14041B4D0(a1, 1LL, a5, v35);
        v25 = v10 ^ v36;
        LODWORD(v33) = sub_14041B4D0(a1, 0LL, a5, v36);
        v37 = v41;
        v23 = v40 ^ v35 ^ v33;
        *(_DWORD *)v41 = v25;
        *((_DWORD *)v37 + 1) = v23;
        v22 = v37 + 8;
        v41 = v22;
        v38 = v42-- == 1;
        LODWORD(v10) = v26;
        LODWORD(v40) = HIDWORD(v26);
        v24 = v43;
      }
      while ( !v38 );
      v7 = a4;
      a3 = v44;
    }
    *a7 = a3[v7 - 1];
  }
}
