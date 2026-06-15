/*
 * XREFs of ?_Tidy@?$basic_stringbuf@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@IEAAXXZ @ 0x18015BB0C
 * Callers:
 *     ??1?$basic_stringbuf@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UEAA@XZ @ 0x180158E7C (--1-$basic_stringbuf@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@UEAA@XZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180044828 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::basic_stringbuf<unsigned short>::_Tidy(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  void *v4; // rax
  __int64 result; // rax

  if ( (*(_BYTE *)(a1 + 112) & 1) != 0 )
  {
    if ( std::basic_streambuf<unsigned short>::pptr() )
      v2 = std::basic_streambuf<unsigned short>::epptr(a1);
    else
      v2 = std::basic_streambuf<unsigned short>::egptr(a1);
    v3 = (v2 - std::basic_streambuf<unsigned short>::eback(a1)) >> 1;
    v4 = (void *)std::basic_streambuf<unsigned short>::eback(a1);
    std::_Deallocate<16>(v4, (struct std::nothrow_t *)(2 * v3));
  }
  std::basic_streambuf<unsigned short>::setg(a1, 0LL, 0LL);
  result = std::basic_streambuf<unsigned short>::setp(a1, 0LL, 0LL);
  *(_DWORD *)(a1 + 112) &= ~1u;
  *(_QWORD *)(a1 + 104) = 0LL;
  return result;
}
