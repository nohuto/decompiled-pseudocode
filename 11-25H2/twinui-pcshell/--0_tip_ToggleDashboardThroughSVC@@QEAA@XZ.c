/*
 * XREFs of ??0_tip_ToggleDashboardThroughSVC@@QEAA@XZ @ 0x180274CE4
 * Callers:
 *     ??0?$merged_data@U_tip_ToggleDashboardThroughSVC@@U1@@details@tip2@@QEAA@XZ @ 0x180289FD0 (--0-$merged_data@U_tip_ToggleDashboardThroughSVC@@U1@@details@tip2@@QEAA@XZ.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180029C50 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 */

_tip_ToggleDashboardThroughSVC *__fastcall _tip_ToggleDashboardThroughSVC::_tip_ToggleDashboardThroughSVC(
        _tip_ToggleDashboardThroughSVC *this)
{
  _tip_ToggleDashboardThroughSVC *result; // rax

  *((_BYTE *)this + 20) = 0;
  std::wstring::wstring((char **)this + 3, L"test");
  *((_WORD *)this + 28) = 0;
  *((_BYTE *)this + 58) = 0;
  result = this;
  *((_DWORD *)this + 15) = -2147023728;
  *((_OWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 7LL;
  *((_WORD *)this + 32) = 0;
  return result;
}
