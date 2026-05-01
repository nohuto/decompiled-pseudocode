/*
 * XREFs of ??_G?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCopyToViewValueSetBase@@UIOleWindow@@UIShouldSwitchToDesktop@@UIAppActivationUIInfo@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1804D5C70
 * Callers:
 *     <none>
 * Callees:
 *     ??1CopyToViewValueSetBase@@QEAA@XZ @ 0x1802CB640 (--1CopyToViewValueSetBase@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CopyToViewValueSetBase *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CopyToViewValueSetBase,IOleWindow,IShouldSwitchToDesktop,IAppActivationUIInfo>::`scalar deleting destructor'(
        CopyToViewValueSetBase *a1,
        char a2)
{
  *((_DWORD *)a1 + 27) = -1073741823;
  CopyToViewValueSetBase::~CopyToViewValueSetBase(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x70);
  return a1;
}
