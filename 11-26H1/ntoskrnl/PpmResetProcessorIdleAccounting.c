/*
 * XREFs of PpmResetProcessorIdleAccounting @ 0x1402F3314
 * Callers:
 *     PpmResetIdlePolicy @ 0x1402F31E0 (PpmResetIdlePolicy.c)
 *     PoIdle @ 0x1402F6ED0 (PoIdle.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall PpmResetProcessorIdleAccounting(unsigned int *a1, __int64 a2)
{
  unsigned int v2; // esi
  unsigned int v3; // r13d
  __int64 v6; // rdi
  char *v7; // rbp
  __int64 v8; // r14
  unsigned int *v9; // rax
  unsigned int *v10; // rcx
  __int64 v11; // rdx
  __int64 result; // rax

  v2 = *a1;
  v3 = a1[2];
  v6 = *a1;
  *(_OWORD *)a1 = 0LL;
  *((_OWORD *)a1 + 1) = 0LL;
  *((_QWORD *)a1 + 4) = 0LL;
  if ( v2 )
  {
    v7 = (char *)(a1 + 58);
    v8 = v2;
    do
    {
      *(_OWORD *)a1 = 0LL;
      *((_OWORD *)a1 + 1) = 0LL;
      *((_QWORD *)a1 + 4) = 0LL;
      memset_0(v7, 0, 0x340uLL);
      v7 += 1024;
      --v8;
    }
    while ( v8 );
    v9 = a1 + 60;
    do
    {
      *((_QWORD *)v9 - 22) = -1LL;
      v10 = v9;
      v11 = 26LL;
      do
      {
        *(_QWORD *)v10 = -1LL;
        v10 += 8;
        --v11;
      }
      while ( v11 );
      v9 += 256;
      --v6;
    }
    while ( v6 );
  }
  result = v3 + 1;
  *a1 = v2;
  a1[2] = result;
  *((_QWORD *)a1 + 2) = a2;
  a1[8] = 0;
  return result;
}
