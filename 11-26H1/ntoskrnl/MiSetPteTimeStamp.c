/*
 * XREFs of MiSetPteTimeStamp @ 0x14048051C
 * Callers:
 *     MiReleasePtes @ 0x140281CE0 (MiReleasePtes.c)
 *     MiDecrementAweMapCount @ 0x14048007C (MiDecrementAweMapCount.c)
 *     MiGeneratePteDeleteLazyStamp @ 0x140526874 (MiGeneratePteDeleteLazyStamp.c)
 *     MiApplyLazyStampToAwePtes @ 0x1407009EC (MiApplyLazyStampToAwePtes.c)
 *     MiZeroAndFlushAweLazyPtes @ 0x140702FEC (MiZeroAndFlushAweLazyPtes.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiSetPteTimeStamp(__int64 a1, unsigned int a2)
{
  unsigned __int64 result; // rax

  if ( a1 )
  {
    if ( qword_140E2D740 )
    {
      if ( (a1 & 0x10) != 0 )
        a1 &= ~0x10uLL;
      else
        a1 &= qword_140E2D748;
    }
  }
  else
  {
    a1 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
  }
  result = a1 & 0x800000007FFFFFFFuLL | ((unsigned __int64)a2 << 31);
  if ( qword_140E2D740 )
  {
    if ( (qword_140E2D740 & result) != 0 )
      result |= 0x10uLL;
    else
      result |= qword_140E2D740;
  }
  return result;
}
