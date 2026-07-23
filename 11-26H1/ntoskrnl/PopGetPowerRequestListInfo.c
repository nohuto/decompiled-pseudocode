/*
 * XREFs of PopGetPowerRequestListInfo @ 0x140AECE04
 * Callers:
 *     NtPowerInformation @ 0x140A1B510 (NtPowerInformation.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockShared @ 0x140424A28 (PopAcquireRwLockShared.c)
 *     PoStoreDiagnosticContext @ 0x140426240 (PoStoreDiagnosticContext.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopGetPowerRequestListInfo(_QWORD *a1, _DWORD *a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *WpsFeedback; // rbx
  unsigned __int64 v7; // rdi
  __int64 StateSaveArea; // rcx
  __int64 Pool2; // rax
  _QWORD *v10; // rsi
  __int64 *v11; // r15
  __int64 AllFields_low; // rax
  _KTHREAD_WPS_FEEDBACK *v13; // r14
  __int64 v14; // rbp
  unsigned __int64 v15; // rdi
  _DWORD *v16; // rcx
  __int64 v17; // r9
  __int64 FeedbackStartTime; // rcx
  int v19; // ebx
  unsigned __int64 v20; // rax
  unsigned __int64 v22; // [rsp+60h] [rbp+18h] BYREF

  PopAcquireRwLockShared((volatile signed __int64 *)stru_140F12EA0.TracingPrivate, (__int64)a2, a3, a4);
  WpsFeedback = (struct _KTHREAD *)stru_140F12EA0.WpsFeedback;
  v7 = (8LL * LODWORD(stru_140F12EA0.KernelShadowStackLimit.AllFields) + 15) & 0xFFFFFFFFFFFFFFF8uLL;
  while ( WpsFeedback != (struct _KTHREAD *)&stru_140F12EA0.WpsFeedback )
  {
    StateSaveArea = (__int64)WpsFeedback->StateSaveArea;
    v22 = 0LL;
    PoStoreDiagnosticContext(StateSaveArea, 0LL, &v22);
    v7 = (v22 + 39 + v7) & 0xFFFFFFFFFFFFFFF8uLL;
    if ( v7 > 0xFFFFFFFF )
    {
      v19 = -1073741789;
      goto LABEL_16;
    }
    WpsFeedback = *(struct _KTHREAD **)&WpsFeedback->Header.Lock;
  }
  Pool2 = ExAllocatePool2(0x100uLL);
  v10 = (_QWORD *)Pool2;
  if ( Pool2 )
  {
    v11 = (__int64 *)(Pool2 + 8);
    AllFields_low = LODWORD(stru_140F12EA0.KernelShadowStackLimit.AllFields);
    *v10 = LODWORD(stru_140F12EA0.KernelShadowStackLimit.AllFields);
    v13 = stru_140F12EA0.WpsFeedback;
    v14 = 8 * AllFields_low + 8;
    v15 = v7 - v14;
    while ( v13 != (_KTHREAD_WPS_FEEDBACK *)&stru_140F12EA0.WpsFeedback )
    {
      if ( v15 < 0x48 )
        goto LABEL_14;
      *(_DWORD *)((char *)v10 + v14) = v13->LowerPerfClassFeedbackCount;
      v16 = (_DWORD *)((char *)v10 + v14 + 4);
      v17 = 6LL;
      do
      {
        *v16 = *(_DWORD *)((char *)v16 + (char *)v13 - ((char *)v10 + v14) + 36);
        ++v16;
        --v17;
      }
      while ( v17 );
      FeedbackStartTime = v13[3].FeedbackStartTime;
      v22 = v15 - 32;
      v19 = PoStoreDiagnosticContext(FeedbackStartTime, (_QWORD *)((char *)v10 + v14 + 32), &v22);
      if ( v19 < 0 )
        goto LABEL_15;
      v20 = (v22 + 39) & 0xFFFFFFFFFFFFFFF8uLL;
      if ( v15 < v20 )
      {
LABEL_14:
        v19 = -1073741789;
LABEL_15:
        ExFreePoolWithTag(v10, 0x206D654Du);
        goto LABEL_16;
      }
      *v11 = v14;
      v15 -= v20;
      v13 = (_KTHREAD_WPS_FEEDBACK *)v13->FeedbackStartTime;
      v14 += v20;
      ++v11;
    }
    *a1 = v10;
    v19 = 0;
    *a2 = v14;
  }
  else
  {
    v19 = -1073741670;
  }
LABEL_16:
  PopReleaseRwLock((struct _KTHREAD *)stru_140F12EA0.TracingPrivate);
  return (unsigned int)v19;
}
