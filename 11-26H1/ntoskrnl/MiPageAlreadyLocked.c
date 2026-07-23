/*
 * XREFs of MiPageAlreadyLocked @ 0x14042EA40
 * Callers:
 *     MiSynchronizeFastPageInsert @ 0x1402B0720 (MiSynchronizeFastPageInsert.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiPageAlreadyLocked(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx

  v2 = 0LL;
  v3 = a1 + 16;
  while ( v2 < 4 )
  {
    if ( *(_BYTE *)(v3 + 8) && a2 == *(_QWORD *)v3 )
      return 1LL;
    ++v2;
    v3 += 24LL;
  }
  return 0LL;
}
