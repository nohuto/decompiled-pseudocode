/*
 * XREFs of ?DxLddmSharedPrimaryUnLockNotification@@YAJU_LUID@@I@Z @ 0x140325BAC
 * Callers:
 *     NtGdiDdDDISharedPrimaryUnLockNotification @ 0x140326AF0 (NtGdiDdDDISharedPrimaryUnLockNotification.c)
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x14001BAA0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     xxxInternalInvalidate @ 0x140030AC0 (xxxInternalInvalidate.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z @ 0x1400461EC (--0-$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14007ED70 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@XZ @ 0x14009344C (--0-$SEMOBJSHARED@$00@@QEAA@XZ.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1400C8028 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     ??1ReEnterLeaveCrit@@QEAA@XZ @ 0x1400D882C (--1ReEnterLeaveCrit@@QEAA@XZ.c)
 *     ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x14020F4EC (-bLddmDriver@PDEVOBJ@@QEBAHXZ.c)
 *     vSpUnTearDownSprites @ 0x140330570 (vSpUnTearDownSprites.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DxLddmSharedPrimaryUnLockNotification(struct _LUID a1, int a2)
{
  DWORD LowPart; // ebx
  unsigned int v4; // r14d
  int v5; // r15d
  __int64 i; // rsi
  __int64 v7; // rdi
  unsigned int CurrentProcessId; // eax
  __int64 ProcessEntry; // rax
  __int64 v10; // rdi
  __int64 v11; // rax
  Gre::Base *v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  struct tagWND *v16; // rbx
  __int64 v17; // rdx
  ULONG_PTR BugCheckParameter3[2]; // [rsp+20h] [rbp-10h] BYREF
  LONG HighPart; // [rsp+74h] [rbp+44h]
  __int64 v21; // [rsp+80h] [rbp+50h] BYREF
  __int64 v22; // [rsp+88h] [rbp+58h] BYREF

  HighPart = a1.HighPart;
  LowPart = a1.LowPart;
  v4 = 0;
  v5 = 0;
  SEMOBJSHARED<1>::SEMOBJSHARED<1>((Gre::Base *)&v22);
  for ( i = hdevEnumerateDisplayOnly(0LL); i; i = hdevEnumerateDisplayOnly(i) )
  {
    v21 = i;
    if ( (*(_DWORD *)(i + 40) & 0x20400) == 0
      && (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v21)
      && LowPart == PDEVOBJ::pAdapterLuid((PDEVOBJ *)&v21)->LowPart
      && HighPart == PDEVOBJ::pAdapterLuid((PDEVOBJ *)&v21)->HighPart
      && *(_DWORD *)(*(_QWORD *)(v21 + 2568) + 248LL) == a2 )
    {
      GreLockVisRgn(v21);
      GreLockSprite(v21);
      GreLockDisplayDevice(v21);
      v7 = v21;
      CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
      ProcessEntry = DxLddmFindProcessEntry(v7 + 2616, CurrentProcessId & 0xFFFFFFFC);
      v10 = ProcessEntry;
      if ( ProcessEntry )
      {
        if ( *(_DWORD *)(ProcessEntry + 20) )
        {
          v11 = v21;
          if ( *(_QWORD *)(v21 + 2640) )
          {
            (*(void (__fastcall **)(_QWORD, __int64))(v21 + 2640))(*(_QWORD *)(v21 + 1784), v10 + 28);
            v11 = v21;
          }
          --*(_DWORD *)(v11 + 2632);
          if ( (*(_DWORD *)(v10 + 20))-- == 1 )
          {
            vSpUnTearDownSprites(v21, v10 + 28, 1LL);
            if ( *(_DWORD *)(v10 + 44) != *((_DWORD *)Gre::Base::Globals(v13) + 1070) )
              v5 = 1;
          }
        }
      }
      else
      {
        v4 = -1073741811;
      }
      GreUnlockDisplayDevice(v21);
      GreUnlockSprite(v21);
      GreUnlockVisRgn(v21);
    }
  }
  GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
    (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
    v22);
  if ( v5 )
  {
    ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v21);
    v16 = *(struct tagWND **)(*(_QWORD *)(*((_QWORD *)PtiCurrent(v15, v14) + 62) + 8LL) + 24LL);
    Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(BugCheckParameter3, (__int64)v16);
    xxxInternalInvalidate(v16, (HRGN)1, 0x485u);
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v17);
    ReEnterLeaveCrit::~ReEnterLeaveCrit((ReEnterLeaveCrit *)&v21);
  }
  return v4;
}
