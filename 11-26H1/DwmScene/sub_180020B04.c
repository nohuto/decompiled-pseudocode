/*
 * XREFs of sub_180020B04 @ 0x180020B04
 * Callers:
 *     sub_18002085C @ 0x18002085C (sub_18002085C.c)
 * Callees:
 *     sub_18000E26C @ 0x18000E26C (sub_18000E26C.c)
 */

__int64 __fastcall sub_180020B04(__int64 a1)
{
  __int64 v2; // rax
  unsigned __int64 v3; // rdi
  void *v4; // rax
  __int64 result; // rax

  if ( (*(_BYTE *)(a1 + 112) & 1) != 0 )
  {
    if ( std::streambuf::pptr(a1) )
      v2 = std::streambuf::epptr(a1);
    else
      v2 = std::streambuf::egptr(a1);
    v3 = v2 - std::streambuf::eback(a1);
    v4 = (void *)std::streambuf::eback(a1);
    sub_18000E26C(v4, v3);
  }
  std::streambuf::setg(a1, 0LL, 0LL, 0LL);
  result = std::streambuf::setp(a1, 0LL, 0LL);
  *(_DWORD *)(a1 + 112) &= ~1u;
  *(_QWORD *)(a1 + 104) = 0LL;
  return result;
}
