/*
 * XREFs of ??0CAtlBaseModule@ATL@@QEAA@XZ @ 0x18002E6A4
 * Callers:
 *     ATL::_dynamic_initializer_for___AtlBaseModule__ @ 0x180001CB0 (ATL--_dynamic_initializer_for___AtlBaseModule__.c)
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x18002E730 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 */

void *__fastcall ATL::CAtlBaseModule::CAtlBaseModule(ATL::CAtlBaseModule *this)
{
  ATL::_AtlBaseModule = 96;
  qword_180068AD8 = 0LL;
  qword_180068AE0 = 0LL;
  qword_180068AE8 = 0LL;
  qword_180068AA0 = (__int64)&_ImageBase;
  qword_180068A98 = (__int64)&_ImageBase;
  qword_180068AB0 = (__int64)&GUID_ATLVer70;
  xmmword_180068AB8 = 0LL;
  byte_180068AA8 = 1;
  xmmword_180068AC8 = 0LL;
  dword_180068AAC = 2048;
  ATL::CComCriticalSection::Init((ATL::CComCriticalSection *)&xmmword_180068AB8);
  return &ATL::_AtlBaseModule;
}
