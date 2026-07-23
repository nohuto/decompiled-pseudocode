/*
 * XREFs of SymCryptFdefRawNeg @ 0x1405681CC
 * Callers:
 *     SymCryptFdefIntNeg @ 0x140567ACC (SymCryptFdefIntNeg.c)
 *     SymCryptFdefIntSubMixedSize @ 0x140567B70 (SymCryptFdefIntSubMixedSize.c)
 *     SymCryptFdefModulusInitMontgomeryInternal @ 0x14056F7C0 (SymCryptFdefModulusInitMontgomeryInternal.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptFdefRawNeg(__int64 a1, unsigned int a2, _DWORD *a3, int a4)
{
  unsigned int v4; // r9d
  __int64 v5; // r10
  __int64 v6; // r11
  __int64 v7; // rcx

  v4 = 16 * a4;
  if ( v4 )
  {
    v5 = a1 - (_QWORD)a3;
    v6 = v4;
    do
    {
      v7 = -(__int64)(a2 + (unsigned __int64)*(unsigned int *)((char *)a3 + v5));
      *a3++ = v7;
      a2 = BYTE4(v7) & 1;
      --v6;
    }
    while ( v6 );
  }
  return a2;
}
