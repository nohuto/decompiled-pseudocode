/*
 * XREFs of MiMoveUnusedSubsectionsToDeleteOnClose @ 0x1406EC488
 * Callers:
 *     MiPrepareDeleteOnClose @ 0x1406EC534 (MiPrepareDeleteOnClose.c)
 *     MiProcessDeleteOnClose @ 0x1406EC5B0 (MiProcessDeleteOnClose.c)
 * Callees:
 *     MiRemoveEntryNotifySentinel @ 0x1402EE30C (MiRemoveEntryNotifySentinel.c)
 */

__int64 __fastcall MiMoveUnusedSubsectionsToDeleteOnClose(__int64 a1, __int64 a2)
{
  __int64 *v3; // rsi
  unsigned int v4; // r8d
  __int64 i; // rbx
  _QWORD *v6; // rdi
  __int64 v7; // rax

  v3 = (__int64 *)(a1 + 2496);
  v4 = 0;
  for ( i = a2 + 128; i; i = *(_QWORD *)(i + 16) )
  {
    if ( *(_QWORD *)(i + 8)
      && !*(_QWORD *)(i + 80)
      && (*(_DWORD *)(i + 32) & 0x10000) == 0
      && (*(_DWORD *)(i + 32) & 0x80000) != 0 )
    {
      v6 = (_QWORD *)(i + 88);
      MiRemoveEntryNotifySentinel((_QWORD *)(a1 + 2352), (unsigned __int64 *)(i + 88));
      v7 = *v3;
      if ( *(__int64 **)(*v3 + 8) != v3 )
        __fastfail(3u);
      *v6 = v7;
      v4 = 1;
      *(_QWORD *)(i + 96) = v3;
      *(_QWORD *)(v7 + 8) = v6;
      *v3 = (__int64)v6;
    }
  }
  return v4;
}
