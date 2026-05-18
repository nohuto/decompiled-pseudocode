/*
 * XREFs of sub_180037F40 @ 0x180037F40
 * Callers:
 *     sub_180031648 @ 0x180031648 (sub_180031648.c)
 * Callees:
 *     sub_18000E26C @ 0x18000E26C (sub_18000E26C.c)
 */

__int64 __fastcall sub_180037F40(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  void *v4; // rax
  __int64 result; // rax

  if ( (*(_BYTE *)(a1 + 112) & 1) != 0 )
  {
    if ( std::wstreambuf::pptr(a1) )
      v2 = std::wstreambuf::epptr(a1);
    else
      v2 = std::wstreambuf::egptr(a1);
    v3 = (v2 - std::wstreambuf::eback(a1)) >> 1;
    v4 = (void *)std::wstreambuf::eback(a1);
    sub_18000E26C(v4, 2 * v3);
  }
  std::wstreambuf::setg(a1, 0LL, 0LL, 0LL);
  result = std::wstreambuf::setp(a1, 0LL, 0LL);
  *(_DWORD *)(a1 + 112) &= ~1u;
  *(_QWORD *)(a1 + 104) = 0LL;
  return result;
}
