/*
 * XREFs of ??1CComposeTop@@QEAA@XZ @ 0x180245E04
 * Callers:
 *     ??R?$default_delete@VCComposeTop@@@std@@QEBAXPEAVCComposeTop@@@Z @ 0x180246460 (--R-$default_delete@VCComposeTop@@@std@@QEBAXPEAVCComposeTop@@@Z.c)
 * Callees:
 *     ??1?$unique_ptr@VCShape@@U?$default_delete@VCShape@@@std@@@std@@QEAA@XZ @ 0x18000A670 (--1-$unique_ptr@VCShape@@U-$default_delete@VCShape@@@std@@@std@@QEAA@XZ.c)
 */

void __fastcall CComposeTop::~CComposeTop(CComposeTop *this)
{
  std::unique_ptr<CShape>::~unique_ptr<CShape>((__int64 (__fastcall ****)(_QWORD, __int64))this + 20);
  std::unique_ptr<CShape>::~unique_ptr<CShape>((__int64 (__fastcall ****)(_QWORD, __int64))this + 2);
  wil::com_ptr_t<IBitmapResource,wil::err_returncode_policy>::~com_ptr_t<IBitmapResource,wil::err_returncode_policy>((__int64 *)this + 1);
}
