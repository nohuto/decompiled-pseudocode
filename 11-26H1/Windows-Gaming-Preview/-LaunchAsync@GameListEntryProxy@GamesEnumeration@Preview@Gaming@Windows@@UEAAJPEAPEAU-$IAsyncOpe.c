/*
 * XREFs of ?LaunchAsync@GameListEntryProxy@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAU?$IAsyncOperation@_N@Foundation@5@@Z @ 0x18002B5D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008DD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIVectorStatics@Detail@Collections@Foundation@Windows@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIVectorStatics@Detail@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18000C080 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIVectorStatics@Detail@Collections@Foundation@Windows@@@WRL@Mic.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800109DC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryProxy::LaunchAsync(__int64 a1, __int64 a2)
{
  __int64 *v4; // r8
  unsigned int v5; // ebx
  HRESULT v6; // eax
  int v7; // eax
  IUnknown *v8; // rcx
  IUnknown *v9; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  IUnknown *pUnk; // [rsp+30h] [rbp+8h] BYREF

  pUnk = 0LL;
  v4 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::Detail::IVectorStatics>>((__int64 *)&pUnk);
  *v4 = 0LL;
  if ( *(_QWORD *)(a1 + 96) )
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD, GUID *, __int64 *))(**(_QWORD **)(a1 + 96) + 24LL))(
           *(_QWORD *)(a1 + 96),
           &GUID_735924d3_811f_4494_b69c_c641a0c61543,
           v4);
    if ( (v5 & 0x80000000) == 0 )
    {
      v6 = CoAllowSetForegroundWindow(pUnk, 0LL);
      if ( v6 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x4D,
          (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
          (const char *)(unsigned int)v6);
      v7 = ((__int64 (__fastcall *)(IUnknown *, __int64))pUnk->lpVtbl[2].AddRef)(pUnk, a2);
      v5 = v7;
      if ( v7 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x4F,
          (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
          (const char *)(unsigned int)v7);
      v8 = pUnk;
      if ( pUnk )
      {
        pUnk = 0LL;
        ((void (__fastcall *)(IUnknown *))v8->lpVtbl->Release)(v8);
      }
      return v5;
    }
  }
  else
  {
    v5 = -2147467259;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x46,
    (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
    (const char *)v5);
  v9 = pUnk;
  if ( pUnk )
  {
    pUnk = 0LL;
    ((void (__fastcall *)(IUnknown *))v9->lpVtbl->Release)(v9);
  }
  return v5;
}
