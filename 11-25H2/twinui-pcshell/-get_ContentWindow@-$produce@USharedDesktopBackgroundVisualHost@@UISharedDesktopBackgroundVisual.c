/*
 * XREFs of ?get_ContentWindow@?$produce@USharedDesktopBackgroundVisualHost@@UISharedDesktopBackgroundVisualWindowProvider@Themes@UI@Internal@Windows@winrt@@@impl@winrt@@UEAAHPEA_K@Z @ 0x1805EAB00
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x180048190 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180142B80 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 */

__int64 __fastcall winrt::impl::produce<SharedDesktopBackgroundVisualHost,winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisualWindowProvider>::get_ContentWindow(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rbx
  __int64 v6; // rbx
  RTL_SRWLOCK *v8; // [rsp+30h] [rbp+8h] BYREF

  v4 = a1 + 152;
  if ( !a1 )
    v4 = 176LL;
  wil::AcquireSRWLockExclusive(&v8, (RTL_SRWLOCK *)v4);
  v5 = a1 + 248;
  if ( !a1 )
    v5 = 272LL;
  v6 = *(_QWORD *)v5;
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v8);
  *a2 = v6;
  return 0LL;
}
