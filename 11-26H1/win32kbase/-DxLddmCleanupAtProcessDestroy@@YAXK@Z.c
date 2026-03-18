/*
 * XREFs of ?DxLddmCleanupAtProcessDestroy@@YAXK@Z @ 0x1401B9304
 * Callers:
 *     ?GrepCloseCurrentProcessPreserveObjectReference@@YAHXZ @ 0x140025730 (-GrepCloseCurrentProcessPreserveObjectReference@@YAHXZ.c)
 *     ?GrepCloseCurrentProcess@@YAHXZ @ 0x1401FA56C (-GrepCloseCurrentProcess@@YAHXZ.c)
 * Callees:
 *     ??0?$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14001D21C (--0-$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140024C10 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$hdevEnumerate@$00@@YAPEAUHDEV__@@PEAU0@@Z @ 0x1400281B8 (--$hdevEnumerate@$00@@YAPEAUHDEV__@@PEAU0@@Z.c)
 *     ?GrepLockVisRgn@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140036C08 (-GrepLockVisRgn@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?GrepUnlockVisRgn@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14003B7CC (-GrepUnlockVisRgn@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreAcquireSemaphore@$05$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400C521C (--$GreAcquireSemaphore@$05$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x1400C66D4 (--$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     ??$GreReleaseSemaphoreExclusive@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x1400C77EC (--$GreReleaseSemaphoreExclusive@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     ??$GreReleaseSemaphoreExclusive@$05$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400C78AC (--$GreReleaseSemaphoreExclusive@$05$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?bRenderLddmDriver@PDEVOBJ@@QEAAHXZ @ 0x1401560A0 (-bRenderLddmDriver@PDEVOBJ@@QEAAHXZ.c)
 *     ?DxLddmPrimaryLockProcessDestroy@@YAXPEAUHDEV__@@KPEAK@Z @ 0x140157FD0 (-DxLddmPrimaryLockProcessDestroy@@YAXPEAUHDEV__@@KPEAK@Z.c)
 *     ?DxLddmLogProcessPrimaryLockCount@@YAXK@Z @ 0x1401F989C (-DxLddmLogProcessPrimaryLockCount@@YAXK@Z.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

void __fastcall DxLddmCleanupAtProcessDestroy(__int64 a1)
{
  unsigned int v1; // ebp
  struct Gre::Base::SESSION_GLOBALS *v2; // rdi
  struct _ERESOURCE *v3; // rbx
  int v4; // r8d
  int v5; // ecx
  __int64 v6; // rdx
  int v7; // r8d
  __int64 v8; // rcx
  __int64 SessionState; // rax
  int v10; // edx
  int v11; // r8d
  int v12; // edx
  int v13; // r8d
  __int64 v14; // rcx
  void (__fastcall *OwnerThread)(POWNER_ENTRY, __int64); // rsi
  __int64 CurrentProcess; // rax
  __int64 v17; // rdx
  int v18; // r8d
  unsigned int CurrentProcessSessionId; // eax
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rdx
  int v23; // r8d
  __int64 v24; // rdx
  int v25; // r8d
  unsigned int v26; // [rsp+48h] [rbp+10h] BYREF
  struct _ERESOURCE *v27; // [rsp+50h] [rbp+18h] BYREF
  __int64 v28; // [rsp+58h] [rbp+20h] BYREF

  v1 = a1;
  v26 = 0;
  v2 = *(struct Gre::Base::SESSION_GLOBALS **)(W32GetSessionState(a1) + 88);
  SEMOBJSHARED<1>::SEMOBJSHARED<1>((HSEMAPHORE *)&v28, v2);
  v3 = hdevEnumerate<1>(0LL);
  if ( v3 )
  {
    do
    {
      v5 = (__int64)v3->ExclusiveWaiters & 0x20001;
      v27 = v3;
      if ( v5 == 1 && (unsigned int)PDEVOBJ::bRenderLddmDriver((PDEVOBJ *)&v27) )
      {
        GrepLockVisRgn(v2, v6, v7);
        SessionState = W32GetSessionState(v8);
        GreAcquireSemaphore<6,>(*(struct _ERESOURCE ***)(SessionState + 88), v10, v11);
        GreAcquireSemaphore<8,PDEVOBJ>((__int64)v3, v12, v13);
        DxLddmPrimaryLockProcessDestroy(v3, v1, &v26);
        OwnerThread = (void (__fastcall *)(POWNER_ENTRY, __int64))v3[25].OwnerEntry.OwnerThread;
        if ( OwnerThread )
        {
          CurrentProcess = PsGetCurrentProcess(v14);
          OwnerThread(v3[17].OwnerTable, CurrentProcess);
        }
        else
        {
          CurrentProcessSessionId = PsGetCurrentProcessSessionId();
          WdLogSingleEntry1(2LL, CurrentProcessSessionId);
          WdLogGlobalForLineNumber = 1118;
        }
        GreReleaseSemaphoreExclusive<8,PDEVOBJ>((__int64)v3, v17, v18);
        v21 = W32GetSessionState(v20);
        GreReleaseSemaphoreExclusive<6,>(*(struct _ERESOURCE ***)(v21 + 88), v22, v23);
        GrepUnlockVisRgn((struct _ERESOURCE **)v2, v24, v25);
      }
      v3 = hdevEnumerate<1>((__int64)v3);
    }
    while ( v3 );
    if ( v26 )
      DxLddmLogProcessPrimaryLockCount(v26);
  }
  GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
    (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
    v28,
    v4);
}
