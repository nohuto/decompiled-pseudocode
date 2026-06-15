/*
 * XREFs of ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x1800AA844
 * Callers:
 *     ATL::_dynamic_initializer_for___AtlComModule__ @ 0x180007C40 (ATL--_dynamic_initializer_for___AtlComModule__.c)
 *     ATL::_dynamic_initializer_for___AtlWinModule__ @ 0x180007D80 (ATL--_dynamic_initializer_for___AtlWinModule__.c)
 *     ??0CAtlBaseModule@ATL@@QEAA@XZ @ 0x180084168 (--0CAtlBaseModule@ATL@@QEAA@XZ.c)
 *     ??0?$CAtlExeModuleT@VCAudioServiceModule@@@ATL@@QEAA@XZ @ 0x1800D6F10 (--0-$CAtlExeModuleT@VCAudioServiceModule@@@ATL@@QEAA@XZ.c)
 *     ??0CComAutoCriticalSection@ATL@@QEAA@XZ @ 0x1800F053C (--0CComAutoCriticalSection@ATL@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComCriticalSection::Init(struct _RTL_CRITICAL_SECTION *this)
{
  InitializeCriticalSection(this);
  return 0LL;
}
