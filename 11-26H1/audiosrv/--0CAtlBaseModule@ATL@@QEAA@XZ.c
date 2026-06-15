/*
 * XREFs of ??0CAtlBaseModule@ATL@@QEAA@XZ @ 0x180084168
 * Callers:
 *     ATL::_dynamic_initializer_for___AtlBaseModule__ @ 0x180008020 (ATL--_dynamic_initializer_for___AtlBaseModule__.c)
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x1800AA844 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 */

void *__fastcall ATL::CAtlBaseModule::CAtlBaseModule(ATL::CAtlBaseModule *this)
{
  ATL::_AtlBaseModule = 96;
  qword_1801D6838 = 0LL;
  qword_1801D6840 = 0LL;
  qword_1801D6848 = 0LL;
  qword_1801D6800 = (__int64)&_ImageBase;
  qword_1801D67F8 = (__int64)&_ImageBase;
  qword_1801D6810 = (__int64)&GUID_ATLVer70;
  xmmword_1801D6818 = 0LL;
  byte_1801D6808 = 1;
  xmmword_1801D6828 = 0LL;
  dword_1801D680C = 2048;
  if ( (int)ATL::CComCriticalSection::Init((ATL::CComCriticalSection *)&xmmword_1801D6818) < 0 )
    ATL::CAtlBaseModule::m_bInitFailed = 1;
  return &ATL::_AtlBaseModule;
}
