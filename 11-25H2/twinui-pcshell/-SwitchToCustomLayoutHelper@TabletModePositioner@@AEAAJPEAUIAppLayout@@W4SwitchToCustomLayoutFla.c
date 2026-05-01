/*
 * XREFs of ?SwitchToCustomLayoutHelper@TabletModePositioner@@AEAAJPEAUIAppLayout@@W4SwitchToCustomLayoutFlags@@@Z @ 0x1804FB93C
 * Callers:
 *     ?ControlGained@TabletModePositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@@Z @ 0x1804F51D0 (-ControlGained@TabletModePositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknow.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z @ 0x1804F4474 (-ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z.c)
 *     ?InitLayoutOperationHelper@TabletModePositioner@@AEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x1804F7454 (-InitLayoutOperationHelper@TabletModePositioner@@AEAAJAEBU_GUID@@0PEAPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TabletModePositioner::SwitchToCustomLayoutHelper(IUnknown *a1, __int64 a2)
{
  int inited; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IUnknown *v9; // [rsp+48h] [rbp+20h] BYREF

  v9 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v9);
  inited = TabletModePositioner::InitLayoutOperationHelper(
             a1,
             &CLSID_TabletModePositionerOperation,
             &GUID_ef9dff78_5b41_4081_a5aa_407c9421d1b6,
             (void **)&v9);
  v5 = inited;
  if ( inited >= 0 )
  {
    inited = ((__int64 (__fastcall *)(struct IUnknown *, __int64, __int64))v9->lpVtbl[2].AddRef)(v9, a2, 4LL);
    v5 = inited;
    if ( inited >= 0 )
    {
      inited = TabletModePositioner::ApplyLayoutOperationHelper((TabletModePositioner *)a1, v9);
      v5 = inited;
      if ( inited >= 0 )
      {
        v5 = 0;
        goto LABEL_9;
      }
      v6 = 2707LL;
    }
    else
    {
      v6 = 2706LL;
    }
  }
  else
  {
    v6 = 2705LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
    (const char *)(unsigned int)inited);
LABEL_9:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v9);
  return v5;
}
