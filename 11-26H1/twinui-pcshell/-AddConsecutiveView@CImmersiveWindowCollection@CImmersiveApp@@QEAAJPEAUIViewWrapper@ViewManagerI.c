/*
 * XREFs of ?AddConsecutiveView@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4WindowAdditionReason@@PEAUITaskWindow@@@Z @ 0x180222E4C
 * Callers:
 *     ?_ProcessNewView@CImmersiveApp@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@_NW4WindowAdditionReason@@PEAUITaskWindow@@PEA_N@Z @ 0x18005F1A4 (-_ProcessNewView@CImmersiveApp@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180052CE8 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?IsDeferredPositionValid@CAppLocalCache@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x18005AF04 (-IsDeferredPositionValid@CAppLocalCache@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     WPP_SF_qd @ 0x18005F070 (WPP_SF_qd.c)
 *     ?_InsertWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAJPEAUITaskWindow@@_K@Z @ 0x1801CD4E4 (-_InsertWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAJPEAUITaskWindow@@_K@Z.c)
 *     ?s_CreateInstance@CTaskWindow@@SAJQEBUTASKWINDOW_INIT_DATA@@AEBU_GUID@@PEAPEAX@Z @ 0x18029DB00 (-s_CreateInstance@CTaskWindow@@SAJQEBUTASKWINDOW_INIT_DATA@@AEBU_GUID@@PEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CImmersiveApp::CImmersiveWindowCollection::AddConsecutiveView(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4)
{
  __int64 v8; // rbx
  int v9; // r9d
  bool IsDeferredPositionValid; // al
  int v11; // r8d
  __int128 v12; // xmm1
  __int128 v13; // xmm2
  __int64 v14; // xmm3_8
  __int64 v15; // rdx
  int Instance; // esi
  __int64 v17; // rax
  const struct _GUID *v18; // rdx
  __int64 v19; // rax
  struct ITaskWindow *v20; // rcx
  struct ITaskWindow *v22; // [rsp+30h] [rbp-D0h] BYREF
  int v23; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v24; // [rsp+40h] [rbp-C0h]
  __int64 v25; // [rsp+48h] [rbp-B8h]
  int v26; // [rsp+50h] [rbp-B0h]
  _OWORD *v27; // [rsp+58h] [rbp-A8h]
  __int64 v28; // [rsp+60h] [rbp-A0h]
  _QWORD v29[2]; // [rsp+70h] [rbp-90h] BYREF
  int v30; // [rsp+80h] [rbp-80h]
  int v31; // [rsp+84h] [rbp-7Ch]
  __int128 v32; // [rsp+88h] [rbp-78h]
  __int128 v33; // [rsp+98h] [rbp-68h]
  __int128 v34; // [rsp+A8h] [rbp-58h]
  __int64 v35; // [rsp+B8h] [rbp-48h]
  __int64 v36; // [rsp+C0h] [rbp-40h]
  int v37; // [rsp+C8h] [rbp-38h]
  int v38; // [rsp+CCh] [rbp-34h]
  _OWORD v39[2]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v40; // [rsp+F0h] [rbp-10h]
  int v41; // [rsp+F8h] [rbp-8h]

  v8 = *(_QWORD *)(*(_QWORD *)(a1 + 160) + 8LL * *(_QWORD *)(a1 + 168) - 8);
  v28 = v8;
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  v9 = 4;
  if ( (unsigned int)(a3 - 1) > 2 )
    v9 = 0;
  if ( (*(_BYTE *)(a1 + 204) & 2) != 0
    || (IsDeferredPositionValid = CImmersiveApp::CImmersiveWindowCollection::CAppLocalCache::IsDeferredPositionValid((CImmersiveApp::CImmersiveWindowCollection::CAppLocalCache *)a1),
        v11 = 0,
        !IsDeferredPositionValid) )
  {
    v11 = 8;
  }
  v12 = *(_OWORD *)(a1 + 72);
  v39[0] = v12;
  v13 = *(_OWORD *)(a1 + 88);
  v39[1] = v13;
  v14 = *(_QWORD *)(a1 + 104);
  v40 = v14;
  v41 = *(_DWORD *)(a1 + 112);
  v22 = 0LL;
  if ( a4 )
  {
    v15 = *(_QWORD *)(a1 + 152);
    v23 = (v11 != 8) | v9;
    v24 = a1 + 16;
    v25 = (v15 + 112) & -(__int64)(v15 != 0);
    v26 = v11;
    v27 = v39;
    Instance = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)a4 + 200LL))(a4, &v23);
    if ( Instance < 0 )
      goto LABEL_18;
    Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)&v22, a4);
  }
  else
  {
    v17 = *(_QWORD *)(a1 + 152);
    v29[0] = 0LL;
    v29[1] = a2;
    v30 = 1;
    v31 = 1;
    v32 = *(_OWORD *)(a1 + 16);
    v33 = v12;
    v34 = v13;
    v35 = v14;
    v36 = (v17 + 112) & -(__int64)(v17 != 0);
    v37 = 0;
    v38 = v11;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v22);
    Instance = CTaskWindow::s_CreateInstance((const struct TASKWINDOW_INIT_DATA *const)v29, v18, (void **)&v22);
    if ( Instance < 0 )
      goto LABEL_18;
  }
  Instance = CImmersiveApp::CImmersiveWindowCollection::_InsertWindow((CSplashScreen **)a1, v22, *(_QWORD *)(a1 + 168));
  if ( Instance >= 0 && ((a3 - 1) & 0xFFFFFFFD) == 0 )
  {
    if ( BYTE4(CApplicationManagerUtility::g_pIAMGlobals[13].Ptr) )
    {
      (*(void (__fastcall **)(struct ITaskWindow *, bool))(*(_QWORD *)v22 + 160LL))(v22, a3 != 1);
      if ( (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 1) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
      {
        v19 = (*(__int64 (__fastcall **)(struct ITaskWindow *))(*(_QWORD *)v22 + 32LL))(v22);
        WPP_SF_qd(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
          0x12u,
          &WPP_9b7d568634ab3ac73462613a22000263_Traceguids,
          v19,
          a3 != 1);
      }
    }
  }
LABEL_18:
  v20 = v22;
  if ( v22 )
  {
    v22 = 0LL;
    (*(void (__fastcall **)(struct ITaskWindow *))(*(_QWORD *)v20 + 16LL))(v20);
  }
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  return (unsigned int)Instance;
}
