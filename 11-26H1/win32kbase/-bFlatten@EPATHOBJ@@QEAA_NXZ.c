/*
 * XREFs of ?bFlatten@EPATHOBJ@@QEAA_NXZ @ 0x14011A4A0
 * Callers:
 *     ?vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x14000F920 (-vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 * Callees:
 *     pprFlattenRec @ 0x14011A500 (pprFlattenRec.c)
 */

char __fastcall EPATHOBJ::bFlatten(EPATHOBJ *this)
{
  __int64 v1; // r8
  __int64 i; // r8

  v1 = *((_QWORD *)this + 1);
  if ( !v1 )
    return 0;
  for ( i = *(_QWORD *)(v1 + 32); i; i = *(_QWORD *)i )
  {
    if ( (*(_DWORD *)(i + 16) & 0x10) != 0 )
    {
      i = pprFlattenRec(
            (char *)this + 4,
            (*((_QWORD *)this + 1) + 24LL) & ((unsigned __int128)-(__int128)*((unsigned __int64 *)this + 1) >> 64));
      if ( !i )
        return 0;
    }
  }
  *(_DWORD *)this &= ~1u;
  return 1;
}
