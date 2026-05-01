/*
 * XREFs of ?xsgetn@?$basic_filebuf@DU?$char_traits@D@std@@@std@@MEAA_JPEAD_J@Z @ 0x180618140
 * Callers:
 *     <none>
 * Callees:
 *     ?_Reset_back@?$basic_filebuf@DU?$char_traits@D@std@@@std@@AEAAXXZ @ 0x1802C2E5C (-_Reset_back@-$basic_filebuf@DU-$char_traits@D@std@@@std@@AEAAXXZ.c)
 *     memcpy_0 @ 0x1802CE20A (memcpy_0.c)
 */

__int64 __fastcall std::filebuf::xsgetn(__int64 a1, char *a2, __int64 a3)
{
  size_t v7; // rsi
  unsigned __int64 v8; // rax
  size_t v9; // rbx
  const void *v10; // rax
  size_t v11; // rax

  if ( a3 <= 0 )
    return 0LL;
  if ( *(_QWORD *)(a1 + 104) )
    return std::streambuf::xsgetn();
  v7 = a3;
  v8 = std::streambuf::_Gnavail();
  if ( v8 )
  {
    v9 = a3;
    if ( v8 < a3 )
      v9 = v8;
    v10 = (const void *)std::streambuf::gptr(a1);
    memcpy_0(a2, v10, v9);
    a2 += v9;
    v7 = a3 - v9;
    std::streambuf::gbump(a1, (unsigned int)v9);
  }
  if ( *(_QWORD *)(a1 + 128) )
  {
    std::filebuf::_Reset_back(a1);
    while ( v7 > 0xFFF )
    {
      v11 = fread(a2, 1uLL, 0xFFFuLL, *(FILE **)(a1 + 128));
      a2 += v11;
      v7 -= v11;
      if ( v11 != 4095 )
        return a3 - v7;
    }
    if ( v7 )
      v7 -= fread(a2, 1uLL, v7, *(FILE **)(a1 + 128));
  }
  return a3 - v7;
}
