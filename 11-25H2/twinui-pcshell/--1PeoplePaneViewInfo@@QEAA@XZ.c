/*
 * XREFs of ??1PeoplePaneViewInfo@@QEAA@XZ @ 0x1803FF444
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj2@UPeoplePaneViewInfo@@@std@@EEAAXXZ @ 0x180403180 (-_Destroy@-$_Ref_count_obj2@UPeoplePaneViewInfo@@@std@@EEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A540 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall PeoplePaneViewInfo::~PeoplePaneViewInfo(PeoplePaneViewInfo *this)
{
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 9);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 4);
  std::wstring::_Tidy_deallocate((void **)this);
}
