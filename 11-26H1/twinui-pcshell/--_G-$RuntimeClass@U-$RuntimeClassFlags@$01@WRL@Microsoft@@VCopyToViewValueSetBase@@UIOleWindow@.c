/*
 * XREFs of ??_G?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCopyToViewValueSetBase@@UIOleWindow@@UIShouldSwitchToDesktop@@UIAppActivationUIInfo@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1804E80E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CopyToViewValueSetBase@@QEAA@XZ @ 0x1802BB970 (--1CopyToViewValueSetBase@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
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
