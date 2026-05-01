/*
 * XREFs of ?ProcessCommandTask@BroadcastDVRComponent@@AEAAXW4_BCASTDVR_COMMAND@@@Z @ 0x1800C5CA0
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b70c5209c5676cb8296daabd8d05eee7___::Run @ 0x1802B8CA0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_b70c5209c5676cb8296daabd8d05eee7___--Run.c)
 *     ?ProcessShowBroadcastUIForDeveloperTask@BroadcastDVRComponent@@AEAAXK@Z @ 0x180313A3C (-ProcessShowBroadcastUIForDeveloperTask@BroadcastDVRComponent@@AEAAXK@Z.c)
 * Callees:
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@QEBG@Z @ 0x180030514 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@QEBG@Z.c)
 *     ?EvaluateIfViewIsGame@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@PEAUGameConfigInfo@@PEA_NPEAPEAUHWND__@@3AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x180034F30 (-EvaluateIfViewIsGame@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@PEAUGameConfigInfo@@PEA_.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800373AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?BroadcastDVRComponent_ProcessCommandTask@GameDVRTraceProvider@@SAXIPEBG@Z @ 0x1800C5F98 (-BroadcastDVRComponent_ProcessCommandTask@GameDVRTraceProvider@@SAXIPEBG@Z.c)
 *     ?MapCommandToString@BroadcastDVRComponent@@AEAAPEBGW4_BCASTDVR_COMMAND@@@Z @ 0x1800C60B4 (-MapCommandToString@BroadcastDVRComponent@@AEAAPEBGW4_BCASTDVR_COMMAND@@@Z.c)
 *     ?SendShellNotificationToDVR@BroadcastDVRComponent@@QEAAJW4ShellNotificationType@Internal@Capture@Media@Windows@@PEAUHWND__@@K_NPEA_NPEAUBroadcastDVRActiveAppInfo@@@Z @ 0x1800C708C (-SendShellNotificationToDVR@BroadcastDVRComponent@@QEAAJW4ShellNotificationType@Internal@Capture.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800F7C64 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall BroadcastDVRComponent::ProcessCommandTask(__int64 a1, signed int a2)
{
  _QWORD **v4; // rbx
  __int64 v5; // rax
  __int64 v6; // r14
  std::_Ref_count_base *v7; // r15
  const unsigned __int16 *v8; // rax
  HWND DesktopWindow; // r10
  HWND v10; // r11
  int v11; // eax
  int v12; // ecx
  unsigned int v13; // esi
  unsigned int v14; // r12d
  bool v15; // zf
  int v16; // r9d
  int v17; // ecx
  int v18; // r8d
  int v19; // edx
  LONG WindowLongW; // eax
  int v21; // edi
  int v22; // edi
  int v23; // edi
  int v24; // edi
  int v25; // edi
  int v26; // edi
  int v27; // edi
  int v28; // [rsp+20h] [rbp-40h]
  void *v29; // [rsp+40h] [rbp-20h] BYREF
  __int64 v30[3]; // [rsp+48h] [rbp-18h] BYREF
  bool v31; // [rsp+A0h] [rbp+40h] BYREF
  void *Src; // [rsp+B0h] [rbp+50h] BYREF
  HWND v33; // [rsp+B8h] [rbp+58h] BYREF

  v4 = *(_QWORD ***)(a1 + 304);
  v30[0] = (__int64)v4;
  if ( v4 )
    ((void (__fastcall *)(_QWORD **))(*v4)[1])(v4);
  v5 = *(_QWORD *)(a1 + 320);
  if ( v5 )
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
  v6 = *(_QWORD *)(a1 + 312);
  v30[1] = v6;
  v7 = *(std::_Ref_count_base **)(a1 + 320);
  v30[2] = (__int64)v7;
  v33 = 0LL;
  v29 = 0LL;
  v8 = (const unsigned __int16 *)BroadcastDVRComponent::MapCommandToString(a1, (unsigned int)a2);
  GameDVRTraceProvider::BroadcastDVRComponent_ProcessCommandTask(a2, v8);
  if ( v4 )
  {
    if ( *(_BYTE *)(v6 + 17) )
    {
LABEL_28:
      if ( v7 )
        std::_Ref_count_base::_Decref(v7);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v30);
      return;
    }
    if ( !*(_QWORD *)v6 )
    {
      v31 = 0;
      Src = 0LL;
      BroadcastDVRComponent::EvaluateIfViewIsGame(a1, v4, v6 + 16, (char *)&v31, &v33, &v29, &Src);
      *(_QWORD *)v6 = v33;
      *(_QWORD *)(v6 + 8) = v29;
      if ( Src )
        std::wstring::operator=((char *)(v6 + 72), Src);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&Src);
    }
    DesktopWindow = *(HWND *)v6;
    Src = *(void **)v6;
    v10 = *(HWND *)(v6 + 8);
    v16 = *(_DWORD *)(v6 + 56);
    v31 = (v16 & 2) != 0;
    v17 = (*(_BYTE *)(v6 + 16) != 0) | 0x40;
    if ( !*(_BYTE *)(v6 + 18) )
      v17 = *(_BYTE *)(v6 + 16) != 0;
    v18 = v17 | 2;
    if ( (v16 & 8) == 0 )
      v18 = v17;
    v13 = 16;
    v19 = v18 | 4;
    if ( (v16 & 0x10) == 0 )
      v19 = v18;
    v12 = v19 | 8;
    if ( (v16 & 0x20) == 0 )
      v12 = v19;
    v14 = v12 | 0x10;
    v15 = (v16 & 0x40) == 0;
  }
  else
  {
    DesktopWindow = GetDesktopWindow();
    Src = DesktopWindow;
    v10 = DesktopWindow;
    v31 = 1;
    v11 = (*(_BYTE *)(a1 + 449) != 0 ? 98 : 96) | 4;
    if ( !*(_BYTE *)(a1 + 450) )
      v11 = *(_BYTE *)(a1 + 449) != 0 ? 98 : 96;
    v12 = v11 | 8;
    if ( !*(_BYTE *)(a1 + 451) )
      v12 = v11;
    v13 = 16;
    v14 = v12 | 0x10;
    v15 = *(_BYTE *)(a1 + 452) == 0;
  }
  if ( v15 )
    v14 = v12;
  if ( !DesktopWindow )
    goto LABEL_28;
  WindowLongW = GetWindowLongW(v10, -16);
  if ( WindowLongW && (WindowLongW & 0x20000000) == 0 )
  {
    if ( a2 > 5 )
    {
      v24 = a2 - 6;
      if ( !v24 )
      {
        v13 = 20;
        goto LABEL_55;
      }
      v25 = v24 - 1;
      if ( !v25 )
      {
        v13 = 21;
        goto LABEL_55;
      }
      v26 = v25 - 1;
      if ( !v26 )
      {
        v13 = 22;
        goto LABEL_55;
      }
      v27 = v26 - 1;
      if ( !v27 )
      {
        v13 = 23;
        goto LABEL_55;
      }
      if ( v27 == 1 )
      {
        v13 = 25;
        goto LABEL_55;
      }
    }
    else
    {
      if ( a2 == 5 )
      {
        v13 = 19;
        goto LABEL_55;
      }
      if ( !a2 )
      {
        v13 = 14;
        goto LABEL_55;
      }
      v21 = a2 - 1;
      if ( !v21 )
      {
        v13 = 15;
        goto LABEL_55;
      }
      v22 = v21 - 1;
      if ( !v22 )
      {
LABEL_55:
        LOBYTE(v28) = 0;
        BroadcastDVRComponent::SendShellNotificationToDVR(a1, v13, Src, v14, v28, &v31, 0LL);
        if ( v31 && v6 )
          *(_DWORD *)(v6 + 56) |= 2u;
        goto LABEL_58;
      }
      v23 = v22 - 1;
      if ( !v23 )
      {
        v13 = 17;
        goto LABEL_55;
      }
      if ( v23 == 1 )
      {
        v13 = 18;
        goto LABEL_55;
      }
    }
  }
LABEL_58:
  if ( v7 )
    std::_Ref_count_base::_Decref(v7);
  if ( v4 )
    ((void (__fastcall *)(_QWORD **))(*v4)[2])(v4);
}
