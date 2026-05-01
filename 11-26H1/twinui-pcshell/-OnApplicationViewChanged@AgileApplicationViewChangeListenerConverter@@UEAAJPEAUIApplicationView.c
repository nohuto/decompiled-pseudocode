/*
 * XREFs of ?OnApplicationViewChanged@AgileApplicationViewChangeListenerConverter@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1800DD870
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall AgileApplicationViewChangeListenerConverter::OnApplicationViewChanged(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4)
{
  __int64 v8; // rdi
  int v9; // ebx
  int v10; // eax
  DWORD CurrentThreadId; // ebx
  HRESULT ApartmentType; // eax
  int v13; // ecx
  BOOL v14; // ecx
  unsigned int v15; // ebx
  int v17; // eax
  __int64 v18; // rcx
  APTTYPEQUALIFIER pAptQualifier[2]; // [rsp+30h] [rbp-278h] BYREF
  APTTYPE pAptType; // [rsp+38h] [rbp-270h] BYREF
  __int64 v21; // [rsp+40h] [rbp-268h]
  HRESULT v22; // [rsp+48h] [rbp-260h]
  WCHAR Filename[264]; // [rsp+50h] [rbp-258h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2A8h] [rbp+0h]

  v8 = a1 + 48;
  if ( !a1 )
    v8 = 0LL;
  v21 = v8;
  v9 = *(_DWORD *)(v8 + 44);
  if ( v9 != 2 )
  {
    v10 = `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess;
    if ( `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess )
    {
LABEL_5:
      if ( v10 != 1 )
        goto LABEL_15;
      goto LABEL_6;
    }
    if ( GetModuleFileNameW(0LL, Filename, 0x104u) )
    {
      v13 = (FindStringOrdinal(0x800000u, Filename, -1, L"\\EXPLORER.EXE", -1, 1) != -1) + 1;
      `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess = v13;
    }
    else
    {
      v13 = `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess;
    }
    if ( v13 != 1 )
      goto LABEL_15;
    if ( v9 == 1 )
    {
      if ( (unsigned int)IsAppCompatModeEnabled(16LL) )
      {
        `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess = 2;
        goto LABEL_15;
      }
      v10 = `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess;
      goto LABEL_5;
    }
  }
LABEL_6:
  if ( *(_DWORD *)(v8 + 40) != -3 )
  {
    CurrentThreadId = 0;
    pAptType = APTTYPE_STA;
    pAptQualifier[0] = APTTYPEQUALIFIER_NONE;
    ApartmentType = CoGetApartmentType(&pAptType, pAptQualifier);
    if ( ApartmentType < 0 )
      goto LABEL_17;
    if ( pAptType == APTTYPE_MAINSTA || pAptType == APTTYPE_STA )
    {
      CurrentThreadId = GetCurrentThreadId();
    }
    else if ( pAptType == APTTYPE_NA )
    {
      CurrentThreadId = -1;
    }
    if ( CurrentThreadId != *(_DWORD *)(v8 + 40) )
    {
      ApartmentType = -2147417842;
      goto LABEL_17;
    }
  }
LABEL_15:
  v14 = TryEnterCriticalSection((LPCRITICAL_SECTION)v8);
  ApartmentType = -2147417842;
  if ( v14 )
    ApartmentType = 0;
LABEL_17:
  v22 = ApartmentType;
  if ( ApartmentType < 0 )
  {
    *(_QWORD *)pAptQualifier = 0LL;
    v17 = (*(__int64 (__fastcall **)(_QWORD, GUID *, APTTYPEQUALIFIER *))(**(_QWORD **)(a1 + 96) + 24LL))(
            *(_QWORD *)(a1 + 96),
            &GUID_727f9e97_76ee_497b_a942_b6371328485c,
            pAptQualifier);
    v15 = v17;
    if ( v17 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x8A,
        (int)"pcshell\\twinui\\appviewmanager\\lib\\notificationdispatcher.cpp",
        (const char *)(unsigned int)v17);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)pAptQualifier);
    }
    else
    {
      v15 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64))(**(_QWORD **)pAptQualifier + 24LL))(
              *(_QWORD *)pAptQualifier,
              a2,
              a3,
              a4);
      v18 = *(_QWORD *)pAptQualifier;
      if ( *(_QWORD *)pAptQualifier )
      {
        *(_QWORD *)pAptQualifier = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
      }
    }
  }
  else
  {
    v15 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64))(**(_QWORD **)(a1 + 104) + 24LL))(
            *(_QWORD *)(a1 + 104),
            a2,
            a3,
            a4);
    LeaveCriticalSection((LPCRITICAL_SECTION)v8);
  }
  return v15;
}
