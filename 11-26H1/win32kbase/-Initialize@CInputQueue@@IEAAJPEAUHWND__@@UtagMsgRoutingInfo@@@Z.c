/*
 * XREFs of ?Initialize@CInputQueue@@IEAAJPEAUHWND__@@UtagMsgRoutingInfo@@@Z @ 0x140059630
 * Callers:
 *     ?Create@CInputQueue@@SAJW4CompositionInputQueueType@@PEAUHWND__@@UtagMsgRoutingInfo@@W4CompositionInputFlags@@PEAPEAV1@@Z @ 0x140059530 (-Create@CInputQueue@@SAJW4CompositionInputQueueType@@PEAUHWND__@@UtagMsgRoutingInfo@@W4Compositi.c)
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     EnterSharedCrit @ 0x14003D800 (EnterSharedCrit.c)
 *     UserValidateAndAttachQueueToInputWindowApiExt @ 0x140059710 (UserValidateAndAttachQueueToInputWindowApiExt.c)
 *     HMValidateCatHandleNoRip @ 0x1401B511C (HMValidateCatHandleNoRip.c)
 */

__int64 __fastcall CInputQueue::Initialize(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v7; // ecx
  __int64 result; // rax
  __int128 v9; // xmm1
  __int64 v10; // xmm0_8
  unsigned int ProcessId; // ebx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rbx

  if ( *(_DWORD *)(a1 + 12) == 3 )
  {
    ProcessId = 0;
    EnterSharedCrit(0LL, 1LL, a3, a4);
    v12 = HMValidateCatHandleNoRip(a2);
    if ( v12 )
    {
      v17 = *(_QWORD *)(v12 + 16);
      PsGetThreadId(*(PETHREAD *)v17);
      ProcessId = (unsigned int)PsGetProcessId(**(PEPROCESS **)(v17 + 456));
    }
    UserSessionSwitchLeaveCritWithNonPaged(v14, v13, v15, v16);
    if ( !ProcessId || *(_DWORD *)a3 != ProcessId )
      return 3221225485LL;
  }
  v7 = *(_DWORD *)(a1 + 12);
  result = 0LL;
  if ( v7 != 2 && v7 != 3 || (result = UserValidateAndAttachQueueToInputWindowApiExt(a2, a1), (int)result >= 0) )
  {
    v9 = *(_OWORD *)(a3 + 16);
    *(_OWORD *)(a1 + 24) = *(_OWORD *)a3;
    *(_QWORD *)(a1 + 16) = a2;
    v10 = *(_QWORD *)(a3 + 32);
    *(_OWORD *)(a1 + 40) = v9;
    *(_QWORD *)(a1 + 56) = v10;
  }
  return result;
}
