/*
 * XREFs of PipAreDriversLoadedWorker @ 0x140491558
 * Callers:
 *     PipSetDevNodeState @ 0x1404D2858 (PipSetDevNodeState.c)
 *     PipRestoreDevNodeState @ 0x1404D29C4 (PipRestoreDevNodeState.c)
 *     PipAreDriversLoaded @ 0x14051BDC0 (PipAreDriversLoaded.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PipAreDriversLoadedWorker(int a1, int a2)
{
  __int64 result; // rax

  while ( 2 )
  {
    if ( (unsigned int)(a1 - 768) > 0x16 )
      return 0LL;
    switch ( a1 )
    {
      case 768:
      case 769:
      case 770:
      case 771:
      case 772:
      case 788:
      case 790:
        return 0LL;
      case 773:
      case 774:
      case 775:
      case 776:
      case 777:
      case 778:
      case 779:
      case 780:
      case 781:
      case 782:
      case 783:
      case 785:
      case 786:
      case 787:
      case 789:
        result = 1LL;
        break;
      case 784:
        a1 = a2;
        a2 = 768;
        continue;
    }
    break;
  }
  return result;
}
