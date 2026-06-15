/*
 * XREFs of ??1DuckingDescriptorAndId@@QEAA@XZ @ 0x1800433D0
 * Callers:
 *     ??1?$unique_ptr@UDuckingDescriptorAndId@@U?$default_delete@UDuckingDescriptorAndId@@@std@@@std@@QEAA@XZ @ 0x18002E8DC (--1-$unique_ptr@UDuckingDescriptorAndId@@U-$default_delete@UDuckingDescriptorAndId@@@std@@@std@@.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180018F10 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall DuckingDescriptorAndId::~DuckingDescriptorAndId(DuckingDescriptorAndId *this)
{
  std::_Ref_count_base *v2; // rcx

  v2 = (std::_Ref_count_base *)*((_QWORD *)this + 5);
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
  std::wstring::~wstring((__int64)this);
}
