/*
 * XREFs of Xp10BuildHuffmanDecodeTable @ 0x1800FA134
 * Callers:
 *     Xp10ReadAndDecodeHuffmanTables @ 0x1800F9128 (Xp10ReadAndDecodeHuffmanTables.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Xp10BuildHuffmanDecodeTable(
        __int64 a1,
        __int64 a2,
        _WORD *a3,
        int a4,
        unsigned int a5,
        int a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  _WORD *v9; // r13
  __int64 v10; // rbx
  __int64 *v11; // r11
  _QWORD *v12; // r15
  unsigned int v13; // r10d
  int v14; // ebp
  unsigned int v15; // edi
  __int16 v16; // r9
  unsigned __int16 v17; // dx
  __int64 result; // rax
  _WORD *v19; // r8
  unsigned int v20; // r8d
  unsigned int v21; // ecx
  unsigned int v22; // esi
  char v23; // r14
  unsigned __int16 v24; // r9
  __int64 v25; // r15
  unsigned int v26; // eax
  __int16 v27; // r8
  __int16 v28; // r8
  __int64 v29; // r8
  unsigned __int16 v30; // bp
  unsigned int v31; // ebx
  unsigned int v32; // r14d
  unsigned int v33; // edi
  __int64 v34; // rcx
  __int64 v35; // r8
  unsigned int v36; // [rsp+0h] [rbp-58h]
  _QWORD *v37; // [rsp+8h] [rbp-50h]
  int v39; // [rsp+68h] [rbp+10h]
  unsigned int v41; // [rsp+78h] [rbp+20h]
  unsigned int v42; // [rsp+98h] [rbp+40h]
  char v43; // [rsp+A8h] [rbp+50h]

  v9 = a3;
  v10 = a1;
  v37 = 0LL;
  v11 = 0LL;
  v39 = 0;
  v12 = 0LL;
  v42 = 0;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  if ( a4 == 1 )
  {
    v16 = 16 * *a3 + *(unsigned __int8 *)((unsigned __int16)*a3 + a1);
    v17 = 1 << a5;
    result = a9;
    if ( 1 << a5 )
    {
      v19 = (_WORD *)(a9 + 2LL * v17);
      do
      {
        *--v19 = v16;
        --v17;
      }
      while ( v17 );
    }
  }
  else
  {
    do
    {
      v20 = *(unsigned __int8 *)((unsigned __int16)v9[v14] + v10);
      if ( v11 && *((unsigned __int16 *)v11 + 5) > v20 )
        v20 = *((unsigned __int16 *)v11 + 5);
      v21 = v20;
      if ( v20 <= a5 )
        v21 = a5;
      v43 = v21;
      v22 = a5 < v20 ? v20 - a6 : 0;
      v23 = v21 - v22;
      v36 = v22;
      v41 = v21 - v22;
      v24 = 1 << (v21 - v22);
      if ( v24 )
      {
        LODWORD(v25) = 0;
        do
        {
          if ( v11 && (v26 = *((unsigned __int16 *)v11 + 5), v26 > v22) )
          {
            v27 = *((_WORD *)v11 + 4);
            v11 = (__int64 *)*v11;
            v28 = v26 + (v27 << a6) - v22 - v13;
          }
          else
          {
            v29 = (unsigned __int16)v9[v14];
            LOWORD(v26) = *(unsigned __int8 *)(v29 + v10);
            v28 = v26 + 16 * v29 - v22;
            v39 = v14 + 1;
          }
          v30 = v24 - (1 << (v43 - v26));
          if ( v24 > v30 )
          {
            do
            {
              --v24;
              v31 = v41;
              v32 = v24;
              v33 = v25;
              if ( v41 > 8 )
              {
                v25 = ((v41 - 9) >> 3) + 1;
                do
                {
                  v34 = (unsigned __int8)v32;
                  v31 -= 8;
                  v32 >>= 8;
                  v33 = byte_18018F890[v34] | (v33 << 8);
                  --v25;
                }
                while ( v25 );
              }
              if ( v31 )
                v33 = (byte_18018F890[(unsigned __int8)v32] | (v33 << 8)) >> (8 - v31);
              *(_WORD *)(a9 + 2LL * (v33 + v13)) = v28;
            }
            while ( v24 > v30 );
            v22 = v36;
            v9 = a3;
            v10 = a1;
          }
          v14 = v39;
        }
        while ( v24 );
        v15 = v42;
        v23 = v41;
        v12 = v37;
      }
      v35 = a7 + 16LL * v15;
      *(_WORD *)(v35 + 8) = v13 >> a6;
      *(_WORD *)(v35 + 10) = v22;
      *(_QWORD *)v35 = 0LL;
      if ( v11 )
        *v12 = v35;
      else
        v11 = (__int64 *)(a7 + 16LL * v15);
      ++v15;
      v37 = (_QWORD *)v35;
      v42 = v15;
      v12 = (_QWORD *)v35;
      v13 += 1 << v23;
    }
    while ( v22 );
    return a9 + 2LL * (v13 - (1 << a5));
  }
  return result;
}
