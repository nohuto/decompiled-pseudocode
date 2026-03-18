/*
 * XREFs of ??1CCaptureControllerMarshaler@DirectComposition@@UEAA@XZ @ 0x140228460
 * Callers:
 *     ??_ECCaptureControllerMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x140129E10 (--_ECCaptureControllerMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 *     ??_G?$CSharedResourceMarshaler@VCCaptureControllerMarshaler@DirectComposition@@$01@DirectComposition@@UEAAPEAXI@Z @ 0x140230650 (--_G-$CSharedResourceMarshaler@VCCaptureControllerMarshaler@DirectComposition@@$01@DirectComposi.c)
 * Callees:
 *     ?Clear@CMarshaledArrayBase@DirectComposition@@IEAAXXZ @ 0x14001FD0C (-Clear@CMarshaledArrayBase@DirectComposition@@IEAAXXZ.c)
 */

void __fastcall DirectComposition::CCaptureControllerMarshaler::~CCaptureControllerMarshaler(
        DirectComposition::CCaptureControllerMarshaler *this)
{
  DirectComposition::CMarshaledArrayBase::Clear((DirectComposition::CCaptureControllerMarshaler *)((char *)this + 104));
}
