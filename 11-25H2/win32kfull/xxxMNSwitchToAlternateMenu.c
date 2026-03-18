/*
 * XREFs of xxxMNSwitchToAlternateMenu @ 0x1402C07A4
 * Callers:
 *     xxxHandleMenuMessages @ 0x1400439DC (xxxHandleMenuMessages.c)
 *     xxxMNMouseMove @ 0x140044310 (xxxMNMouseMove.c)
 *     xxxMNChar @ 0x1402BF514 (xxxMNChar.c)
 *     xxxMNKeyDown @ 0x1402BFBCC (xxxMNKeyDown.c)
 *     xxxMNKeyFilter @ 0x1402EC7F8 (xxxMNKeyFilter.c)
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14002D198 (--0-$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x14002EA74 (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     xxxWindowEvent @ 0x14002EAB0 (xxxWindowEvent.c)
 *     xxxMNSelectItem @ 0x14003DFC0 (xxxMNSelectItem.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall xxxMNSwitchToAlternateMenu(__int64 **a1, __int64 a2)
{
  __int64 *v2; // rax
  __int64 v5; // rdx
  __int64 *v6; // rax
  __int64 v7; // rcx
  int v8; // edx
  __int64 v9; // rdx
  _QWORD v11[2]; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v12[2]; // [rsp+40h] [rbp-30h] BYREF
  _QWORD v13[2]; // [rsp+50h] [rbp-20h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+60h] [rbp-10h] BYREF
  __int64 v15; // [rsp+A0h] [rbp+30h] BYREF

  v2 = *a1;
  v15 = 0LL;
  if ( (*(_DWORD *)*v2 & 1) == 0 || !*(_QWORD *)(**a1 + 48) || (*(_DWORD *)**a1 & 0x8000) != 0 )
    return 0LL;
  if ( !*(_QWORD *)(**a1 + 16) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1061);
  if ( !a2 )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1063);
    return 0LL;
  }
  Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(BugCheckParameter3, *(_QWORD *)(**a1 + 8));
  xxxMNSelectItem(a1, a2, -1);
  if ( !*(_QWORD *)(**a1 + 48) || (*(_BYTE *)(_HMPheFromObject(*(_QWORD *)(**a1 + 48)) + 25) & 1) != 0 )
  {
    Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3, v5);
    return 0LL;
  }
  if ( !*(_QWORD *)(**a1 + 40)
    || *(_QWORD *)(*(_QWORD *)(**a1 + 40) + 80LL) != *(_QWORD *)(*(_QWORD *)(**a1 + 48) + 80LL) )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1084);
  }
  v6 = *a1;
  v11[0] = &v15;
  v11[1] = *(_QWORD *)(*v6 + 48);
  HMAssignmentLock(v11, 0LL);
  v7 = **a1 + 48;
  v12[1] = *(_QWORD *)(**a1 + 40);
  v12[0] = v7;
  HMAssignmentLock(v12, 0LL);
  v13[0] = **a1 + 40;
  v13[1] = v15;
  HMAssignmentLock(v13, 0LL);
  HMAssignmentUnlock(&v15);
  if ( !*(_QWORD *)(**a1 + 8) || (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(**a1 + 8) + 40LL) + 30LL) & 8) != 0 )
  {
    if ( *(_QWORD *)(**a1 + 8) && *(_QWORD *)(*(_QWORD *)(**a1 + 8) + 160LL) )
    {
      v8 = 0;
      if ( *(_QWORD *)(*(_QWORD *)(**a1 + 8) + 160LL) == *(_QWORD *)(**a1 + 40) )
        v8 = 2;
    }
    else
    {
      v8 = (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 40) + 40LL) + 40LL) >> 6) & 2;
    }
    *(_DWORD *)(a2 + 8) = *(_DWORD *)(a2 + 8) & 0xFFFFFFFD | v8;
  }
  else
  {
    *(_DWORD *)(a2 + 8) &= ~2u;
  }
  *(_DWORD *)**a1 ^= ((unsigned __int8)*(_DWORD *)**a1 ^ (unsigned __int8)(2 * *(_DWORD *)(a2 + 8))) & 4;
  xxxWindowEvent(5u, *(struct tagWND **)(**a1 + 8), ~(*(_DWORD *)**a1 >> 1) | 0xFFFFFFFD, 0, 0);
  xxxWindowEvent(4u, *(struct tagWND **)(**a1 + 8), (*(_DWORD *)**a1 >> 1) | 0xFFFFFFFD, 0, 0);
  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3, v9);
  return 1LL;
}
