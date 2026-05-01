/*
 * XREFs of ??_GApplicationViewTitlebarConfiguration@@UEAAPEAXI@Z @ 0x1800845A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ImplementsMarker@VFtmBase@WRL@Microsoft@@@Details@23@UIImmersiveApplicationTransitionHelper@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180085408 (--1-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U-$ImplementsMarker@VFtmBase@W.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

ApplicationViewTitlebarConfiguration *__fastcall ApplicationViewTitlebarConfiguration::`scalar deleting destructor'(
        ApplicationViewTitlebarConfiguration *this,
        char a2)
{
  *((_DWORD *)this + 11) = -1073741823;
  Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IImmersiveApplicationTransitionHelper>::~ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IImmersiveApplicationTransitionHelper>((char *)this + 8);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x60);
  return this;
}
