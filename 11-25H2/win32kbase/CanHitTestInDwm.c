/*
 * XREFs of CanHitTestInDwm @ 0x1400C5D40
 * Callers:
 *     ?TouchHitTest@CTouchProcessor@@CA?AVCInputDest@@PEBUtagPOINTEREVENTINT@@W4DIT_HITTESTATTRIBUTES@@KKKPEAHPEAU_InputHitTestResult@@@Z @ 0x1400C4988 (-TouchHitTest@CTouchProcessor@@CA-AVCInputDest@@PEBUtagPOINTEREVENTINT@@W4DIT_HITTESTATTRIBUTES@.c)
 *     ?MouseSpeedHitTest@CMouseProcessor@@CA?AUtagINPUTDEST@@PEAUtagPOINT@@PEBU_SUBPIXELS@@GG_KKPEAXW4DIT_HITTESTATTRIBUTES@@KKPEAHPEAU_InputHitTestResult@@@Z @ 0x14019045C (-MouseSpeedHitTest@CMouseProcessor@@CA-AUtagINPUTDEST@@PEAUtagPOINT@@PEBU_SUBPIXELS@@GG_KKPEAXW4.c)
 * Callees:
 *     W32GetCurrentThreadNonPaged @ 0x1401A595C (W32GetCurrentThreadNonPaged.c)
 */

char __fastcall CanHitTestInDwm(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rdi
  __int64 v5; // rbx
  unsigned int CurrentThreadId; // eax
  unsigned int v7; // esi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rbx
  _QWORD *CurrentThreadNonPaged; // rax
  __int64 v13; // rcx
  char v14; // al
  char v15; // cl

  if ( *(_DWORD *)(W32GetUserSessionState(a1, a2) + 18768) )
    return 0;
  v4 = *(_QWORD *)(W32GetUserSessionState(v3, v2) + 18752);
  v5 = v4 + 8;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v4 + 8, 0LL);
  CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
  LODWORD(v4) = *(_DWORD *)(v4 + 40);
  v7 = CurrentThreadId;
  ExReleasePushLockSharedEx(v5, 0LL);
  KeLeaveCriticalRegion();
  if ( v7 != (_DWORD)v4 )
    return 0;
  v10 = *(_QWORD *)(W32GetUserSessionState(v9, v8) + 18752);
  v11 = v10 + 8;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v10 + 8, 0LL);
  LODWORD(v10) = *(_DWORD *)(v10 + 16);
  ExReleasePushLockSharedEx(v11, 0LL);
  KeLeaveCriticalRegion();
  if ( (_DWORD)v10 != 2 )
    return 0;
  CurrentThreadNonPaged = (_QWORD *)W32GetCurrentThreadNonPaged();
  v13 = CurrentThreadNonPaged ? *CurrentThreadNonPaged : 0LL;
  v14 = _InterlockedCompareExchange((volatile signed __int32 *)(v13 + 528), 0, 0);
  v15 = 1;
  if ( (v14 & 1) != 0 )
    return 0;
  return v15;
}
