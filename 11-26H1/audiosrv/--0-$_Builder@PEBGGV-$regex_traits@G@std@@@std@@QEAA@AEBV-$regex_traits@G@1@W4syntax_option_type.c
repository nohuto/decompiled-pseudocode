/*
 * XREFs of ??0?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@QEAA@AEBV?$regex_traits@G@1@W4syntax_option_type@regex_constants@1@@Z @ 0x18014A264
 * Callers:
 *     ??0?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@QEAA@AEBV?$regex_traits@G@1@PEBG1W4syntax_option_type@regex_constants@1@@Z @ 0x18014A300 (--0-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@QEAA@AEBV-$regex_traits@G@1@PEBG1W4syntax_option_.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18001E210 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>(
        __int64 a1,
        __int64 a2,
        int a3)
{
  _QWORD *v6; // rax

  v6 = operator new(0x30uLL);
  if ( v6 )
  {
    v6[1] = 20LL;
    *v6 = &std::_Root_node::`vftable';
    v6[2] = 0LL;
    v6[3] = 0LL;
    v6[4] = 0LL;
    v6[5] = 0LL;
  }
  else
  {
    v6 = 0LL;
  }
  *(_QWORD *)a1 = v6;
  *(_QWORD *)(a1 + 8) = v6;
  *(_DWORD *)(a1 + 16) = a3;
  *(_QWORD *)(a1 + 24) = a2;
  *(_DWORD *)(a1 + 32) = (a3 & 0x800) == 0 ? 0x100 : 0;
  *(_DWORD *)(a1 + 36) = (a3 & 0x800) == 0 ? 4 : 0;
  return a1;
}
