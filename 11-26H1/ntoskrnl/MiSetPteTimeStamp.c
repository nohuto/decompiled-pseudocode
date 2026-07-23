/*
 * XREFs of MiSetPteTimeStamp @ 0x140479E5C
 * Callers:
 *     MiReleasePtes @ 0x140281250 (MiReleasePtes.c)
 *     MiDecrementAweMapCount @ 0x1404799BC (MiDecrementAweMapCount.c)
 *     MiGeneratePteDeleteLazyStamp @ 0x140528EE4 (MiGeneratePteDeleteLazyStamp.c)
 *     MiApplyLazyStampToAwePtes @ 0x1407056BC (MiApplyLazyStampToAwePtes.c)
 *     MiZeroAndFlushAweLazyPtes @ 0x140707CBC (MiZeroAndFlushAweLazyPtes.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiSetPteTimeStamp(__int64 a1, unsigned int a2)
{
  unsigned __int64 result; // rax

  if ( a1 )
  {
    if ( qword_140E2D8C0 )
    {
      if ( (a1 & 0x10) != 0 )
        a1 &= ~0x10uLL;
      else
        a1 &= qword_140E2D8C8;
    }
  }
  else
  {
    a1 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
  }
  result = a1 & 0x800000007FFFFFFFuLL | ((unsigned __int64)a2 << 31);
  if ( qword_140E2D8C0 )
  {
    if ( (qword_140E2D8C0 & result) != 0 )
      result |= 0x10uLL;
    else
      result |= qword_140E2D8C0;
  }
  return result;
}
