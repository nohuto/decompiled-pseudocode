/*
 * XREFs of RtlFindSetBitsEx @ 0x140419C40
 * Callers:
 *     MiUnlockDriverPages @ 0x140AC7404 (MiUnlockDriverPages.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall RtlFindSetBitsEx(unsigned __int64 *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r9
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rsi
  unsigned __int64 v8; // rdx
  unsigned __int64 v10; // r15
  unsigned __int64 v11; // rbp
  _QWORD *v12; // r8
  signed __int64 v13; // rbx
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rdi
  __int64 v17; // rdi
  _QWORD *v18; // r12
  bool v19; // zf
  __int64 v20; // rdx
  unsigned int v21; // r14d
  unsigned __int64 v22; // r14
  __int64 v23; // rcx
  __int64 v24; // rcx
  _QWORD *v25; // rdx
  _QWORD *v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // rcx
  unsigned __int64 v31; // rdx
  __int64 v32; // rcx
  signed __int64 v33; // rcx
  __int64 v34; // rbx
  unsigned __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rbx

  v3 = *a1;
  v4 = 0LL;
  v5 = a1[1];
  if ( a3 < *a1 )
    v4 = a3;
  v8 = v3 - 1;
  if ( !a2 )
    return v4 & 0xFFFFFFFFFFFFFFF8uLL;
  while ( 1 )
  {
    if ( v8 - v4 + 1 < a2 )
    {
LABEL_11:
      v14 = -1LL;
      goto LABEL_12;
    }
    v10 = v8 - a2 + 1;
    v11 = v5 + 8 * (v10 >> 6);
    v12 = (_QWORD *)(v5 + 8 * (v4 >> 6));
    v13 = ~*v12 | ((1LL << v4) - 1);
    if ( a2 > 0x7F )
    {
      v22 = v11 + 8;
      if ( (v10 & 0x3F) == 0 )
        v22 = v5 + 8 * ((v8 - a2 + 1) >> 6);
      if ( v13 )
      {
        v23 = v12[1];
        ++v12;
        if ( v23 != -1 )
          goto LABEL_45;
        v19 = !_BitScanReverse64((unsigned __int64 *)&v24, v13);
        if ( v19 )
          LODWORD(v13) = 64;
        else
          LODWORD(v13) = 63 - v24;
      }
      while ( 1 )
      {
        v14 = ((__int64)((__int64)v12 - v5) >> 3 << 6) - (unsigned int)v13;
        if ( v14 > v10 )
          goto LABEL_11;
        v25 = &v12[(a2 - (unsigned int)v13) >> 6];
        while ( ++v12 != v25 )
        {
          if ( *v12 != -1LL )
            goto LABEL_45;
        }
        if ( (((_BYTE)a2 - (_BYTE)v13) & 0x3F) == 0 )
          goto LABEL_18;
        v19 = !_BitScanForward64((unsigned __int64 *)&v28, ~*v12);
        if ( v19 )
          LODWORD(v28) = 64;
        if ( (unsigned int)v28 >= (((_BYTE)a2 - (_BYTE)v13) & 0x3Fu) )
          goto LABEL_18;
        do
        {
LABEL_45:
          v26 = v12;
          if ( (unsigned __int64)v12 > v22 )
            goto LABEL_11;
          v27 = v12[1];
          ++v12;
        }
        while ( v27 != -1 );
        v19 = !_BitScanReverse64((unsigned __int64 *)&v26, ~*v26);
        if ( v19 )
          LODWORD(v13) = 64;
        else
          LODWORD(v13) = 63 - (_DWORD)v26;
      }
    }
    if ( a2 >= 0x40 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( v13 < 0 )
          {
            if ( (unsigned __int64)++v12 > v11 )
              goto LABEL_11;
            v13 = ~*v12;
          }
          v19 = !_BitScanReverse64((unsigned __int64 *)&v29, v13);
          if ( v19 )
            v30 = 64LL;
          else
            v30 = (unsigned int)(63 - v29);
          v14 = ((((__int64)((__int64)v12 - v5) >> 3) + 1) << 6) - v30;
          if ( v14 > v10 )
            goto LABEL_11;
          v31 = a2 - v30;
          if ( a2 == v30 )
            goto LABEL_18;
          v32 = v12[1];
          ++v12;
          v33 = ~v32;
          v13 = v33;
          if ( v31 >= 0x40 )
            break;
LABEL_66:
          v19 = !_BitScanForward64(&v35, v13);
          if ( v19 )
            v35 = 64LL;
          if ( v35 >= v31 )
            goto LABEL_18;
        }
        if ( !v33 )
        {
          v31 -= 64LL;
          if ( !v31 )
            goto LABEL_18;
          v34 = v12[1];
          ++v12;
          v13 = ~v34;
          goto LABEL_66;
        }
      }
    }
    if ( a2 > 1 )
    {
      v17 = 0LL;
      v18 = (_QWORD *)(v5 + 8 * (v8 >> 6));
      while ( v13 != -1 )
      {
LABEL_23:
        v19 = !_BitScanForward64((unsigned __int64 *)&v20, v13);
        if ( v19 )
          LODWORD(v20) = 64;
        if ( (unsigned int)(v17 + v20) >= a2 )
        {
          v16 = -v17;
          goto LABEL_17;
        }
        v21 = a2;
        v16 = ~v13;
        while ( 1 )
        {
          v16 &= v16 >> (v21 >> 1);
          if ( !v16 )
            break;
          v21 -= v21 >> 1;
          if ( v21 <= 1 )
          {
            _BitScanForward64(&v16, v16);
            goto LABEL_17;
          }
        }
        if ( v12 == v18 )
          goto LABEL_11;
        v19 = !_BitScanReverse64((unsigned __int64 *)&v36, v13);
        if ( v19 )
        {
          v37 = v12[1];
          ++v12;
          v13 = ~v37;
          v17 = 64LL;
        }
        else
        {
          v17 = (unsigned int)(63 - v36);
          v13 = ~v12[1];
          ++v12;
        }
      }
      while ( 1 )
      {
        if ( (unsigned __int64)++v12 > v11 )
          goto LABEL_11;
        v13 = ~*v12;
        if ( *v12 )
        {
          v17 = 0LL;
          goto LABEL_23;
        }
      }
    }
    while ( v13 == -1 )
    {
      if ( (unsigned __int64)++v12 > v11 )
        goto LABEL_11;
      v13 = ~*v12;
    }
    _BitScanForward64(&v16, ~v13);
LABEL_17:
    v14 = ((__int64)((__int64)v12 - v5) >> 3 << 6) + v16;
    if ( v14 > v10 )
    {
      v14 = -1LL;
    }
    else
    {
LABEL_18:
      if ( v14 != -1LL )
        return v14;
    }
LABEL_12:
    if ( !v4 )
      return v14;
    v15 = a2 + a3;
    if ( a2 + a3 > v3 )
      v15 = v3;
    v8 = v15 - 1;
    v4 = 0LL;
  }
}
