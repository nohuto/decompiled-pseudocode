/*
 * XREFs of ??1EdgyLegacyProcessor@@UEAA@XZ @ 0x1801ACDF4
 * Callers:
 *     ??_EEdgyLegacyProcessor@@UEAAPEAXI@Z @ 0x1801ACE40 (--_EEdgyLegacyProcessor@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1EdgyImpl@@QEAA@XZ @ 0x1801B0DB8 (--1EdgyImpl@@QEAA@XZ.c)
 */

void __fastcall EdgyLegacyProcessor::~EdgyLegacyProcessor(EdgyLegacyProcessor *this)
{
  EdgyImpl::~EdgyImpl((EdgyLegacyProcessor *)((char *)this + 80));
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 9);
  *((_QWORD *)this + 1) = &RefCountedObject::`vftable';
}
