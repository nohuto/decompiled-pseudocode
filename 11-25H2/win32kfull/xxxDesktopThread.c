/*
 * XREFs of xxxDesktopThread @ 0x140288970
 * Callers:
 *     <none>
 * Callees:
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x14001F450 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     xxxDesktopThreadWaiter @ 0x140020F14 (xxxDesktopThreadWaiter.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     IsCurrentSessionServiceSession @ 0x1400D8C14 (IsCurrentSessionServiceSession.c)
 *     ?xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x140114EA8 (-xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     ?HYDRA_HINT@@YAXW4HydraHint@@@Z @ 0x140126CC4 (-HYDRA_HINT@@YAXW4HydraHint@@@Z.c)
 *     IsRemoteConnection @ 0x1401590F0 (IsRemoteConnection.c)
 *     ?IsAnyThreadAttached@tagQ@@QEBA_NXZ @ 0x140207CAC (-IsAnyThreadAttached@tagQ@@QEBA_NXZ.c)
 *     ??_GLegacyInputDispatcher@@QEAAPEAXI@Z @ 0x140218E98 (--_GLegacyInputDispatcher@@QEAAPEAXI@Z.c)
 *     ?xxxCleanupMotherDesktopWindow@@YAXPEAUtagTERMINAL@@@Z @ 0x140222B10 (-xxxCleanupMotherDesktopWindow@@YAXPEAUtagTERMINAL@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x1402709B8 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

void __fastcall xxxDesktopThread(struct tagTERMINAL *a1)
{
  unsigned int v1; // r13d
  int v3; // esi
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // r12d
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 KernelEvent; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  const WCHAR *v12; // rdx
  const wchar_t *v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rcx
  struct tagTHREADINFO *v16; // rax
  struct tagTHREADINFO *v17; // r15
  tagQ *v18; // r14
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  unsigned int v25; // r13d
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rbx
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 UserSessionState; // rax
  void *v43; // rbx
  __int64 v44; // rdx
  __int64 v45; // rdx
  struct _KEVENT *v46; // rcx
  bool v47; // zf
  void *v48; // rcx
  LegacyInputDispatcher *v49; // rcx
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // rbx
  __int64 v53; // rdx
  __int64 v54; // rcx
  unsigned int v55; // r12d
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // rax
  __int64 v59; // rax
  LegacyInputDispatcher *v60; // rcx
  __int64 v61; // rdx
  __int64 v62; // rdx
  _QWORD *v63; // rcx
  _QWORD *v64; // rax
  LegacyInputDispatcher *v65; // rcx
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // rbx
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // rbx
  signed __int32 v72[8]; // [rsp+8h] [rbp-89h] BYREF
  char v73; // [rsp+38h] [rbp-59h]
  int v74; // [rsp+3Ch] [rbp-55h]
  _BYTE v75[8]; // [rsp+40h] [rbp-51h] BYREF
  LegacyInputDispatcher *v76; // [rsp+48h] [rbp-49h] BYREF
  int ProcessInformation; // [rsp+50h] [rbp-41h] BYREF
  int v78; // [rsp+54h] [rbp-3Dh]
  struct _UNICODE_STRING DestinationString; // [rsp+58h] [rbp-39h] BYREF
  __int64 v80; // [rsp+68h] [rbp-29h] BYREF
  _QWORD v81[9]; // [rsp+70h] [rbp-21h]

  v1 = 0;
  v73 = 0;
  v76 = 0LL;
  DestinationString = 0LL;
  memset_0(&v80, 0, 0x50uLL);
  v3 = *(_DWORD *)a1 & 2;
  v6 = *(_DWORD *)(W32GetUserSessionState(v5, v4) + 19096);
  v78 = v6;
  SetThreadBasePriority(KeGetCurrentThread(), v3 != 0 ? 12 : 16);
  if ( !v3 )
  {
    if ( *(_QWORD *)(W32GetUserSessionState(v8, v7) + 63192) )
    {
      v74 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 858);
    }
    KernelEvent = CreateKernelEvent(1LL, 0LL);
    *(_QWORD *)(W32GetUserSessionState(v11, v10) + 63192) = KernelEvent;
  }
  v12 = L"IO_DT";
  if ( v3 )
    v12 = L"NOIO_DT";
  RtlInitUnicodeString(&DestinationString, v12);
  v13 = L"Win32k Desktop Thread (IO_DT)";
  if ( v3 )
    v13 = L"Win32k Desktop Thread (NOIO_DT)";
  SetThreadName(-2LL, v13);
  if ( (int)InitSystemThread(&DestinationString) >= 0 && (v3 || *(_QWORD *)(W32GetUserSessionState(v15, v14) + 63192)) )
  {
    v16 = PtiCurrent(v15, v14);
    *((_QWORD *)a1 + 2) = v16;
    v17 = v16;
    v18 = (tagQ *)*((_QWORD *)v16 + 59);
    *((_QWORD *)a1 + 3) = v18;
    ++*((_DWORD *)v18 + 104);
    *((_QWORD *)v16 + 63) = *(_QWORD *)(W32GetUserSessionState(v20, v19) + 62920);
    *((_QWORD *)v17 + 82) = 0LL;
    if ( (int)LegacyInputDispatcher::Create(&v76) < 0 )
    {
      *(_DWORD *)a1 |= 8u;
      _InterlockedOr(v72, 0);
      KeSetEvent(*((PRKEVENT *)a1 + 5), 1, 0);
      if ( v3 )
        return;
      goto LABEL_77;
    }
    if ( !v3 )
    {
      v25 = 1;
      v27 = *(_QWORD *)(W32GetUserSessionState(v22, v21) + 36312);
      v80 = *(_QWORD *)(v27 + 72);
      v81[0] = OnPointerCursorOperation;
      if ( !v6 )
      {
        v25 = 2;
        v27 = *(_QWORD *)(W32GetUserSessionState(v27, v26) + 16824);
        v81[2] = OnPTPMouseOperation;
        v81[1] = v27;
      }
      v28 = 2LL * v25;
      v1 = v25 + 1;
      v29 = *(_QWORD *)(W32GetUserSessionState(v27, v26) + 63192);
      v81[v28] = lambda_340913faf875194f1243cffee2808d86_::_lambda_invoker_cdecl_;
      v81[v28 - 1] = v29;
      if ( IsCurrentSessionServiceSession() )
      {
        UserSessionState = W32GetUserSessionState(v31, v30);
        CBaseInput::InitializeSensor(*(CBaseInput **)(UserSessionState + 3096));
        v73 = 1;
      }
      else if ( !v6 )
      {
        v73 = 1;
        v32 = W32GetUserSessionState(v31, v30);
        if ( (int)CBaseInput::InitializeSensor(*(CBaseInput **)(v32 + 3096)) >= 0 )
        {
          if ( IsRemoteConnection(v34, v33) )
          {
            EnterCrit(1LL, 0LL);
            v39 = W32GetUserSessionState(v38, v37);
            CBaseInput::HandleTSRequest(*(_QWORD *)(v39 + 3096), 0LL);
            UserSessionSwitchLeaveCrit(v40);
          }
          v41 = W32GetUserSessionState(v36, v35);
          CBaseInput::Read(*(CBaseInput **)(v41 + 3096));
        }
      }
    }
    EnterCrit(1LL, 0LL);
    *(_DWORD *)a1 |= 4u;
    KeSetEvent(*((PRKEVENT *)a1 + 5), 1, 0);
    v43 = (void *)*((_QWORD *)a1 + 7);
    ObReferenceObjectByPointer(v43, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 0);
    LOBYTE(v44) = 1;
    LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)v75, v44);
    KeWaitForSingleObject(v43, WrUserRequest, 0, 0, 0LL);
    LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)v75);
    ObfDereferenceObject(v43);
    if ( (*(_DWORD *)a1 & 8) != 0 )
    {
      _InterlockedOr(v72, 0);
      if ( *((_QWORD *)a1 + 1) )
        xxxCleanupMotherDesktopWindow(a1);
      v46 = (struct _KEVENT *)*((_QWORD *)a1 + 5);
      if ( v46 )
        KeSetEvent(v46, 1, 0);
      v47 = (*((_DWORD *)v18 + 104))-- == 1;
      if ( v47 && !tagQ::IsAnyThreadAttached(v18) && (*((_DWORD *)v18 + 103) & 0x4000000) != 0 )
      {
        v74 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1036);
      }
      v48 = (void *)*((_QWORD *)a1 + 7);
      *((_QWORD *)a1 + 2) = 0LL;
      *((_QWORD *)a1 + 3) = 0LL;
      *(_DWORD *)a1 = 0;
      if ( v48 )
      {
        ObfDereferenceObject(v48);
        *((_QWORD *)a1 + 7) = 0LL;
      }
      if ( v73 )
        CleanupSensorExplicitly(0LL);
      v49 = v76;
      if ( v76 )
        LegacyInputDispatcher::`scalar deleting destructor'(v76);
      if ( !v3 )
      {
        if ( !*(_QWORD *)(W32GetUserSessionState(v49, v45) + 63192) )
        {
          v74 = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1055);
        }
        v52 = W32GetUserSessionState(v51, v50);
        Win32FreePool(*(void **)(v52 + 63192));
        *(_QWORD *)(v52 + 63192) = 0LL;
      }
    }
    else
    {
      tagTERMINAL::SetDTEThread(a1);
      ProcessInformation = 1;
      ZwSetInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessBreakOnTermination, &ProcessInformation, 4u);
      v54 = 2LL * v1;
      v81[2 * v1 - 1] = *((_QWORD *)v17 + 201);
      if ( v1 + 1 > 5 )
      {
        v74 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1079);
      }
      if ( v3 || v6 )
      {
        v55 = v1 + 1;
      }
      else
      {
        W32GetUserSessionState(v54, v53);
        v55 = v1 + 10;
      }
      LegacyInputDispatcher::Initialize(v76, 1, 0, v55, v1 + 1, (struct LegacyDispatcherObject *)&v80);
      if ( v55 != v1 + 1 && !v78 )
      {
        v58 = W32GetUserSessionState(v57, v56);
        CBaseInput::RegisterDispatcherObject(*(CBaseInput **)(v58 + 3096), v76);
      }
      *((_DWORD *)v76 + 15) = v1;
      v59 = W32GetUserSessionState(v57, v56);
      if ( v3 )
      {
        *(_QWORD *)(v59 + 19168) = v76;
      }
      else
      {
        v60 = v76;
        *(_QWORD *)(v59 + 19160) = v76;
      }
      do
      {
        do
          LOBYTE(v60) = 1;
        while ( (unsigned int)xxxDesktopThreadWaiter((__int64)v60, 0LL) != v1 );
      }
      while ( (unsigned int)xxxHandleDesktopMessages(v17, a1) );
      if ( a1 == (struct tagTERMINAL *)(W32GetUserSessionState(v60, v61) + 68464) )
        HYDRA_HINT(0x100000LL, v62);
      *((_QWORD *)a1 + 2) = 0LL;
      *((_QWORD *)a1 + 3) = 0LL;
      *((_DWORD *)a1 + 8) = 0;
      *(_DWORD *)a1 = 0;
      v63 = (_QWORD *)*((_QWORD *)v17 + 62);
      if ( v63 )
      {
        HMAssignmentUnlock(v63 + 24);
        v64 = *(_QWORD **)(*((_QWORD *)v17 + 62) + 8LL);
        v63 = v64 + 3;
        if ( v64[3] )
        {
          *(_QWORD *)(*v64 + 8LL) = 0LL;
          HMAssignmentUnlock(v63);
        }
      }
      *((_QWORD *)v17 + 63) = *(_QWORD *)(W32GetUserSessionState(v63, v62) + 62920);
      if ( !*((_DWORD *)v18 + 104) )
      {
        v74 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1180);
      }
      --*((_DWORD *)v18 + 104);
      if ( *((tagQ **)v17 + 59) != v18 )
        zzzDestroyQueue(v18, v17);
      if ( v73 )
        CleanupSensorExplicitly(0LL);
      v65 = v76;
      if ( v76 )
        LegacyInputDispatcher::`scalar deleting destructor'(v76);
      v76 = 0LL;
      UserSessionSwitchLeaveCrit(v65);
      if ( !v3 )
      {
        v68 = W32GetUserSessionState(v67, v66);
        Win32FreePool(*(void **)(v68 + 63192));
        *(_QWORD *)(v68 + 63192) = 0LL;
      }
      ProcessInformation = 0;
      ZwSetInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessBreakOnTermination, &ProcessInformation, 4u);
      EnterCrit(1LL, 0LL);
      tagTERMINAL::ClearDTEThread(a1);
    }
    UserSessionSwitchLeaveCrit(v49);
  }
  else
  {
    *(_DWORD *)a1 |= 8u;
    _InterlockedOr(v72, 0);
    KeSetEvent(*((PRKEVENT *)a1 + 5), 1, 0);
    if ( !v3 && *(_QWORD *)(W32GetUserSessionState(v70, v69) + 63192) )
    {
LABEL_77:
      v71 = W32GetUserSessionState(v24, v23);
      Win32FreePool(*(void **)(v71 + 63192));
      *(_QWORD *)(v71 + 63192) = 0LL;
    }
  }
}
