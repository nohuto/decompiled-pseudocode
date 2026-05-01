/*
 * XREFs of ?GetAppWindowRemoteDesktopProperties@SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEBA?AUAppWindowRemoteDesktopProperties@3456@_K@Z @ 0x1806481E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800AC1A4 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??0hstring@winrt@@QEAA@AEBU01@@Z @ 0x1800AD2D8 (--0hstring@winrt@@QEAA@AEBU01@@Z.c)
 *     ??1?$_Hash@V?$_Umap_traits@Uhstring@winrt@@U?$com_ptr@UIVirtualDesktop@@@2@V?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@U?$com_ptr@UIVirtualDesktop@@@2@@std@@@5@$0A@@std@@@std@@QEAA@XZ @ 0x1801E95F0 (--1-$_Hash@V-$_Umap_traits@Uhstring@winrt@@U-$com_ptr@UIVirtualDesktop@@@2@V-$_Uhash_compare@Uhs.c)
 *     ?InternalAddRef@?$ComPtr@UITaskDataArbiter@DataEngine@TaskFlow@Shell@Internal@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x1802CB234 (-InternalAddRef@-$ComPtr@UITaskDataArbiter@DataEngine@TaskFlow@Shell@Internal@Windows@@@WRL@Micr.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?GetRemoteSystem@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SA?AURemoteSystem@3456@AEBUhstring@6@@Z @ 0x180627BB8 (-GetRemoteSystem@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SA-AURemoteS.c)
 *     ?HasWindow@RemoteSystem@implementation@Shell@Internal@Windows@winrt@@QEAA_NAEBUWindowId@UI@56@@Z @ 0x18063FEFC (-HasWindow@RemoteSystem@implementation@Shell@Internal@Windows@winrt@@QEAA_NAEBUWindowId@UI@56@@Z.c)
 *     ?GetAll@RemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@QEAA?AV?$unordered_map@Uhstring@winrt@@U?$com_ptr@UIVirtualDesktop@@@2@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@5@V?$allocator@U?$pair@$$CBUhstring@winrt@@U?$com_ptr@UIVirtualDesktop@@@2@@std@@@5@@std@@XZ @ 0x180644E94 (-GetAll@RemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@QEAA-AV-$unordered_.c)
 *     _lambda_f1fc4fadd08d5270ea19fa0c05bc5da7_::operator()_winrt::com_ptr_IVirtualDesktop___ @ 0x180646378 (_lambda_f1fc4fadd08d5270ea19fa0c05bc5da7_--operator()_winrt--com_ptr_IVirtualDesktop___.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::GetAppWindowRemoteDesktopProperties(
        __int64 a1,
        __int64 a2,
        HWND a3)
{
  HANDLE PropW; // r13
  _QWORD *v7; // rdi
  _QWORD *i; // rbx
  _QWORD *RemoteSystem; // rax
  RTL_SRWLOCK *v10; // r14
  __int64 v11; // rcx
  _OWORD *v12; // rax
  char v13; // r8
  __int16 v14; // dx
  __int16 v15; // cx
  __int64 v16; // rcx
  _OWORD *v17; // rax
  char v18; // r8
  __int16 v19; // dx
  __int16 v20; // cx
  __int128 v22; // [rsp+20h] [rbp-59h] BYREF
  volatile signed __int32 *v23; // [rsp+30h] [rbp-49h] BYREF
  __int64 v24; // [rsp+38h] [rbp-41h] BYREF
  RTL_SRWLOCK v25; // [rsp+40h] [rbp-39h] BYREF
  _QWORD *v26; // [rsp+48h] [rbp-31h]
  __int128 v27; // [rsp+80h] [rbp+7h] BYREF

  *(_BYTE *)a2 = 0;
  *(_WORD *)(a2 + 1) = 0;
  *(_BYTE *)(a2 + 3) = 0;
  *(_OWORD *)(a2 + 4) = 0LL;
  *(_BYTE *)(a2 + 20) = 1;
  *(_WORD *)(a2 + 21) = 0;
  *(_BYTE *)(a2 + 23) = 0;
  PropW = GetPropW(a3, L"RemoteDesktopWindow");
  winrt::Windows::Internal::Shell::implementation::RemoteDesktopCollection::GetAll(*(RTL_SRWLOCK **)(a1 + 136), &v25);
  v7 = v26;
  for ( i = (_QWORD *)*v26; i != v7; i = (_QWORD *)*i )
  {
    if ( PropW )
    {
      v23 = (volatile signed __int32 *)i[3];
      Microsoft::WRL::ComPtr<Windows::Internal::Shell::TaskFlow::DataEngine::ITaskDataArbiter>::InternalAddRef((__int64 *)&v23);
      v17 = lambda_f1fc4fadd08d5270ea19fa0c05bc5da7_::operator()_winrt::com_ptr_IVirtualDesktop___(
              v16,
              &v27,
              (__int64 *)&v23);
      v18 = *((_BYTE *)v17 + 8);
      v19 = *((_WORD *)v17 + 3);
      v20 = *((_WORD *)v17 + 2);
      LODWORD(v22) = *(_DWORD *)v17;
      WORD2(v22) = v20;
      WORD3(v22) = v19;
      BYTE8(v22) = v18;
      *(_DWORD *)((char *)&v22 + 9) = *(_DWORD *)((char *)v17 + 9);
      *(_WORD *)((char *)&v22 + 13) = *(_WORD *)((char *)v17 + 13);
      HIBYTE(v22) = *((_BYTE *)v17 + 15);
      *(_OWORD *)(a2 + 4) = v22;
      *(_BYTE *)a2 = 1;
      if ( !GetPropW(a3, L"AllowOnLocalDesktops") )
        *(_BYTE *)(a2 + 20) = 0;
      break;
    }
    winrt::hstring::hstring((winrt::hstring *)&v23, (const struct winrt::hstring *)(i + 2));
    RemoteSystem = winrt::Windows::Internal::Shell::implementation::RemoteSystemDataModel::GetRemoteSystem(&v24, &v23);
    v10 = (RTL_SRWLOCK *)((*RemoteSystem - 16LL) & -(__int64)(*RemoteSystem != 0LL));
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v24);
    if ( v10 )
    {
      *(_QWORD *)&v22 = a3;
      if ( winrt::Windows::Internal::Shell::implementation::RemoteSystem::HasWindow(
             v10,
             (const struct winrt::Windows::UI::WindowId *)&v22) )
      {
        v24 = i[3];
        Microsoft::WRL::ComPtr<Windows::Internal::Shell::TaskFlow::DataEngine::ITaskDataArbiter>::InternalAddRef(&v24);
        v12 = lambda_f1fc4fadd08d5270ea19fa0c05bc5da7_::operator()_winrt::com_ptr_IVirtualDesktop___(v11, &v27, &v24);
        v13 = *((_BYTE *)v12 + 8);
        v14 = *((_WORD *)v12 + 3);
        v15 = *((_WORD *)v12 + 2);
        LODWORD(v22) = *(_DWORD *)v12;
        WORD2(v22) = v15;
        WORD3(v22) = v14;
        BYTE8(v22) = v13;
        *(_DWORD *)((char *)&v22 + 9) = *(_DWORD *)((char *)v12 + 9);
        *(_WORD *)((char *)&v22 + 13) = *(_WORD *)((char *)v12 + 13);
        HIBYTE(v22) = *((_BYTE *)v12 + 15);
        *(_OWORD *)(a2 + 4) = v22;
        *(_BYTE *)a2 = 1;
        *(_BYTE *)(a2 + 20) = 0;
        winrt::handle_type<winrt::impl::hstring_traits>::close(&v23);
        break;
      }
    }
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v23);
  }
  std::_Hash<std::_Umap_traits<winrt::hstring,winrt::com_ptr<IVirtualDesktop>,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,winrt::com_ptr<IVirtualDesktop>>>,0>>::~_Hash<std::_Umap_traits<winrt::hstring,winrt::com_ptr<IVirtualDesktop>,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,winrt::com_ptr<IVirtualDesktop>>>,0>>((__int64)&v25);
  return a2;
}
