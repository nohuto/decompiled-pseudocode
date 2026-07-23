/*
 * XREFs of MiOrderTrimList @ 0x1403C3390
 * Callers:
 *     MiTrimAllWorkingSets @ 0x14045F5B0 (MiTrimAllWorkingSets.c)
 * Callees:
 *     MiWorkingSetVeryLarge @ 0x1403C38E0 (MiWorkingSetVeryLarge.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

unsigned __int64 __fastcall MiOrderTrimList(__int64 a1, unsigned int a2)
{
  __int64 v2; // r12
  unsigned __int64 v4; // r13
  _QWORD **v5; // r15
  _QWORD *v6; // r14
  _QWORD *v7; // rax
  _QWORD *v8; // rsi
  _BYTE *v9; // rax
  __int64 v10; // rdx
  unsigned __int64 v11; // rdi
  _QWORD *v12; // r8
  __int64 *v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rax
  int v16; // ebx
  unsigned int i; // edx
  __int64 v18; // rax
  _QWORD *v19; // rcx
  _QWORD *v20; // rax
  __int64 v21; // rdx
  _BYTE v23[64]; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD *v24; // [rsp+70h] [rbp-90h] BYREF
  _QWORD *v25; // [rsp+78h] [rbp-88h]
  _QWORD *v26; // [rsp+80h] [rbp-80h] BYREF
  _QWORD *v27; // [rsp+88h] [rbp-78h]
  _QWORD *v28; // [rsp+90h] [rbp-70h] BYREF
  _QWORD *v29; // [rsp+98h] [rbp-68h]
  _QWORD *v30; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD *v31; // [rsp+A8h] [rbp-58h]
  _QWORD *v32; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD *v33; // [rsp+B8h] [rbp-48h]
  _QWORD *v34; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD *v35; // [rsp+C8h] [rbp-38h]
  _QWORD *v36; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD *v37; // [rsp+D8h] [rbp-28h]
  _QWORD *v38; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD *v39; // [rsp+E8h] [rbp-18h]
  _QWORD *v40; // [rsp+F0h] [rbp-10h] BYREF
  _QWORD *v41; // [rsp+F8h] [rbp-8h]
  _QWORD *v42; // [rsp+100h] [rbp+0h] BYREF
  _QWORD *v43; // [rsp+108h] [rbp+8h]
  _QWORD *v44; // [rsp+110h] [rbp+10h] BYREF
  _QWORD *v45; // [rsp+118h] [rbp+18h]
  _QWORD *v46; // [rsp+120h] [rbp+20h] BYREF
  _QWORD *v47; // [rsp+128h] [rbp+28h]

  v2 = a2;
  memset_0(v23, 0, sizeof(v23));
  v25 = &v24;
  v4 = 0LL;
  v5 = (_QWORD **)(a1 + 18336);
  v24 = &v24;
  v27 = &v26;
  v26 = &v26;
  v29 = &v28;
  v28 = &v28;
  v31 = &v30;
  v30 = &v30;
  v33 = &v32;
  v32 = &v32;
  v35 = &v34;
  v34 = &v34;
  v37 = &v36;
  v36 = &v36;
  v39 = &v38;
  v38 = &v38;
  v41 = &v40;
  v40 = &v40;
  v43 = &v42;
  v42 = &v42;
  v45 = &v44;
  v44 = &v44;
  v47 = &v46;
  v46 = &v46;
  while ( 1 )
  {
    v6 = *v5;
    if ( *v5 == v5 )
      break;
    if ( (_QWORD **)v6[1] != v5 )
      goto LABEL_26;
    v7 = (_QWORD *)*v6;
    if ( *(_QWORD **)(*v6 + 8LL) != v6 )
      goto LABEL_26;
    *v5 = v7;
    v8 = v6 - 5;
    v7[1] = v5;
    v9 = v23;
    v10 = 8LL;
    do
    {
      v9 += 8;
      --v10;
    }
    while ( v10 );
    v11 = 0LL;
    v12 = v6 - 133;
    if ( (unsigned int)v2 < 8 )
    {
      v13 = &v8[v2 + 7];
      v14 = (unsigned int)(8 - v2);
      do
      {
        v15 = *v13++;
        v11 += v15;
        --v14;
      }
      while ( v14 );
    }
    v16 = *((_DWORD *)v8 + 46);
    if ( (v16 & 0xF) == 0 )
    {
      v21 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8LL * *((unsigned __int16 *)v12 + 599));
      if ( *(_DWORD *)(v21 + 1300) != -1 && *(_QWORD **)(v21 + 2056) == v12 )
      {
LABEL_21:
        i = 11;
LABEL_22:
        v11 = 0LL;
        goto LABEL_23;
      }
    }
    if ( BYTE2(v16) == 2 && !MiWorkingSetVeryLarge(v6 - 5, 0LL, v12) )
    {
      i = 10;
      goto LABEL_22;
    }
    if ( !v11 || (v16 & 0x20) != 0 && v8[19] <= v8[15] )
      goto LABEL_21;
    if ( v8[19] <= v8[15] )
    {
      i = 10;
      goto LABEL_22;
    }
    for ( i = 0; i < 9; ++i )
    {
      if ( v11 >= 0x100000uLL >> i )
        goto LABEL_23;
    }
    if ( i >= 0xA )
      goto LABEL_22;
LABEL_23:
    v18 = -1LL;
    if ( v11 + v4 >= v4 )
      v18 = v11 + v4;
    v4 = v18;
    v19 = &(&v24)[2 * i];
    v20 = (_QWORD *)v19[1];
    if ( (_QWORD *)*v20 != v19 )
LABEL_26:
      __fastfail(3u);
    *v6 = v19;
    v6[1] = v20;
    *v20 = v6;
    v19[1] = v6;
  }
  if ( v24 != &v24 )
  {
    *v5[1] = v24;
    v24[1] = v5[1];
    *v25 = v5;
    v5[1] = v25;
  }
  if ( v26 != &v26 )
  {
    *v5[1] = v26;
    v26[1] = v5[1];
    *v27 = v5;
    v5[1] = v27;
  }
  if ( v28 != &v28 )
  {
    *v5[1] = v28;
    v28[1] = v5[1];
    *v29 = v5;
    v5[1] = v29;
  }
  if ( v30 != &v30 )
  {
    *v5[1] = v30;
    v30[1] = v5[1];
    *v31 = v5;
    v5[1] = v31;
  }
  if ( v32 != &v32 )
  {
    *v5[1] = v32;
    v32[1] = v5[1];
    *v33 = v5;
    v5[1] = v33;
  }
  if ( v34 != &v34 )
  {
    *v5[1] = v34;
    v34[1] = v5[1];
    *v35 = v5;
    v5[1] = v35;
  }
  if ( v36 != &v36 )
  {
    *v5[1] = v36;
    v36[1] = v5[1];
    *v37 = v5;
    v5[1] = v37;
  }
  if ( v38 != &v38 )
  {
    *v5[1] = v38;
    v38[1] = v5[1];
    *v39 = v5;
    v5[1] = v39;
  }
  if ( v40 != &v40 )
  {
    *v5[1] = v40;
    v40[1] = v5[1];
    *v41 = v5;
    v5[1] = v41;
  }
  if ( v42 != &v42 )
  {
    *v5[1] = v42;
    v42[1] = v5[1];
    *v43 = v5;
    v5[1] = v43;
  }
  if ( v44 != &v44 )
  {
    *v5[1] = v44;
    v44[1] = v5[1];
    *v45 = v5;
    v5[1] = v45;
  }
  if ( v46 != &v46 )
  {
    *v5[1] = v46;
    v46[1] = v5[1];
    *v47 = v5;
    v5[1] = v47;
  }
  return v4;
}
