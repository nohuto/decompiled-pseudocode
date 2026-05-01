/*
 * XREFs of ?ApplyReorderTaskbarLayout@CPinnedList@@UEAAJW4TaskbarLayoutType@@H@Z @ 0x18068D210
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetPinSourceForPinnedItem@@YAJPEFBU_ITEMIDLIST@@PEAW4TaskbarPinningSource@@@Z @ 0x18020B708 (-GetPinSourceForPinnedItem@@YAJPEFBU_ITEMIDLIST@@PEAW4TaskbarPinningSource@@@Z.c)
 *     ??1?$out_param_t@V?$unique_ptr@$$CFAU_ITEMIDLIST@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@details@wil@@QEAA@XZ @ 0x1802B976C (--1-$out_param_t@V-$unique_ptr@$$CFAU_ITEMIDLIST@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree.c)
 *     ?reset@?$unique_ptr@U_ITEMIDLIST@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAXPEAU_ITEMIDLIST@@@Z @ 0x1802B97A0 (-reset@-$unique_ptr@U_ITEMIDLIST@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil@@@w.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     ??0?$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18068BAEC (--0-$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProv.c)
 *     ??1TaskbarLayoutReorderActivity@TaskbarFlexibleLayoutTelemetry@@QEAA@XZ @ 0x18068C32C (--1TaskbarLayoutReorderActivity@TaskbarFlexibleLayoutTelemetry@@QEAA@XZ.c)
 *     GetPidlsFromTaskbarLayout @ 0x180690384 (GetPidlsFromTaskbarLayout.c)
 *     ?InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModifyFlags@@@Z @ 0x180692D40 (-InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModif.c)
 *     ?StartActivity@TaskbarLayoutReorderActivity@TaskbarFlexibleLayoutTelemetry@@QEAAXW4TaskbarLayoutType@@@Z @ 0x1806974B8 (-StartActivity@TaskbarLayoutReorderActivity@TaskbarFlexibleLayoutTelemetry@@QEAAXW4TaskbarLayout.c)
 *     ?Stop@?$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180697574 (-Stop@-$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsP.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CPinnedList::ApplyReorderTaskbarLayout(__int64 a1, unsigned int a2, int a3)
{
  int PidlsFromTaskbarLayout; // eax
  unsigned int v7; // ebx
  unsigned int v8; // ebx
  __int64 v9; // rax
  __int64 (__fastcall *v10)(__int64, __int64 *); // rbx
  int v11; // eax
  unsigned int v12; // edi
  unsigned int v13; // ebx
  __int64 v14; // rax
  __int64 v15; // rax
  int v16; // ebx
  int PinSourceForPinnedItem; // eax
  __int64 v18; // rdx
  __int64 i; // rbx
  __int64 v20; // rdi
  int v21; // eax
  wil::details::in1diag3 *v22; // rcx
  __int64 v23; // rdx
  unsigned int v24; // ebx
  __int64 v25; // rax
  int v27; // [rsp+30h] [rbp-D0h] BYREF
  struct _ITEMIDLIST **v28; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v29; // [rsp+40h] [rbp-C0h] BYREF
  char v30; // [rsp+48h] [rbp-B8h]
  LPVOID *v31; // [rsp+50h] [rbp-B0h]
  char v32; // [rsp+58h] [rbp-A8h]
  LPVOID pv[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v34; // [rsp+70h] [rbp-90h]
  int v35; // [rsp+80h] [rbp-80h] BYREF
  struct _ITEMIDLIST *v36; // [rsp+88h] [rbp-78h] BYREF
  __int64 v37[2]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v38[42]; // [rsp+A0h] [rbp-60h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+228h] [rbp+128h]

  memset_0(v38, 0, 0x148uLL);
  wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v38,
    (__int64)"TaskbarLayoutReorderActivity");
  v38[0] = &TaskbarFlexibleLayoutTelemetry::TaskbarLayoutReorderActivity::`vftable';
  TaskbarFlexibleLayoutTelemetry::TaskbarLayoutReorderActivity::StartActivity(v38, a2);
  v35 = 0;
  pv[0] = 0LL;
  pv[1] = 0LL;
  v34 = 0uLL;
  PidlsFromTaskbarLayout = GetPidlsFromTaskbarLayout(a2, pv, &v35, 0LL);
  v7 = PidlsFromTaskbarLayout;
  if ( PidlsFromTaskbarLayout < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA80,
      (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
      (const char *)(unsigned int)PidlsFromTaskbarLayout);
    if ( pv[0] )
    {
      CoTaskMemFree(pv[0]);
      pv[0] = 0LL;
    }
    goto LABEL_42;
  }
  v31 = pv;
  v32 = 1;
  if ( !v35 )
  {
    v8 = 0;
    if ( pv[1] )
    {
      v9 = 0LL;
      do
      {
        ILFree(*((LPITEMIDLIST *)pv[0] + v9));
        v9 = ++v8;
      }
      while ( (LPVOID)v8 < pv[1] );
    }
    if ( pv[0] )
    {
      CoTaskMemFree(pv[0]);
      pv[0] = 0LL;
    }
    v7 = -2147019873;
    goto LABEL_42;
  }
  v37[0] = 0LL;
  v36 = 0LL;
  v10 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a1 + 24LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v37);
  v11 = v10(a1, v37);
  v12 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA8E,
      (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
      (const char *)(unsigned int)v11);
    wistd::unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
      (void **)&v36,
      0LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v37);
    v13 = 0;
    if ( pv[1] )
    {
      v14 = 0LL;
      do
      {
        ILFree(*((LPITEMIDLIST *)pv[0] + v14));
        v14 = ++v13;
      }
      while ( (LPVOID)v13 < pv[1] );
    }
    if ( pv[0] )
    {
      CoTaskMemFree(pv[0]);
      pv[0] = 0LL;
    }
    v7 = v12;
    goto LABEL_42;
  }
  while ( 1 )
  {
    v15 = *(_QWORD *)v37[0];
    v28 = &v36;
    v29 = 0LL;
    v30 = 1;
    v16 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(v15 + 24))(v37[0], 1LL, &v29);
    wil::details::out_param_t<wistd::unique_ptr<_ITEMIDLIST __unaligned,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_ITEMIDLIST __unaligned,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>((__int64)&v28);
    if ( v16 )
      break;
    v27 = 0;
    PinSourceForPinnedItem = GetPinSourceForPinnedItem(v36, (enum TaskbarPinningSource *)&v27);
    if ( PinSourceForPinnedItem < 0 )
    {
      v18 = 2708LL;
      goto LABEL_26;
    }
    if ( v27 && (v27 != 1 || !a2) )
    {
      PinSourceForPinnedItem = CPinnedList::InternalModify(a1 - 16, v36, 0LL, 14LL);
      if ( PinSourceForPinnedItem < 0 )
      {
        v18 = 2713LL;
LABEL_26:
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)v18,
          (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
          (const char *)(unsigned int)PinSourceForPinnedItem);
      }
    }
  }
  if ( a3 )
  {
    for ( i = LODWORD(pv[1]) - 1; i >= 0; --i )
    {
      v20 = *((_QWORD *)pv[0] + i);
      if ( (*(unsigned int (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 72LL))(a1, v20) )
      {
        v21 = CPinnedList::InternalModify(a1 - 16, 0LL, v20, 14LL);
        v22 = retaddr;
        if ( v21 < 0 )
        {
          v23 = 2725LL;
LABEL_34:
          wil::details::in1diag3::_Log_Hr(
            v22,
            (void *)v23,
            (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
            (const char *)(unsigned int)v21);
          continue;
        }
        v21 = CPinnedList::InternalModify(a1 - 16, v20, 1LL, 14LL);
        v22 = retaddr;
        if ( v21 < 0 )
        {
          v23 = 2727LL;
          goto LABEL_34;
        }
      }
    }
  }
  wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(v38);
  wistd::unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
    (void **)&v36,
    0LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v37);
  v24 = 0;
  if ( pv[1] )
  {
    v25 = 0LL;
    do
    {
      ILFree(*((LPITEMIDLIST *)pv[0] + v25));
      v25 = ++v24;
    }
    while ( (LPVOID)v24 < pv[1] );
  }
  if ( pv[0] )
  {
    CoTaskMemFree(pv[0]);
    pv[0] = 0LL;
  }
  v7 = 0;
LABEL_42:
  pv[1] = 0LL;
  *((_QWORD *)&v34 + 1) = 0LL;
  TaskbarFlexibleLayoutTelemetry::TaskbarLayoutReorderActivity::~TaskbarLayoutReorderActivity((TaskbarFlexibleLayoutTelemetry::TaskbarLayoutReorderActivity *)v38);
  return v7;
}
