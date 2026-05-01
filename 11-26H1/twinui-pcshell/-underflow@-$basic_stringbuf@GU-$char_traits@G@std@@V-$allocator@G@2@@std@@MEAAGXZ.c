/*
 * XREFs of ?underflow@?$basic_stringbuf@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@MEAAGXZ @ 0x1801ADFD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::basic_stringbuf<unsigned short>::underflow(__int64 a1)
{
  unsigned __int16 *v2; // rbx
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rsi
  __int64 v6; // rbx
  __int64 v7; // rax

  v2 = (unsigned __int16 *)((__int64 (*)(void))std::basic_streambuf<unsigned short>::gptr)();
  if ( !v2 )
    return 0xFFFFLL;
  if ( (unsigned __int64)v2 < std::basic_streambuf<unsigned short>::egptr(a1) )
    return *v2;
  v3 = std::basic_streambuf<unsigned short>::pptr(a1);
  if ( !v3 || (*(_BYTE *)(a1 + 112) & 4) != 0 )
    return 0xFFFFLL;
  v4 = *(_QWORD *)(a1 + 104);
  if ( v4 < v3 )
    v4 = v3;
  if ( v4 <= (unsigned __int64)v2 )
    return 0xFFFFLL;
  *(_QWORD *)(a1 + 104) = v4;
  v6 = std::basic_streambuf<unsigned short>::gptr(a1);
  v7 = std::basic_streambuf<unsigned short>::eback(a1);
  std::basic_streambuf<unsigned short>::setg(a1, v7, v6);
  return *(unsigned __int16 *)std::basic_streambuf<unsigned short>::gptr(a1);
}
