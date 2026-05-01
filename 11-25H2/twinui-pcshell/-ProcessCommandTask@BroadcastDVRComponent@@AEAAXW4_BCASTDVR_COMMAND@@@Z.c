/*
 * XREFs of ?ProcessCommandTask@BroadcastDVRComponent@@AEAAXW4_BCASTDVR_COMMAND@@@Z @ 0x1800B1750
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b70c5209c5676cb8296daabd8d05eee7___::Run @ 0x1802C17A0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_b70c5209c5676cb8296daabd8d05eee7___--Run.c)
 *     ?ProcessShowBroadcastUIForDeveloperTask@BroadcastDVRComponent@@AEAAXK@Z @ 0x18031788C (-ProcessShowBroadcastUIForDeveloperTask@BroadcastDVRComponent@@AEAAXK@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180029A94 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@QEBG@Z @ 0x18002A5E8 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@QEBG@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A540 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?BroadcastDVRComponent_ProcessCommandTask@GameDVRTraceProvider@@SAXIPEBG@Z @ 0x1800B1A50 (-BroadcastDVRComponent_ProcessCommandTask@GameDVRTraceProvider@@SAXIPEBG@Z.c)
 *     ?MapCommandToString@BroadcastDVRComponent@@AEAAPEBGW4_BCASTDVR_COMMAND@@@Z @ 0x1800B1B68 (-MapCommandToString@BroadcastDVRComponent@@AEAAPEBGW4_BCASTDVR_COMMAND@@@Z.c)
 *     ?SendShellNotificationToDVR@BroadcastDVRComponent@@QEAAJW4ShellNotificationType@Internal@Capture@Media@Windows@@PEAUHWND__@@K_NPEA_NPEAUBroadcastDVRActiveAppInfo@@@Z @ 0x1800B2D18 (-SendShellNotificationToDVR@BroadcastDVRComponent@@QEAAJW4ShellNotificationType@Internal@Capture.c)
 *     ?EvaluateIfViewIsGame@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@PEAUGameConfigInfo@@PEA_NPEAPEAUHWND__@@3AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1800B4F1C (-EvaluateIfViewIsGame@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@PEAUGameConfigInfo@@PEA_.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800EDA04 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall BroadcastDVRComponent::ProcessCommandTask(__int64 a1, signed int a2)
{
  __int64 v4; // rsi
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // r14
  std::_Ref_count_base *v8; // r15
  const unsigned __int16 *v9; // rax
  HWND DesktopWindow; // r10
  HWND v11; // r11
  int v12; // eax
  int v13; // ecx
  unsigned int v14; // esi
  unsigned int v15; // r12d
  bool v16; // zf
  int v17; // r9d
  int v18; // ecx
  int v19; // r8d
  int v20; // edx
  LONG WindowLongW; // eax
  int v22; // edi
  int v23; // edi
  int v24; // edi
  int v25; // edi
  int v26; // edi
  int v27; // edi
  int v28; // edi
  int v29; // [rsp+20h] [rbp-40h]
  __int64 v30; // [rsp+40h] [rbp-20h] BYREF
  __int64 v31[3]; // [rsp+48h] [rbp-18h] BYREF
  bool v32; // [rsp+A0h] [rbp+40h] BYREF
  void *Src; // [rsp+B0h] [rbp+50h] BYREF
  __int64 v34; // [rsp+B8h] [rbp+58h] BYREF

  v4 = *(_QWORD *)(a1 + 304);
  v5 = v4;
  v31[0] = v4;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  v6 = *(_QWORD *)(a1 + 320);
  if ( v6 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
    v5 = v31[0];
  }
  v7 = *(_QWORD *)(a1 + 312);
  v31[1] = v7;
  v8 = *(std::_Ref_count_base **)(a1 + 320);
  v31[2] = (__int64)v8;
  v34 = 0LL;
  v30 = 0LL;
  v9 = (const unsigned __int16 *)BroadcastDVRComponent::MapCommandToString(a1, (unsigned int)a2);
  GameDVRTraceProvider::BroadcastDVRComponent_ProcessCommandTask(a2, v9);
  if ( v4 )
  {
    if ( *(_BYTE *)(v7 + 17) )
    {
LABEL_28:
      if ( v8 )
        std::_Ref_count_base::_Decref(v8);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v31);
      return;
    }
    if ( !*(_QWORD *)v7 )
    {
      v32 = 0;
      Src = 0LL;
      BroadcastDVRComponent::EvaluateIfViewIsGame(a1, v5, v7 + 16, &v32, &v34, &v30, &Src);
      *(_QWORD *)v7 = v34;
      *(_QWORD *)(v7 + 8) = v30;
      if ( Src )
        std::wstring::operator=((void **)(v7 + 72), Src);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&Src);
    }
    DesktopWindow = *(HWND *)v7;
    Src = *(void **)v7;
    v11 = *(HWND *)(v7 + 8);
    v17 = *(_DWORD *)(v7 + 56);
    v32 = (v17 & 2) != 0;
    v18 = (*(_BYTE *)(v7 + 16) != 0) | 0x40;
    if ( !*(_BYTE *)(v7 + 18) )
      v18 = *(_BYTE *)(v7 + 16) != 0;
    v19 = v18 | 2;
    if ( (v17 & 8) == 0 )
      v19 = v18;
    v14 = 16;
    v20 = v19 | 4;
    if ( (v17 & 0x10) == 0 )
      v20 = v19;
    v13 = v20 | 8;
    if ( (v17 & 0x20) == 0 )
      v13 = v20;
    v15 = v13 | 0x10;
    v16 = (v17 & 0x40) == 0;
  }
  else
  {
    DesktopWindow = GetDesktopWindow();
    Src = DesktopWindow;
    v11 = DesktopWindow;
    v32 = 1;
    v12 = (*(_BYTE *)(a1 + 449) != 0 ? 98 : 96) | 4;
    if ( !*(_BYTE *)(a1 + 450) )
      v12 = *(_BYTE *)(a1 + 449) != 0 ? 98 : 96;
    v13 = v12 | 8;
    if ( !*(_BYTE *)(a1 + 451) )
      v13 = v12;
    v14 = 16;
    v15 = v13 | 0x10;
    v16 = *(_BYTE *)(a1 + 452) == 0;
  }
  if ( v16 )
    v15 = v13;
  if ( !DesktopWindow )
    goto LABEL_28;
  WindowLongW = GetWindowLongW(v11, -16);
  if ( WindowLongW && (WindowLongW & 0x20000000) == 0 )
  {
    if ( a2 > 5 )
    {
      v25 = a2 - 6;
      if ( !v25 )
      {
        v14 = 20;
        goto LABEL_55;
      }
      v26 = v25 - 1;
      if ( !v26 )
      {
        v14 = 21;
        goto LABEL_55;
      }
      v27 = v26 - 1;
      if ( !v27 )
      {
        v14 = 22;
        goto LABEL_55;
      }
      v28 = v27 - 1;
      if ( !v28 )
      {
        v14 = 23;
        goto LABEL_55;
      }
      if ( v28 == 1 )
      {
        v14 = 25;
        goto LABEL_55;
      }
    }
    else
    {
      if ( a2 == 5 )
      {
        v14 = 19;
        goto LABEL_55;
      }
      if ( !a2 )
      {
        v14 = 14;
        goto LABEL_55;
      }
      v22 = a2 - 1;
      if ( !v22 )
      {
        v14 = 15;
        goto LABEL_55;
      }
      v23 = v22 - 1;
      if ( !v23 )
      {
LABEL_55:
        LOBYTE(v29) = 0;
        BroadcastDVRComponent::SendShellNotificationToDVR(a1, v14, Src, v15, v29, &v32, 0LL);
        if ( v32 && v7 )
          *(_DWORD *)(v7 + 56) |= 2u;
        goto LABEL_58;
      }
      v24 = v23 - 1;
      if ( !v24 )
      {
        v14 = 17;
        goto LABEL_55;
      }
      if ( v24 == 1 )
      {
        v14 = 18;
        goto LABEL_55;
      }
    }
  }
LABEL_58:
  if ( v8 )
    std::_Ref_count_base::_Decref(v8);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
}
