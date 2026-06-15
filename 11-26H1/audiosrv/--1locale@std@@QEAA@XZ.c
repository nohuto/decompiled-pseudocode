/*
 * XREFs of ??1locale@std@@QEAA@XZ @ 0x18014A8D4
 * Callers:
 *     ??1?$basic_regex@GV?$regex_traits@G@std@@@std@@QEAA@XZ @ 0x18014A5F8 (--1-$basic_regex@GV-$regex_traits@G@std@@@std@@QEAA@XZ.c)
 *     ??1?$regex_traits@G@std@@QEAA@XZ @ 0x18014A704 (--1-$regex_traits@G@std@@QEAA@XZ.c)
 *     _std::regex_traits_unsigned_short_::regex_traits_unsigned_short__::_1_::dtor$1 @ 0x18016BCD6 (_std--regex_traits_unsigned_short_--regex_traits_unsigned_short__--_1_--dtor$1.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall std::locale::~locale(std::locale *this)
{
  __int64 v1; // rcx
  void (__fastcall ***v2)(_QWORD, __int64); // rax

  v1 = *((_QWORD *)this + 1);
  if ( v1 )
  {
    v2 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
    if ( v2 )
      (**v2)(v2, 1LL);
  }
}
