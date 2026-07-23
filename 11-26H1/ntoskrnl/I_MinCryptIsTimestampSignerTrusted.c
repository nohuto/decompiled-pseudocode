/*
 * XREFs of I_MinCryptIsTimestampSignerTrusted @ 0x1408A7F54
 * Callers:
 *     MincryptIsTimestampBeforeRevocation @ 0x1408A82E4 (MincryptIsTimestampBeforeRevocation.c)
 * Callees:
 *     memcmp @ 0x140742350 (memcmp.c)
 */

char __fastcall I_MinCryptIsTimestampSignerTrusted(unsigned int a1, __int64 a2)
{
  __int64 v3; // rbx
  unsigned int v4; // r15d
  unsigned int *v5; // r12
  unsigned int v6; // edi
  unsigned int v7; // r13d
  __int64 v8; // rsi
  __int64 v9; // r14
  __int64 v10; // rcx
  __int64 v11; // r9
  __int64 v12; // r10

  if ( !a1 )
    return 0;
  v3 = qword_140FD6098;
  if ( !qword_140FD6098 || !*(_DWORD *)(qword_140FD6098 + 192) )
    return 0;
  v4 = *(_DWORD *)(a2 + 48);
  v5 = (unsigned int *)(a1 + *(_QWORD *)(qword_140FD6098 + 200));
  v6 = 0;
  v7 = *v5;
LABEL_5:
  if ( v6 >= v4 )
    return 0;
  v8 = 0LL;
  v9 = 120LL * v6;
  while ( 1 )
  {
    if ( (unsigned int)v8 >= v7 )
    {
      ++v6;
      goto LABEL_5;
    }
    v10 = *(_QWORD *)(a2 + 40);
    v11 = v5[v8 + 1];
    v12 = *(_QWORD *)(v3 + 200);
    if ( *(_DWORD *)(v11 + v12) == *(_DWORD *)(v9 + v10)
      && !memcmp((const void *)(v11 + v12 + 4), (const void *)(v9 + v10 + 8), *(unsigned int *)(v9 + v10 + 4)) )
    {
      return 1;
    }
    v8 = (unsigned int)(v8 + 1);
  }
}
