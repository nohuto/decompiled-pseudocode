/*
 * XREFs of MiUpdateHugeRangeZeroFreeBitmap @ 0x1406F2B2C
 * Callers:
 *     MiSimpleUnlinkHugeRange @ 0x140488420 (MiSimpleUnlinkHugeRange.c)
 *     MiSimpleInsertHugeRange @ 0x1406F2830 (MiSimpleInsertHugeRange.c)
 * Callees:
 *     MiPageToNode @ 0x140288C70 (MiPageToNode.c)
 *     MiColorGetCache @ 0x140288F60 (MiColorGetCache.c)
 *     MiPageToChannel @ 0x140294DD0 (MiPageToChannel.c)
 *     MiHugePfnPartition @ 0x140487CC0 (MiHugePfnPartition.c)
 */

__int64 __fastcall MiUpdateHugeRangeZeroFreeBitmap(int a1, int a2, int a3)
{
  __int64 v3; // rbx
  __int64 v4; // r14
  __int64 v6; // rbp
  char v7; // si
  char v8; // al
  unsigned int Cache; // eax
  char v10; // cl
  unsigned __int64 v11; // rdx
  __int64 result; // rax
  __int64 v13; // r11
  unsigned __int64 v14; // r11
  __int64 v15; // r10
  unsigned __int64 v16; // rdx
  __int64 v17; // r8

  v3 = a1 & 0x3FFFFF;
  v4 = a2;
  v6 = MiHugePfnPartition((_QWORD *)(*(_QWORD *)((char *)&stru_140E2ED08.116 + 4) + 8 * v3));
  v7 = MiPageToChannel((unsigned __int64)(unsigned int)v3 << 18);
  v8 = MiPageToNode((unsigned __int64)(unsigned int)v3 << 18);
  Cache = MiColorGetCache((unsigned __int8)v3 | ((v7 & 1 | (2 * (v8 & 0x3F | ((v4 & 1) << 11) | 0x200))) << 8));
  v10 = Cache;
  v11 = Cache;
  result = *(_QWORD *)(v6 + 16);
  v14 = v13 << (v10 & 0x3F);
  v16 = v11 >> 6;
  v17 = *(_QWORD *)(result + 16 * (v4 + 3520 * v15) + 13960);
  if ( a3 )
    _InterlockedOr64((volatile signed __int64 *)(v17 + 8 * v16), v14);
  else
    _InterlockedAnd64((volatile signed __int64 *)(v17 + 8 * v16), ~v14);
  return result;
}
