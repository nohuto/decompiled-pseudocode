/*
 * XREFs of ??1PeoplePaneViewInfo@@QEAA@XZ @ 0x180409E1C
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj2@UPeoplePaneViewInfo@@@std@@EEAAXXZ @ 0x18040DC50 (-_Destroy@-$_Ref_count_obj2@UPeoplePaneViewInfo@@@std@@EEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall PeoplePaneViewInfo::~PeoplePaneViewInfo(PeoplePaneViewInfo *this)
{
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 9);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 4);
  std::wstring::_Tidy_deallocate(this);
}
