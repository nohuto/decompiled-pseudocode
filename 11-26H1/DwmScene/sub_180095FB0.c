/*
 * XREFs of sub_180095FB0 @ 0x180095FB0
 * Callers:
 *     sub_1800975F0 @ 0x1800975F0 (sub_1800975F0.c)
 * Callees:
 *     sub_180013540 @ 0x180013540 (sub_180013540.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_180095FB0(__int64 a1, __int64 a2)
{
  unsigned int v2; // esi
  __int64 v4; // r14
  __int64 result; // rax
  unsigned int v7; // ebp
  __int64 v8; // r13
  __int64 v9; // r15
  __int64 v10; // rcx
  __int64 v11; // rbx

  v2 = 0;
  v4 = 0LL;
  do
  {
    result = *(unsigned int *)(a1 + 4616);
    if ( _bittest((const int *)&result, v2) )
    {
      v7 = 0;
      v8 = v4;
      v9 = 0LL;
      do
      {
        if ( *(_BYTE *)(a1 + 4620)
          || (result = *(_QWORD *)(a1 + 16 * (v4 + v9) + 8), *(_QWORD *)(a1 + 16 * v8 + 1544) != result) )
        {
          v10 = 16 * (v7 + 16LL * v2);
          v11 = v10 + a1;
          sub_180013540((__int64 *)(v10 + a1 + 1544), (_QWORD *)(v10 + a1 + 8));
          result = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)a2 + 136LL))(
                     a2,
                     v2,
                     v11 + 1544,
                     v7);
        }
        ++v7;
        ++v9;
        ++v8;
      }
      while ( v7 < 0x10 );
    }
    ++v2;
    v4 += 16LL;
  }
  while ( v2 < 6 );
  *(_BYTE *)(a1 + 4620) = 0;
  return result;
}
