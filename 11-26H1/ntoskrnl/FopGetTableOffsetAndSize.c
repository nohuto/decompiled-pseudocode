/*
 * XREFs of FopGetTableOffsetAndSize @ 0x140D19DB8
 * Callers:
 *     FopInitializeFonts @ 0x140D19EB8 (FopInitializeFonts.c)
 *     FopValidateFontNameTable @ 0x140D1A52C (FopValidateFontNameTable.c)
 *     BgpRasInitializeRasterizer @ 0x140D1B048 (BgpRasInitializeRasterizer.c)
 * Callees:
 *     FioFwReadBytesAtOffset @ 0x140356ED0 (FioFwReadBytesAtOffset.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall FopGetTableOffsetAndSize(
        __int64 a1,
        unsigned int a2,
        int a3,
        unsigned __int32 *a4,
        unsigned __int32 *a5)
{
  __int64 result; // rax
  unsigned int v10; // ebx
  unsigned int v11; // edi
  unsigned int v12; // esi
  unsigned __int32 v13; // edx
  unsigned __int32 v14; // r8d
  __int128 v15; // [rsp+20h] [rbp-30h] BYREF
  __int64 v16; // [rsp+30h] [rbp-20h] BYREF
  int v17; // [rsp+38h] [rbp-18h]

  v16 = 0LL;
  v17 = 0;
  v15 = 0LL;
  result = FioFwReadBytesAtOffset(a1, a2, 0xCu, &v16);
  if ( (int)result >= 0 )
  {
    if ( _byteswap_ulong(v16) == 0x10000 )
    {
      v10 = 0;
      v11 = a2 + 12;
      v12 = (unsigned __int16)__ROR2__(WORD2(v16), 8);
      while ( v10 < v12 )
      {
        result = FioFwReadBytesAtOffset(a1, v11, 0x10u, &v15);
        if ( (int)result < 0 )
          return result;
        result = 0LL;
        *(_QWORD *)&v15 = _byteswap_uint64(__PAIR64__(v15, DWORD1(v15)));
        v13 = _byteswap_ulong(DWORD2(v15));
        DWORD2(v15) = v13;
        v14 = _byteswap_ulong(HIDWORD(v15));
        HIDWORD(v15) = v14;
        if ( (_DWORD)v15 == a3 )
        {
          *a4 = v13;
          *a5 = v14;
          return result;
        }
        ++v10;
        v11 += 16;
      }
      return 3221226021LL;
    }
    else
    {
      return 3221225659LL;
    }
  }
  return result;
}
