/*
 * XREFs of sub_180095970 @ 0x180095970
 * Callers:
 *     sub_1800975F0 @ 0x1800975F0 (sub_1800975F0.c)
 * Callees:
 *     sub_18003AC0C @ 0x18003AC0C (sub_18003AC0C.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_180095970(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 v4; // r14
  __int64 result; // rax
  __int64 v7; // rbp
  __int64 v8; // r13
  __int64 v9; // r15
  __int64 v10; // rdx
  __int64 v11; // rbx

  v2 = 0LL;
  v4 = 0LL;
  do
  {
    result = *(unsigned int *)(a1 + 3464);
    if ( _bittest((const int *)&result, v2) )
    {
      v7 = 0LL;
      v8 = v4;
      v9 = 0LL;
      do
      {
        if ( *(_BYTE *)(a1 + 3468)
          || (result = *(_QWORD *)(a1 + 16 * (v4 + v9) + 8), *(_QWORD *)(a1 + 16 * v8 + 1160) != result) )
        {
          v10 = 16 * (v7 + 12 * v2);
          v11 = v10 + a1;
          sub_18003AC0C((_QWORD *)(v10 + a1 + 1160), (_QWORD *)(a1 + v10 + 8));
          result = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)a2 + 112LL))(
                     a2,
                     (unsigned int)v2,
                     v11 + 1160,
                     (unsigned int)v7);
        }
        v7 = (unsigned int)(v7 + 1);
        ++v9;
        ++v8;
      }
      while ( (unsigned int)v7 < 0xC );
    }
    v2 = (unsigned int)(v2 + 1);
    v4 += 12LL;
  }
  while ( (unsigned int)v2 < 6 );
  *(_BYTE *)(a1 + 3468) = 0;
  return result;
}
