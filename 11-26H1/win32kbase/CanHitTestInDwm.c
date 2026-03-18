/*
 * XREFs of CanHitTestInDwm @ 0x140106A10
 * Callers:
 *     ?MouseSpeedHitTest@CMouseProcessor@@CA?AUtagINPUTDEST@@PEAUtagPOINT@@PEBU_SUBPIXELS@@GG_KKPEAXW4DIT_HITTESTATTRIBUTES@@KPEAHPEAU_InputHitTestResult@@@Z @ 0x140106654 (-MouseSpeedHitTest@CMouseProcessor@@CA-AUtagINPUTDEST@@PEAUtagPOINT@@PEBU_SUBPIXELS@@GG_KKPEAXW4.c)
 *     ?TouchHitTest@CTouchProcessor@@CA?AVCInputDest@@PEBUtagPOINTEREVENTINT@@W4DIT_HITTESTATTRIBUTES@@KKPEAHPEAU_InputHitTestResult@@@Z @ 0x140216B88 (-TouchHitTest@CTouchProcessor@@CA-AVCInputDest@@PEBUtagPOINTEREVENTINT@@W4DIT_HITTESTATTRIBUTES@.c)
 * Callees:
 *     <none>
 */

char __fastcall CanHitTestInDwm(int a1, int a2, int a3)
{
  int v3; // edx
  int v4; // ecx
  int v5; // r8d
  __int64 v6; // rbx
  __int64 v7; // rsi
  unsigned int CurrentThreadId; // eax
  unsigned int v9; // edi
  int v10; // edx
  int v11; // ecx
  int v12; // r8d
  __int64 v13; // rbx
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rcx
  _QWORD *CurrentThreadWin32Thread; // rax
  __int64 v18; // rcx
  char v19; // al
  char v20; // cl

  if ( *(_DWORD *)(W32GetUserSessionState(a1, a2, a3) + 18816) )
    return 0;
  v6 = *(_QWORD *)(W32GetUserSessionState(v4, v3, v5) + 18800);
  v7 = v6 + 8;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v6 + 8, 0LL);
  CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
  LODWORD(v6) = *(_DWORD *)(v6 + 40);
  v9 = CurrentThreadId;
  ExReleasePushLockSharedEx(v7, 0LL);
  KeLeaveCriticalRegion();
  if ( v9 != (_DWORD)v6 )
    return 0;
  v13 = *(_QWORD *)(W32GetUserSessionState(v11, v10, v12) + 18800);
  v14 = v13 + 8;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v13 + 8, 0LL);
  LODWORD(v13) = *(_DWORD *)(v13 + 16);
  ExReleasePushLockSharedEx(v14, 0LL);
  KeLeaveCriticalRegion();
  if ( (_DWORD)v13 != 2 )
    return 0;
  CurrentThreadWin32Thread = (_QWORD *)PsGetCurrentThreadWin32Thread(v16, v15);
  v18 = CurrentThreadWin32Thread ? *CurrentThreadWin32Thread : 0LL;
  v19 = _InterlockedCompareExchange((volatile signed __int32 *)(v18 + 520), 0, 0);
  v20 = 1;
  if ( (v19 & 1) != 0 )
    return 0;
  return v20;
}
