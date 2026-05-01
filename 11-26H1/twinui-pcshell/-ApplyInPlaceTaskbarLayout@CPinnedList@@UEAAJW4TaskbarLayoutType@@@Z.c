/*
 * XREFs of ?ApplyInPlaceTaskbarLayout@CPinnedList@@UEAAJW4TaskbarLayoutType@@@Z @ 0x18068CB10
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StartActivity@TaskbarLayoutInPlaceActivity@TaskbarFlexibleLayoutTelemetry@@QEAAXW4TaskbarLayoutType@@@Z @ 0x180157A20 (-StartActivity@TaskbarLayoutInPlaceActivity@TaskbarFlexibleLayoutTelemetry@@QEAAXW4TaskbarLayout.c)
 *     ?GetPinSourceForPinnedItem@@YAJPEFBU_ITEMIDLIST@@PEAW4TaskbarPinningSource@@@Z @ 0x18020B708 (-GetPinSourceForPinnedItem@@YAJPEFBU_ITEMIDLIST@@PEAW4TaskbarPinningSource@@@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     ??0?$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18068BAEC (--0-$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProv.c)
 *     ??1CPinList@@QEAA@XZ @ 0x18068C154 (--1CPinList@@QEAA@XZ.c)
 *     ??1TaskbarLayoutInPlaceActivity@TaskbarFlexibleLayoutTelemetry@@QEAA@XZ @ 0x18068C2D4 (--1TaskbarLayoutInPlaceActivity@TaskbarFlexibleLayoutTelemetry@@QEAA@XZ.c)
 *     ?FindPidlOrAppID@CPinList@@QEAAPEAVPINENTRY@@PEFBU_ITEMIDLIST@@_NPEAH@Z @ 0x18068EC70 (-FindPidlOrAppID@CPinList@@QEAAPEAVPINENTRY@@PEFBU_ITEMIDLIST@@_NPEAH@Z.c)
 *     GetPidlsFromTaskbarLayout @ 0x180690384 (GetPidlsFromTaskbarLayout.c)
 *     ?InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModifyFlags@@@Z @ 0x180692D40 (-InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModif.c)
 *     ?Load@CPinList@@QEAAJPEAVCPinnedList@@@Z @ 0x1806943F0 (-Load@CPinList@@QEAAJPEAVCPinnedList@@@Z.c)
 *     ?Stop@?$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180697574 (-Stop@-$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsP.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CPinnedList::ApplyInPlaceTaskbarLayout(__int64 a1, unsigned int a2)
{
  int PidlsFromTaskbarLayout; // eax
  unsigned int v5; // ebx
  __int64 (__fastcall *v6)(__int64, __int64 *); // rbx
  int v7; // eax
  int PinSourceForPinnedItem; // eax
  int v9; // eax
  int v10; // eax
  struct PINENTRY *PidlOrAppID; // rsi
  LPCITEMIDLIST *v12; // rbx
  LPCITEMIDLIST *v13; // r12
  const struct _ITEMIDLIST *v14; // rdi
  struct PINENTRY *v15; // rax
  ITEMIDLIST **v16; // rbx
  ITEMIDLIST **v17; // rdi
  ITEMIDLIST *v18; // rsi
  int v19; // eax
  int v21; // [rsp+30h] [rbp-D0h] BYREF
  LPITEMIDLIST pidl; // [rsp+38h] [rbp-C8h] BYREF
  int v23; // [rsp+40h] [rbp-C0h] BYREF
  int v24; // [rsp+44h] [rbp-BCh] BYREF
  __int64 v25; // [rsp+48h] [rbp-B8h] BYREF
  LPVOID pv[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v27; // [rsp+60h] [rbp-A0h]
  __int128 v28; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v29[42]; // [rsp+80h] [rbp-80h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+218h] [rbp+118h]

  memset_0(v29, 0, 0x148uLL);
  wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v29,
    (__int64)"TaskbarLayoutInPlaceActivity");
  v29[0] = &TaskbarFlexibleLayoutTelemetry::TaskbarLayoutInPlaceActivity::`vftable';
  TaskbarFlexibleLayoutTelemetry::TaskbarLayoutInPlaceActivity::StartActivity((__int64)v29, a2);
  v23 = 0;
  v24 = 0;
  pv[0] = 0LL;
  pv[1] = 0LL;
  v27 = 0uLL;
  PidlsFromTaskbarLayout = GetPidlsFromTaskbarLayout(a2, pv, &v23, &v24);
  v5 = PidlsFromTaskbarLayout;
  if ( PidlsFromTaskbarLayout < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x9C8,
      (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
      (const char *)(unsigned int)PidlsFromTaskbarLayout);
    goto LABEL_9;
  }
  if ( v23 )
  {
    v25 = 0LL;
    pidl = 0LL;
    v6 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a1 + 24LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v25);
    v7 = v6(a1, &v25);
    v5 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x9CD,
        (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
        (const char *)(unsigned int)v7);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v25);
LABEL_9:
      if ( pv[0] )
      {
        CoTaskMemFree(pv[0]);
        pv[0] = 0LL;
      }
      goto LABEL_38;
    }
    while ( !(*(unsigned int (__fastcall **)(__int64, __int64, LPITEMIDLIST *))(*(_QWORD *)v25 + 24LL))(v25, 1LL, &pidl) )
    {
      v21 = 0;
      PinSourceForPinnedItem = GetPinSourceForPinnedItem(pidl, (enum TaskbarPinningSource *)&v21);
      if ( PinSourceForPinnedItem >= 0 )
      {
        if ( v21 )
        {
          v28 = 0LL;
          if ( v24 || v21 != 1 )
          {
            v9 = CPinList::Load((CPinList *)&v28, (struct CPinnedList *)(a1 - 16));
            if ( v9 >= 0 )
            {
              PidlOrAppID = CPinList::FindPidlOrAppID((CPinList *)&v28, pidl, 0, 0LL);
              v12 = (LPCITEMIDLIST *)pv[0];
              v13 = (LPCITEMIDLIST *)((char *)pv[0] + 8 * (__int64)pv[1]);
              while ( v12 != v13 )
              {
                v14 = *v12;
                if ( ILIsEqual(pidl, *v12) )
                  goto LABEL_21;
                v15 = CPinList::FindPidlOrAppID((CPinList *)&v28, v14, 0, 0LL);
                if ( PidlOrAppID )
                {
                  if ( PidlOrAppID == v15 )
                    goto LABEL_21;
                }
                ++v12;
              }
            }
            else
            {
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x9DD,
                (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
                (const char *)(unsigned int)v9);
            }
            v10 = CPinnedList::InternalModify(a1 - 16, pidl, 0LL, 12LL);
            if ( v10 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x9FB,
                (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
                (const char *)(unsigned int)v10);
          }
LABEL_21:
          CPinList::~CPinList((CPinList *)&v28);
        }
      }
      else
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x9D3,
          (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
          (const char *)(unsigned int)PinSourceForPinnedItem);
      }
      ILFree(pidl);
    }
    v16 = (ITEMIDLIST **)pv[0];
    v17 = (ITEMIDLIST **)((char *)pv[0] + 8 * (__int64)pv[1]);
    while ( v16 != v17 )
    {
      v18 = *v16;
      if ( (*(unsigned int (__fastcall **)(__int64, ITEMIDLIST *))(*(_QWORD *)a1 + 72LL))(a1, *v16) == 1 )
      {
        v19 = CPinnedList::InternalModify(a1 - 16, 0LL, v18, 12LL);
        if ( v19 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0xA06,
            (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
            (const char *)(unsigned int)v19);
      }
      ILFree(v18);
      ++v16;
    }
    wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(v29);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v25);
    if ( pv[0] )
    {
      CoTaskMemFree(pv[0]);
      pv[0] = 0LL;
    }
    v5 = 0;
  }
  else
  {
    if ( pv[0] )
    {
      CoTaskMemFree(pv[0]);
      pv[0] = 0LL;
    }
    v5 = -2147019873;
  }
LABEL_38:
  pv[1] = 0LL;
  *((_QWORD *)&v27 + 1) = 0LL;
  TaskbarFlexibleLayoutTelemetry::TaskbarLayoutInPlaceActivity::~TaskbarLayoutInPlaceActivity((TaskbarFlexibleLayoutTelemetry::TaskbarLayoutInPlaceActivity *)v29);
  return v5;
}
