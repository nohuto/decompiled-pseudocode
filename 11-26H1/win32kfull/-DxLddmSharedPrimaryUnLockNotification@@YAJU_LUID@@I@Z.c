/*
 * XREFs of ?DxLddmSharedPrimaryUnLockNotification@@YAJU_LUID@@I@Z @ 0x140347F18
 * Callers:
 *     NtGdiDdDDISharedPrimaryUnLockNotification @ 0x140348DF0 (NtGdiDdDDISharedPrimaryUnLockNotification.c)
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14000F0FC (--0-$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     xxxInternalInvalidate @ 0x14002CCF0 (xxxInternalInvalidate.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??$GreReleaseSemaphoreExclusive@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x1400686B0 (--$GreReleaseSemaphoreExclusive@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     ??$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x14006AA00 (--$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     ?GrepLockVisRgn@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140077104 (-GrepLockVisRgn@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?GrepUnlockVisRgn@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14007715C (-GrepUnlockVisRgn@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140078060 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400A6694 (--0-$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1401D1848 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x14023AA54 (-bLddmDriver@PDEVOBJ@@QEBAHXZ.c)
 *     vSpUnTearDownSprites @ 0x140318B00 (vSpUnTearDownSprites.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DxLddmSharedPrimaryUnLockNotification(struct _LUID a1, int a2)
{
  int v2; // edi
  DWORD LowPart; // ebx
  unsigned int v4; // r14d
  int v5; // r15d
  struct Gre::Base::SESSION_GLOBALS *v6; // r12
  __int64 i; // rsi
  __int64 v8; // rdi
  unsigned int CurrentProcessId; // eax
  __int64 ProcessEntry; // rax
  __int64 v11; // rdi
  __int64 v12; // rax
  Gre::Base *v14; // rcx
  __int64 v15; // rcx
  struct tagWND *v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  ULONG_PTR BugCheckParameter3[3]; // [rsp+20h] [rbp-18h] BYREF
  LONG HighPart; // [rsp+84h] [rbp+4Ch]
  char v24; // [rsp+90h] [rbp+58h] BYREF
  __int64 v25; // [rsp+98h] [rbp+60h] BYREF

  HighPart = a1.HighPart;
  v2 = a2;
  LowPart = a1.LowPart;
  v4 = 0;
  v5 = 0;
  v6 = Gre::Base::Globals(*(Gre::Base **)&a1);
  SEMOBJSHARED<1>::SEMOBJSHARED<1>((HSEMAPHORE *)BugCheckParameter3, v6);
  for ( i = hdevEnumerateDisplayOnly(0LL); i; i = hdevEnumerateDisplayOnly(i) )
  {
    v25 = i;
    if ( (*(_DWORD *)(i + 40) & 0x20400) == 0
      && (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v25)
      && LowPart == PDEVOBJ::pAdapterLuid((PDEVOBJ *)&v25)->LowPart
      && HighPart == PDEVOBJ::pAdapterLuid((PDEVOBJ *)&v25)->HighPart
      && *(_DWORD *)(*(_QWORD *)(v25 + 2568) + 248LL) == v2 )
    {
      GrepLockVisRgn(v6);
      GreLockSprite();
      GreAcquireSemaphore<8,PDEVOBJ>(v25);
      v8 = v25;
      CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
      ProcessEntry = DxLddmFindProcessEntry(v8 + 2616, CurrentProcessId & 0xFFFFFFFC);
      v11 = ProcessEntry;
      if ( ProcessEntry )
      {
        if ( *(_DWORD *)(ProcessEntry + 20) )
        {
          v12 = v25;
          if ( *(_QWORD *)(v25 + 2640) )
          {
            (*(void (__fastcall **)(_QWORD, __int64))(v25 + 2640))(*(_QWORD *)(v25 + 1784), v11 + 28);
            v12 = v25;
          }
          --*(_DWORD *)(v12 + 2632);
          if ( (*(_DWORD *)(v11 + 20))-- == 1 )
          {
            vSpUnTearDownSprites(v25, (const struct _RECTL *)(v11 + 28), 1);
            if ( *(_DWORD *)(v11 + 44) != *((_DWORD *)Gre::Base::Globals(v14) + 1098) )
              v5 = 1;
          }
        }
      }
      else
      {
        v4 = -1073741811;
      }
      GreReleaseSemaphoreExclusive<8,PDEVOBJ>(v25);
      GreUnlockSprite();
      GrepUnlockVisRgn(v6);
      v2 = a2;
    }
  }
  GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
    (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
    BugCheckParameter3[0]);
  if ( v5 )
  {
    ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v24);
    v16 = *(struct tagWND **)(*(_QWORD *)(*((_QWORD *)PtiCurrent(v15) + 61) + 8LL) + 24LL);
    Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(BugCheckParameter3, (__int64)v16);
    xxxInternalInvalidate(v16, (HRGN)1, 0x485u);
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
    if ( !v24 )
      UserSessionSwitchLeaveCritWithNonPaged(v18, v17, v19);
  }
  return v4;
}
