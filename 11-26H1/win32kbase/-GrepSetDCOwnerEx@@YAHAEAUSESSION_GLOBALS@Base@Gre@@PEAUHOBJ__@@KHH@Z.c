/*
 * XREFs of ?GrepSetDCOwnerEx@@YAHAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@KHH@Z @ 0x14003B040
 * Callers:
 *     ReleaseCacheDC @ 0x14003BF80 (ReleaseCacheDC.c)
 *     GreSetDCOwnerEx @ 0x140081F10 (GreSetDCOwnerEx.c)
 *     ?vCleanupDCs@@YAXK@Z @ 0x1400CA374 (-vCleanupDCs@@YAXK@Z.c)
 *     GreCleanDCAndSetOwnerEx @ 0x140168CE0 (GreCleanDCAndSetOwnerEx.c)
 * Callees:
 *     HmgAllocateDcAttr @ 0x14000D8F8 (HmgAllocateDcAttr.c)
 *     HmgFreeDcAttr @ 0x14000E59C (HmgFreeDcAttr.c)
 *     ?AcquireDcVisRgnShared@DC@@QEAA@XZ @ 0x140014910 (-AcquireDcVisRgnShared@DC@@QEAA@XZ.c)
 *     ?reset@?$lambda_call@V_lambda_1_@?1??AcquireDcVisRgnShared@DC@@QEAA@XZ@@details@wil@@QEAAXXZ @ 0x14001A86C (-reset@-$lambda_call@V_lambda_1_@-1--AcquireDcVisRgnShared@DC@@QEAA@XZ@@details@wil@@QEAAXXZ.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x14001AE40 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?vUnlock@?$SEMOBJ@$0BE@@@QEAAXXZ @ 0x14001AEB0 (-vUnlock@-$SEMOBJ@$0BE@@@QEAAXXZ.c)
 *     ?ReleaseLock@GreInnermostPushLock@@QEBAXXZ @ 0x14001B2E0 (-ReleaseLock@GreInnermostPushLock@@QEBAXXZ.c)
 *     ??$GreAcquireSemaphoreCommon@$0BE@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14001B5C0 (--$GreAcquireSemaphoreCommon@$0BE@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x14001C690 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ??0HANDLELOCK@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@W4HandleLockOptions@@@Z @ 0x14001F150 (--0HANDLELOCK@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@W4HandleLockOptions@@@Z.c)
 *     ?vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z @ 0x14001F730 (-vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z.c)
 *     GreSetBrushOwner @ 0x140035090 (GreSetBrushOwner.c)
 *     ?GreAcquirePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x1400431F0 (-GreAcquirePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 *     ?GreReleasePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x140043320 (-GreReleasePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 *     HmgDecProcessHandleCount @ 0x140056DC4 (HmgDecProcessHandleCount.c)
 *     HmgIncProcessHandleCountEx @ 0x1400C5508 (HmgIncProcessHandleCountEx.c)
 *     GreIncQuotaCount @ 0x1400CF610 (GreIncQuotaCount.c)
 *     ?Pid@HANDLELOCK@@QEAAXK@Z @ 0x1400FEB6C (-Pid@HANDLELOCK@@QEAAXK@Z.c)
 *     ?GrepValidateVisRgn@@YA_NPEAVDC@@PEAVREGION@@AEAVERECTL@@@Z @ 0x1400FEE38 (-GrepValidateVisRgn@@YA_NPEAVDC@@PEAVREGION@@AEAVERECTL@@@Z.c)
 *     ?SetupDCAttributes@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAVDC@@PEAU_DC_ATTR@@@Z @ 0x140102DC4 (-SetupDCAttributes@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAVDC@@PEAU_DC_ATTR@@@Z.c)
 *     ?AcquireDcVisRgnExclusive@DC@@QEAA@XZ @ 0x1401388B8 (-AcquireDcVisRgnExclusive@DC@@QEAA@XZ.c)
 *     ?FreeDCAttributes@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAVDC@@@Z @ 0x140186EB4 (-FreeDCAttributes@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAVDC@@@Z.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GrepSetDCOwnerEx(
        struct Gre::Base::SESSION_GLOBALS *a1,
        struct HOBJ__ *a2,
        unsigned int a3,
        int a4,
        unsigned int a5)
{
  BOOL v5; // r14d
  unsigned int v7; // r12d
  unsigned int *v8; // rbx
  unsigned int v9; // edi
  struct _DC_ATTR *DcAttr; // rsi
  unsigned int *v11; // r12
  __int64 v12; // r13
  unsigned int v13; // ebx
  unsigned int CurrentProcessId; // eax
  __int64 v15; // rdx
  int v16; // r8d
  bool v18; // bl
  unsigned __int64 v19; // rbx
  unsigned int v20; // ecx
  int v21; // eax
  __int64 CurrentProcessWin32Process; // rax
  struct _W32PROCESS *v23; // rdx
  unsigned int v24; // eax
  struct HOBJ__ *v27; // [rsp+30h] [rbp-50h] BYREF
  unsigned int *v28; // [rsp+38h] [rbp-48h] BYREF
  int v29; // [rsp+40h] [rbp-40h]
  char v30; // [rsp+45h] [rbp-3Bh]
  __int64 v31; // [rsp+48h] [rbp-38h]
  __int64 v32; // [rsp+50h] [rbp-30h] BYREF
  char v33; // [rsp+58h] [rbp-28h]
  HSEMAPHORE v34; // [rsp+60h] [rbp-20h] BYREF
  struct _RECTL v35; // [rsp+68h] [rbp-18h] BYREF

  v27 = a2;
  v5 = a4 == 0;
  v7 = (unsigned int)a2;
  v8 = (unsigned int *)a1;
  v9 = 0;
  DcAttr = 0LL;
  if ( a3 == -2147483646 && !a4 )
    DcAttr = (struct _DC_ATTR *)HmgAllocateDcAttr();
  v34 = (HSEMAPHORE)(*(_QWORD *)v8 + 1512LL);
  GreAcquireSemaphoreCommon<20,void (*)(HSEMAPHORE__ *)>((__int64)a1, v34);
  HANDLELOCK::HANDLELOCK((__int64 *)&v28, v8, v7, 1);
  if ( v29 )
  {
    v11 = v28;
    v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v31 + 8) + 96LL))(*(_QWORD *)(v31 + 8), *v28);
    if ( *((_BYTE *)v11 + 14) != 1
      || *((_WORD *)v11 + 6) != WORD1(v27)
      || *(_WORD *)(v12 + 12) && *(struct _KTHREAD **)(v12 + 16) != KeGetCurrentThread() )
    {
      goto LABEL_21;
    }
    if ( a3 == -2147483630 )
      goto LABEL_7;
    if ( (v11[2] & 0xFFFFFFFE) == 0x80000012 )
    {
      DC::AcquireDcVisRgnShared((DC *)v12, (__int64)&v32);
      v18 = GrepValidateVisRgn((struct DC *)v12, *(struct REGION **)(v12 + 1136), (struct ERECTL *)&v35);
      _reset___lambda_call_V_lambda_1___1__AcquireDcVisRgnShared_DC__QEAA_XZ__details_wil__QEAAXXZ(&v32);
      if ( !v18 )
      {
        DC::AcquireDcVisRgnExclusive((DC *)v12);
        v27 = *(struct HOBJ__ **)(v12 + 1136);
        if ( v27 )
          RGNOBJ::vSet((RGNOBJ *)&v27, &v35);
        if ( v33 )
          GreInnermostPushLock::ReleaseLock((GreInnermostPushLock *)(v32 + 1112));
      }
    }
    if ( !a3 )
    {
LABEL_7:
      v13 = v11[2] & 0xFFFFFFFE;
      if ( v13 == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
      {
        if ( a1 != (struct Gre::Base::SESSION_GLOBALS *)-2264LL )
          GreAcquirePushLockExclusive((struct Gre::Base::SESSION_GLOBALS *)((char *)a1 + 2264));
        FreeDCAttributes(a1, (struct DC *)v12);
        HANDLELOCK::Pid((HANDLELOCK *)&v28, a3);
        CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
        HmgDecProcessHandleCount(a1, CurrentProcessId & 0xFFFFFFFC);
        v9 = 1;
        if ( a1 != (struct Gre::Base::SESSION_GLOBALS *)-2264LL )
          GreReleasePushLockExclusive((struct Gre::Base::SESSION_GLOBALS *)((char *)a1 + 2264));
      }
      else
      {
        v24 = v11[2] & 0xFFFFFFFE;
        if ( v24 == -2147483630 )
        {
          HANDLELOCK::Pid((HANDLELOCK *)&v28, a3);
          v9 = 1;
        }
        else if ( !v24 && !a3 )
        {
          v9 = 1;
          goto LABEL_17;
        }
      }
      if ( a3 == -2147483630 )
      {
        if ( v9 )
          goto LABEL_17;
        goto LABEL_21;
      }
      goto LABEL_13;
    }
    if ( a3 != -2147483646 )
    {
LABEL_21:
      v30 = 1;
LABEL_17:
      HANDLELOCK::vUnlock((HANDLELOCK *)&v28);
      v8 = (unsigned int *)a1;
      goto LABEL_18;
    }
    v19 = (unsigned __int64)PsGetCurrentProcessId() & 0xFFFFFFFC;
    v20 = v11[2] & 0xFFFFFFFE;
    if ( v20 == (_DWORD)v19 || v20 == -2147483630 || !v20 )
    {
      v21 = 0;
      v9 = 1;
      if ( v20 != (_DWORD)v19 )
      {
        v9 = HmgIncProcessHandleCountEx(a1, (unsigned int)v19, a5);
        if ( v9 )
        {
          v21 = 1;
        }
        else
        {
          if ( !a4 )
            goto LABEL_13;
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(0LL);
          v23 = (struct _W32PROCESS *)CurrentProcessWin32Process;
          if ( CurrentProcessWin32Process )
            v23 = (struct _W32PROCESS *)(-(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process);
          GreIncQuotaCount(v23);
          v21 = 1;
          v9 = 1;
        }
      }
      if ( *((_QWORD *)v11 + 2) || DcAttr || a4 )
      {
        HANDLELOCK::Pid((HANDLELOCK *)&v28, v19);
        if ( !*((_QWORD *)v11 + 2) && DcAttr )
        {
          SetupDCAttributes(a1, (struct DC *)v12, DcAttr);
          DcAttr = 0LL;
        }
      }
      else
      {
        v9 = 0;
        if ( v21 )
          HmgDecProcessHandleCount(a1, (unsigned int)v19);
      }
    }
LABEL_13:
    if ( v9 )
    {
      if ( v5 && (unsigned int)GreSetBrushOwner(**(HBRUSH **)(v12 + 136), a3) )
        GreSetBrushOwner(**(HBRUSH **)(v12 + 144), a3);
      goto LABEL_17;
    }
    goto LABEL_21;
  }
LABEL_18:
  HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v28);
  SEMOBJ<20>::vUnlock(&v34, v15, v16);
  if ( DcAttr )
    HmgFreeDcAttr(v8, (__int64)DcAttr);
  return v9;
}
