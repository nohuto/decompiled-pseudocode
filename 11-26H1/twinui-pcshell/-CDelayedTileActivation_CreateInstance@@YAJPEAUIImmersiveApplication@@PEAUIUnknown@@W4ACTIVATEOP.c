/*
 * XREFs of ?CDelayedTileActivation_CreateInstance@@YAJPEAUIImmersiveApplication@@PEAUIUnknown@@W4ACTIVATEOPTIONSINTERNAL@@AEBU_GUID@@PEAPEAX@Z @ 0x1804E84F4
 * Callers:
 *     ?_SwitchToApp@CSwitchController@@AEAAJAEAUActivationData@1@@Z @ 0x1801D2288 (-_SwitchToApp@CSwitchController@@AEAAJAEAUActivationData@1@@Z.c)
 *     ?RelaunchApp@CSwitchController@@UEAAJPEAUIImmersiveApplication@@PEAUISplashScreen@@@Z @ 0x1804E6C20 (-RelaunchApp@CSwitchController@@UEAAJPEAUIImmersiveApplication@@PEAUISplashScreen@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VPrivilegedWindowOwnershipOperations@@@WRL@Microsoft@@IEAAKXZ @ 0x180080E24 (-InternalRelease@-$ComPtr@VPrivilegedWindowOwnershipOperations@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIDelayedAppActivation@@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIDelayedAppActivation@@VFtmBase@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x180214730 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIDelayedAppActi.c)
 *     ??$MakeAndInitialize@VCDelayedTileActivation@@V1@AEAPEAUIImmersiveApplication@@AEAPEAUIUnknown@@AEAW4ACTIVATEOPTIONSINTERNAL@@@Details@WRL@Microsoft@@YAJPEAPEAVCDelayedTileActivation@@AEAPEAUIImmersiveApplication@@AEAPEAUIUnknown@@AEAW4ACTIVATEOPTIONSINTERNAL@@@Z @ 0x1804E7D38 (--$MakeAndInitialize@VCDelayedTileActivation@@V1@AEAPEAUIImmersiveApplication@@AEAPEAUIUnknown@@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDelayedTileActivation_CreateInstance(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        _QWORD *a5)
{
  _QWORD *v5; // rdi
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  _QWORD v10[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF
  unsigned int v13; // [rsp+50h] [rbp+18h] BYREF
  volatile int *v14; // [rsp+58h] [rbp+20h] BYREF

  v13 = a3;
  v12 = a1;
  v10[0] = 0LL;
  v5 = a5;
  *a5 = 0LL;
  v14 = 0LL;
  Microsoft::WRL::ComPtr<PrivilegedWindowOwnershipOperations>::InternalRelease(&v14);
  v6 = Microsoft::WRL::Details::MakeAndInitialize<CDelayedTileActivation,CDelayedTileActivation,IImmersiveApplication * &,IUnknown * &,enum ACTIVATEOPTIONSINTERNAL &>(
         &v14,
         &v12,
         v10,
         &v13);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 283LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"pcshell\\twinui\\apppositioner\\lib\\delayedappactivation.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_6;
  }
  v6 = Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IDelayedAppActivation,Microsoft::WRL::FtmBase>>(
         (__int64)v14,
         &GUID_688a9333_462e_4715_9651_62bb62432419,
         v5);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 284LL;
    goto LABEL_5;
  }
LABEL_6:
  Microsoft::WRL::ComPtr<PrivilegedWindowOwnershipOperations>::InternalRelease(&v14);
  return v7;
}
