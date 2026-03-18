/*
 * XREFs of MiPteContentsOkToMappedWrite @ 0x14040DDD0
 * Callers:
 *     MiBuildMappedClusterComputeBounds @ 0x14040D9C0 (MiBuildMappedClusterComputeBounds.c)
 *     MiBuildMappedClusterFillMdl @ 0x14040DB58 (MiBuildMappedClusterFillMdl.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiPteContentsOkToMappedWrite(unsigned __int64 a1, __int16 a2)
{
  unsigned __int64 v2; // rax
  _BOOL8 result; // rax

  result = 0;
  if ( (a1 & 1) == 0 && (a1 & 0x400) == 0 && (a1 & 0x800) != 0 )
  {
    v2 = (a1 >> 12) & ((unsigned __int64)qword_140E2D748 >> 12) & 0xFFFFFFFFFFLL;
    if ( v2 <= qword_140E2D7A0
      && ((*(_QWORD *)(48 * v2 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0
      && (*(_DWORD *)(48 * v2 - 0x220000000000LL + 32) & 0x10FFFF) == 0x100000
      && a2 == ((*(_QWORD *)(48 * v2 - 0x220000000000LL + 40) >> 43) & 0x3FF) )
    {
      return 1;
    }
  }
  return result;
}
