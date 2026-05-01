/*
 * XREFs of ?_HandleActivation@CClassicWindowManager@@AEAAJPEAUHWND__@@V?$optional@UHandleActivationHints@CClassicWindowManager@@@std@@@Z @ 0x18027E7A4
 * Callers:
 *     ?HandleActivation@CClassicWindowManager@@UEAAJPEAUHWND__@@W4ClassicWindowActivationOptions@@@Z @ 0x18027D5E0 (-HandleActivation@CClassicWindowManager@@UEAAJPEAUHWND__@@W4ClassicWindowActivationOptions@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180063200 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x180088B04 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@V-$CRefCountedObject@ULightweightProperty@Lightweight.c)
 *     ?PositionNewActiveApp@?$CActivationBasedCollection@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@@@QEAAJAEBV?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@_K@Z @ 0x180095C54 (-PositionNewActiveApp@-$CActivationBasedCollection@V-$ComPtr@UIClassicWindow@@@WRL@Microsoft@@@@.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800A7308 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?_FindClassicWindow@CClassicWindowManager@@AEAAJPEAUHWND__@@PEAPEAUIClassicWindow@@PEA_K@Z @ 0x1800DE520 (-_FindClassicWindow@CClassicWindowManager@@AEAAJPEAUHWND__@@PEAPEAUIClassicWindow@@PEA_K@Z.c)
 *     memmove_0 @ 0x1806CCBD4 (memmove_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=16
__int64 __fastcall CClassicWindowManager::_HandleActivation(CClassicWindowManager *a1, __int64 a2, __int64 a3)
{
  CClassicWindowManager *v4; // rbx
  int active; // r14d
  unsigned __int64 v6; // r13
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // r15
  __int64 **v9; // rsi
  unsigned __int64 i; // rdi
  __int64 v11; // rbx
  int v12; // r14d
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rbx
  char v15; // al
  struct IUnknown *v16; // rdi
  _QWORD *v17; // rax
  __int64 *v18; // r8
  _QWORD *v19; // rax
  HWND v20; // rax
  unsigned __int64 v21; // rbx
  unsigned __int64 v22; // rcx
  __int64 *v23; // r8
  __int64 *v24; // rcx
  unsigned __int64 v25; // rcx
  unsigned __int64 v27; // [rsp+20h] [rbp-38h] BYREF
  struct IUnknown *v28; // [rsp+28h] [rbp-30h] BYREF
  char v29; // [rsp+30h] [rbp-28h] BYREF
  __int64 v30; // [rsp+38h] [rbp-20h]
  __int64 v31; // [rsp+40h] [rbp-18h]
  __int64 v32; // [rsp+48h] [rbp-10h]
  unsigned __int64 v35; // [rsp+B8h] [rbp+60h] BYREF

  v4 = a1;
  v27 = 0LL;
  active = 0;
  v6 = 1LL;
  if ( *(_BYTE *)(a3 + 16) )
  {
    v7 = 0LL;
    if ( &v29 != (char *)a3 )
    {
      v7 = *(_QWORD *)a3;
      *(_QWORD *)a3 = 0LL;
    }
    v27 = v7;
    v8 = *(_QWORD *)(a3 + 8);
    v9 = (__int64 **)((char *)v4 + 192);
LABEL_22:
    v15 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v7 + 160LL))(v7);
    LOBYTE(v35) = v15;
    v16 = 0LL;
    v28 = 0LL;
    if ( v8
      || v15
      && !(*(unsigned __int8 (__fastcall **)(unsigned __int64))(*(_QWORD *)v27 + 168LL))(v27)
      && (v17 = (_QWORD *)(*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v27 + 96LL))(v27),
          Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)&v28, v17),
          v16 = v28,
          !SHIsSameObject(v28, (struct IUnknown *)(*v9)[1])) )
    {
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(***((_QWORD ***)v4 + 24) + 152LL))(**((_QWORD **)v4 + 24)) )
      {
        (*(void (__fastcall **)(__int64, _QWORD))(*((_QWORD *)v4 + 23) + 16LL))((__int64)v4 + 184, 0LL);
        --v8;
      }
      if ( (_BYTE)v35 )
      {
        if ( v16
          || (v19 = (_QWORD *)(*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v27 + 96LL))(v27),
              Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)&v28, v19),
              (v16 = v28) != 0LL) )
        {
          v35 = 0LL;
          v20 = (HWND)((__int64 (__fastcall *)(struct IUnknown *))v16->lpVtbl[1].QueryInterface)(v16);
          CClassicWindowManager::_FindClassicWindow(a1, v20, 0LL, &v35);
          if ( v8 < v35 )
            ++v8;
          active = CActivationBasedCollection<Microsoft::WRL::ComPtr<IClassicWindow>>::PositionNewActiveApp(
                     (__int64)v4 + 184,
                     (__int64 *)&v28,
                     v35);
        }
      }
      if ( active < 0 )
        goto LABEL_56;
      v21 = v27;
      v35 = v27;
      if ( v27 )
        (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v27 + 8LL))(v27);
      active = 0;
      if ( v8 )
      {
        v22 = (unsigned __int64)v9[1];
        if ( v8 < v22 )
        {
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&(*v9)[v8]);
          v18 = v9[1];
          if ( (__int64 *)v8 != (__int64 *)((char *)v18 - 1) )
            memmove_0(&(*v9)[v8], &(*v9)[v8 + 1], 8 * ((_QWORD)v18 - v8) - 8);
          v9[1] = (__int64 *)((char *)v9[1] - 1);
          v22 = (unsigned __int64)v9[1];
        }
        if ( v22 )
          v6 = v22 + 1;
        if ( v6 <= (unsigned __int64)v9[3]
          || (active = CTSimpleArray<Microsoft::WRL::ComPtr<CRefCountedObject<LightweightPropertySet::LightweightProperty>>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<CRefCountedObject<LightweightPropertySet::LightweightProperty>>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CRefCountedObject<LightweightPropertySet::LightweightProperty>>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<CRefCountedObject<LightweightPropertySet::LightweightProperty>>>>::_EnsureCapacity(
                         (__int64)v9,
                         v6,
                         v18),
              active >= 0) )
        {
          v23 = v9[1];
          if ( v23 )
            memmove_0(*v9 + 1, *v9, 8LL * (_QWORD)v23);
          v9[1] = (__int64 *)v6;
          v24 = *v9;
          if ( *v9 )
          {
            *v24 = v21;
            Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v24);
          }
        }
      }
      if ( v21 )
        (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v21 + 16LL))(v21);
    }
    if ( active >= 0 )
    {
      if ( v16 )
        ((void (__fastcall *)(struct IUnknown *))v16->lpVtbl[3].QueryInterface)(v16);
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v27 + 72LL))(v27);
    }
LABEL_56:
    if ( v16 )
      ((void (__fastcall *)(struct IUnknown *))v16->lpVtbl->Release)(v16);
    goto LABEL_58;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v27);
  v27 = 0LL;
  v9 = (__int64 **)((char *)v4 + 192);
  v30 = 0LL;
  v28 = 0LL;
  for ( i = 0LL; i < (unsigned __int64)v9[1]; ++i )
  {
    v31 = 0LL;
    v11 = (*v9)[i];
    v32 = v11;
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
    v35 = 0LL;
    if ( (**(int (__fastcall ***)(__int64, GUID *, unsigned __int64 *))v11)(
           v11,
           &GUID_71dafe9a_4f1f_4a1b_b6ed_fd273bc0ffee,
           &v35) >= 0
      && (*(unsigned __int8 (__fastcall **)(unsigned __int64, __int64))(*(_QWORD *)v35 + 192LL))(v35, a2) )
    {
      v12 = 0;
    }
    else
    {
      v12 = -1;
    }
    v13 = v35;
    if ( v35 )
    {
      v35 = 0LL;
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    if ( !v12 )
    {
      v14 = i;
      active = 0;
      goto LABEL_19;
    }
  }
  active = -2147319765;
  v14 = (unsigned __int64)v28;
LABEL_19:
  if ( active >= 0 )
  {
    active = (**(__int64 (__fastcall ***)(__int64, GUID *, unsigned __int64 *))(*v9)[v14])(
               (*v9)[v14],
               &GUID_71dafe9a_4f1f_4a1b_b6ed_fd273bc0ffee,
               &v27);
    v8 = v14;
    if ( active >= 0 )
    {
      v7 = v27;
      v4 = a1;
      goto LABEL_22;
    }
  }
LABEL_58:
  v25 = v27;
  if ( v27 )
  {
    v27 = 0LL;
    (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v25 + 16LL))(v25);
  }
  if ( *(_BYTE *)(a3 + 16) )
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)a3);
  return (unsigned int)active;
}
