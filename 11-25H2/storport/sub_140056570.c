/*
 * XREFs of sub_140056570 @ 0x140056570
 * Callers:
 *     sub_14013CB40 @ 0x14013CB40 (sub_14013CB40.c)
 * Callees:
 *     <none>
 */

__int64 sub_140056570()
{
  int v5; // r9d
  char v7; // r8
  char v17; // dl

  _RAX = 0LL;
  __asm { cpuid }
  v5 = _RAX;
  _RAX = 1LL;
  v7 = 0;
  __asm { cpuid }
  if ( (_RCX & 0x100000) != 0 )
  {
    v7 = 8;
    if ( (_RCX & 0x8000000) != 0 && (_RCX & 0x10000000) != 0 )
    {
      __asm { xgetbv }
      v7 = 8;
      if ( (_RAX & 6) == 6 )
        v7 = 12;
    }
  }
  _RAX = 7LL;
  if ( v5 >= 7 )
  {
    __asm { cpuid }
    v17 = v7 | 2;
    if ( (_RBX & 0x200) == 0 )
      v17 = v7;
    v7 = v17;
    if ( (_RBX & 0x20) != 0 && (v17 & 4) != 0 )
      v7 = v17 | 0x10;
  }
  byte_1401683C0 = v7 | 1;
  return 0LL;
}
