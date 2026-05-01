/*
 * XREFs of ??1CSimpleTempAppVisual@@UEAA@XZ @ 0x180525708
 * Callers:
 *     ??_ECSimpleTempAppVisual@@UEAAPEAXI@Z @ 0x180525730 (--_ECSimpleTempAppVisual@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A540 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CSimpleTempAppVisual::~CSimpleTempAppVisual(CSimpleTempAppVisual *this)
{
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 3);
  *((_DWORD *)this + 3) = -1073741823;
}
