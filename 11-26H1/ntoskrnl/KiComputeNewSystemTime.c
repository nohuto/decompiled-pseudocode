/*
 * XREFs of KiComputeNewSystemTime @ 0x14046AB90
 * Callers:
 *     KiUpdateTime @ 0x14021D690 (KiUpdateTime.c)
 *     KiUpdateTimeAssist @ 0x14021E0C8 (KiUpdateTimeAssist.c)
 *     KiUpdateSystemTime @ 0x14046AA24 (KiUpdateSystemTime.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiComputeNewSystemTime(unsigned __int64 a1)
{
  unsigned __int64 v1; // rdx
  unsigned __int128 v2; // rax

  if ( a1 <= MEMORY[0xFFFFF78000000348] )
    return MEMORY[0xFFFFF78000000014];
  v1 = a1 - MEMORY[0xFFFFF78000000348];
  if ( MEMORY[0xFFFFF78000000368] )
    v1 <<= MEMORY[0xFFFFF78000000368];
  v2 = v1 * (unsigned __int128)MEMORY[0xFFFFF78000000358];
  KiSystemTimeErrorAccumulator += v2;
  if ( KiSystemTimeErrorAccumulator < (unsigned __int64)v2 )
    ++*((_QWORD *)&v2 + 1);
  return *((_QWORD *)&v2 + 1) + MEMORY[0xFFFFF78000000014];
}
