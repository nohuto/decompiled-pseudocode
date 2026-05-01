/*
 * XREFs of ??0filesystem_error@filesystem@std@@QEAA@AEBV012@@Z @ 0x180310334
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x180030E44 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ??0exception@std@@QEAA@AEBV01@@Z @ 0x1802D4AF8 (--0exception@std@@QEAA@AEBV01@@Z.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@AEBV01@@Z @ 0x1803100EC (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@AEBV01@@Z.c)
 */

// Hidden C++ exception states: #wind=3
std::filesystem::filesystem_error *__fastcall std::filesystem::filesystem_error::filesystem_error(
        std::filesystem::filesystem_error *this,
        const struct std::filesystem::filesystem_error *a2)
{
  std::exception::exception(this, a2);
  *(_QWORD *)this = &std::_System_error::`vftable';
  *(_OWORD *)((char *)this + 24) = *(_OWORD *)((char *)a2 + 24);
  *(_QWORD *)this = &std::filesystem::filesystem_error::`vftable';
  std::wstring::wstring((__int64)this + 40, (_QWORD *)a2 + 5);
  std::wstring::wstring((__int64)this + 72, (_QWORD *)a2 + 9);
  std::string::string((_QWORD *)this + 13, (__int64 **)a2 + 13);
  return this;
}
