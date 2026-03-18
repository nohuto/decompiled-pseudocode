/*
 * XREFs of MmTrimFilePagesFromWorkingSets @ 0x1406F7F58
 * Callers:
 *     PopTransitionToSleep @ 0x140C04000 (PopTransitionToSleep.c)
 * Callees:
 *     PsGetNextPartition @ 0x1402580F8 (PsGetNextPartition.c)
 *     MiWalkAllWorkingSets @ 0x1402A9370 (MiWalkAllWorkingSets.c)
 */

void MmTrimFilePagesFromWorkingSets()
{
  __int64 *i; // rcx
  __int64 v1; // rcx
  __int64 *NextPartition; // rax
  __int64 *v3; // rbx
  _OWORD v4[2]; // [rsp+20h] [rbp-28h] BYREF

  memset(v4, 0, sizeof(v4));
  if ( LOBYTE(stru_140E36558.ReadyTime) )
  {
    for ( i = 0LL; ; i = v3 )
    {
      NextPartition = (__int64 *)PsGetNextPartition(i);
      v3 = NextPartition;
      if ( !NextPartition )
        break;
      if ( LOBYTE(stru_140E36558.ReadyTime) )
      {
        v1 = *NextPartition;
        memset((char *)v4 + 12, 0, 20);
        *(_QWORD *)&v4[0] = 0x200000002LL;
        DWORD2(v4[0]) = 6;
        MiWalkAllWorkingSets(v1, (int *)v4);
      }
    }
  }
}
