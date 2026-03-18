/*
 * XREFs of UserSetWindowedSwapChain @ 0x140172368
 * Callers:
 *     UserSetWindowedSwapChainApiExt @ 0x140172350 (UserSetWindowedSwapChainApiExt.c)
 * Callees:
 *     CreateVisRgnTracker @ 0x14005B558 (CreateVisRgnTracker.c)
 *     ?SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z @ 0x14005BE20 (-SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z.c)
 *     ??$GetProp@VCSwapChainProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCSwapChainProp@@@Z @ 0x140172684 (--$GetProp@VCSwapChainProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCSwapChainProp@@@Z.c)
 *     ?ClearCompositionSurfaceObj@CSwapChainProp@@QEAAHXZ @ 0x1401726D4 (-ClearCompositionSurfaceObj@CSwapChainProp@@QEAAHXZ.c)
 *     ?CreateSwapChainProp@CSwapChainProp@@SAHPEAXPEAPEAV1@@Z @ 0x14017340C (-CreateSwapChainProp@CSwapChainProp@@SAHPEAXPEAPEAV1@@Z.c)
 *     ?NotifyDwm@CSwapChainProp@@QEAAHQEAUtagWND@@@Z @ 0x1402C0AA0 (-NotifyDwm@CSwapChainProp@@QEAAHQEAUtagWND@@@Z.c)
 *     ?SetCompositionSurfaceObj@CSwapChainProp@@QEAAXPEAX@Z @ 0x1402C0B70 (-SetCompositionSurfaceObj@CSwapChainProp@@QEAAXPEAX@Z.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall UserSetWindowedSwapChain(__int64 a1, int a2, __int64 a3)
{
  unsigned int v6; // edi
  __int64 v7; // rax
  __int64 v8; // rcx
  struct tagWND *v9; // rsi
  int v10; // eax
  __int64 v11; // r9
  int v12; // r14d
  CSwapChainProp *v13; // rbx
  void *v14; // rbp
  int VisRgnTracker; // eax
  void *v17; // [rsp+30h] [rbp-38h] BYREF
  CSwapChainProp *v18; // [rsp+88h] [rbp+20h] BYREF

  v17 = 0LL;
  v18 = 0LL;
  v6 = 0;
  EnterCrit(1LL, 0LL);
  v7 = ValidateHwnd(a1);
  v9 = (struct tagWND *)v7;
  if ( !v7 )
    goto LABEL_13;
  v8 = *(_QWORD *)(v7 + 40);
  if ( (((*(_WORD *)(v8 + 42) & 0x2FFF) - 669) & 0xFFFFFFFD) == 0 )
    goto LABEL_13;
  if ( *(char *)(v8 + 19) < 0 )
    goto LABEL_13;
  if ( *(char *)(v8 + 20) < 0 )
    goto LABEL_13;
  if ( *(__int16 *)(v8 + 42) < 0 )
    goto LABEL_13;
  v8 = *(_QWORD *)(v7 + 16);
  if ( v8 )
  {
    if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v8 + 528), 0, 0) & 1) != 0 )
      goto LABEL_13;
  }
  v10 = IsWindowDesktopComposed(v7);
  LOBYTE(v11) = 1;
  v12 = v10;
  if ( (int)DxgkReferenceCompositionObject(a3, 1LL, 1LL, v11, &v17) < 0 )
    goto LABEL_13;
  CWindowProp::GetProp<CSwapChainProp>(v9, &v18);
  v13 = v18;
  if ( !v18 )
  {
    if ( !(unsigned int)CSwapChainProp::CreateSwapChainProp(v17, &v18) )
      goto LABEL_13;
    v13 = v18;
    v6 = CWindowProp::SetProp(v18, (unsigned __int64)v9);
    if ( !v6 || (VisRgnTracker = CreateVisRgnTracker(v9, 2), v6 = VisRgnTracker >= 0, VisRgnTracker < 0) )
    {
      (**(void (__fastcall ***)(CSwapChainProp *))v13)(v13);
      goto LABEL_13;
    }
    goto LABEL_15;
  }
  v14 = v17;
  if ( *((void **)v18 + 3) == v17 )
  {
    *((_DWORD *)v18 + 8) = 0;
    v6 = 1;
    DxgkReleaseCompositionObjectReference(v17);
    goto LABEL_13;
  }
  if ( a2 || *((_DWORD *)v18 + 8) )
  {
    CSwapChainProp::ClearCompositionSurfaceObj(v18);
    CSwapChainProp::SetCompositionSurfaceObj(v13, v14);
    *((_DWORD *)v13 + 8) = 0;
    v6 = 1;
LABEL_15:
    if ( v12 )
      v6 = CSwapChainProp::NotifyDwm(v13, v9);
  }
LABEL_13:
  UserSessionSwitchLeaveCrit(v8);
  return v6;
}
