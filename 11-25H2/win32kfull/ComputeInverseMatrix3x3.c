/*
 * XREFs of ComputeInverseMatrix3x3 @ 0x140141E5C
 * Callers:
 *     HT_CreateDeviceHalftoneInfo @ 0x1400FF514 (HT_CreateDeviceHalftoneInfo.c)
 *     ComputeColorSpaceXForm @ 0x14014076C (ComputeColorSpaceXForm.c)
 * Callees:
 *     MulFD6 @ 0x14013FA7C (MulFD6.c)
 *     DivFD6 @ 0x14013FFE8 (DivFD6.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall ComputeInverseMatrix3x3(__int128 *a1, __int64 a2)
{
  int *v2; // r12
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  int *v5; // rbx
  int v6; // r9d
  __int64 v7; // rsi
  __int64 v8; // rdi
  int v9; // r10d
  __int64 v10; // r8
  int v11; // r14d
  __int64 i; // r11
  int v13; // r14d
  __int64 v14; // r15
  __int64 v15; // rbx
  int v16; // eax
  int v17; // ecx
  __int64 v18; // rdi
  __int64 v19; // r15
  __int64 j; // r14
  unsigned int v21; // edx
  int v22; // ecx
  __int128 v23; // xmm1
  __int64 v25; // r13
  __int64 v26; // r15
  int v27; // esi
  int v28; // eax
  int v29; // ecx
  int v30; // edx
  int v31; // eax
  int v32; // ecx
  __int64 v33; // rax
  int v34; // eax
  __int64 v35; // r9
  __int64 v36; // rax
  __int64 v37; // r8
  __int64 v38; // r10
  char *v39; // r11
  __int64 v40; // r9
  _DWORD *v41; // rdx
  int v42; // ecx
  int v43; // eax
  int v44; // ecx
  int v45; // [rsp+20h] [rbp-89h]
  int v46; // [rsp+28h] [rbp-81h]
  __int64 v47; // [rsp+30h] [rbp-79h]
  int *v48; // [rsp+38h] [rbp-71h]
  __int64 v49; // [rsp+40h] [rbp-69h]
  __int64 v50; // [rsp+48h] [rbp-61h]
  int *v51; // [rsp+50h] [rbp-59h]
  int *v52; // [rsp+58h] [rbp-51h]
  __int64 v53; // [rsp+60h] [rbp-49h]
  __int64 v54; // [rsp+68h] [rbp-41h]
  __int128 v56; // [rsp+78h] [rbp-31h] BYREF
  __int128 v57; // [rsp+88h] [rbp-21h]
  int v58; // [rsp+98h] [rbp-11h]
  _OWORD v59[2]; // [rsp+A0h] [rbp-9h] BYREF
  int v60; // [rsp+C0h] [rbp+17h]

  v2 = (int *)v59;
  v3 = *a1;
  v60 = *((_DWORD *)a1 + 8);
  v4 = a1[1];
  v5 = (int *)v59;
  v58 = 1000000;
  v59[0] = v3;
  v57 = 0xF4240uLL;
  v6 = 0;
  v59[1] = v4;
  v56 = 0xF4240uLL;
  v7 = 0LL;
  v45 = 1;
  v8 = 0LL;
  v50 = 0LL;
  v53 = 0LL;
  v52 = (int *)v59;
  v51 = (int *)v59;
  do
  {
    v9 = v6;
    v46 = v6 + 1;
    v54 = v7 + 1;
    v10 = v7;
    v11 = v6 + 1;
    for ( i = v7 + 1; v11 < 3; v9 = v34 )
    {
      v30 = -*((_DWORD *)v59 + 2 * i + i + v7);
      if ( *((int *)v59 + 2 * i + i + v7) > 0 )
        v30 = *((_DWORD *)v59 + 2 * i + i + v7);
      v31 = *((_DWORD *)v59 + 2 * v10 + v10 + v7);
      v32 = -v31;
      if ( v31 > 0 )
        v32 = v31;
      v33 = i;
      if ( v30 <= v32 )
        v33 = v10;
      v10 = v33;
      v34 = v11;
      if ( v30 <= v32 )
        v34 = v9;
      ++v11;
      ++i;
    }
    if ( *((_DWORD *)v59 + 2 * v10 + v10 + v7) )
    {
      if ( v9 != v6 )
      {
        v35 = 3 * v10;
        v36 = v7 - v10;
        v37 = 3LL;
        v38 = 3 * v36;
        v39 = (char *)&v56 + 12 * v36 - (_QWORD)v59;
        v40 = 4 * v35;
        do
        {
          v41 = (_DWORD *)((char *)v59 + v40);
          v42 = *(_DWORD *)((char *)v59 + v40 + v38 * 4);
          v41[v38] = *v41;
          v43 = *(_DWORD *)((char *)&v56 + v40);
          *v41 = v42;
          v44 = *(_DWORD *)((char *)v59 + v40 + (_QWORD)v39);
          *(_DWORD *)((char *)v41 + (_QWORD)v39) = v43;
          *(_DWORD *)((char *)&v56 + v40) = v44;
          v40 += 4LL;
          --v37;
        }
        while ( v37 );
      }
      v13 = *v5;
      v14 = 3LL;
      v15 = v8;
      do
      {
        v16 = DivFD6(*(_DWORD *)((char *)v59 + v15), v13);
        v17 = *(_DWORD *)((char *)&v56 + v15);
        *(_DWORD *)((char *)v59 + v15) = v16;
        *(_DWORD *)((char *)&v56 + v15) = DivFD6(v17, v13);
        v15 += 4LL;
        --v14;
      }
      while ( v14 );
      v47 = 0LL;
      v18 = v8 - (_QWORD)v59;
      v49 = 0LL;
      v19 = 0LL;
      v48 = v2;
      for ( j = 0LL; j < 36; v49 = j )
      {
        if ( v19 != v7 && *v2 )
        {
          v25 = j;
          v26 = 3LL;
          v27 = *v2;
          do
          {
            v28 = MulFD6(*(_DWORD *)((char *)v59 + v25 + (_QWORD)v59 + v18), v27);
            v29 = *(_DWORD *)((char *)&v56 + v18 + (_QWORD)v59 + v25);
            *(_DWORD *)((char *)v59 + v25) -= v28;
            *(_DWORD *)((char *)&v56 + v25) -= MulFD6(v29, v27);
            v25 += 4LL;
            --v26;
          }
          while ( v26 );
          v7 = v50;
          j = v49;
          v19 = v47;
          v2 = v48;
        }
        ++v19;
        v2 += 3;
        j += 12LL;
        v47 = v19;
        v18 -= 12LL;
        v48 = v2;
      }
      v8 = v53;
      v5 = v51;
      v2 = v52;
      v21 = v45;
    }
    else
    {
      v21 = 0;
      v45 = 0;
    }
    v6 = v46;
    v5 += 4;
    v7 = v54;
    ++v2;
    v8 += 12LL;
    v50 = v54;
    v51 = v5;
    v52 = v2;
    v53 = v8;
  }
  while ( v46 < 3 );
  v22 = v58;
  v23 = v57;
  *(_OWORD *)a2 = v56;
  *(_OWORD *)(a2 + 16) = v23;
  *(_DWORD *)(a2 + 32) = v22;
  return v21;
}
