/*
 * XREFs of MiIsPageAGapPage @ 0x14033BB90
 * Callers:
 *     MiComputePxeWalkAction @ 0x14032A400 (MiComputePxeWalkAction.c)
 *     MiCreateSystemPageTable @ 0x14033B880 (MiCreateSystemPageTable.c)
 *     MiInitializeSystemPageTable @ 0x14033CC0C (MiInitializeSystemPageTable.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiIsPageAGapPage(PVOID a1, int a2)
{
  unsigned int v2; // r8d
  int v3; // eax
  __int64 v4; // r9
  int v5; // eax
  __int64 v6; // r10
  __int64 i; // rax

  v2 = 0;
  v3 = 3;
  if ( a2 <= 3 )
    v3 = a2;
  v4 = v3;
  v5 = 0;
  if ( a2 <= 3 )
    v5 = a2;
  v6 = v5;
LABEL_6:
  if ( v2 >= 2 )
    return 0LL;
  for ( i = v6; ; ++i )
  {
    if ( i > v4 )
    {
      ++v2;
      goto LABEL_6;
    }
    if ( a1 == *(&qword_140E36180[7 * v2] + i) )
      break;
  }
  return 1LL;
}
