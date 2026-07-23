/*
 * XREFs of MiGetSinglePageToZero @ 0x1403CE6F0
 * Callers:
 *     MiBackgroundZeroNodePages @ 0x140491210 (MiBackgroundZeroNodePages.c)
 *     MiGetBackgroundHugePageToZero @ 0x1404BBDD8 (MiGetBackgroundHugePageToZero.c)
 * Callees:
 *     MiAssignDefaultChannel @ 0x140283900 (MiAssignDefaultChannel.c)
 *     MiGetBestPageToZero @ 0x1403CE888 (MiGetBestPageToZero.c)
 */

__int64 __fastcall MiGetSinglePageToZero(__int64 a1, __int64 a2, volatile signed __int32 *a3, int a4)
{
  __int64 v7; // rdx
  __int64 v8; // r10
  unsigned __int8 v9; // al
  __int64 v10; // r11
  char v11; // r10
  int v12; // ebp
  unsigned int v13; // edi
  int i; // r14d
  unsigned int v15; // ebx
  unsigned __int8 j; // si
  unsigned int v17; // r9d
  unsigned __int8 v18; // al
  __int64 result; // rax

  v7 = (unsigned __int128)((a2 - *(_QWORD *)(*(_QWORD *)(a2 + 13896) + 16LL)) * (__int128)0x4A7904A7904A7905LL) >> 64;
  v8 = ((unsigned __int64)v7 >> 63) + (v7 >> 14);
  if ( (_DWORD)v8 == -1 )
    LODWORD(v8) = *(_DWORD *)(KiProcessorBlock[KeGetCurrentThread()->IdealProcessor] + 34644);
  v9 = MiAssignDefaultChannel(v8);
  v12 = 1;
  v13 = ((2 * (v11 & 0x3F | ((a4 & 3 | 4) << 7))) | v9 & 1) << 8;
  while ( 1 )
  {
    while ( 1 )
    {
      v13 = (v12 << 18) | v13 & 0xFFF3FFFF;
      for ( i = 0; i <= 1; ++i )
      {
        v13 ^= ((unsigned __int16)v13 ^ (unsigned __int16)((_WORD)i << 15)) & 0x8000;
        v15 = v13 ^ (unsigned __int8)(v13 ^ _InterlockedExchangeAdd(a3, 1u));
        for ( j = 0; ; ++j )
        {
          v17 = v15;
          if ( j >= (unsigned __int8)byte_140E2D898 )
            break;
          v18 = j;
          if ( j == 2 )
            v18 = MiAssignDefaultChannel((v15 >> 9) & 0x3F);
          v15 = v17 ^ ((unsigned __int16)v17 ^ (unsigned __int16)(v18 << 8)) & 0x100;
          result = MiGetBestPageToZero(v10, a2, v15);
          if ( result )
            return result;
          v10 = a1;
        }
        if ( a4 == 3 )
          break;
      }
      if ( v12 != 1 )
        break;
      v12 = 2;
    }
    if ( v12 != 2 )
      break;
    v12 = 0;
  }
  return 0LL;
}
