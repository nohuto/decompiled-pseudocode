/*
 * XREFs of ??1CAppLayoutItem@@UEAA@XZ @ 0x18020A520
 * Callers:
 *     ??_ECAppLayoutItem@@UEAAPEAXI@Z @ 0x18020A4E0 (--_ECAppLayoutItem@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CAppLayoutItem::~CAppLayoutItem(CAppLayoutItem *this)
{
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 6);
  *((_DWORD *)this + 5) = -1073741823;
}
