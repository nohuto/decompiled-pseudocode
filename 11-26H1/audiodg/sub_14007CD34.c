/*
 * XREFs of sub_14007CD34 @ 0x14007CD34
 * Callers:
 *     sub_14007CC24 @ 0x14007CC24 (sub_14007CC24.c)
 * Callees:
 *     sub_140031B40 @ 0x140031B40 (sub_140031B40.c)
 *     sub_1400790E8 @ 0x1400790E8 (sub_1400790E8.c)
 *     sub_140079924 @ 0x140079924 (sub_140079924.c)
 *     sub_14007ACB0 @ 0x14007ACB0 (sub_14007ACB0.c)
 *     sub_14007C794 @ 0x14007C794 (sub_14007C794.c)
 *     sub_14007E6CC @ 0x14007E6CC (sub_14007E6CC.c)
 *     sub_14007F090 @ 0x14007F090 (sub_14007F090.c)
 *     sub_14007F278 @ 0x14007F278 (sub_14007F278.c)
 */

char __fastcall sub_14007CD34(__int64 a1, const void *a2, size_t a3, const void *a4, size_t a5, int a6)
{
  __int64 v6; // rdi
  char *v11; // rdi
  char v12; // si
  int v13; // eax
  int v15; // r14d
  char v16; // cl
  __int64 v17; // rax
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // r9
  __int64 v20; // r8
  __int64 v21; // r15
  unsigned __int64 v22; // [rsp+30h] [rbp-50h] BYREF
  __int16 v23; // [rsp+38h] [rbp-48h] BYREF
  char v24; // [rsp+3Ah] [rbp-46h]
  int v25; // [rsp+3Ch] [rbp-44h]
  __int16 v26; // [rsp+40h] [rbp-40h]
  __int128 v27; // [rsp+48h] [rbp-38h]
  unsigned __int16 v28; // [rsp+58h] [rbp-28h] BYREF
  char v29; // [rsp+5Ah] [rbp-26h]
  int v30; // [rsp+5Ch] [rbp-24h]
  __int16 v31; // [rsp+60h] [rbp-20h]
  __int64 v32; // [rsp+68h] [rbp-18h]
  const void *v33; // [rsp+70h] [rbp-10h]

  v6 = *(_QWORD *)(a1 + 24);
  if ( v6 )
  {
    v11 = (char *)(v6 + 10);
    v23 = *(_WORD *)(a1 + 2);
    v12 = 0;
    v24 = *(_BYTE *)(a1 + 4);
    v22 = (unsigned __int64)v11;
    v25 = 0;
    v26 = 0;
    v27 = 0LL;
    while ( 1 )
    {
      if ( !sub_14007C794(&v23, (const void **)&v22, *(_QWORD *)(a1 + 32)) )
      {
        v11 = (char *)v22;
        *(_QWORD *)(a1 + 32) = v22;
        goto LABEL_14;
      }
      v13 = sub_1400790E8((__int64)&v23, a2, a3);
      if ( v13 < 0 )
      {
        v22 = (unsigned __int64)v11;
        goto LABEL_11;
      }
      if ( !v13 )
        break;
      v11 = (char *)sub_14007E6CC(a1, &v23, v22);
      v22 = (unsigned __int64)v11;
    }
    v22 = sub_140079924(a1, (__int64)&v23, v22, a4, a5, a6);
    v11 = (char *)v22;
    if ( !v22 )
      return 1;
    v12 = 1;
LABEL_11:
    if ( v12 )
    {
      v15 = v25;
      goto LABEL_15;
    }
LABEL_14:
    v15 = 1;
    v26 = a3;
    v25 = 1;
    *(_QWORD *)&v27 = 0LL;
    *((_QWORD *)&v27 + 1) = a2;
    sub_14007ACB0((unsigned __int16 *)&v23);
LABEL_15:
    v28 = *(_WORD *)(a1 + 6);
    v16 = *(_BYTE *)(a1 + 8);
    v31 = a5;
    v29 = v16;
    v30 = a6;
    v32 = 0LL;
    v33 = a4;
    v17 = sub_14007ACB0(&v28);
    v18 = *(_QWORD *)(a1 + 40);
    v19 = *(_QWORD *)(a1 + 32);
    v21 = v17 + v20;
    if ( ((v18 - v19) & -(__int64)(v19 < v18)) >= v17 + v20 )
    {
      sub_140031B40(&v11[v21], v18 - v21 - (_QWORD)v11, v11, v19 - (_QWORD)v11);
      *(_QWORD *)(a1 + 32) += v21;
      if ( v12 )
      {
        if ( v24 )
          sub_14007F090(&v23, (unsigned int)(v15 + 1));
      }
      else
      {
        sub_14007F278(&v23, &v22);
      }
      sub_14007F278(&v28, &v22);
      *(_BYTE *)(a1 + 56) = 1;
      return 1;
    }
  }
  return 0;
}
