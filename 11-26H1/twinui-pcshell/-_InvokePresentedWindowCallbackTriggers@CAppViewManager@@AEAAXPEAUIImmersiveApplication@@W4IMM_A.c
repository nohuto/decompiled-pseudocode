/*
 * XREFs of ?_InvokePresentedWindowCallbackTriggers@CAppViewManager@@AEAAXPEAUIImmersiveApplication@@W4IMM_APP_CHANGED@@PEAUHWND__@@@Z @ 0x1801B7190
 * Callers:
 *     ?ApplicationChanged@CAppViewManager@@UEAAJPEAUIImmersiveApplication@@W4IMM_APP_CHANGED@@PEAUHWND__@@@Z @ 0x1801B7160 (-ApplicationChanged@CAppViewManager@@UEAAJPEAUIImmersiveApplication@@W4IMM_APP_CHANGED@@PEAUHWND.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180063200 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     WPP_SF_d @ 0x1802197BC (WPP_SF_d.c)
 *     ?DestroyMem@CTContainer_PolicyLocalMem@@SAHPEAX@Z @ 0x1802EB524 (-DestroyMem@CTContainer_PolicyLocalMem@@SAHPEAX@Z.c)
 *     ??_G?$ComPtr@UIObservablePropertyCallback@@@WRL@Microsoft@@QEAAPEAXI@Z @ 0x1802F0AD8 (--_G-$ComPtr@UIObservablePropertyCallback@@@WRL@Microsoft@@QEAAPEAXI@Z.c)
 *     ?RemoveAt@?$CTSimpleArray@V?$ComPtr@V?$CRefCountedObject@UPRESENTED_WINDOW_CALLBACK_TRIGGER@CAppViewManager@@@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyLocalMem@V?$ComPtr@V?$CRefCountedObject@UPRESENTED_WINDOW_CALLBACK_TRIGGER@CAppViewManager@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@V?$CRefCountedObject@UPRESENTED_WINDOW_CALLBACK_TRIGGER@CAppViewManager@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@V?$CRefCountedObject@UPRESENTED_WINDOW_CALLBACK_TRIGGER@CAppViewManager@@@@@WRL@Microsoft@@@@@@QEAAJ_K@Z @ 0x1802F3500 (-RemoveAt@-$CTSimpleArray@V-$ComPtr@V-$CRefCountedObject@UPRESENTED_WINDOW_CALLBACK_TRIGGER@CApp.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@V?$CRefCountedObject@UPRESENTED_WINDOW_CALLBACK_TRIGGER@CAppViewManager@@@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyLocalMem@V?$ComPtr@V?$CRefCountedObject@UPRESENTED_WINDOW_CALLBACK_TRIGGER@CAppViewManager@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@V?$CRefCountedObject@UPRESENTED_WINDOW_CALLBACK_TRIGGER@CAppViewManager@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@V?$CRefCountedObject@UPRESENTED_WINDOW_CALLBACK_TRIGGER@CAppViewManager@@@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x1802F5FE0 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@V-$CRefCountedObject@UPRESENTED_WINDOW_CALLBACK_TRIGG.c)
 *     ?_s_QueueCallback@CAppViewManager@@CAXPEAUIImmersiveApplicationInternal@@AEAVCMarshaledInterface@@J@Z @ 0x1802F8A64 (-_s_QueueCallback@CAppViewManager@@CAXPEAUIImmersiveApplicationInternal@@AEAVCMarshaledInterface.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall CAppViewManager::_InvokePresentedWindowCallbackTriggers(
        __int64 a1,
        struct IUnknown *a2,
        int a3,
        __int64 a4)
{
  struct IUnknown *v4; // r15
  char *v6; // r12
  __int64 v7; // r14
  RTL_SRWLOCK *v8; // rdi
  __int64 v9; // rsi
  _QWORD *v10; // rax
  int v11; // edi
  __int64 v12; // rbx
  int v13; // r15d
  char v14; // r13
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rsi
  int v16; // eax
  __int64 v17; // rcx
  __int64 *v18; // rax
  char *v19; // rbx
  __int64 v20; // [rsp+20h] [rbp-58h]
  __int64 v21; // [rsp+28h] [rbp-50h] BYREF
  _QWORD *v22; // [rsp+30h] [rbp-48h]
  __int64 v23; // [rsp+38h] [rbp-40h] BYREF
  PSRWLOCK v24; // [rsp+40h] [rbp-38h]
  PSRWLOCK v25; // [rsp+48h] [rbp-30h]
  char *v26; // [rsp+50h] [rbp-28h] BYREF
  __int64 v27; // [rsp+58h] [rbp-20h]
  __int64 v28; // [rsp+60h] [rbp-18h]
  __int64 v29; // [rsp+68h] [rbp-10h]
  struct IImmersiveApplicationInternal *v30; // [rsp+C0h] [rbp+48h] BYREF
  struct IUnknown *v31; // [rsp+C8h] [rbp+50h]
  int v32; // [rsp+D0h] [rbp+58h]
  __int64 v33; // [rsp+D8h] [rbp+60h]

  v33 = a4;
  v32 = a3;
  v31 = a2;
  v4 = a2;
  v6 = 0LL;
  v26 = 0LL;
  v7 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  v8 = CApplicationManagerUtility::g_pIAMGlobals;
  v24 = CApplicationManagerUtility::g_pIAMGlobals;
  v25 = CApplicationManagerUtility::g_pIAMGlobals;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v9 = *(_QWORD *)(a1 + 96);
  v20 = v9;
  if ( v9 )
  {
    v10 = (_QWORD *)(a1 + 88);
    v22 = (_QWORD *)(a1 + 88);
    v11 = v32;
    while ( 1 )
    {
      v23 = *(_QWORD *)(*v10 + 8 * v9 - 8);
      v12 = v23;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v23);
      if ( SHIsSameObject(v4, *(struct IUnknown **)(v12 + 16)) )
        break;
LABEL_32:
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      v20 = --v9;
      v10 = v22;
      if ( !v9 )
      {
        v8 = v24;
        goto LABEL_2;
      }
    }
    v13 = -2147467260;
    v14 = 0;
    if ( v11 != 6 )
    {
      if ( *(_DWORD *)(v12 + 8) == 1 )
      {
        if ( v11 != 8 )
          goto LABEL_31;
        v30 = 0LL;
        QueryInterface = v31->lpVtbl->QueryInterface;
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v30);
        if ( ((int (__fastcall *)(struct IUnknown *, GUID *, struct IImmersiveApplicationInternal **))QueryInterface)(
               v31,
               &GUID_c9301630_27da_428e_a432_0a5e49c0ffee,
               &v30) >= 0
          && !(*(unsigned __int8 (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v30 + 472LL))(v30) )
        {
          v14 = 1;
          v13 = v33 != *(_QWORD *)(v12 + 32) ? 0x80004004 : 0;
        }
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v30);
        v9 = v20;
        if ( !v14 )
          goto LABEL_31;
      }
      else
      {
        if ( *(_DWORD *)(v12 + 8) != 2 || v33 != *(_QWORD *)(v12 + 32) )
        {
LABEL_31:
          v4 = v31;
          goto LABEL_32;
        }
        v13 = v11 != 8 ? 0x80004004 : 0;
      }
    }
    v30 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v30);
    if ( (***(int (__fastcall ****)(_QWORD, GUID *, struct IImmersiveApplicationInternal **))(v12 + 16))(
           *(_QWORD *)(v12 + 16),
           &GUID_c9301630_27da_428e_a432_0a5e49c0ffee,
           &v30) >= 0 )
    {
      CAppViewManager::_s_QueueCallback(v30, (struct CMarshaledInterface *)(v12 + 24), v13);
      if ( (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 1) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
      {
        WPP_SF_d(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
          31LL,
          &WPP_02ae13d87ebd31c84dc79c58b3d3a8d1_Traceguids,
          *(unsigned int *)(v12 + 40));
      }
    }
    v21 = v12;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v21);
    v16 = 0;
    if ( v7 == v29 )
    {
      v16 = CTSimpleArray<Microsoft::WRL::ComPtr<CRefCountedObject<CAppViewManager::PRESENTED_WINDOW_CALLBACK_TRIGGER>>,4294967294,CTPolicyLocalMem<Microsoft::WRL::ComPtr<CRefCountedObject<CAppViewManager::PRESENTED_WINDOW_CALLBACK_TRIGGER>>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CRefCountedObject<CAppViewManager::PRESENTED_WINDOW_CALLBACK_TRIGGER>>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<CRefCountedObject<CAppViewManager::PRESENTED_WINDOW_CALLBACK_TRIGGER>>>>::_EnsureCapacity(
              &v26,
              v7 + 1);
      v7 = v27;
      v6 = v26;
    }
    v17 = v12;
    if ( v16 >= 0 )
    {
      v27 = ++v7;
      v18 = (__int64 *)&v6[8 * v7 - 8];
      if ( v18 )
      {
        *v18 = 0LL;
        if ( v18 != &v21 )
        {
          *v18 = v12;
          v17 = 0LL;
        }
      }
    }
    if ( v17 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    CTSimpleArray<Microsoft::WRL::ComPtr<CRefCountedObject<CAppViewManager::PRESENTED_WINDOW_CALLBACK_TRIGGER>>,4294967294,CTPolicyLocalMem<Microsoft::WRL::ComPtr<CRefCountedObject<CAppViewManager::PRESENTED_WINDOW_CALLBACK_TRIGGER>>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CRefCountedObject<CAppViewManager::PRESENTED_WINDOW_CALLBACK_TRIGGER>>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<CRefCountedObject<CAppViewManager::PRESENTED_WINDOW_CALLBACK_TRIGGER>>>>::RemoveAt(
      v22,
      v9 - 1);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v30);
    goto LABEL_31;
  }
LABEL_2:
  if ( v8 )
    ReleaseSRWLockExclusive(v8);
  if ( v6 )
  {
    if ( v7 )
    {
      v19 = v6;
      do
      {
        Microsoft::WRL::ComPtr<IObservablePropertyCallback>::`scalar deleting destructor'(v19);
        v19 += 8;
        --v7;
      }
      while ( v7 );
    }
    CTContainer_PolicyLocalMem::DestroyMem(v6);
  }
}
