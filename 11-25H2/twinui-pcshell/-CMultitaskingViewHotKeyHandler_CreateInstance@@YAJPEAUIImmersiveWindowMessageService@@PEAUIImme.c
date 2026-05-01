/*
 * XREFs of ?CMultitaskingViewHotKeyHandler_CreateInstance@@YAJPEAUIImmersiveWindowMessageService@@PEAUIImmersiveMonitorManager@@PEAUIMultitaskingViewTaskScheduler@@PEAUIApplicationViewCollection@@AEBU_GUID@@PEAPEAX@Z @ 0x180201878
 * Callers:
 *     ?_CreateHotKeyHandler@CMultitaskingViewServiceProvider@@AEAAJXZ @ 0x18022C964 (-_CreateHotKeyHandler@CMultitaskingViewServiceProvider@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x18004F930 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ?InternalRelease@?$ComPtr@VPositionAdjustmentHistory@@@WRL@Microsoft@@IEAAKXZ @ 0x1801E61A8 (-InternalRelease@-$ComPtr@VPositionAdjustmentHistory@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMessageProxyReconnectAdapter@@UIMessageProxyListener@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801E61D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMessageProxyRec.c)
 *     ??$MakeAndInitialize@VCMultitaskingViewHotKeyHandler@@V1@AEAPEAUIImmersiveWindowMessageService@@AEAPEAUIImmersiveMonitorManager@@AEAPEAUIMultitaskingViewTaskScheduler@@AEAPEAUIApplicationViewCollection@@@Details@WRL@Microsoft@@YAJPEAPEAVCMultitaskingViewHotKeyHandler@@AEAPEAUIImmersiveWindowMessageService@@AEAPEAUIImmersiveMonitorManager@@AEAPEAUIMultitaskingViewTaskScheduler@@AEAPEAUIApplicationViewCollection@@@Z @ 0x1802BE73C (--$MakeAndInitialize@VCMultitaskingViewHotKeyHandler@@V1@AEAPEAUIImmersiveWindowMessageService@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CMultitaskingViewHotKeyHandler_CreateInstance(
        struct IImmersiveWindowMessageService *a1,
        struct IImmersiveMonitorManager *a2,
        struct IMultitaskingViewTaskScheduler *a3,
        struct IApplicationViewCollection *a4,
        const struct _GUID *a5,
        void **a6)
{
  void **v6; // rbx
  int v7; // eax
  unsigned int v8; // edi
  volatile int *v9; // rdx
  void **v10; // rcx
  const struct _GUID *v12; // rcx
  const struct _GUID *v13; // rcx
  void **v14; // rcx
  void *v15; // r8
  int v16; // ebx
  void **v17; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  struct IImmersiveWindowMessageService *v19; // [rsp+50h] [rbp+20h] BYREF
  struct IImmersiveMonitorManager *v20; // [rsp+58h] [rbp+28h] BYREF
  struct IMultitaskingViewTaskScheduler *v21; // [rsp+60h] [rbp+30h] BYREF
  struct IApplicationViewCollection *v22; // [rsp+68h] [rbp+38h] BYREF

  v22 = a4;
  v21 = a3;
  v20 = a2;
  v19 = a1;
  v6 = a6;
  *a6 = 0LL;
  a6 = 0LL;
  Microsoft::WRL::ComPtr<PositionAdjustmentHistory>::InternalRelease((__int64 *)&a6);
  v7 = Microsoft::WRL::Details::MakeAndInitialize<CMultitaskingViewHotKeyHandler,CMultitaskingViewHotKeyHandler,IImmersiveWindowMessageService * &,IImmersiveMonitorManager * &,IMultitaskingViewTaskScheduler * &,IApplicationViewCollection * &>(
         (unsigned int)&a6,
         (unsigned int)&v19,
         (unsigned int)&v20,
         (unsigned int)&v21,
         (__int64)&v22);
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x106,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewhotkeyhandler.cpp",
      (const char *)(unsigned int)v7);
    v10 = a6;
    if ( a6 )
    {
      a6 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IMessageProxyReconnectAdapter,IMessageProxyListener>::Release(
        (__int64)v10,
        v9);
    }
    return v8;
  }
  *v6 = 0LL;
  if ( InlineIsEqualGUID(&GUID_1ac62032_7c9f_4d34_8191_c44d7d759dfe, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    v17 = a6;
    *v6 = a6;
    (*((void (__fastcall **)(void **))*v17 + 1))(v17);
    v16 = 0;
    goto LABEL_13;
  }
  if ( InlineIsEqualGUID(v12, v12) )
  {
    v14 = a6;
    *v6 = a6;
  }
  else
  {
    if ( !InlineIsEqualGUID(v13, &GUID_f4b0e171_08a9_413c_b179_71d7602d8ef0) )
    {
      v16 = -2147467262;
      goto LABEL_13;
    }
    *v6 = v15;
    v14 = (void **)v15;
  }
  v16 = 0;
  (*((void (__fastcall **)(void **))*v14 + 1))(v14);
LABEL_13:
  if ( v16 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x107,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewhotkeyhandler.cpp",
      (const char *)(unsigned int)v16);
  Microsoft::WRL::ComPtr<PositionAdjustmentHistory>::InternalRelease((__int64 *)&a6);
  return (unsigned int)v16;
}
