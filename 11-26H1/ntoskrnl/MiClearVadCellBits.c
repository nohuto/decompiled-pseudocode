/*
 * XREFs of MiClearVadCellBits @ 0x14043B270
 * Callers:
 *     MiRemoveVad @ 0x14044DF80 (MiRemoveVad.c)
 * Callees:
 *     RtlSetVolatileMemory @ 0x140737C70 (RtlSetVolatileMemory.c)
 *     MiVadBitToUserVa @ 0x140A66BC0 (MiVadBitToUserVa.c)
 */

unsigned __int64 __fastcall MiClearVadCellBits(
        unsigned __int64 *a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        _DWORD *a6)
{
  unsigned __int64 result; // rax
  int v9; // edx
  _QWORD *v10; // rcx
  unsigned __int64 v11; // r8
  __int64 v12; // r10
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // r9
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // r12
  _DWORD *v17; // rax
  unsigned __int64 v18; // r15
  unsigned __int64 v19; // r12
  unsigned __int64 v20; // rsi
  unsigned __int64 v21; // r13
  _BYTE *v22; // rbp
  unsigned __int64 v23; // rcx
  char v24; // al
  unsigned __int64 v25; // rax
  int v26; // edx
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // r9
  BOOL v29; // [rsp+60h] [rbp+8h]
  unsigned __int64 v30; // [rsp+68h] [rbp+10h]

  result = MiVadBitToUserVa(a1, 0LL, a2);
  v30 = result;
  v13 = result >> 16;
  v14 = result;
  if ( !v11 )
    v11 = v13 == 0;
  if ( v11 <= a3 && a3 >= v13 )
  {
    v15 = v13 + *v10;
    if ( v11 < v15 )
    {
      v16 = result >> 16;
      if ( v11 >= v13 )
        v16 = v11;
      v29 = v11 < v13;
      if ( a3 >= v15 )
      {
        a3 = v15 - 1;
        v29 = 1;
      }
      v17 = a6;
      v18 = a3 - v16 + 1;
      v19 = v16 - v13;
      v20 = a3 - v13;
      v21 = a1[8] - v13;
      if ( *a6 != v9 )
      {
LABEL_23:
        v25 = a1[2];
        v26 = 1;
        if ( v25 < v21 || a1[4] < v21 )
          v26 = 0;
        if ( v25 > v19 )
        {
          if ( v19 < v21 && v26 )
          {
            if ( v20 >= v21 )
              a1[2] = v21;
          }
          else
          {
            a1[2] = v19;
          }
        }
        result = 0LL;
        if ( v12 )
        {
          v27 = ((((*(unsigned int *)(v12 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v12 + 33) << 32)) << 12) | 0xFFF)
               + 0xFFFF) >> 16;
          if ( v27 <= v13 )
          {
            result = 0LL;
          }
          else
          {
            result = v27 - v13;
            if ( result )
            {
LABEL_29:
              if ( v26 && result < v21 )
                result = v21;
              if ( result <= v20 )
              {
                if ( a5 )
                {
                  v28 = *a1;
                  if ( (((unsigned __int64)*(unsigned int *)(a5 + 24) >> 4) | ((unsigned __int64)*(unsigned __int8 *)(a5 + 32) << 28)) <= *a1 + v13 )
                    v28 = (((unsigned __int64)*(unsigned int *)(a5 + 24) >> 4) | ((unsigned __int64)*(unsigned __int8 *)(a5 + 32) << 28))
                        - v13;
                }
                else
                {
                  v28 = *a1;
                }
                if ( result < a1[4] && v28 - result >= a1[3] )
                  a1[4] = result;
              }
              return result;
            }
          }
        }
        if ( v14 < 0x10000 )
          result = 1LL;
        goto LABEL_29;
      }
      if ( !v18 )
      {
LABEL_21:
        if ( !v29 )
          *v17 = 1;
        goto LABEL_23;
      }
      v22 = (_BYTE *)(a1[1] + (v19 >> 3));
      v23 = v19 & 7;
      if ( v18 + v23 <= 8 )
      {
        v24 = ~(byte_1400327C0[v18] << v23);
      }
      else
      {
        if ( (_DWORD)v23 )
        {
          *v22++ &= byte_1400327C0[v23];
          v18 -= (unsigned int)(8 - v23);
        }
        if ( v18 > 8 )
        {
          RtlSetVolatileMemory(v22, 0, v18 >> 3);
          v14 = v30;
          v12 = a4;
          v22 += v18 >> 3;
          v18 &= 7u;
        }
        if ( !v18 )
          goto LABEL_20;
        v24 = byte_140018470[v18];
      }
      *v22 &= v24;
LABEL_20:
      v17 = a6;
      goto LABEL_21;
    }
  }
  return result;
}
