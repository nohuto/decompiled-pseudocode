/*
 * XREFs of MiCompensateForProcessorErrata @ 0x140D079CC
 * Callers:
 *     MiInitializeSystemDefaults @ 0x140CF9BC0 (MiInitializeSystemDefaults.c)
 * Callees:
 *     strstr @ 0x140537FA0 (strstr.c)
 */

__int64 __fastcall MiCompensateForProcessorErrata(__int64 a1)
{
  unsigned __int64 v1; // rdx
  __int64 v2; // rdx
  __int64 result; // rax

  qword_140E2D8C8 = -1LL;
  if ( (((MiFlags & 0xFFFFFFFFFE7FFFFFuLL | ((unsigned __int64)(KiKvaShadowMode & 3) << 23)) >> 23) & 3) != 0 )
  {
    switch ( ((MiFlags & 0xFFFFFFFFFE7FFFFFuLL | ((unsigned __int64)(KiKvaShadowMode & 3) << 23)) >> 23) & 3 )
    {
      case 1uLL:
        WORD2(stru_140E2DAB0.Header.WaitListHead.Blink) = 0;
        break;
      case 2uLL:
        WORD2(stru_140E2DAB0.Header.WaitListHead.Blink) = 256;
        break;
      case 3uLL:
        WORD2(stru_140E2DAB0.Header.WaitListHead.Blink) = 1;
        break;
    }
    if ( SLODWORD(gLoadedDiffHivesLock.StackBase) > 0 )
    {
      byte_140E01333 = 4;
      qword_140E2D8C0 = 1LL << (LOBYTE(gLoadedDiffHivesLock.StackBase) - 1);
      byte_140E01332 = LOBYTE(gLoadedDiffHivesLock.StackBase) - 1;
      qword_140E2D8C8 = ~qword_140E2D8C0;
    }
  }
  else
  {
    WORD2(stru_140E2DAB0.Header.WaitListHead.Blink) = 1;
  }
  v1 = MiFlags & 0xFFFFFFFFEE7FFFFFuLL | ((KiKvaShadowMode & 3) << 23) & 0xEFFFFFFF;
  MiFlags = v1 | 0x20000000;
  if ( KiAccessBitErrata == 1 )
  {
    v2 = v1 | 0x28000000;
  }
  else
  {
    if ( KiAccessBitErrata != 2 )
      goto LABEL_16;
    v2 = v1 & 0xFFFFFFFFCFFFFFFFuLL;
  }
  MiFlags = v2;
LABEL_16:
  if ( strstr(*(const char **)(a1 + 216), "NOACCESSBITREPLACEMENT") )
    MiFlags &= 0xFFFFFFFFCFFFFFFFuLL;
  result = MiFlags;
  if ( (((unsigned __int64)MiFlags >> 28) & 3) != 0 )
  {
    if ( (((unsigned __int64)MiFlags >> 28) & 3) == 1 )
    {
      byte_140E2D809 = 1;
      goto LABEL_24;
    }
    if ( (((unsigned __int64)MiFlags >> 28) & 3) == 2 )
    {
      byte_140E2D809 = -1;
      goto LABEL_24;
    }
  }
  byte_140E2D809 = 0;
LABEL_24:
  if ( (KeFeatureBits & 0x200000) != 0 )
  {
    result = MiFlags | 0x400;
  }
  else
  {
    if ( (KeFeatureBits & 0x1000000) == 0 )
      goto LABEL_29;
    result = MiFlags | 0x800;
  }
  MiFlags = result;
LABEL_29:
  if ( (KeFeatureBits & 0x400000000000LL) != 0 )
  {
    result |= 0x4000000uLL;
    MiFlags = result;
  }
  return result;
}
