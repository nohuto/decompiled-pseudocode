/*
 * XREFs of xxxCreateWindowStation @ 0x14028CAA0
 * Callers:
 *     xxxConnectService @ 0x14016629C (xxxConnectService.c)
 *     EditionCreateWindowStationEntryPointEx @ 0x140293D10 (EditionCreateWindowStationEntryPointEx.c)
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140019B64 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxCreateWindowEx @ 0x14003997C (xxxCreateWindowEx.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140048F0C (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@H@Z @ 0x140049CB8 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@H@Z.c)
 *     ?SetVisible@@YA_NPEAUtagWND@@W4SetVisibleOptions@@@Z @ 0x14005A4E4 (-SetVisible@@YA_NPEAUtagWND@@W4SetVisibleOptions@@@Z.c)
 *     ?zzzEndDeferWinEventNotify@@YAXXZ @ 0x14005F888 (-zzzEndDeferWinEventNotify@@YAXXZ.c)
 *     W32GetCurrentWin32kSessionId @ 0x1400D8E2C (W32GetCurrentWin32kSessionId.c)
 *     SetLastNtError @ 0x140113F80 (SetLastNtError.c)
 *     xxxInitWindowStation @ 0x1401484D8 (xxxInitWindowStation.c)
 *     ?xxxInitTerminal@@YAJPEAUtagTERMINAL@@@Z @ 0x14020EC4C (-xxxInitTerminal@@YAJPEAUtagTERMINAL@@@Z.c)
 *     ?CreateDesktopNotificationEvent@@YAJPEAX@Z @ 0x1402156F4 (-CreateDesktopNotificationEvent@@YAJPEAX@Z.c)
 *     ?xxxCleanupMotherDesktopWindow@@YAXPEAUtagTERMINAL@@@Z @ 0x140222B10 (-xxxCleanupMotherDesktopWindow@@YAXPEAUtagTERMINAL@@@Z.c)
 *     zzzSetDesktop @ 0x140244CA0 (zzzSetDesktop.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?Arm@AtomicExecutionCheck@@QEAAXXZ @ 0x140271C68 (-Arm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

__int64 __fastcall xxxCreateWindowStation(
        __int64 a1,
        __int64 a2,
        ACCESS_MASK a3,
        __int64 a4,
        unsigned int a5,
        int a6,
        __int64 a7,
        __int64 a8,
        int a9,
        __int16 a10,
        HANDLE *a11)
{
  __int64 v11; // rax
  __int64 v12; // rsi
  void *v13; // r15
  void *SecurityDescriptor; // r12
  int v15; // r13d
  char v16; // di
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r9
  __int64 *v21; // r14
  NTSTATUS v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  unsigned int v25; // ebx
  struct _EX_RUNDOWN_REF *UserSessionState; // rax
  NTSTATUS DesktopNotificationEvent; // edi
  _QWORD *v29; // rax
  NTSTATUS GlobalAtomTable; // eax
  __int64 v31; // rdx
  NTSTATUS v32; // ecx
  __int64 v33; // rcx
  __int64 *v34; // r13
  struct tagTHREADINFO *v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rbx
  __int64 v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rdx
  _QWORD *CurrentProcessWin32Process; // rax
  __int64 v42; // rcx
  __int64 v43; // rax
  char v44; // di
  __int64 Window; // rbx
  __int64 v46; // rdx
  void *v47; // r8
  void *v48; // r8
  ULONG v49; // r13d
  ULONG v50; // edi
  _WORD *v51; // rbx
  __int64 v52; // rdx
  NTSTATUS inserted; // eax
  __int64 v54; // rdx
  __int64 v55; // rcx
  _QWORD *i; // rax
  __int64 v57; // rdx
  __int64 v58; // rcx
  PVOID v59; // r13
  struct tagTHREADINFO *v60; // rax
  __int64 v61; // rdx
  struct tagTHREADINFO *v62; // rax
  __int64 v63; // rdx
  PVOID v64; // rcx
  __int64 v65; // rax
  char v66; // r13
  __int64 v67; // rbx
  __int64 v68; // rdx
  PVOID Object; // [rsp+98h] [rbp-80h] BYREF
  int v70; // [rsp+A0h] [rbp-78h]
  char v71[8]; // [rsp+A8h] [rbp-70h] BYREF
  __int64 v72; // [rsp+B0h] [rbp-68h]
  void *v73; // [rsp+B8h] [rbp-60h]
  HANDLE Handle; // [rsp+C0h] [rbp-58h] BYREF
  __int64 v75; // [rsp+C8h] [rbp-50h]
  _QWORD v76[2]; // [rsp+D0h] [rbp-48h] BYREF
  _QWORD v77[3]; // [rsp+E0h] [rbp-38h] BYREF
  _QWORD v78[2]; // [rsp+F8h] [rbp-20h] BYREF
  __int64 v79[10]; // [rsp+108h] [rbp-10h] BYREF
  char v80; // [rsp+168h] [rbp+50h]

  v11 = *(_QWORD *)(a1 + 32);
  Object = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  Handle = 0LL;
  SecurityDescriptor = 0LL;
  v70 = 0;
  v15 = 0;
  v76[0] = v11;
  v16 = a2;
  if ( *(_QWORD *)(W32GetUserSessionState(a1, a2) + 63520) )
  {
    v21 = (__int64 *)(W32GetUserSessionState(v19, v18) + 68536);
    *(_DWORD *)v21 |= 2u;
  }
  else
  {
    v21 = (__int64 *)(W32GetUserSessionState(v19, v18) + 68464);
  }
  LOBYTE(v20) = v16;
  v22 = ObCreateObject(0LL, ExWindowStationObjectType, a1, v20, 0LL, 248, 0, 0, &Object);
  v25 = v22;
  if ( v22 < 0 )
  {
    SetLastNtError(v22);
    return v25;
  }
  UserSessionState = (struct _EX_RUNDOWN_REF *)W32GetUserSessionState(v24, v23);
  if ( ExAcquireRundownProtection(UserSessionState + 7941) )
  {
    memset_0(Object, 0, 0xF8uLL);
    v29 = (char *)Object + 224;
    *((_QWORD *)Object + 29) = (char *)Object + 224;
    *v29 = v29;
    *(_DWORD *)Object = W32GetCurrentWin32kSessionId();
    *((_QWORD *)Object + 7) = v21;
    if ( (*(_DWORD *)v21 & 2) != 0 )
    {
      *((_DWORD *)Object + 16) = 4;
    }
    else if ( (a10 & 0x800) != 0 )
    {
      *((_DWORD *)Object + 16) |= 0x800u;
    }
    GlobalAtomTable = CreateGlobalAtomTable((char *)Object + 168);
    DesktopNotificationEvent = GlobalAtomTable;
    if ( GlobalAtomTable < 0
      || (*(_DWORD *)v21 & 1) == 0
      && (GlobalAtomTable = xxxInitTerminal((struct tagTERMINAL *)v21),
          DesktopNotificationEvent = GlobalAtomTable,
          GlobalAtomTable < 0) )
    {
      v32 = GlobalAtomTable;
LABEL_14:
      SetLastNtError(v32);
      goto LABEL_69;
    }
    v33 = *((unsigned int *)Object + 16);
    if ( (v33 & 4) == 0 && !(unsigned int)xxxInitWindowStation() )
    {
      DesktopNotificationEvent = -1073741801;
      v32 = -1073741801;
      goto LABEL_14;
    }
    v34 = v21 + 1;
    if ( !v21[1] )
    {
      v35 = PtiCurrent(v33, v31);
      v36 = v21[2];
      v12 = (__int64)v35;
      v37 = *((_QWORD *)v35 + 58);
      v13 = (void *)*((_QWORD *)v35 + 62);
      v38 = *(_QWORD *)(v36 + 464);
      *((_QWORD *)v35 + 58) = v38;
      v73 = (void *)*((_QWORD *)v35 + 79);
      v75 = v37;
      if ( v13 )
      {
        ObfReferenceObject(v13);
      }
      else if ( *((struct tagTHREADINFO **)v35 + 97) != (struct tagTHREADINFO *)((char *)v35 + 776) )
      {
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 541);
      }
      v39 = W32GetUserSessionState(v36, v38);
      v71[0] = 0;
      v72 = 0LL;
      ++*(_DWORD *)(v39 + 70600);
      AtomicExecutionCheck::Arm((AtomicExecutionCheck *)v71, v40);
      DesktopNotificationEvent = zzzSetDesktop(v12, 0LL, 0LL);
      if ( DesktopNotificationEvent < 0 )
      {
        if ( !*(_QWORD *)(v12 + 496) && v13 )
          zzzSetDesktop(v12, (unsigned int *)v13, v73);
        AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v71);
        zzzEndDeferWinEventNotify();
        *(_QWORD *)(v12 + 464) = v37;
        goto LABEL_30;
      }
      if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v12 + 528), 0, 0) & 0x10000000) != 0 )
      {
        v80 = 0;
      }
      else
      {
        v80 = 1;
        _InterlockedOr((volatile signed __int32 *)(v12 + 528), 0x10000000u);
      }
      CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(0x10000000LL);
      if ( !CurrentProcessWin32Process || !*CurrentProcessWin32Process )
        goto LABEL_39;
      v43 = PsGetCurrentProcessWin32Process(v42);
      if ( v43 )
        v43 &= -(__int64)(*(_QWORD *)v43 != 0LL);
      v44 = 1;
      if ( !(unsigned int)IsImmersiveAppRestricted(v43) )
LABEL_39:
        v44 = 0;
      SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v79, 0LL);
      Window = xxxCreateWindowEx(
                 0,
                 (wchar_t *)0x8001,
                 32769LL,
                 0LL,
                 0x82000000,
                 -32768,
                 -32768,
                 0xFFFF,
                 0xFFFF,
                 0LL,
                 (__int64)v79,
                 hModuleWin,
                 0LL,
                 1u,
                 0x30Au,
                 v44,
                 0LL);
      SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v79, v46);
      if ( !Window )
      {
        DesktopNotificationEvent = -1073741801;
        AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v71);
        zzzEndDeferWinEventNotify();
        v47 = v73;
        *(_QWORD *)(v12 + 464) = v75;
        zzzSetDesktop(v12, (unsigned int *)v13, v47);
LABEL_30:
        AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v71);
        v15 = 0;
        goto LABEL_69;
      }
      v78[0] = v21 + 1;
      v78[1] = Window;
      HMAssignmentLock(v78, 0LL);
      if ( v80 )
        _InterlockedAnd((volatile signed __int32 *)(v12 + 528), 0xEFFFFFFF);
      SetVisible(*v34, 1u);
      HMChangeOwnerThread(*v34, v21[2]);
      v15 = 1;
      v48 = v73;
      *(_QWORD *)(v12 + 464) = v75;
      v70 = 1;
      DesktopNotificationEvent = zzzSetDesktop(v12, (unsigned int *)v13, v48);
      if ( DesktopNotificationEvent < 0 )
      {
        AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v71);
        zzzEndDeferWinEventNotify();
        AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v71);
        goto LABEL_69;
      }
      AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v71);
      zzzEndDeferWinEventNotify();
      if ( v13 )
      {
        ObfDereferenceObject(v13);
        v13 = 0LL;
      }
    }
    if ( (*((_DWORD *)Object + 16) & 4) != 0 )
      goto LABEL_54;
    v49 = RtlLengthSid(SeExports->SeWorldSid);
    v50 = v49 + 8;
    v51 = (_WORD *)Win32AllocPoolWithQuotaZInit(v49 + 8, 1702064981LL);
    if ( v51
      && (*v51 = 0,
          v51[1] = v50,
          *((_DWORD *)v51 + 1) = 0x100000,
          RtlCopySid(v49, v51 + 4, SeExports->SeWorldSid),
          SecurityDescriptor = (void *)CreateSecurityDescriptor(v51, v50, 0LL),
          Win32FreePool(v51),
          SecurityDescriptor) )
    {
      DesktopNotificationEvent = CreateDesktopNotificationEvent(SecurityDescriptor, v52);
      if ( DesktopNotificationEvent >= 0 )
      {
        Win32FreePool(SecurityDescriptor);
LABEL_54:
        inserted = ObInsertObject(Object, 0LL, a3, 1u, &Object, &Handle);
        SecurityDescriptor = 0LL;
        DesktopNotificationEvent = inserted;
        if ( inserted < 0 )
        {
          Object = 0LL;
        }
        else
        {
          if ( inserted == 0x40000000 )
            goto LABEL_66;
          DesktopNotificationEvent = ApplySecurityAttributesToWinsta(Object, v76[0]);
          if ( DesktopNotificationEvent >= 0 )
          {
            for ( i = (_QWORD *)(W32GetUserSessionState(v55, v54) + 63520); *i; i = (_QWORD *)(*i + 8LL) )
              ;
            LockObjectAssignment(i, Object);
            v59 = Object;
            if ( (*((_DWORD *)Object + 16) & 4) == 0 )
            {
              if ( a8 )
              {
                v60 = PtiCurrent(v58, v57);
                v77[0] = *((_QWORD *)v60 + 48);
                *((_QWORD *)v60 + 48) = v77;
                v77[2] = UserDereferenceObject;
                v77[1] = v59;
                if ( !xxxSafeLoadKeyboardLayoutEx(Object, a4, 0LL, a5, a6, a7, a8, a9, -2147483647) )
                  DesktopNotificationEvent = -1073741823;
                v62 = PtiCurrent(3221225473LL, v61);
                *((_QWORD *)v62 + 48) = v77[0];
              }
            }
          }
          if ( DesktopNotificationEvent >= 0 )
          {
LABEL_66:
            ObfDereferenceObject(Object);
            *a11 = Handle;
            return 0LL;
          }
        }
      }
    }
    else
    {
      DesktopNotificationEvent = -1073741801;
    }
    v15 = v70;
    goto LABEL_69;
  }
  DesktopNotificationEvent = -1073741790;
LABEL_69:
  SetLastNtError(DesktopNotificationEvent);
  v64 = Object;
  if ( Object )
    ObfDereferenceObject(Object);
  if ( v15 )
  {
    v65 = W32GetUserSessionState(v64, v63);
    ++*(_DWORD *)(v65 + 70600);
    if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v12 + 528), 0, 0) & 0x10000000) != 0 )
    {
      v66 = 0;
    }
    else
    {
      v66 = 1;
      _InterlockedOr((volatile signed __int32 *)(v12 + 528), 0x10000000u);
    }
    v67 = *(_QWORD *)(v12 + 464);
    *(_QWORD *)(v12 + 464) = *(_QWORD *)(v21[2] + 464);
    HMChangeOwnerThread(v21[1], v12);
    LOBYTE(v76[0]) = 0;
    v76[1] = 0LL;
    AtomicExecutionCheck::Arm((AtomicExecutionCheck *)v76, v68);
    xxxCleanupMotherDesktopWindow((struct tagTERMINAL *)v21);
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v76);
    *(_QWORD *)(v12 + 464) = v67;
    if ( v66 )
      _InterlockedAnd((volatile signed __int32 *)(v12 + 528), 0xEFFFFFFF);
    zzzEndDeferWinEventNotify();
  }
  if ( Handle )
    ObCloseHandle(Handle, 1);
  if ( SecurityDescriptor )
    Win32FreePool(SecurityDescriptor);
  if ( v13 )
    ObfDereferenceObject(v13);
  return (unsigned int)DesktopNotificationEvent;
}
