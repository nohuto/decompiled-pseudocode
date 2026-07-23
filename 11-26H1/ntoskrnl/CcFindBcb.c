/*
 * XREFs of CcFindBcb @ 0x1403E6430
 * Callers:
 *     CcAcquireByteRangeForWrite @ 0x1403E5550 (CcAcquireByteRangeForWrite.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall CcFindBcb(__int64 a1, __int64 a2, _QWORD *a3, __int64 *a4)
{
  unsigned __int8 v4; // r12
  __int64 *v5; // rsi
  __int64 v8; // r11
  __int64 v9; // r9
  __int64 v10; // r13
  _QWORD *v11; // rdx
  int v12; // r14d
  __int64 v13; // r15
  char v14; // cl
  char v15; // si
  char v16; // cl
  __int64 v17; // rdi
  __int64 v18; // rbp
  __int64 v19; // rax
  __int64 v20; // rax
  __int16 i; // cx
  unsigned int v22; // ecx
  unsigned __int64 v24; // r9
  __int64 v25; // rcx
  _OWORD v27[3]; // [rsp+8h] [rbp-A0h] BYREF
  __int64 v28; // [rsp+38h] [rbp-70h]
  _DWORD v29[8]; // [rsp+40h] [rbp-68h]

  v4 = 0;
  v5 = a4;
  v8 = *(_QWORD *)a2 + 0x80000LL;
  if ( *(__int64 *)(a1 + 32) > 0x200000 && (*(_DWORD *)(a1 + 152) & 0x200) != 0 )
  {
    v9 = *(_QWORD *)(a1 + 32);
    if ( v9 <= 0x2000000 )
    {
      if ( *(_QWORD *)a2 >= ((__int64)((int)((((int)v9 >> 18) + 1) & 0xFFFFFFFE) / 2) << 19) - 0x80000 )
      {
        v5 = a4;
        v11 = (_QWORD *)(a1 + 16);
      }
      else
      {
        if ( HIDWORD(v9) )
        {
          v24 = 0xFFFFFFFFLL;
        }
        else if ( (unsigned int)v9 <= 0x100000 )
        {
          v24 = 32LL;
        }
        else
        {
          v24 = 8 * ((unsigned __int64)(unsigned int)v9 >> 18);
        }
        v5 = a4;
        v11 = (_QWORD *)(v24 + *(_QWORD *)(a1 + 88) + 16 * (v8 >> 19));
      }
    }
    else
    {
      v10 = *(_QWORD *)(a1 + 88);
      v11 = 0LL;
      v12 = 0;
      LODWORD(v13) = 0;
      v28 = 0LL;
      memset(v27, 0, sizeof(v27));
      v14 = 25;
      do
      {
        v15 = v14;
        v14 += 7;
        ++v12;
      }
      while ( v9 > 1LL << v14 );
      if ( v8 >= 1LL << v14 )
      {
        v11 = (_QWORD *)(a1 + 16);
      }
      else
      {
        while ( 1 )
        {
          v16 = v15;
          v17 = v8 >> v15;
          --v12;
          v18 = *(_QWORD *)(v10 + 8LL * (unsigned int)(v8 >> v15));
          if ( !v18 )
            break;
LABEL_8:
          v19 = (unsigned int)v13;
          v15 -= 7;
          LODWORD(v13) = v13 + 1;
          *((_QWORD *)v27 + v19) = v10;
          v10 = v18;
          v29[v19] = v17;
          v8 &= (1LL << v16) - 1;
          if ( !v12 )
          {
            v11 = (_QWORD *)(v18 + 8 * ((v8 >> v15) & 0xFFFFFFFELL) + 1024);
            goto LABEL_10;
          }
        }
        while ( 1 )
        {
          if ( (_DWORD)v17 != 127 )
          {
            do
            {
              if ( (_DWORD)v17 == 127 )
                break;
              v17 = (unsigned int)(v17 + 1);
            }
            while ( !*(_QWORD *)(v10 + 8 * v17) );
            v18 = *(_QWORD *)(v10 + 8LL * (unsigned int)v17);
            if ( v18 )
            {
              v8 = 0LL;
              goto LABEL_8;
            }
          }
          if ( !(_DWORD)v13 )
            break;
          if ( (unsigned int)v13 >= 7 )
            goto LABEL_10;
          ++v12;
          v13 = (unsigned int)(v13 - 1);
          LODWORD(v17) = v29[v13];
          v10 = *((_QWORD *)v27 + v13);
        }
        v11 = (_QWORD *)(a1 + 16);
      }
LABEL_10:
      v5 = a4;
    }
  }
  else
  {
    v11 = (_QWORD *)(a1 + 16);
  }
  v20 = *v11 - 16LL;
  if ( *(_DWORD *)(a2 + 4) )
  {
LABEL_32:
    while ( *(_WORD *)v20 == 765 && *(_QWORD *)a2 < *(_QWORD *)(v20 + 32) )
    {
      v25 = *(_QWORD *)(v20 + 8);
      if ( *(_QWORD *)a2 >= v25 )
      {
LABEL_21:
        v4 = 1;
        break;
      }
      if ( *a3 >= v25 )
        *a3 = v25;
      v20 = *(_QWORD *)(v20 + 16) - 16LL;
    }
  }
  else if ( *(_WORD *)v20 == 765 )
  {
    if ( *(_DWORD *)(v20 + 36) )
      goto LABEL_32;
    for ( i = 765; i == 765 && *(_DWORD *)a2 < *(_DWORD *)(v20 + 32); i = *(_WORD *)v20 )
    {
      v22 = *(_DWORD *)(v20 + 8);
      if ( *(_DWORD *)a2 >= v22 )
        goto LABEL_21;
      if ( *(_DWORD *)a3 >= v22 )
        *(_DWORD *)a3 = v22;
      v20 = *(_QWORD *)(v20 + 16) - 16LL;
    }
  }
  *v5 = v20;
  return v4;
}
