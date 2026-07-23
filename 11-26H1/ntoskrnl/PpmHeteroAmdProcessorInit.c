/*
 * XREFs of PpmHeteroAmdProcessorInit @ 0x140C040E8
 * Callers:
 *     PpmHeteroHgsProcessorInit @ 0x14060E1CC (PpmHeteroHgsProcessorInit.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PpmHeteroAmdProcessorInit(__int64 a1)
{
  int v2; // r11d
  char v3; // r9
  __int64 result; // rax
  int v9; // r10d
  unsigned int v10; // ebx

  if ( *(_BYTE *)(a1 + 141) == 1 )
  {
    v2 = 0;
    v3 = 0;
    _RAX = 2147483686LL;
    __asm { cpuid }
    v9 = result;
    do
    {
      if ( !(_WORD)_RBX )
        break;
      if ( BYTE1(_RCX) == 1 )
      {
        if ( (v9 & 0x40000000) != 0 )
        {
          v10 = (unsigned int)_RBX >> 28;
          if ( v10 >= 3 )
            *(_BYTE *)(a1 + 35352) = 0;
          else
            *(_BYTE *)(a1 + 35352) = 2 - v10;
        }
        v3 = 1;
      }
      ++v2;
      _RAX = 2147483686LL;
      __asm { cpuid }
      v9 = result;
    }
    while ( !v3 );
  }
  return result;
}
