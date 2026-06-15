/*
 * XREFs of ??1?$unique_ptr@UDuckingDescriptorAndId@@U?$default_delete@UDuckingDescriptorAndId@@@std@@@std@@QEAA@XZ @ 0x18002E8DC
 * Callers:
 *     ??1TSSession@@QEAA@XZ @ 0x1800433FC (--1TSSession@@QEAA@XZ.c)
 *     _TsSessionCreate_::_1_::dtor$3 @ 0x18004CC64 (_TsSessionCreate_--_1_--dtor$3.c)
 *     _TsSessionCreate_::_1_::dtor$4 @ 0x18004CC76 (_TsSessionCreate_--_1_--dtor$4.c)
 *     _TsSessionCreate_::_1_::dtor$5 @ 0x18004CC88 (_TsSessionCreate_--_1_--dtor$5.c)
 *     _TsSessionCreate_::_1_::dtor$6 @ 0x18004CC9A (_TsSessionCreate_--_1_--dtor$6.c)
 *     _TsSessionCreate_::_1_::dtor$7 @ 0x18004CCAC (_TsSessionCreate_--_1_--dtor$7.c)
 *     _TsSessionCreate_::_1_::dtor$8 @ 0x18004CCBE (_TsSessionCreate_--_1_--dtor$8.c)
 *     _TsSessionCreate_::_1_::dtor$9 @ 0x18004CCD0 (_TsSessionCreate_--_1_--dtor$9.c)
 *     _TsSessionCreate_::_1_::dtor$10 @ 0x18004CCE2 (_TsSessionCreate_--_1_--dtor$10.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002FCE4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1DuckingDescriptorAndId@@QEAA@XZ @ 0x1800433D0 (--1DuckingDescriptorAndId@@QEAA@XZ.c)
 */

void __fastcall std::unique_ptr<DuckingDescriptorAndId>::~unique_ptr<DuckingDescriptorAndId>(
        DuckingDescriptorAndId **a1)
{
  DuckingDescriptorAndId *v1; // rbx

  v1 = *a1;
  if ( *a1 )
  {
    DuckingDescriptorAndId::~DuckingDescriptorAndId(*a1);
    operator delete(v1, (const struct std::nothrow_t *)0x30);
  }
}
