/*
 * XREFs of SymCryptFdefRawMaskedAddSubdigit @ 0x140568070
 * Callers:
 *     SymCryptFdefRawDivMod @ 0x140567DD0 (SymCryptFdefRawDivMod.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptFdefRawMaskedAddSubdigit(_DWORD *a1, __int64 a2, unsigned int a3, __int64 a4)
{
  unsigned __int64 v4; // r10
  _DWORD *v5; // r11
  unsigned __int64 v6; // r10

  v4 = 0LL;
  v5 = a1;
  if ( (_DWORD)a4 )
  {
    a4 = (unsigned int)a4;
    do
    {
      v6 = (unsigned int)*v5 + (a3 & *(_DWORD *)((char *)v5 + a2 - (_QWORD)a1)) + v4;
      *v5++ = v6;
      v4 = HIDWORD(v6);
      --a4;
    }
    while ( a4 );
  }
  return (unsigned int)v4;
}
