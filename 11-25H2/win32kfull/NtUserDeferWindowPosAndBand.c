/*
 * XREFs of NtUserDeferWindowPosAndBand @ 0x1402487D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140019B64 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     HMValidateHandleWithDescriptor @ 0x14007AE48 (HMValidateHandleWithDescriptor.c)
 *     DestroySMWP @ 0x1400C8060 (DestroySMWP.c)
 *     ?ValidateHWNDIA@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x14015C664 (-ValidateHWNDIA@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z.c)
 *     ?_DeferWindowPosAndBand@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@W4WindowBandOptions@@@Z @ 0x14015D154 (-_DeferWindowPosAndBand@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@W4WindowBandOptions@@@Z.c)
 *     ?ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x1401CC8EC (-ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z.c)
 *     ?TransformSWPCoords@@YAXPEAUtagWND@@PEAH111I@Z @ 0x1401EFF20 (-TransformSWPCoords@@YAXPEAUtagWND@@PEAH111I@Z.c)
 *     ?Arm@AtomicExecutionCheck@@QEAAXXZ @ 0x140271C68 (-Arm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     Feature_NoMoreSwpIamNotifyPosChanged__private_IsEnabledDeviceUsageNoInline @ 0x1402721FC (Feature_NoMoreSwpIamNotifyPosChanged__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall NtUserDeferWindowPosAndBand(
        __int64 a1,
        HWND a2,
        struct tagWND *a3,
        int a4,
        int a5,
        int a6,
        int a7,
        unsigned int a8,
        unsigned int a9,
        int a10)
{
  __int64 v12; // rbx
  int v13; // r15d
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 v16; // rdx
  unsigned int v17; // esi
  bool v18; // zf
  int v19; // ecx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rdi
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  struct tagWND *v27; // r14
  __int64 *v28; // rax
  __int64 v29; // rcx
  struct tagWND *v31; // [rsp+50h] [rbp-20h] BYREF
  struct tagWND *v32; // [rsp+58h] [rbp-18h] BYREF
  _BYTE v33[8]; // [rsp+60h] [rbp-10h] BYREF
  __int64 v34; // [rsp+68h] [rbp-8h]
  int v35; // [rsp+B8h] [rbp+48h] BYREF

  v35 = a4;
  v12 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  v13 = a4;
  EnterCrit(0LL, 0LL);
  v33[0] = 0;
  v34 = 0LL;
  AtomicExecutionCheck::Arm((AtomicExecutionCheck *)v33);
  IsEnabledDeviceUsageNoInline = Feature_NoMoreSwpIamNotifyPosChanged__private_IsEnabledDeviceUsageNoInline();
  v17 = a8;
  if ( IsEnabledDeviceUsageNoInline )
    v18 = (a8 & 0xFFFD9800) == 0;
  else
    v18 = (a8 & 0xFFFC9800) == 0;
  if ( !v18 )
  {
    v19 = 1004;
LABEL_5:
    UserSetLastError(v19);
    goto LABEL_20;
  }
  LOBYTE(v16) = 4;
  v20 = HMValidateHandleWithDescriptor(a1, v16);
  v22 = v20;
  if ( !v20 )
    goto LABEL_20;
  if ( (*(_DWORD *)(v20 + 24) & 4) != 0 )
  {
    if ( a10 )
      DestroySMWP(v20, v21);
    v19 = 1405;
    goto LABEL_5;
  }
  LOBYTE(v23) = ValidateHWNDND(a2, &v31);
  if ( v23 && (unsigned int)ValidateHWNDIA(a3, &v32) )
  {
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v25);
    v27 = v31;
    if ( (unsigned __int8)ShouldVirtualizeWindowRect(v31, CurrentThreadDpiAwarenessContext) )
    {
      TransformSWPCoords(v27, &v35, &a5, &a6, &a7, v17);
      v13 = v35;
    }
    v28 = (__int64 *)_DeferWindowPosAndBand(v22, (__int64)v27, v32, v13, a5, a6, a7, v17, a9, a10 != 0);
    if ( v28 )
      v12 = *v28;
  }
  else if ( a10 )
  {
    DestroySMWP(v22, v24);
  }
LABEL_20:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v33);
  UserSessionSwitchLeaveCrit(v29);
  return v12;
}
