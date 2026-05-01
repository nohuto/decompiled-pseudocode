/*
 * XREFs of ??1SnapAnimationTag@implementation@WindowSnapping@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x1801E44EC
 * Callers:
 *     ??_GSnapAnimationTag@implementation@WindowSnapping@Shell@Internal@Windows@winrt@@UEAAPEAXI@Z @ 0x180582FC0 (--_GSnapAnimationTag@implementation@WindowSnapping@Shell@Internal@Windows@winrt@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall winrt::Windows::Internal::Shell::WindowSnapping::implementation::SnapAnimationTag::~SnapAnimationTag(
        winrt::Windows::Internal::Shell::WindowSnapping::implementation::SnapAnimationTag *this)
{
  *(_QWORD *)this = &winrt::Windows::Internal::Shell::WindowSnapping::implementation::SnapAnimationTag::`vftable';
  (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 4) + 40LL))(
    *((_QWORD *)this + 4),
    *((_QWORD *)this + 3),
    32LL);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 4);
  winrt::impl::root_implements<winrt::impl::vector_impl<winrt::WindowsUdk::UI::MenuItem,std::vector<winrt::WindowsUdk::UI::MenuItem>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IVector<winrt::WindowsUdk::UI::MenuItem>,winrt::Windows::Foundation::Collections::IVectorView<winrt::WindowsUdk::UI::MenuItem>,winrt::Windows::Foundation::Collections::IIterable<winrt::WindowsUdk::UI::MenuItem>>::~root_implements<winrt::impl::vector_impl<winrt::WindowsUdk::UI::MenuItem,std::vector<winrt::WindowsUdk::UI::MenuItem>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IVector<winrt::WindowsUdk::UI::MenuItem>,winrt::Windows::Foundation::Collections::IVectorView<winrt::WindowsUdk::UI::MenuItem>,winrt::Windows::Foundation::Collections::IIterable<winrt::WindowsUdk::UI::MenuItem>>((__int64)this);
}
