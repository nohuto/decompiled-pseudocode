/*
 * XREFs of MiFindEmptyAddressRangeDownTree @ 0x140A4F8B0
 * Callers:
 *     MiInsertBasedSection @ 0x140777714 (MiInsertBasedSection.c)
 *     MiFindEmptyAddressRangeDown @ 0x140A4F728 (MiFindEmptyAddressRangeDown.c)
 * Callees:
 *     MiHonorRangeStraddleRequirement @ 0x14048590C (MiHonorRangeStraddleRequirement.c)
 *     MiUpdateVadStartVpn @ 0x140494C34 (MiUpdateVadStartVpn.c)
 */

__int64 __fastcall MiFindEmptyAddressRangeDownTree(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        unsigned __int64 *a7)
{
  __int64 v7; // rbp
  unsigned __int64 v8; // r9
  unsigned __int64 v9; // r12
  __int64 *v10; // r11
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // r13
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // r15
  __int64 v15; // rax
  unsigned __int64 i; // r11
  __int128 *v17; // rbx
  __int128 *v18; // rsi
  unsigned __int64 v19; // rdi
  __int128 *v20; // r8
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // r10
  unsigned __int64 v24; // r10
  __int64 v25; // r14
  unsigned __int64 v26; // r10
  unsigned __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rax
  __int128 v31; // [rsp+20h] [rbp-78h] BYREF
  __int128 v32; // [rsp+30h] [rbp-68h]
  __int128 v33; // [rsp+40h] [rbp-58h]
  __int128 v34; // [rsp+50h] [rbp-48h]
  __int64 v35; // [rsp+60h] [rbp-38h]
  __int128 *v36; // [rsp+C0h] [rbp+28h]
  unsigned __int64 v37; // [rsp+C8h] [rbp+30h]

  v7 = a4 >> 12;
  v8 = (a2 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  v35 = 0LL;
  v9 = v8 >> 12;
  v10 = a1;
  v31 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  if ( a5 >= a6 || a6 - a5 < v8 )
    return 3221225495LL;
  v11 = a6 >> 12;
  v12 = a3 >> 12;
  v13 = -(__int64)a3 & (a6 - v8);
  v37 = a6 >> 12;
  v14 = v13 >> 12;
  if ( v7 )
  {
    v30 = MiHonorRangeStraddleRequirement(v14, v9, v7, 1);
    v11 = v37;
    v14 = ~(v12 - 1) & v30;
    v13 = v14 << 12;
  }
  if ( v13 < a5 )
    return 3221225495LL;
  v15 = *v10;
  if ( !*v10 )
  {
    *a7 = v13;
    return 0LL;
  }
  i = 0LL;
  do
  {
    v17 = (__int128 *)v15;
    v15 = *(_QWORD *)(v15 + 8);
  }
  while ( v15 );
  v18 = v17;
  v19 = a5 >> 12;
  while ( 1 )
  {
    v36 = v18;
    v20 = v18;
    if ( v17 )
    {
      v17 = 0LL;
      MiUpdateVadStartVpn((__int64)&v31, v11);
      v36 = &v31;
    }
    else
    {
      v21 = *(_QWORD *)i;
      v22 = i;
      if ( *(_QWORD *)i )
      {
        i = *(_QWORD *)i;
        if ( *(_QWORD *)(v21 + 8) )
        {
          do
            i = *(_QWORD *)(i + 8);
          while ( *(_QWORD *)(i + 8) );
        }
      }
      else
      {
        for ( i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL; i; i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL )
        {
          if ( *(_QWORD *)(i + 8) == v22 )
            break;
          v22 = i;
        }
      }
      if ( !i )
      {
        HIDWORD(v32) = 0;
        v18 = &v31;
        BYTE1(v33) = 0;
        v24 = v19 - 1;
        v36 = v20;
        goto LABEL_22;
      }
    }
    v18 = &v31;
    v23 = v19;
    if ( (*(unsigned int *)(i + 28) | ((unsigned __int64)*(unsigned __int8 *)(i + 33) << 32)) + 1 >= v19 )
    {
      v23 = (*(unsigned int *)(i + 28) | ((unsigned __int64)*(unsigned __int8 *)(i + 33) << 32)) + 1;
      v18 = (__int128 *)i;
    }
    v24 = v23 - 1;
LABEL_22:
    v25 = ~(v12 - 1);
    v26 = v25 & (v12 + v24);
    if ( v7 )
      v26 = MiHonorRangeStraddleRequirement(v26, v9, v7, 0);
    if ( v26 <= v14 )
    {
      v28 = v37;
      if ( (*((unsigned int *)v36 + 6) | ((unsigned __int64)*((unsigned __int8 *)v36 + 32) << 32)) <= v37 )
        v28 = *((unsigned int *)v36 + 6) | ((unsigned __int64)*((unsigned __int8 *)v36 + 32) << 32);
      if ( v28 > v26 && v9 <= v28 - v26 )
        break;
    }
    if ( v18 == &v31 )
      return 3221225495LL;
    v11 = v37;
  }
  v29 = v25 & (v28 - v9);
  if ( v7 )
    v29 = v25 & MiHonorRangeStraddleRequirement(v29, v9, v7, 1);
  *a7 = v29 << 12;
  return 0LL;
}
