/*
 * XREFs of ?_HandleActivation@CClassicWindowManager@@AEAAJPEAUHWND__@@V?$optional@UHandleActivationHints@CClassicWindowManager@@@std@@@Z @ 0x180287234
 * Callers:
 *     ?HandleActivation@CClassicWindowManager@@UEAAJPEAUHWND__@@W4ClassicWindowActivationOptions@@@Z @ 0x180286060 (-HandleActivation@CClassicWindowManager@@UEAAJPEAUHWND__@@W4ClassicWindowActivationOptions@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180020878 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?PositionNewActiveApp@?$CActivationBasedCollection@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@@@QEAAJAEBV?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@_K@Z @ 0x180023068 (-PositionNewActiveApp@-$CActivationBasedCollection@V-$ComPtr@UIClassicWindow@@@WRL@Microsoft@@@@.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18006C670 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180085690 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x18008D7BC (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIClassicWindow@@@WRL@Microsoft@@$0PPPPPPPO@V-$CTPoli.c)
 *     ?_FindClassicWindow@CClassicWindowManager@@AEAAJPEAUHWND__@@PEAPEAUIClassicWindow@@PEA_K@Z @ 0x1800DCBB0 (-_FindClassicWindow@CClassicWindowManager@@AEAAJPEAUHWND__@@PEAPEAUIClassicWindow@@PEA_K@Z.c)
 *     memmove_0 @ 0x1806A4B18 (memmove_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=16
__int64 __fastcall CClassicWindowManager::_HandleActivation(__int64 **a1, __int64 a2, __int64 a3)
{
  int active; // esi
  unsigned __int64 v6; // r13
  __int64 v7; // rcx
  unsigned __int64 v8; // r15
  __int64 **v9; // r14
  unsigned __int64 i; // rdi
  __int64 v11; // rbx
  int v12; // esi
  struct IUnknown *v13; // rcx
  unsigned __int64 v14; // rbx
  char v15; // al
  char v16; // bl
  struct IUnknown *v17; // rdi
  _QWORD *v18; // rax
  __int64 *v19; // r8
  _QWORD *v20; // rax
  HWND v21; // rax
  __int64 v22; // rbx
  unsigned __int64 v23; // rcx
  __int64 *v24; // r8
  __int64 *v25; // rcx
  __int64 v26; // rcx
  struct IUnknown *v28; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 v29; // [rsp+28h] [rbp-30h] BYREF
  char v30; // [rsp+30h] [rbp-28h] BYREF
  __int64 v31; // [rsp+38h] [rbp-20h]
  __int64 v32; // [rsp+40h] [rbp-18h]
  __int64 v33; // [rsp+48h] [rbp-10h]
  __int64 v36; // [rsp+B8h] [rbp+60h] BYREF

  v36 = 0LL;
  active = 0;
  v6 = 1LL;
  if ( *(_BYTE *)(a3 + 16) )
  {
    v7 = 0LL;
    if ( &v30 != (char *)a3 )
    {
      v7 = *(_QWORD *)a3;
      *(_QWORD *)a3 = 0LL;
    }
    v36 = v7;
    v8 = *(_QWORD *)(a3 + 8);
    v9 = a1 + 24;
LABEL_22:
    v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 160LL))(v7);
    v16 = v15;
    v17 = 0LL;
    v28 = 0LL;
    if ( v8
      || v15
      && !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v36 + 168LL))(v36)
      && (v18 = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v36 + 96LL))(v36),
          Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)&v28, v18),
          v17 = v28,
          !SHIsSameObject(v28, (struct IUnknown *)(*v9)[1])) )
    {
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*a1[24] + 152LL))(*a1[24]) )
      {
        ((void (__fastcall *)(__int64 **, _QWORD))a1[23][2])(a1 + 23, 0LL);
        --v8;
      }
      if ( v16 )
      {
        if ( v17
          || (v20 = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v36 + 96LL))(v36),
              Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)&v28, v20),
              (v17 = v28) != 0LL) )
        {
          v29 = 0LL;
          v21 = (HWND)((__int64 (__fastcall *)(struct IUnknown *))v17->lpVtbl[1].QueryInterface)(v17);
          CClassicWindowManager::_FindClassicWindow((CClassicWindowManager *)a1, v21, 0LL, &v29);
          if ( v8 < v29 )
            ++v8;
          active = CActivationBasedCollection<Microsoft::WRL::ComPtr<IClassicWindow>>::PositionNewActiveApp(
                     (__int64)(a1 + 23),
                     (__int64 *)&v28,
                     v29);
        }
      }
      if ( active < 0 )
        goto LABEL_58;
      v22 = v36;
      v33 = v36;
      if ( v36 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 8LL))(v36);
      active = 0;
      if ( v8 )
      {
        v23 = (unsigned __int64)v9[1];
        if ( v8 < v23 )
        {
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&(*v9)[v8]);
          v19 = v9[1];
          if ( (__int64 *)v8 != (__int64 *)((char *)v19 - 1) )
            memmove_0(&(*v9)[v8], &(*v9)[v8 + 1], 8 * ((_QWORD)v19 - v8) - 8);
          v9[1] = (__int64 *)((char *)v9[1] - 1);
          v23 = (unsigned __int64)v9[1];
        }
        if ( v23 )
          v6 = v23 + 1;
        if ( v6 <= (unsigned __int64)v9[3]
          || (active = CTSimpleArray<Microsoft::WRL::ComPtr<IClassicWindow>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IClassicWindow>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IClassicWindow>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IClassicWindow>>>::_EnsureCapacity(
                         (__int64)v9,
                         v6,
                         v19),
              active >= 0) )
        {
          v24 = v9[1];
          if ( v24 )
            memmove_0(*v9 + 1, *v9, 8LL * (_QWORD)v24);
          v9[1] = (__int64 *)v6;
        }
        if ( active >= 0 )
        {
          v25 = *v9;
          if ( *v9 )
          {
            *v25 = v22;
            Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v25);
          }
        }
      }
      if ( v22 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
    }
    if ( active >= 0 )
    {
      if ( v17 )
        ((void (__fastcall *)(struct IUnknown *))v17->lpVtbl[3].QueryInterface)(v17);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 72LL))(v36);
    }
LABEL_58:
    if ( v17 )
      ((void (__fastcall *)(struct IUnknown *))v17->lpVtbl->Release)(v17);
    goto LABEL_60;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v36);
  v36 = 0LL;
  v9 = a1 + 24;
  v31 = 0LL;
  v29 = 0LL;
  for ( i = 0LL; i < (unsigned __int64)v9[1]; ++i )
  {
    v32 = 0LL;
    v11 = (*v9)[i];
    v33 = v11;
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
    v28 = 0LL;
    if ( (**(int (__fastcall ***)(__int64, GUID *, struct IUnknown **))v11)(
           v11,
           &GUID_71dafe9a_4f1f_4a1b_b6ed_fd273bc0ffee,
           &v28) >= 0
      && ((unsigned __int8 (__fastcall *)(struct IUnknown *, __int64))v28->lpVtbl[8].QueryInterface)(v28, a2) )
    {
      v12 = 0;
    }
    else
    {
      v12 = -1;
    }
    v13 = v28;
    if ( v28 )
    {
      v28 = 0LL;
      ((void (__fastcall *)(struct IUnknown *))v13->lpVtbl->Release)(v13);
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
  v14 = v29;
LABEL_19:
  if ( active >= 0 )
  {
    active = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))(*v9)[v14])(
               (*v9)[v14],
               &GUID_71dafe9a_4f1f_4a1b_b6ed_fd273bc0ffee,
               &v36);
    v8 = v14;
    if ( active >= 0 )
    {
      v7 = v36;
      goto LABEL_22;
    }
  }
LABEL_60:
  v26 = v36;
  if ( v36 )
  {
    v36 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
  }
  if ( *(_BYTE *)(a3 + 16) )
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)a3);
  return (unsigned int)active;
}
