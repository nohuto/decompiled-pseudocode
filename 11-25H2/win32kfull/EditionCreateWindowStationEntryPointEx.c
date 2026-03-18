/*
 * XREFs of EditionCreateWindowStationEntryPointEx @ 0x140293D10
 * Callers:
 *     EditionCreateWindowStationEntryPoint @ 0x140293CC0 (EditionCreateWindowStationEntryPoint.c)
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ??0_unnamed_type_list_@tagTLBLOCK@@QEAA@XZ @ 0x14002B2A0 (--0_unnamed_type_list_@tagTLBLOCK@@QEAA@XZ.c)
 *     W32GetCurrentWin32kSessionId @ 0x1400D8E2C (W32GetCurrentWin32kSessionId.c)
 *     ?RtlStringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x14011B9D0 (-RtlStringCchCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     ??1?$Win32RawLockedItemNoCleanup@UtagINTDDEINFO@@$0A@@@QEAA@XZ @ 0x1401668B0 (--1-$Win32RawLockedItemNoCleanup@UtagINTDDEINFO@@$0A@@@QEAA@XZ.c)
 *     ??0?$Win32RawLockedItemNoCleanup@U_ACCESS_ALLOWED_ACE@@$0A@@@QEAA@PEAU_ACCESS_ALLOWED_ACE@@P6AXPEAX@Z@Z @ 0x1401668DC (--0-$Win32RawLockedItemNoCleanup@U_ACCESS_ALLOWED_ACE@@$0A@@@QEAA@PEAU_ACCESS_ALLOWED_ACE@@P6AXP.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14018EC58 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ??1?$Win32RawOptionalLockedItem@X$0A@@@QEAA@XZ @ 0x1401CDB3C (--1-$Win32RawOptionalLockedItem@X$0A@@@QEAA@XZ.c)
 *     ??$ManualLock@X@?$Win32RawLockedItemBase@X$0A@$00$00$00@@QEAAXPEAXP6AX0@Z@Z @ 0x14020F710 (--$ManualLock@X@-$Win32RawLockedItemBase@X$0A@$00$00$00@@QEAAXPEAXP6AX0@Z@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RtlCopyFromUser @ 0x140270948 (RtlCopyFromUser.c)
 *     ?ProbeAndDeepCaptureWinStaDesktopObjectAttributes@@YAJHPEAU_OBJECT_ATTRIBUTES@@AEAY0BAA@GAEAU1@AEAU_SECURITY_QUALITY_OF_SERVICE@@AEAPEAXAEAU_UNICODE_STRING@@AEAPEAG@Z @ 0x14028C768 (-ProbeAndDeepCaptureWinStaDesktopObjectAttributes@@YAJHPEAU_OBJECT_ATTRIBUTES@@AEAY0BAA@GAEAU1@A.c)
 *     xxxCreateWindowStation @ 0x14028CAA0 (xxxCreateWindowStation.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

HANDLE __fastcall EditionCreateWindowStationEntryPointEx(
        struct _OBJECT_ATTRIBUTES *a1,
        ACCESS_MASK a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        void *Src,
        ULONG64 a7,
        int a8,
        char a9)
{
  ULONG64 v10; // rbx
  int v11; // ecx
  ULONG_PTR v12; // r8
  ULONG64 v13; // rdx
  _DWORD *v14; // r14
  ULONG_PTR v15; // rcx
  _OWORD *v16; // rcx
  _OWORD *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  _OWORD *v20; // rcx
  _OWORD *v21; // rax
  void *v22; // rbx
  NTSTATUS v23; // eax
  ULONG v24; // eax
  __int64 v25; // rdx
  char v26; // r15
  unsigned int *v27; // rcx
  bool v28; // r13
  char CurrentWin32kSessionId; // bl
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 UserSessionState; // rax
  int v33; // r8d
  int v34; // edx
  ULONG_PTR v35; // rdx
  __int64 v36; // rdx
  __int64 v37; // rcx
  NTSTATUS v38; // r15d
  __int64 v39; // rdx
  __int64 v40; // rdx
  ULONG v41; // eax
  __int64 v42; // rdx
  HANDLE v46; // [rsp+70h] [rbp-988h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+78h] [rbp-980h] BYREF
  ULONG_PTR v48; // [rsp+80h] [rbp-978h] BYREF
  int v49; // [rsp+88h] [rbp-970h]
  NTSTATUS v50; // [rsp+8Ch] [rbp-96Ch]
  ACCESS_MASK v51; // [rsp+90h] [rbp-968h]
  unsigned int v52; // [rsp+98h] [rbp-960h]
  _DWORD *v53; // [rsp+A0h] [rbp-958h]
  __int64 v54; // [rsp+A8h] [rbp-950h]
  __int64 v55; // [rsp+B0h] [rbp-948h]
  ULONG_PTR v56[4]; // [rsp+B8h] [rbp-940h] BYREF
  struct _UNICODE_STRING v57; // [rsp+D8h] [rbp-920h] BYREF
  ULONG_PTR BugCheckParameter2[3]; // [rsp+E8h] [rbp-910h] BYREF
  struct _OBJECT_ATTRIBUTES v59; // [rsp+100h] [rbp-8F8h] BYREF
  _QWORD v60[3]; // [rsp+130h] [rbp-8C8h] BYREF
  _BYTE v61[792]; // [rsp+148h] [rbp-8B0h] BYREF
  _BYTE v62[800]; // [rsp+460h] [rbp-598h] BYREF
  struct _SECURITY_QUALITY_OF_SERVICE v63; // [rsp+780h] [rbp-278h] BYREF
  unsigned __int16 v64[272]; // [rsp+790h] [rbp-268h] BYREF

  v54 = a3;
  v51 = a2;
  v55 = a3;
  v52 = a4;
  v10 = a7;
  memset(&v59, 0, sizeof(v59));
  *(_QWORD *)&v63.Length = 0LL;
  *(_DWORD *)&v63.ContextTrackingMode = 0;
  BugCheckParameter3 = 0LL;
  v57 = 0LL;
  v53 = 0LL;
  v48 = 0LL;
  v46 = 0LL;
  EnterCrit(0LL, 0LL);
  if ( a7 >= MmUserProbeAddress )
    v10 = MmUserProbeAddress;
  v11 = *(_DWORD *)v10;
  v49 = v11;
  LODWORD(v56[0]) = v11;
  v12 = *(_QWORD *)(v10 + 8);
  v56[1] = v12;
  if ( (v12 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v13 = (unsigned __int16)v11 + v12 + 2;
  if ( v13 <= v12 || v13 >= MmUserProbeAddress )
    ExRaiseAccessViolation();
  if ( (unsigned __int16)v11 > HIWORD(v49) )
  {
    if ( (v11 & 1) == 0 )
      goto LABEL_20;
    goto LABEL_19;
  }
  if ( (v11 & 1) != 0 )
  {
LABEL_19:
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 709);
LABEL_20:
    ExRaiseAccessViolation();
  }
  RtlStringCchCopyNW((char *)v64, 9LL, (char *)v12, (unsigned __int64)(unsigned __int16)v11 >> 1);
  v14 = (_DWORD *)Win32AllocPoolWithQuotaZInit(792LL, 1702064981LL);
  v53 = v14;
  if ( v14 )
  {
    memset_0(v61, 0, sizeof(v61));
    RtlCopyFromUser(v61, Src, 0x318uLL);
    v16 = v62;
    v17 = v61;
    v18 = 6LL;
    v19 = 6LL;
    do
    {
      *v16 = *v17;
      v16[1] = v17[1];
      v16[2] = v17[2];
      v16[3] = v17[3];
      v16[4] = v17[4];
      v16[5] = v17[5];
      v16[6] = v17[6];
      v16 += 8;
      *(v16 - 1) = v17[7];
      v17 += 8;
      --v19;
    }
    while ( v19 );
    *v16 = *v17;
    *((_QWORD *)v16 + 2) = *((_QWORD *)v17 + 2);
    v20 = v14;
    v21 = v62;
    do
    {
      *v20 = *v21;
      v20[1] = v21[1];
      v20[2] = v21[2];
      v20[3] = v21[3];
      v20[4] = v21[4];
      v20[5] = v21[5];
      v20[6] = v21[6];
      v20 += 8;
      *(v20 - 1) = v21[7];
      v21 += 8;
      --v18;
    }
    while ( v18 );
    *v20 = *v21;
    *((_QWORD *)v20 + 2) = *((_QWORD *)v21 + 2);
    if ( *v14 < 8u )
    {
      v23 = ProbeAndDeepCaptureWinStaDesktopObjectAttributes(
              1,
              a1,
              (unsigned __int16 (*)[256])&v64[16],
              &v59,
              &v63,
              (void **)&BugCheckParameter3,
              &v57,
              (unsigned __int16 **)&v48);
      v50 = v23;
      if ( v23 >= 0 )
      {
        tagTLBLOCK::_unnamed_type_list_::_unnamed_type_list_((tagTLBLOCK::_unnamed_type_list_ *)BugCheckParameter2);
        if ( BugCheckParameter3 )
          Win32RawLockedItemBase<void,0,1,1,1>::ManualLock<void>(
            BugCheckParameter2,
            BugCheckParameter3,
            (__int64)CleanupSecurityDescriptor);
        Win32RawLockedItemNoCleanup<_ACCESS_ALLOWED_ACE,0>::Win32RawLockedItemNoCleanup<_ACCESS_ALLOWED_ACE,0>(
          v60,
          (__int64)v14,
          (__int64)Win32FreePool);
        if ( (a9 & 2) != 0 )
        {
          if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
            || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80000) == 0
            || (v26 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
          {
            v26 = 0;
          }
          v27 = &WPP_RECORDER_INITIALIZED;
          v28 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( v26 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            CurrentWin32kSessionId = W32GetCurrentWin32kSessionId();
            UserSessionState = W32GetUserSessionState(v31, v30);
            LOBYTE(v33) = v28;
            LOBYTE(v34) = v26;
            WPP_RECORDER_AND_TRACE_SF_d(
              *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
              v34,
              v33,
              *(_QWORD *)(UserSessionState + 69160),
              4,
              20,
              10,
              (__int64)&WPP_212fca24ed3e3073058b582086d1855d_Traceguids,
              CurrentWin32kSessionId);
          }
          *(_DWORD *)(W32GetUserSessionState(v27, v25) + 356) = 1;
        }
        tagTLBLOCK::_unnamed_type_list_::_unnamed_type_list_((tagTLBLOCK::_unnamed_type_list_ *)v56);
        v35 = v48;
        if ( v48 )
          Win32RawLockedItemBase<void,0,1,1,1>::ManualLock<void>(v56, v48, (__int64)Win32FreePool);
        LOBYTE(v35) = 0;
        v38 = xxxCreateWindowStation((__int64)&v59, v35, a2, v54, a4, a5, (__int64)v14, (__int64)v64, a8, 0, &v46);
        v22 = 0LL;
        BugCheckParameter3 = 0LL;
        if ( v38 < 0 && (a9 & 2) != 0 )
          *(_DWORD *)(W32GetUserSessionState(v37, v36) + 356) = 0;
        Win32RawOptionalLockedItem<void,0>::~Win32RawOptionalLockedItem<void,0>((__int64)v56, v36);
        Win32RawLockedItemNoCleanup<tagINTDDEINFO,0>::~Win32RawLockedItemNoCleanup<tagINTDDEINFO,0>(v60, v39);
        Win32RawOptionalLockedItem<void,0>::~Win32RawOptionalLockedItem<void,0>((__int64)BugCheckParameter2, v40);
        if ( v38 < 0 )
        {
          v46 = 0LL;
          v41 = RtlNtStatusToDosError(v38);
          UserSetLastError(v41);
        }
      }
      else
      {
        v46 = 0LL;
        v24 = RtlNtStatusToDosError(v23);
        UserSetLastError(v24);
        v22 = (void *)v48;
      }
    }
    else
    {
      v46 = 0LL;
      UserSetLastError(87);
      v22 = (void *)v48;
    }
    Win32FreePool(v14);
    if ( v22 )
    {
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000, 832);
      Win32FreePool(v22);
    }
    v15 = BugCheckParameter3;
    if ( BugCheckParameter3 )
    {
      LOBYTE(v42) = 1;
      SeReleaseSecurityDescriptor(BugCheckParameter3, v42, 0LL);
      BugCheckParameter3 = 0LL;
    }
  }
  else
  {
    v46 = 0LL;
    UserSetLastError(8);
  }
  UserSessionSwitchLeaveCrit(v15);
  return v46;
}
