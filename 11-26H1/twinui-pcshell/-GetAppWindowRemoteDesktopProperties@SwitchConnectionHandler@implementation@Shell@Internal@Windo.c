/*
 * XREFs of ?GetAppWindowRemoteDesktopProperties@SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEBA?AUAppWindowRemoteDesktopProperties@3456@_K@Z @ 0x18066E090
 * Callers:
 *     <none>
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??0hstring@winrt@@QEAA@AEBU01@@Z @ 0x18002C9CC (--0hstring@winrt@@QEAA@AEBU01@@Z.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18002E610 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??1?$_Hash@V?$_Umap_traits@Uhstring@winrt@@U?$com_ptr@UIVirtualDesktop@@@2@V?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@U?$com_ptr@UIVirtualDesktop@@@2@@std@@@5@$0A@@std@@@std@@QEAA@XZ @ 0x1801DE17C (--1-$_Hash@V-$_Umap_traits@Uhstring@winrt@@U-$com_ptr@UIVirtualDesktop@@@2@V-$_Uhash_compare@Uhs.c)
 *     ?InternalAddRef@?$ComPtr@UITaskDataArbiter@DataEngine@TaskFlow@Shell@Internal@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x1802C2AC8 (-InternalAddRef@-$ComPtr@UITaskDataArbiter@DataEngine@TaskFlow@Shell@Internal@Windows@@@WRL@Micr.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?GetRemoteSystem@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SA?AURemoteSystem@3456@AEBUhstring@6@@Z @ 0x18064D6B4 (-GetRemoteSystem@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SA-AURemoteS.c)
 *     ?HasWindow@RemoteSystem@implementation@Shell@Internal@Windows@winrt@@QEAA_NAEBUWindowId@UI@56@@Z @ 0x1806659FC (-HasWindow@RemoteSystem@implementation@Shell@Internal@Windows@winrt@@QEAA_NAEBUWindowId@UI@56@@Z.c)
 *     ?GetAll@RemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@QEAA?AV?$unordered_map@Uhstring@winrt@@U?$com_ptr@UIVirtualDesktop@@@2@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@5@V?$allocator@U?$pair@$$CBUhstring@winrt@@U?$com_ptr@UIVirtualDesktop@@@2@@std@@@5@@std@@XZ @ 0x18066AC34 (-GetAll@RemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@QEAA-AV-$unordered_.c)
 *     _lambda_f1fc4fadd08d5270ea19fa0c05bc5da7_::operator()_winrt::com_ptr_IVirtualDesktop___ @ 0x18066BFDC (_lambda_f1fc4fadd08d5270ea19fa0c05bc5da7_--operator()_winrt--com_ptr_IVirtualDesktop___.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::GetAppWindowRemoteDesktopProperties(
        __int64 a1,
        __int64 a2,
        HWND a3)
{
  HANDLE PropW; // r15
  unsigned int v7; // r8d
  _QWORD *v8; // rdi
  _QWORD *i; // rbx
  _QWORD *RemoteSystem; // rax
  RTL_SRWLOCK *v11; // rsi
  __int64 v12; // rcx
  _OWORD *v13; // rax
  char v14; // r8
  char v15; // r9
  char v16; // r10
  char v17; // r11
  char v18; // bl
  char v19; // di
  char v20; // si
  char v21; // r14
  __int16 v22; // dx
  __int16 v23; // cx
  __int64 v24; // rcx
  _OWORD *v25; // rax
  char v26; // r9
  char v27; // r10
  char v28; // r11
  char v29; // bl
  char v30; // di
  char v31; // si
  char v32; // r14
  char v33; // r15
  __int16 v34; // r8
  __int16 v35; // dx
  volatile signed __int32 *v37; // [rsp+20h] [rbp-49h] BYREF
  __int64 v38; // [rsp+28h] [rbp-41h] BYREF
  RTL_SRWLOCK v39; // [rsp+30h] [rbp-39h] BYREF
  _QWORD *v40; // [rsp+38h] [rbp-31h]
  __int128 v41; // [rsp+70h] [rbp+7h] BYREF

  *(_BYTE *)a2 = 0;
  *(_WORD *)(a2 + 1) = 0;
  *(_BYTE *)(a2 + 3) = 0;
  *(_OWORD *)(a2 + 4) = 0LL;
  *(_BYTE *)(a2 + 20) = 1;
  *(_WORD *)(a2 + 21) = 0;
  *(_BYTE *)(a2 + 23) = 0;
  PropW = GetPropW(a3, L"RemoteDesktopWindow");
  winrt::Windows::Internal::Shell::implementation::RemoteDesktopCollection::GetAll(*(RTL_SRWLOCK **)(a1 + 136), &v39);
  v8 = v40;
  for ( i = (_QWORD *)*v40; i != v8; i = (_QWORD *)*i )
  {
    if ( PropW )
    {
      v37 = (volatile signed __int32 *)i[3];
      Microsoft::WRL::ComPtr<Windows::Internal::Shell::TaskFlow::DataEngine::ITaskDataArbiter>::InternalAddRef((__int64 *)&v37);
      v25 = lambda_f1fc4fadd08d5270ea19fa0c05bc5da7_::operator()_winrt::com_ptr_IVirtualDesktop___(
              v24,
              &v41,
              (__int64 *)&v37);
      v26 = *((_BYTE *)v25 + 8);
      v27 = *((_BYTE *)v25 + 9);
      v28 = *((_BYTE *)v25 + 10);
      v29 = *((_BYTE *)v25 + 11);
      v30 = *((_BYTE *)v25 + 12);
      v31 = *((_BYTE *)v25 + 13);
      v32 = *((_BYTE *)v25 + 14);
      v33 = *((_BYTE *)v25 + 15);
      v34 = *((_WORD *)v25 + 3);
      v35 = *((_WORD *)v25 + 2);
      *(_DWORD *)(a2 + 4) = *(_DWORD *)v25;
      *(_WORD *)(a2 + 8) = v35;
      *(_WORD *)(a2 + 10) = v34;
      *(_BYTE *)(a2 + 12) = v26;
      *(_BYTE *)(a2 + 13) = v27;
      *(_BYTE *)(a2 + 14) = v28;
      *(_BYTE *)(a2 + 15) = v29;
      *(_BYTE *)(a2 + 16) = v30;
      *(_BYTE *)(a2 + 17) = v31;
      *(_BYTE *)(a2 + 18) = v32;
      *(_BYTE *)(a2 + 19) = v33;
      *(_BYTE *)a2 = 1;
      if ( !GetPropW(a3, L"AllowOnLocalDesktops") )
        *(_BYTE *)(a2 + 20) = 0;
      break;
    }
    winrt::hstring::hstring((winrt::hstring *)&v37, (const struct winrt::hstring *)(i + 2), v7);
    RemoteSystem = winrt::Windows::Internal::Shell::implementation::RemoteSystemDataModel::GetRemoteSystem(&v38, &v37);
    v11 = (RTL_SRWLOCK *)((*RemoteSystem - 16LL) & -(__int64)(*RemoteSystem != 0LL));
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v38);
    if ( v11 )
    {
      *(_QWORD *)&v41 = a3;
      if ( winrt::Windows::Internal::Shell::implementation::RemoteSystem::HasWindow(
             v11,
             (const struct winrt::Windows::UI::WindowId *)&v41) )
      {
        v38 = i[3];
        Microsoft::WRL::ComPtr<Windows::Internal::Shell::TaskFlow::DataEngine::ITaskDataArbiter>::InternalAddRef(&v38);
        v13 = lambda_f1fc4fadd08d5270ea19fa0c05bc5da7_::operator()_winrt::com_ptr_IVirtualDesktop___(v12, &v41, &v38);
        v14 = *((_BYTE *)v13 + 8);
        v15 = *((_BYTE *)v13 + 9);
        v16 = *((_BYTE *)v13 + 10);
        v17 = *((_BYTE *)v13 + 11);
        v18 = *((_BYTE *)v13 + 12);
        v19 = *((_BYTE *)v13 + 13);
        v20 = *((_BYTE *)v13 + 14);
        v21 = *((_BYTE *)v13 + 15);
        v22 = *((_WORD *)v13 + 3);
        v23 = *((_WORD *)v13 + 2);
        *(_DWORD *)(a2 + 4) = *(_DWORD *)v13;
        *(_WORD *)(a2 + 8) = v23;
        *(_WORD *)(a2 + 10) = v22;
        *(_BYTE *)(a2 + 12) = v14;
        *(_BYTE *)(a2 + 13) = v15;
        *(_BYTE *)(a2 + 14) = v16;
        *(_BYTE *)(a2 + 15) = v17;
        *(_BYTE *)(a2 + 16) = v18;
        *(_BYTE *)(a2 + 17) = v19;
        *(_BYTE *)(a2 + 18) = v20;
        *(_BYTE *)(a2 + 19) = v21;
        *(_BYTE *)a2 = 1;
        *(_BYTE *)(a2 + 20) = 0;
        winrt::handle_type<winrt::impl::hstring_traits>::close(&v37);
        break;
      }
    }
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v37);
  }
  std::_Hash<std::_Umap_traits<winrt::hstring,winrt::com_ptr<IVirtualDesktop>,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,winrt::com_ptr<IVirtualDesktop>>>,0>>::~_Hash<std::_Umap_traits<winrt::hstring,winrt::com_ptr<IVirtualDesktop>,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,winrt::com_ptr<IVirtualDesktop>>>,0>>(&v39);
  return a2;
}
