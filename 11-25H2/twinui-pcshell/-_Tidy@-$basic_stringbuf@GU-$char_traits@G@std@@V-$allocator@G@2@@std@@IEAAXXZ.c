/*
 * XREFs of ?_Tidy@?$basic_stringbuf@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@IEAAXXZ @ 0x1800652B4
 * Callers:
 *     ??1?$basic_stringbuf@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UEAA@XZ @ 0x180065280 (--1-$basic_stringbuf@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@UEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1802E0490 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 */

__int64 __fastcall std::basic_stringbuf<unsigned short>::_Tidy(__int64 a1)
{
  __int64 v2; // rax
  const struct std::nothrow_t *v3; // rdi
  void *v4; // rax
  __int64 result; // rax
  unsigned __int64 v6; // [rsp+30h] [rbp+8h] BYREF
  void *v7; // [rsp+38h] [rbp+10h] BYREF

  if ( (*(_BYTE *)(a1 + 112) & 1) != 0 )
  {
    if ( std::basic_streambuf<unsigned short>::pptr() )
      v2 = std::basic_streambuf<unsigned short>::epptr(a1);
    else
      v2 = std::basic_streambuf<unsigned short>::egptr(a1);
    v3 = (const struct std::nothrow_t *)(2 * ((v2 - std::basic_streambuf<unsigned short>::eback(a1)) >> 1));
    v6 = (unsigned __int64)v3;
    v4 = (void *)std::basic_streambuf<unsigned short>::eback(a1);
    v7 = v4;
    if ( (unsigned __int64)v3 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v7, &v6);
      v4 = v7;
      v3 = (const struct std::nothrow_t *)v6;
    }
    operator delete(v4, v3);
  }
  std::basic_streambuf<unsigned short>::setg(a1, 0LL, 0LL);
  result = std::basic_streambuf<unsigned short>::setp(a1, 0LL, 0LL);
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_DWORD *)(a1 + 112) &= ~1u;
  return result;
}
