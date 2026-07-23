/*
 * XREFs of SepInitializeCodeIntegrity @ 0x14081581C
 * Callers:
 *     SepInitializationPhase1 @ 0x140815D14 (SepInitializationPhase1.c)
 * Callees:
 *     strstr @ 0x140537FA0 (strstr.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 SepInitializeCodeIntegrity()
{
  unsigned int v0; // edi
  __int64 v1; // rcx
  unsigned int *v2; // rdx
  char *v3; // rbx
  char *v4; // rcx
  __int64 v5; // rax
  __int128 v7; // [rsp+30h] [rbp-38h] BYREF
  __int128 v8; // [rsp+40h] [rbp-28h]
  __int64 v9; // [rsp+50h] [rbp-18h]

  v9 = 0LL;
  v7 = 0LL;
  v0 = 6;
  v8 = 0LL;
  memset_0((char *)&SepRmCapTableLock.InGlobalForegroundList + 4, 0, 0x104uLL);
  LODWORD(SepRmCapTableLock.InGlobalForegroundList) = 272;
  SepRmCapTableLock.KcsanThread = 167772178LL;
  if ( KeLoaderBlock_0 )
  {
    v1 = *(_QWORD *)(KeLoaderBlock_0 + 240);
    if ( v1 )
    {
      v2 = *(unsigned int **)(v1 + 2904);
      if ( v2 )
        v0 = *v2;
    }
    v3 = *(char **)(KeLoaderBlock_0 + 216);
    if ( v3 )
    {
      v4 = strstr(*(const char **)(KeLoaderBlock_0 + 216), "MINTCBIGNOREKD");
      if ( v4 )
      {
        v5 = -1LL;
        do
          ++v5;
        while ( aMintcbignorekd[v5] );
        if ( (v4 == v3 || *(v4 - 1) == 32) && (v4[(unsigned int)v5] & 0xDF) == 0 )
          HIDWORD(RtlpBootStatHandleLock.Affinity) |= 1u;
      }
    }
    *(_QWORD *)&v7 = KeLoaderBlock_0 + 80;
    *((_QWORD *)&v7 + 1) = KeLoaderBlock_0 + 112;
    *(_QWORD *)&v8 = KeLoaderBlock_0 + 64;
    *((_QWORD *)&v8 + 1) = KeLoaderBlock_0 + 96;
    v9 = KeLoaderBlock_0 + 48;
  }
  return CiInitialize(v0, &v7, 5LL, &SepRmCapTableLock.InGlobalForegroundList, SeCiPrivateApis);
}
