/*
 * XREFs of I_MinCryptVerifyHashSignerAuthenticatedAttributes @ 0x1408A8B38
 * Callers:
 *     I_MinCryptVerifyReturnSignerAuthenticatedAttributes @ 0x1408A8D68 (I_MinCryptVerifyReturnSignerAuthenticatedAttributes.c)
 *     I_MinCryptVerifySignerAuthenticatedAttributes @ 0x1408A8DE8 (I_MinCryptVerifySignerAuthenticatedAttributes.c)
 * Callees:
 *     memcmp @ 0x140742350 (memcmp.c)
 *     I_MinAsn1ParseSingleAttribute @ 0x1408A949C (I_MinAsn1ParseSingleAttribute.c)
 *     MinAsn1ExtractContent @ 0x1408AAADC (MinAsn1ExtractContent.c)
 */

__int64 __fastcall I_MinCryptVerifyHashSignerAuthenticatedAttributes(void *Buf1, int a2, __int64 a3)
{
  unsigned int v5; // ebx
  void *Buf2; // [rsp+38h] [rbp-20h] BYREF
  __int128 v8; // [rsp+40h] [rbp-18h] BYREF
  size_t Size; // [rsp+78h] [rbp+20h] BYREF

  v5 = 0;
  v8 = 0LL;
  Buf2 = 0LL;
  LODWORD(Size) = 0;
  if ( !(unsigned __int8)I_MinAsn1ParseSingleAttribute(&qword_140BE08F8, a3, a3, &v8)
    || (int)MinAsn1ExtractContent(*((_QWORD *)&v8 + 1), (unsigned int)v8, &Size, &Buf2) < 0
    || a2 != (_DWORD)Size
    || memcmp(Buf1, Buf2, (unsigned int)Size) )
  {
    return (unsigned int)-1073740760;
  }
  return v5;
}
