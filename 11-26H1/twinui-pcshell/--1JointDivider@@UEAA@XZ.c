/*
 * XREFs of ??1JointDivider@@UEAA@XZ @ 0x1802C20A0
 * Callers:
 *     ??_GJointDivider@@UEAAPEAXI@Z @ 0x18022E820 (--_GJointDivider@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Release@?$CTSmartObj@PEAUHFONT__@@V?$CAutoHandle_Policy@PEAUHFONT__@@@@@@QEAAXXZ @ 0x1801FEA3C (-Release@-$CTSmartObj@PEAUHFONT__@@V-$CAutoHandle_Policy@PEAUHFONT__@@@@@@QEAAXXZ.c)
 */

void __fastcall JointDivider::~JointDivider(JointDivider *this)
{
  CTSmartObj<HFONT__ *,CAutoHandle_Policy<HFONT__ *>>::Release((void **)this + 9);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 8);
  *((_DWORD *)this + 9) = -1073741823;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 2);
}
