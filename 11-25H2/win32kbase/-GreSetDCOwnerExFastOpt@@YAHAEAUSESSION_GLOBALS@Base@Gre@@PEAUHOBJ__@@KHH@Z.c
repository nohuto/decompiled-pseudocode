/*
 * XREFs of ?GreSetDCOwnerExFastOpt@@YAHAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@KHH@Z @ 0x1401C8C80
 * Callers:
 *     GreSetDCOwnerEx @ 0x14008A010 (GreSetDCOwnerEx.c)
 * Callees:
 *     ?W32ReleasePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x14000D770 (-W32ReleasePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 *     ?GreEnterCriticalRegionAndAcquirePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x14000D900 (-GreEnterCriticalRegionAndAcquirePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 *     ?vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z @ 0x140011FD0 (-vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x140016260 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x140016B80 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIW4HandleLockOptions@@@Z @ 0x140018A90 (-vLockHandle@HANDLELOCK@@AEAAXIW4HandleLockOptions@@@Z.c)
 *     ?SetupDCAttributes@@YAXPEAVDC@@PEAU_DC_ATTR@@@Z @ 0x14001B7B8 (-SetupDCAttributes@@YAXPEAVDC@@PEAU_DC_ATTR@@@Z.c)
 *     GreIncQuotaCount @ 0x14003B400 (GreIncQuotaCount.c)
 *     ?Pid@HANDLELOCK@@QEAAXK@Z @ 0x14003DED8 (-Pid@HANDLELOCK@@QEAAXK@Z.c)
 *     HmgAllocateDcAttr @ 0x140043FBC (HmgAllocateDcAttr.c)
 *     ?vUnlock@?$SEMOBJ@$0BE@@@QEAAXXZ @ 0x14004549C (-vUnlock@-$SEMOBJ@$0BE@@@QEAAXXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x140065280 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x14006FA70 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 *     GreSetBrushOwner @ 0x1400711D0 (GreSetBrushOwner.c)
 *     HmgFreeDcAttr @ 0x1400C0A8C (HmgFreeDcAttr.c)
 *     HmgIncProcessHandleCountEx @ 0x1400D9490 (HmgIncProcessHandleCountEx.c)
 *     HmgDecProcessHandleCount @ 0x140179250 (HmgDecProcessHandleCount.c)
 *     ?FreeDCAttributes@@YAXPEAVDC@@@Z @ 0x14017929C (-FreeDCAttributes@@YAXPEAVDC@@@Z.c)
 *     Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline @ 0x1401C4090 (Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline.c)
 *     ??0?$SEMOBJ@$0BE@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@_N@Z @ 0x1401C4B40 (--0-$SEMOBJ@$0BE@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@_N@Z.c)
 *     ?AcquireDcVisRgnExclusive@DC@@QEAA@XZ @ 0x1401C629C (-AcquireDcVisRgnExclusive@DC@@QEAA@XZ.c)
 *     ?AcquireDcVisRgnShared@DC@@QEAA@XZ @ 0x1401C65FC (-AcquireDcVisRgnShared@DC@@QEAA@XZ.c)
 *     HmgDecProcessHandleCountFastOpt @ 0x1401C8258 (HmgDecProcessHandleCountFastOpt.c)
 *     ?FreeDCAttributesFastOpt@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAVDC@@@Z @ 0x1401C8BDC (-FreeDCAttributesFastOpt@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAVDC@@@Z.c)
 *     ?GrepValidateVisRgn@@YA_NPEAVDC@@PEAVREGION@@AEAVERECTL@@@Z @ 0x1401D07C0 (-GrepValidateVisRgn@@YA_NPEAVDC@@PEAVREGION@@AEAVERECTL@@@Z.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

__int64 __fastcall GreSetDCOwnerExFastOpt(
        struct Gre::Base::SESSION_GLOBALS *a1,
        struct HOBJ__ *a2,
        int a3,
        int a4,
        unsigned int a5)
{
  BOOL v6; // r14d
  unsigned int v7; // ebx
  unsigned int v9; // edi
  struct _DC_ATTR *DcAttr; // rsi
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 v12; // rcx
  struct Gre::Base::SESSION_GLOBALS *v13; // rax
  unsigned int *v14; // r15
  struct OBJECT *EntryObject; // r13
  bool v16; // bl
  unsigned int CurrentProcessId; // ebx
  unsigned int v18; // eax
  unsigned int v19; // ebx
  int v20; // ecx
  __int64 v21; // rcx
  unsigned __int64 CurrentProcessWin32Process; // rax
  unsigned int v23; // ebx
  __int64 v24; // rcx
  GdiHandleManager **v25; // rdi
  struct Gre::Base::SESSION_GLOBALS *v26; // rbx
  __int64 SessionState; // rax
  struct W32_PUSH_LOCK *v28; // rbx
  unsigned int v29; // eax
  unsigned int v30; // eax
  unsigned int v31; // eax
  unsigned int *v34; // [rsp+28h] [rbp-49h] BYREF
  int v35; // [rsp+30h] [rbp-41h]
  __int16 v36; // [rsp+34h] [rbp-3Dh]
  struct Gre::Base::SESSION_GLOBALS *v37; // [rsp+38h] [rbp-39h]
  struct Gre::Base::SESSION_GLOBALS *v38; // [rsp+40h] [rbp-31h]
  __int64 v39; // [rsp+48h] [rbp-29h] BYREF
  char v40; // [rsp+50h] [rbp-21h]
  HSEMAPHORE v41; // [rsp+60h] [rbp-11h] BYREF
  __int64 v42; // [rsp+68h] [rbp-9h] BYREF
  char v43; // [rsp+70h] [rbp-1h]
  struct _RECTL v44; // [rsp+78h] [rbp+7h] BYREF

  v38 = a1;
  v6 = a4 == 0;
  v7 = (unsigned int)a2;
  v9 = 0;
  DcAttr = 0LL;
  if ( a3 == -2147483646 && !a4 )
    DcAttr = (struct _DC_ATTR *)HmgAllocateDcAttr();
  IsEnabledDeviceUsageNoInline = Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline();
  SEMOBJ<20>::SEMOBJ<20>(&v41, a1, IsEnabledDeviceUsageNoInline != 0);
  v34 = 0LL;
  v35 = 0;
  v36 = 0;
  if ( (unsigned int)Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline() )
    v13 = a1;
  else
    v13 = *(struct Gre::Base::SESSION_GLOBALS **)(W32GetSessionState(v12) + 88);
  v37 = v13;
  HANDLELOCK::vLockHandle((__int64 *)&v34, (unsigned __int16)v7 | (v7 >> 8) & 0xFF0000, 1);
  if ( v35 )
  {
    v14 = v34;
    EntryObject = GdiHandleManager::GetEntryObject(*((GdiHandleManager **)v37 + 709), *v34);
    if ( *((_BYTE *)v14 + 14) != 1 || *((_WORD *)v14 + 6) != HIWORD(v7) )
      goto LABEL_66;
    if ( *((_WORD *)EntryObject + 6) )
    {
      if ( *((struct _KTHREAD **)EntryObject + 2) != KeGetCurrentThread() )
        goto LABEL_66;
      v14 = v34;
    }
    if ( a3 != -2147483630 )
    {
      if ( (v14[2] & 0xFFFFFFFE) == 0x80000012 )
      {
        DC::AcquireDcVisRgnShared(EntryObject, (__int64)&v39);
        v16 = GrepValidateVisRgn(EntryObject, *((struct REGION **)EntryObject + 142), (struct ERECTL *)&v44);
        if ( v40 )
          CPushLock::ReleaseLock((CPushLock *)(v39 + 1112));
        if ( !v16 )
        {
          DC::AcquireDcVisRgnExclusive(EntryObject, (__int64)&v42);
          v39 = *((_QWORD *)EntryObject + 142);
          if ( v39 )
            RGNOBJ::vSet((RGNOBJ *)&v39, &v44);
          if ( v43 )
            CPushLock::ReleaseLock((CPushLock *)(v42 + 1112));
        }
      }
      if ( a3 )
      {
        if ( a3 == -2147483646 )
        {
          CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
          v18 = v14[2] & 0xFFFFFFFE;
          v19 = CurrentProcessId & 0xFFFFFFFC;
          if ( v18 == v19 || v18 == -2147483630 || !v18 )
          {
            v20 = 0;
            v9 = 1;
            if ( v18 != v19 )
            {
              v9 = HmgIncProcessHandleCountEx(v19, a5);
              if ( v9 )
              {
                v20 = 1;
              }
              else
              {
                if ( !a4 )
                  goto LABEL_56;
                CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v21);
                if ( CurrentProcessWin32Process )
                  CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
                GreIncQuotaCount((struct _W32PROCESS *)CurrentProcessWin32Process);
                v20 = 1;
                v9 = 1;
              }
            }
            if ( *((_QWORD *)v14 + 2) )
              goto LABEL_37;
            if ( DcAttr )
            {
              SetupDCAttributes(EntryObject, DcAttr);
              DcAttr = 0LL;
LABEL_37:
              HANDLELOCK::Pid((HANDLELOCK *)&v34, v19);
              goto LABEL_56;
            }
            if ( a4 )
              goto LABEL_37;
            v9 = 0;
            if ( v20 )
              HmgDecProcessHandleCount(v19);
          }
LABEL_56:
          if ( v9 )
          {
            if ( v6 && (unsigned int)GreSetBrushOwner(**((HBRUSH **)EntryObject + 17), a3) )
              GreSetBrushOwner(**((HBRUSH **)EntryObject + 18), a3);
            goto LABEL_67;
          }
          goto LABEL_66;
        }
        goto LABEL_66;
      }
    }
    v23 = v14[2] & 0xFFFFFFFE;
    if ( v23 == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
    {
      if ( (unsigned int)Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline() )
      {
        v25 = (GdiHandleManager **)v38;
        v26 = v38;
      }
      else
      {
        SessionState = W32GetSessionState(v24);
        v25 = (GdiHandleManager **)v38;
        v26 = *(struct Gre::Base::SESSION_GLOBALS **)(SessionState + 88);
      }
      v28 = (struct Gre::Base::SESSION_GLOBALS *)((char *)v26 + 2176);
      if ( v28 )
        GreEnterCriticalRegionAndAcquirePushLockExclusive(v28);
      if ( (unsigned int)Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline() )
        FreeDCAttributesFastOpt(v25, EntryObject);
      else
        FreeDCAttributes(EntryObject);
      HANDLELOCK::Pid((HANDLELOCK *)&v34, a3);
      if ( (unsigned int)Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline() )
      {
        v29 = (unsigned int)PsGetCurrentProcessId();
        HmgDecProcessHandleCountFastOpt(v25, v29 & 0xFFFFFFFC);
      }
      else
      {
        v30 = (unsigned int)PsGetCurrentProcessId();
        HmgDecProcessHandleCount(v30 & 0xFFFFFFFC);
      }
      v9 = 1;
      if ( v28 )
        W32ReleasePushLockExclusive(v28);
    }
    else
    {
      v31 = v14[2] & 0xFFFFFFFE;
      if ( v31 == -2147483630 )
      {
        HANDLELOCK::Pid((HANDLELOCK *)&v34, a3);
        v9 = 1;
      }
      else if ( !v31 && !a3 )
      {
        v9 = 1;
        goto LABEL_67;
      }
    }
    if ( a3 != -2147483630 )
      goto LABEL_56;
    if ( !v9 )
LABEL_66:
      HIBYTE(v36) = 1;
LABEL_67:
    HANDLELOCK::vUnlock((HANDLELOCK *)&v34);
  }
  HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v34);
  SEMOBJ<20>::vUnlock(&v41);
  if ( DcAttr )
    HmgFreeDcAttr((__int64)DcAttr);
  return v9;
}
