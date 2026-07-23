/*
 * XREFs of CcGetBcbListHeadLargeOffset @ 0x140447F50
 * Callers:
 *     CcSetVacbLargeOffset @ 0x1402C3430 (CcSetVacbLargeOffset.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall CcGetBcbListHeadLargeOffset(__int64 a1, __int64 a2, char a3)
{
  __int64 v4; // rdi
  __int64 v6; // rsi
  int v7; // r9d
  __int64 v8; // r8
  char v9; // cl
  char v10; // r11
  char v11; // cl
  __int64 v12; // r8
  __int64 v13; // r10
  _OWORD v15[3]; // [rsp+0h] [rbp-68h] BYREF
  __int64 v16; // [rsp+30h] [rbp-38h]
  _DWORD v17[8]; // [rsp+38h] [rbp-30h]

  v4 = 0LL;
  v16 = 0LL;
  memset(v15, 0, sizeof(v15));
  v6 = *(_QWORD *)(a1 + 88);
  v7 = 0;
  v8 = *(_QWORD *)(a1 + 32);
  v9 = 25;
  do
  {
    v10 = v9;
    v9 += 7;
    ++v7;
  }
  while ( v8 > 1LL << v9 );
  if ( a2 < 1LL << v9 )
  {
    while ( 1 )
    {
      v11 = v10;
      v12 = a2 >> v10;
      --v7;
      v13 = *(_QWORD *)(v6 + 8LL * (unsigned int)(a2 >> v10));
      if ( v13 )
        goto LABEL_5;
      while ( a3 )
      {
        if ( (_DWORD)v12 != 127 )
        {
          do
          {
            if ( (_DWORD)v12 == 127 )
              break;
            v12 = (unsigned int)(v12 + 1);
          }
          while ( !*(_QWORD *)(v6 + 8 * v12) );
          v13 = *(_QWORD *)(v6 + 8LL * (unsigned int)v12);
          if ( v13 )
          {
            a2 = 0LL;
            goto LABEL_5;
          }
        }
LABEL_9:
        if ( !(_DWORD)v4 )
          return a1 + 16;
        if ( (unsigned int)v4 >= 7 )
          return 0LL;
        ++v7;
        v4 = (unsigned int)(v4 - 1);
        LODWORD(v12) = v17[(unsigned int)v4];
        v6 = *((_QWORD *)v15 + (unsigned int)v4);
      }
      if ( !(_DWORD)v12 )
        goto LABEL_9;
      do
      {
        if ( !(_DWORD)v12 )
          break;
        v12 = (unsigned int)(v12 - 1);
      }
      while ( !*(_QWORD *)(v6 + 8 * v12) );
      v13 = *(_QWORD *)(v6 + 8LL * (unsigned int)v12);
      if ( !v13 )
        goto LABEL_9;
      a2 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_5:
      *((_QWORD *)v15 + v4) = v6;
      v10 -= 7;
      v17[v4] = v12;
      a2 &= (1LL << v11) - 1;
      v4 = (unsigned int)(v4 + 1);
      v6 = v13;
      if ( !v7 )
        return v13 + 8 * (((a2 >> v10) & 0xFFFFFFFELL) + 128);
    }
  }
  return a1 + 16;
}
