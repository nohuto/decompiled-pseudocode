/*
 * XREFs of SymCryptMlDsaVectorHighBits @ 0x14057365C
 * Callers:
 *     SymCryptMlDsaSignEx @ 0x14055FD94 (SymCryptMlDsaSignEx.c)
 *     SymCryptMlDsaMakeHint @ 0x140571DEC (SymCryptMlDsaMakeHint.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptMlDsaVectorHighBits(__int64 a1, _BYTE *a2, __int64 a3)
{
  unsigned int v3; // r9d
  _BYTE *v6; // r11
  __int64 v7; // rbx
  _DWORD *v8; // r8
  unsigned int v9; // edx
  __int64 result; // rax

  v3 = 0;
  if ( *a2 )
  {
    v6 = &a2[-a3];
    do
    {
      v7 = 256LL;
      v8 = (_DWORD *)(a3 + ((unsigned __int64)v3 << 10) + 8);
      do
      {
        if ( v8 )
        {
          v9 = (*(_DWORD *)(a1 + 28) * ((unsigned int)(*(_DWORD *)((char *)v8 + (_QWORD)v6) + 127) >> 7) + 0x800000) >> 24;
          *v8 = v9 & ((v9 - (unsigned __int64)*(unsigned __int8 *)(a1 + 27)) >> 32);
        }
        ++v8;
        --v7;
      }
      while ( v7 );
      result = (unsigned __int8)*a2;
      ++v3;
    }
    while ( v3 < (unsigned int)result );
  }
  return result;
}
