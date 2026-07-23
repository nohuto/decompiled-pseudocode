/*
 * XREFs of MiGetPteBounds @ 0x14049D9E0
 * Callers:
 *     MiClearNonPagedPtes @ 0x140365158 (MiClearNonPagedPtes.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiGetPteBounds(unsigned __int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v3; // r9
  __int64 i; // r10
  __int64 v5; // rcx
  unsigned __int64 result; // rax
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rcx
  __int64 v9; // [rsp+0h] [rbp-30h]
  _OWORD v10[2]; // [rsp+8h] [rbp-28h] BYREF

  v3 = 0LL;
  memset(v10, 0, sizeof(v10));
  for ( i = 0LL; i < 4; ++i )
  {
    a1 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    *((_QWORD *)v10 + i) = a1;
  }
  v5 = *(int *)(a3 + 24);
  *(_QWORD *)(a3 + 16) = *((_QWORD *)v10 + v5);
  *(_QWORD *)a3 = *(&v9 + v5);
  do
  {
    a2 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    *((_QWORD *)v10 + v3++) = a2;
  }
  while ( v3 < 4 );
  result = *(&v9 + v5);
  v7 = *(_QWORD *)a3 & 0xFFFFFFFFFFFFFFF8uLL;
  *(_QWORD *)(a3 + 8) = result;
  v8 = v7 | 0xFF8;
  if ( result > v8 )
    *(_QWORD *)(a3 + 8) = v8;
  return result;
}
