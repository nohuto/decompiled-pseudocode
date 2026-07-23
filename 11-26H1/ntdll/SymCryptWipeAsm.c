/*
 * XREFs of SymCryptWipeAsm @ 0x180137700
 * Callers:
 *     SymCryptMd5Result @ 0x180022A30 (SymCryptMd5Result.c)
 *     MD5Final_0 @ 0x180022A90 (MD5Final_0.c)
 *     SymCryptHashCommonPaddingMd4Style @ 0x180022BAC (SymCryptHashCommonPaddingMd4Style.c)
 *     MD5Update_0 @ 0x180022D20 (MD5Update_0.c)
 *     SymCryptSha1Result @ 0x180024140 (SymCryptSha1Result.c)
 *     SymCryptSha256Result @ 0x1800FD764 (SymCryptSha256Result.c)
 *     MD5Init_0 @ 0x18010F948 (MD5Init_0.c)
 *     RtlpA_SHAInit @ 0x18013B1B0 (RtlpA_SHAInit.c)
 *     MD4Init @ 0x180158800 (MD4Init.c)
 *     ScRsa32Compat_Md4ExportAndWipe @ 0x180158920 (ScRsa32Compat_Md4ExportAndWipe.c)
 *     ScRsa32Compat_Sha1ExportAndWipe @ 0x1801589D8 (ScRsa32Compat_Sha1ExportAndWipe.c)
 *     SymCryptMd4Result @ 0x18015E8D0 (SymCryptMd4Result.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptWipeAsm(__int64 a1, unsigned __int64 a2)
{
  bool v2; // cf
  unsigned __int64 i; // rdx
  unsigned int v4; // edx
  __int64 result; // rax

  if ( a2 < 0x10 )
  {
    result = 0LL;
    if ( (unsigned int)a2 < 8 )
    {
      if ( (unsigned int)a2 < 4 )
      {
        if ( (unsigned int)a2 < 2 )
        {
          if ( (_DWORD)a2 )
            *(_BYTE *)a1 = 0;
        }
        else
        {
          *(_WORD *)a1 = 0;
          *(_WORD *)(a1 + a2 - 2) = 0;
        }
      }
      else
      {
        *(_DWORD *)a1 = 0;
        *(_DWORD *)(a1 + a2 - 4) = 0;
      }
    }
    else
    {
      *(_QWORD *)a1 = 0LL;
      *(_QWORD *)(a1 + a2 - 8) = 0LL;
    }
  }
  else if ( (a1 & 0xF) != 0
         && (*(_QWORD *)a1 = 0LL,
             *(_QWORD *)(a1 + 8) = 0LL,
             result = -(int)a1 & 0xF,
             a1 += result,
             a2 -= result,
             a2 < 0x10) )
  {
    result = 0LL;
    *(_QWORD *)(a1 + a2 - 16) = 0LL;
    *(_QWORD *)(a1 + a2 - 8) = 0LL;
  }
  else
  {
    *(_OWORD *)a1 = 0LL;
    if ( (a2 & 0x10) != 0 )
      a1 += 16LL;
    v2 = a2 < 0x20;
    for ( i = a2 - 32; !v2; i -= 32LL )
    {
      *(_OWORD *)a1 = 0LL;
      *(_OWORD *)(a1 + 16) = 0LL;
      a1 += 32LL;
      v2 = i < 0x20;
    }
    v4 = i & 0xF;
    if ( v4 )
    {
      result = 0LL;
      *(_QWORD *)(a1 + v4 - 16) = 0LL;
      *(_QWORD *)(a1 + v4 - 8) = 0LL;
    }
  }
  return result;
}
