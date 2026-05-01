/*
 * XREFs of ?OnApplicationViewChanged@JointResize@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180516200
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A540 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18006C670 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?OnArrangedWindowBorderExit@JointResize@@AEAAXXZ @ 0x18017D0A8 (-OnArrangedWindowBorderExit@JointResize@@AEAAXXZ.c)
 *     ?OnArrangedWindowJointResizeCompleted@JointResize@@AEAAJPEBUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@UArrangedWindowJointResizeCompletedEventArgs@3456@@Z @ 0x180516360 (-OnArrangedWindowJointResizeCompleted@JointResize@@AEAAJPEBUIWindowManagementEvents2@WindowManag.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall JointResize::OnApplicationViewChanged(__int64 a1, struct IUnknown *a2, int a3)
{
  int v5; // r8d
  bool v6; // r15
  HWND ForegroundWindow; // r12
  __int64 v8; // rdi
  int (__fastcall *v9)(__int64, HWND, struct IUnknown **); // rbx
  JointResize *v10; // rcx
  struct IUnknown **v11; // rbx
  struct IUnknown **v12; // r15
  struct IUnknown *v14[2]; // [rsp+20h] [rbp-10h] BYREF

  v5 = a3 - 1;
  if ( v5 )
  {
    if ( v5 == 8 && *(_BYTE *)(a1 + 184) && SHIsSameObject(a2, *(struct IUnknown **)(a1 + 112)) )
    {
      v6 = 1;
      ForegroundWindow = GetForegroundWindow();
      if ( !ForegroundWindow )
        goto LABEL_9;
      v14[0] = 0LL;
      v8 = *(_QWORD *)(a1 + 48);
      v9 = *(int (__fastcall **)(__int64, HWND, struct IUnknown **))(*(_QWORD *)v8 + 32LL);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v14);
      if ( v9(v8, ForegroundWindow, v14) >= 0 )
        v6 = !SHIsSameObject(v14[0], *(struct IUnknown **)(a1 + 112));
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v14);
      if ( v6 )
      {
LABEL_9:
        v10 = (JointResize *)(a1 - 96);
LABEL_16:
        v14[0] = 0LL;
        LOBYTE(v14[1]) = 0;
        *(_DWORD *)((char *)&v14[1] + 1) = 0;
        *(_WORD *)((char *)&v14[1] + 5) = 0;
        HIBYTE(v14[1]) = 0;
        JointResize::OnArrangedWindowJointResizeCompleted(v10, 0LL, v14);
      }
    }
  }
  else
  {
    if ( SHIsSameObject(a2, *(struct IUnknown **)(a1 + 112)) )
    {
LABEL_15:
      v10 = (JointResize *)(a1 - 96);
      if ( !*(_BYTE *)(a1 + 184) )
      {
        JointResize::OnArrangedWindowBorderExit(v10);
        return 0LL;
      }
      goto LABEL_16;
    }
    v11 = *(struct IUnknown ***)(a1 + 120);
    v12 = *(struct IUnknown ***)(a1 + 128);
    while ( v11 != v12 )
    {
      if ( SHIsSameObject(a2, *v11) )
        goto LABEL_15;
      v11 += 12;
    }
  }
  return 0LL;
}
