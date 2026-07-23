/*
 * XREFs of PpmResetPlatformIdleAccounting @ 0x140605E70
 * Callers:
 *     PpmInstallCoordinatedIdleStates @ 0x1407CCC80 (PpmInstallCoordinatedIdleStates.c)
 *     PpmInstallPlatformIdleStates @ 0x140AF57C0 (PpmInstallPlatformIdleStates.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall PpmResetPlatformIdleAccounting(int *a1)
{
  unsigned int v1; // edi
  int v2; // esi
  _QWORD *v4; // rax
  __int64 v5; // rdx
  _QWORD *v6; // rcx
  __int64 v7; // r8
  __int64 result; // rax

  v1 = a1[1];
  v2 = *a1;
  memset_0(a1, 0, 1032 * v1 + 40);
  if ( v1 )
  {
    v4 = a1 + 62;
    v5 = v1;
    do
    {
      *(v4 - 23) = -1LL;
      v6 = v4;
      v7 = 26LL;
      do
      {
        *v6 = -1LL;
        v6 += 4;
        --v7;
      }
      while ( v7 );
      v4 += 129;
      --v5;
    }
    while ( v5 );
  }
  a1[1] = v1;
  *a1 = v2 + 1;
  result = MEMORY[0xFFFFF78000000008];
  *((_QWORD *)a1 + 4) = MEMORY[0xFFFFF78000000008];
  a1[6] = 0;
  return result;
}
