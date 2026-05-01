/*
 * XREFs of SdbCloseDatabaseRead @ 0x18008D3D4
 * Callers:
 *     SdbReleaseDatabase @ 0x18008DDFC (SdbReleaseDatabase.c)
 *     SdbInitDatabaseEx @ 0x18008FBFC (SdbInitDatabaseEx.c)
 *     SdbpCloseLocalDatabaseEx @ 0x180090030 (SdbpCloseLocalDatabaseEx.c)
 *     SdbpOpenCompressedDatabase @ 0x1800975B0 (SdbpOpenCompressedDatabase.c)
 * Callees:
 *     AslFree @ 0x180098D34 (AslFree.c)
 *     AslFileMappingDelete @ 0x18009A30C (AslFileMappingDelete.c)
 *     AslHashFree @ 0x1800A1148 (AslHashFree.c)
 */

__int64 __fastcall SdbCloseDatabaseRead(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdx

  v1 = *(_QWORD *)(a1 + 2640);
  if ( v1 && *(_DWORD *)(v1 + 16) == 1 )
  {
    v3 = *(_QWORD *)(v1 + 8);
    if ( v3 )
      AslFree(NtCurrentPeb()->ProcessHeap, v3);
    AslFree(NtCurrentPeb()->ProcessHeap, *(_QWORD *)(a1 + 2640));
    v4 = *(_QWORD *)(a1 + 2648);
    *(_QWORD *)(a1 + 2640) = 0LL;
    if ( v4 )
    {
      AslHashFree();
      *(_QWORD *)(a1 + 2648) = 0LL;
    }
  }
  if ( (*(_BYTE *)(a1 + 24) & 9) == 9 )
  {
    v5 = *(_QWORD *)(a1 + 8);
    if ( v5 )
    {
      AslFree(NtCurrentPeb()->ProcessHeap, v5);
      *(_QWORD *)(a1 + 8) = 0LL;
      *(_DWORD *)(a1 + 20) = 0;
    }
  }
  AslFileMappingDelete(*(_QWORD *)a1);
  return AslFree(NtCurrentPeb()->ProcessHeap, a1);
}
