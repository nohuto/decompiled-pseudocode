/*
 * XREFs of ??0DuckingDescriptorAndId@@QEAA@PEBGM_J_NW4EndpointApplicability@@@Z @ 0x180015C20
 * Callers:
 *     ?TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z @ 0x180019318 (-TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x18000E540 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180015160 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall DuckingDescriptorAndId::DuckingDescriptorAndId(
        _QWORD *a1,
        _WORD *a2,
        float a3,
        __int64 a4,
        char a5,
        int a6)
{
  _DWORD *v8; // rax
  _DWORD *v9; // rdx
  _QWORD *result; // rax

  std::wstring::wstring(a1, a2);
  v8 = operator new(0x30uLL);
  v9 = v8;
  if ( v8 )
  {
    v8[2] = 1;
    v8[3] = 1;
    *(_QWORD *)v8 = &std::_Ref_count_obj2<DuckingDescriptor>::`vftable';
    *((_QWORD *)v8 + 2) = &DuckingDescriptor::`vftable';
    v8[10] = a6;
    *((float *)v8 + 6) = a3;
    *((_BYTE *)v8 + 28) = a5;
    *((_QWORD *)v8 + 4) = a4;
  }
  else
  {
    v9 = 0LL;
  }
  a1[4] = v9 + 4;
  result = a1;
  a1[5] = v9;
  return result;
}
