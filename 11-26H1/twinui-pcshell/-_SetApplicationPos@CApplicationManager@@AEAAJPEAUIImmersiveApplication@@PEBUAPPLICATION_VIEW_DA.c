/*
 * XREFs of ?_SetApplicationPos@CApplicationManager@@AEAAJPEAUIImmersiveApplication@@PEBUAPPLICATION_VIEW_DATA_UPDATE@@W4SET_IMM_APP_POS@@PEAPEAXW4APPLICATION_VIEW_CLOAK_TYPE@@@Z @ 0x1800AE9E0
 * Callers:
 *     ?SetCloak@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@HW4APPLICATION_VIEW_CLOAK_TYPE@@@Z @ 0x1800AE340 (-SetCloak@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@HW4APPLICATION_VIEW_CLOAK_TYPE@@@.c)
 *     ?SetApplicationPos@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@PEBUAPPLICATION_VIEW_DATA_UPDATE@@W4SET_IMM_APP_POS@@PEAPEAX@Z @ 0x1802E5580 (-SetApplicationPos@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@PEBUAPPLICATION_VIEW_DAT.c)
 *     ?SetApplicationPosSafe@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@PEBUAPPLICATION_VIEW_DATA_UPDATE@@W4SET_IMM_APP_POS@@PEAPEAX@Z @ 0x1802E5620 (-SetApplicationPosSafe@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@PEBUAPPLICATION_VIEW.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsCalledOnIAMThread@CIAMGlobals@@QEBA_NXZ @ 0x18005A828 (-IsCalledOnIAMThread@CIAMGlobals@@QEBA_NXZ.c)
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByApplication@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByApplication@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x1800AEC4C (--$_FindFirstApplication@VCImmersiveAppFinderByApplication@@@CApplicationManager@@AEAAJAEBVCImme.c)
 *     ?_GetGlobalSyncEventHandler@CApplicationManager@@AEAAJPEAPEAUISyncIAMEventHandler@@@Z @ 0x18012B720 (-_GetGlobalSyncEventHandler@CApplicationManager@@AEAAJPEAPEAUISyncIAMEventHandler@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CApplicationManager::_SetApplicationPos(
        CApplicationManager *a1,
        void *a2,
        __int64 a3,
        int a4,
        __int64 a5,
        int a6)
{
  HRESULT First; // ebx
  CIAMGlobals *v11; // rcx
  int v12; // edi
  IUnknown *v13; // r14
  int v14; // eax
  void *v15; // rcx
  IUnknown *v16; // rcx
  bool IsCalledOnIAMThread; // al
  int v19; // eax
  struct ISyncIAMEventHandler *v20; // [rsp+60h] [rbp-10h] BYREF
  void *ppv; // [rsp+68h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  IUnknown *punk; // [rsp+A8h] [rbp+38h] BYREF

  punk = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&punk);
  ppv = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&ppv);
  First = CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByApplication>(a1, &ppv, &punk, 0LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&ppv);
  if ( First < 0 )
    goto LABEL_10;
  ppv = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppv);
  First = IUnknown_GetSite(punk, &GUID_91b0050a_78af_434e_ae0c_89943ac0ffee, &ppv);
  if ( First >= 0 )
  {
    v12 = 0;
    if ( (a4 & 0x30) == 0 )
      goto LABEL_4;
    IsCalledOnIAMThread = CIAMGlobals::IsCalledOnIAMThread(v11);
    First = !IsCalledOnIAMThread ? 0x8001010E : 0;
    if ( IsCalledOnIAMThread )
    {
      if ( (((a4 & 0x30) - 1LL) & a4 & 0x30) == 0 )
      {
        v19 = a4 & 0x10;
        a4 &= 0xFFFFFFCF;
        v12 = v19 != 0 ? 1 : 8;
LABEL_4:
        v13 = punk;
        v14 = ((__int64 (__fastcall *)(IUnknown *, _QWORD, __int64, _QWORD, int, _DWORD, __int64, _QWORD, int, int))punk->lpVtbl[10].Release)(
                punk,
                0LL,
                a3,
                0LL,
                a4,
                *((_DWORD *)a1 + 240),
                a5,
                0LL,
                a6,
                v12);
        First = v14;
        if ( v14 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1095,
            (int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
            (const char *)(unsigned int)v14);
        }
        else
        {
          if ( v12 && (((__int64 (__fastcall *)(IUnknown *))v13->lpVtbl[11].Release)(v13) & 2) != 0 )
          {
            v20 = 0LL;
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v20);
            if ( (int)CApplicationManager::_GetGlobalSyncEventHandler(a1, &v20) >= 0 )
              (*(void (__fastcall **)(struct ISyncIAMEventHandler *, _QWORD, unsigned __int64, void *, int, int, int))(*(_QWORD *)v20 + 24LL))(
                v20,
                0LL,
                ((unsigned __int64)a1 + 248) & -(__int64)(a1 != 0LL),
                a2,
                v12,
                5,
                1);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v20);
          }
          First = 0;
        }
        goto LABEL_8;
      }
      First = -2147024809;
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1063,
        (int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
        (const char *)(unsigned int)First);
    }
  }
LABEL_8:
  v15 = ppv;
  if ( ppv )
  {
    ppv = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v15 + 16LL))(v15);
  }
LABEL_10:
  v16 = punk;
  if ( punk )
  {
    punk = 0LL;
    ((void (__fastcall *)(IUnknown *))v16->lpVtbl->Release)(v16);
  }
  return (unsigned int)First;
}
