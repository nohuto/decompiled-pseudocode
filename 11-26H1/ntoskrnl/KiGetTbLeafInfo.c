/*
 * XREFs of KiGetTbLeafInfo @ 0x140CD12CC
 * Callers:
 *     KeGetTbSize @ 0x140CD1160 (KeGetTbSize.c)
 * Callees:
 *     <none>
 */

__int64 KiGetTbLeafInfo()
{
  unsigned int v0; // edi
  __int64 v1; // r11
  unsigned int v2; // r10d
  unsigned int v8; // esi
  char v14; // r9
  unsigned int v15; // edx
  int v16; // r9d
  __int64 v17; // rax

  v0 = 1;
  v1 = 0LL;
  v2 = 0;
  _RAX = 24LL;
  __asm { cpuid }
  v8 = _RAX;
  do
  {
    _RAX = 24LL;
    __asm { cpuid }
    v14 = _RDX;
    if ( (unsigned int)_RAX | (unsigned int)_RBX | (unsigned int)_RCX | (unsigned int)_RDX )
    {
      v15 = (unsigned __int8)_RDX >> 5;
      if ( v15 >= v0 && (_RBX & 1) != 0 )
      {
        v16 = v14 & 0x1F;
        if ( v16 == 1 || v16 == 3 )
        {
          v17 = 0LL;
          if ( v15 <= v0 )
            v17 = v1;
          v1 = v17 + (unsigned int)_RCX * WORD1(_RBX);
          if ( v15 <= v0 )
            v15 = v0;
          v0 = v15;
        }
      }
    }
    ++v2;
  }
  while ( v2 <= v8 );
  return v1;
}
