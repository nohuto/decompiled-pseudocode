/*
 * XREFs of MiDeletePagingFiles @ 0x140871C3C
 * Callers:
 *     MiDeletePartitionResources @ 0x14086F208 (MiDeletePartitionResources.c)
 *     MiShutdownSystem @ 0x140C0646C (MiShutdownSystem.c)
 * Callees:
 *     MiReturnCommit @ 0x14036F050 (MiReturnCommit.c)
 *     MiDeletePagefile @ 0x140871A84 (MiDeletePagefile.c)
 */

__int64 __fastcall MiDeletePagingFiles(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // eax
  __int64 v3; // rsi
  __int64 v4; // rdi
  char **v7; // r14
  __int64 v8; // rbp
  char *v9; // rcx

  v2 = *(_DWORD *)(a1 + 22296);
  v3 = 0LL;
  v4 = 0LL;
  *a2 = 0LL;
  if ( v2 )
  {
    v7 = (char **)(a1 + 22304);
    v8 = v2;
    do
    {
      v9 = *v7;
      if ( *v7 )
      {
        if ( (v9[172] & 0x50) == 0 )
        {
          v4 += 2LL;
          v3 += *(unsigned int *)v9;
          *a2 += *((unsigned int *)v9 + 1);
        }
        MiDeletePagefile(v9, 1);
      }
      ++v7;
      --v8;
    }
    while ( v8 );
  }
  *(_DWORD *)(a1 + 22296) = 0;
  if ( v4 )
    MiReturnCommit(a1, v4, 0);
  return v3;
}
