/*
 * XREFs of adler32_z @ 0x14063816C
 * Callers:
 *     inflate @ 0x14062969C (inflate.c)
 *     deflate @ 0x14062A8EC (deflate.c)
 *     deflateResetKeep @ 0x14062AC74 (deflateResetKeep.c)
 *     read_buf @ 0x14062C848 (read_buf.c)
 * Callees:
 *     adler32_simd_ @ 0x14063A5E8 (adler32_simd_.c)
 */

__int64 __fastcall adler32_z(unsigned int a1, unsigned __int8 *a2, unsigned __int64 a3)
{
  unsigned __int8 *v3; // r11
  unsigned int v5; // r10d
  unsigned int v6; // r9d
  unsigned int v7; // ecx
  unsigned int v8; // edx
  int v9; // eax
  int v10; // eax
  unsigned int v11; // r8d
  unsigned int v12; // ecx
  unsigned int v13; // r13d
  unsigned int v14; // r12d
  unsigned int v15; // r15d
  unsigned int v16; // r14d
  unsigned int v17; // ebp
  unsigned int v18; // esi
  unsigned int v19; // edi
  unsigned int v20; // ebx
  int v21; // r11d
  int v22; // r10d
  int v23; // r9d
  int v24; // r8d
  int v25; // edx
  int v26; // ecx
  int v27; // eax
  int v28; // eax
  unsigned int v29; // r9d
  bool v30; // zf
  unsigned int v31; // r9d
  unsigned int v32; // ecx
  unsigned int v33; // r13d
  unsigned int v34; // r12d
  unsigned int v35; // r15d
  unsigned int v36; // r14d
  unsigned int v37; // esi
  unsigned int v38; // ebx
  unsigned int v39; // r10d
  unsigned int v40; // r9d
  int v41; // r8d
  int v42; // edx
  int v43; // ecx
  int v44; // ebp
  int v45; // edi
  int v46; // r11d
  unsigned int v47; // eax
  int v48; // eax
  int v49; // eax
  int v50; // [rsp+24h] [rbp-54h]
  unsigned int v51; // [rsp+28h] [rbp-50h]
  unsigned int v52; // [rsp+28h] [rbp-50h]
  unsigned __int64 v53; // [rsp+30h] [rbp-48h]
  unsigned __int64 v54; // [rsp+30h] [rbp-48h]
  unsigned __int8 *v55; // [rsp+88h] [rbp+10h]
  unsigned __int64 v56; // [rsp+90h] [rbp+18h]
  unsigned __int64 v57; // [rsp+90h] [rbp+18h]
  unsigned int v58; // [rsp+98h] [rbp+20h]

  v55 = a2;
  v3 = a2;
  if ( a2 && a3 >= 0x40 && LODWORD(RtlpBootStatHandleLock.StackLimit) )
    return adler32_simd_();
  v5 = (unsigned __int16)a1;
  v6 = HIWORD(a1);
  v58 = HIWORD(a1);
  if ( a3 == 1 )
  {
    v7 = (unsigned __int16)a1 + *a2;
    v8 = v7 - 65521;
    if ( v7 < 0xFFF1 )
      v8 = v7;
    v9 = v8 + v6 - 65521;
    if ( v8 + v6 < 0xFFF1 )
      v9 = v8 + v6;
    return v8 | (v9 << 16);
  }
  if ( !a2 )
    return 1LL;
  if ( a3 >= 0x10 )
  {
    if ( a3 >= 0x15B0 )
    {
      v53 = a3 / 0x15B0;
      v56 = a3 % 0x15B0;
      do
      {
        v50 = 347;
        do
        {
          v12 = v5 + *v3;
          v13 = v12 + v3[1];
          v14 = v13 + v3[2];
          v15 = v14 + v3[3];
          v16 = v15 + v3[4];
          v17 = v16 + v3[5];
          v18 = v17 + v3[6];
          v19 = v18 + v3[7];
          v20 = v19 + v3[8];
          v21 = v20 + v3[9];
          v51 = v12;
          v22 = v21 + v55[10];
          v23 = v22 + v55[11];
          v24 = v23 + v55[12];
          v25 = v24 + v55[13];
          v26 = v25 + v55[14];
          v27 = v22 + v23 + v24 + v26 + v25;
          v5 = v26 + v55[15];
          v28 = v21 + v27;
          v3 = v55 + 16;
          v55 += 16;
          v29 = v5 + v51 + v13 + v14 + v15 + v16 + v17 + v18 + v19 + v20 + v28 + v58;
          v30 = v50-- == 1;
          v58 = v29;
        }
        while ( !v30 );
        v5 %= 0xFFF1u;
        v31 = v29 % 0xFFF1;
        v30 = v53-- == 1;
        v58 = v31;
      }
      while ( !v30 );
      a3 = v56;
      if ( !v56 )
        return v5 | (v31 << 16);
      if ( v56 < 0x10 )
        goto LABEL_34;
    }
    v54 = a3 >> 4;
    v57 = -16LL * (a3 >> 4) + a3;
    do
    {
      v32 = v5 + *v3;
      v33 = v32 + v3[1];
      v34 = v33 + v3[2];
      v35 = v34 + v3[3];
      v36 = v35 + v3[4];
      v37 = v36 + v3[5];
      v38 = v37 + v3[6];
      v39 = v38 + v3[7];
      v40 = v39 + v3[8];
      v41 = v40 + v3[9];
      v42 = v41 + v3[10];
      v52 = v32;
      v43 = v42 + v3[11];
      v44 = v43 + v3[12];
      v45 = v44 + v3[13];
      v46 = v45 + v3[14];
      v47 = v39 + v40 + v41 + v43 + v42;
      v5 = v46 + v55[15];
      v48 = v46 + v52 + v33 + v34 + v35 + v36 + v37 + v38 + v47;
      v3 = v55 + 16;
      v55 += 16;
      v31 = v5 + v44 + v45 + v48 + v58;
      v30 = v54-- == 1;
      v58 = v31;
    }
    while ( !v30 );
    a3 = v57;
    if ( v57 )
    {
LABEL_34:
      do
      {
        v49 = *v3++;
        v5 += v49;
        v31 += v5;
        --a3;
      }
      while ( a3 );
    }
    v5 %= 0xFFF1u;
    v31 %= 0xFFF1u;
    return v5 | (v31 << 16);
  }
  for ( ; a3; --a3 )
  {
    v10 = *v3++;
    v5 += v10;
    v6 += v5;
  }
  v11 = v5 - 65521;
  if ( v5 < 0xFFF1 )
    v11 = v5;
  return v11 | ((v6 + 15 * (v6 / 0xFFF1)) << 16);
}
