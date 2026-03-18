/*
 * XREFs of NtUserSystemParametersInfo @ 0x1401AB600
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x140044FF0 (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048E80 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1?$Win32RawOptionalLockedItemAlways@X$1?Win32FreePool@@YAXPEAX@Z@@QEAA@XZ @ 0x14006C6D4 (--1-$Win32RawOptionalLockedItemAlways@X$1-Win32FreePool@@YAXPEAX@Z@@QEAA@XZ.c)
 *     ?CheckAccessEx@UIPrivilegeIsolation@@YA_NAEBUtagUIPI_INFO@@0_N@Z @ 0x14006D78C (-CheckAccessEx@UIPrivilegeIsolation@@YA_NAEBUtagUIPI_INFO@@0_N@Z.c)
 *     UserSetLastError @ 0x140087A14 (UserSetLastError.c)
 *     SetLastNtError @ 0x140087ACC (SetLastNtError.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400E50F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1400EBF60 (DestroySharedUserCritDeferredUnlockList.c)
 *     ??0?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ @ 0x1400FB7B4 (--0-$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ.c)
 *     Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline @ 0x140118E28 (Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline.c)
 *     ??$DuplicateUnicodeStringFromUser@$0A@@@YAJPEAU_UNICODE_STRING@@K0@Z @ 0x1401874BC (--$DuplicateUnicodeStringFromUser@$0A@@@YAJPEAU_UNICODE_STRING@@K0@Z.c)
 *     xxxSystemParametersInfo @ 0x1401ACFA0 (xxxSystemParametersInfo.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RtlCopyFromUser @ 0x1401C9358 (RtlCopyFromUser.c)
 *     ?HasUILimit@tagPROCESSINFO@@QEBA_NK@Z @ 0x1401C9CF0 (-HasUILimit@tagPROCESSINFO@@QEBA_NK@Z.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401CE5E0 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     EtwTraceUIPISystemError @ 0x1401DBAF0 (EtwTraceUIPISystemError.c)
 *     memset @ 0x14024BD80 (memset.c)
 *     memmove @ 0x14024C2C0 (memmove.c)
 *     RtlReadULongFromUser @ 0x1402D21A0 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x1402D2364 (RtlWriteULongToUser.c)
 */

__int64 __fastcall NtUserSystemParametersInfo(unsigned int a1, unsigned int a2, ULONG_PTR a3, char a4)
{
  __int64 v5; // r15
  unsigned int v7; // edi
  _QWORD *UserSessionState; // rbx
  int v9; // edx
  int v10; // r8d
  __int64 v11; // r14
  __int64 v12; // rdx
  __int64 v13; // rcx
  bool HasUILimit; // al
  __int64 v15; // rcx
  __int64 v16; // rdx
  struct tagTHREADINFO *v17; // rcx
  __int64 CurrentProcessWin32Process; // rax
  int v19; // eax
  unsigned __int8 v20; // cf
  bool v21; // zf
  unsigned int v22; // eax
  bool v23; // zf
  bool v24; // zf
  unsigned int v25; // eax
  bool v26; // zf
  bool v27; // zf
  unsigned int v28; // eax
  __int64 v29; // r14
  bool v30; // zf
  unsigned int v31; // eax
  unsigned int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // rcx
  _DWORD *v35; // r13
  int v36; // ebx
  int v37; // ecx
  struct tagTHREADINFO *BugCheckParameter4; // rax
  struct tagTHREADINFO *v39; // rax
  __int64 v40; // rdx
  ULONG_PTR *v41; // rcx
  NTSTATUS v42; // eax
  __int64 v43; // rdx
  __int64 v44; // rcx
  ULONG_PTR v45; // rbx
  struct tagTHREADINFO *v46; // rax
  struct tagTHREADINFO *v47; // rax
  unsigned int v48; // eax
  __int64 v49; // rax
  _DWORD *v50; // r12
  ULONG64 v51; // rax
  __int64 v52; // rcx
  ULONG64 v53; // rdx
  bool v54; // zf
  bool v55; // zf
  unsigned int v56; // eax
  __int64 v57; // rax
  _OWORD *v58; // rcx
  _OWORD *v59; // rdx
  _OWORD *v60; // rcx
  _OWORD *v61; // rdx
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 CurrentProcessWow64Process; // rax
  int v69; // r14d
  unsigned int ULongFromUser; // eax
  __int64 v71; // rax
  struct tagPROCESSINFO *v72; // rcx
  ULONG_PTR BugCheckParameter3; // [rsp+40h] [rbp-308h]
  volatile void *v75; // [rsp+48h] [rbp-300h]
  ULONG_PTR v76; // [rsp+48h] [rbp-300h]
  ULONG_PTR v77[2]; // [rsp+50h] [rbp-2F8h] BYREF
  void (__fastcall *v78)(char *, __int64, __int64, __int64); // [rsp+60h] [rbp-2E8h]
  ULONG_PTR BugCheckParameter2[2]; // [rsp+68h] [rbp-2E0h] BYREF
  void (__fastcall *v80)(char *, __int64, __int64, __int64); // [rsp+78h] [rbp-2D0h]
  int v81; // [rsp+80h] [rbp-2C8h]
  int v82; // [rsp+88h] [rbp-2C0h]
  int v83; // [rsp+90h] [rbp-2B8h]
  unsigned __int64 v84; // [rsp+B8h] [rbp-290h] BYREF
  int v85; // [rsp+C0h] [rbp-288h]
  ULONG_PTR v86; // [rsp+C8h] [rbp-280h]
  __int128 v87; // [rsp+D0h] [rbp-278h] BYREF
  __int64 v88; // [rsp+E0h] [rbp-268h]
  _BYTE v89[608]; // [rsp+E8h] [rbp-260h] BYREF

  v5 = a2;
  LODWORD(v86) = a2;
  BugCheckParameter3 = a3;
  v87 = 0LL;
  v7 = 0;
  v84 = 0xFFFFFFFF00002000uLL;
  v85 = 0;
  UserSessionState = (_QWORD *)W32GetUserSessionState(a1, a2, a3);
  v11 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
          UserSessionState,
          0LL,
          0LL,
          _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  UserSessionState[3] = v11;
  if ( v11 )
  {
    DestroySharedUserCritDeferredUnlockList((__int64)(UserSessionState + 2465), v9, v10);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2472);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2470);
  }
  Win32RawLockedNtObject<tagDESKTOP>::Win32RawLockedNtObject<tagDESKTOP>((__int64)BugCheckParameter2);
  Win32RawLockedNtObject<tagDESKTOP>::Win32RawLockedNtObject<tagDESKTOP>((__int64)v77);
  v83 = a4 & 3;
  if ( (unsigned int)Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline() )
  {
    HasUILimit = tagPROCESSINFO::HasUILimit(*(tagPROCESSINFO **)(v11 + 456), 8u);
  }
  else
  {
    v17 = PtiCurrent(v13, v12);
    if ( (_InterlockedCompareExchange((volatile signed __int32 *)v17 + 130, 0, 0) & 0x20000000) != 0 )
      v15 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)PtiCurrent((__int64)v17, v16) + 57) + 752LL) + 32LL) & 8;
    else
      v15 = 0LL;
    if ( (_DWORD)v15 )
      goto LABEL_15;
    HasUILimit = 0;
  }
  if ( !HasUILimit )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v15);
    if ( CurrentProcessWin32Process )
      CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
    if ( UIPrivilegeIsolation::CheckAccessEx(
           (UIPrivilegeIsolation *)(CurrentProcessWin32Process + 864),
           (const struct tagUIPI_INFO *)&v84,
           0LL) )
    {
      goto LABEL_125;
    }
  }
LABEL_15:
  if ( a1 <= 0x6D )
  {
    if ( a1 == 109 )
      goto LABEL_401;
    if ( a1 <= 0x37 )
    {
      if ( a1 == 55 )
        goto LABEL_401;
      if ( a1 <= 0x1D )
      {
        if ( a1 == 29 )
          goto LABEL_401;
        if ( a1 <= 0x13 )
        {
          v19 = 698452;
          v20 = _bittest(&v19, a1);
          goto LABEL_23;
        }
        if ( a1 == 20 || a1 == 21 || a1 == 23 )
          goto LABEL_401;
        v22 = a1 - 24;
        v21 = a1 == 24;
        goto LABEL_120;
      }
      if ( a1 <= 0x2A )
      {
        if ( a1 == 42 || a1 == 30 || a1 == 32 || a1 == 33 || a1 == 34 || a1 == 36 )
          goto LABEL_401;
        v23 = a1 == 37;
LABEL_124:
        if ( v23 )
          goto LABEL_401;
        goto LABEL_125;
      }
      if ( a1 == 44 || a1 == 46 )
        goto LABEL_401;
      v25 = a1 - 47;
      v24 = a1 == 47;
      goto LABEL_118;
    }
    if ( a1 <= 0x55 )
    {
      if ( a1 == 85 )
        goto LABEL_401;
      if ( a1 <= 0x49 )
      {
        if ( a1 - 57 <= 0x10 )
        {
          v15 = 87317LL;
          v20 = _bittest((const int *)&v15, a1 - 57);
LABEL_23:
          if ( !v20 )
            goto LABEL_125;
LABEL_401:
          v71 = PsGetCurrentProcessWin32Process(v15);
          v72 = (struct tagPROCESSINFO *)v71;
          if ( v71 )
            v72 = (struct tagPROCESSINFO *)(((unsigned __int128)-(__int128)*(unsigned __int64 *)v71 >> 64) & v71);
          EtwTraceUIPISystemError(v72);
          v36 = 0;
          v37 = 5;
          goto LABEL_404;
        }
LABEL_125:
        v29 = 4LL;
        goto LABEL_126;
      }
      if ( a1 == 75 || a1 == 76 || a1 == 77 || a1 == 78 || a1 == 81 )
        goto LABEL_401;
      v26 = a1 == 82;
LABEL_51:
      if ( !v26 )
        goto LABEL_125;
      goto LABEL_401;
    }
    if ( a1 > 0x60 )
    {
      if ( a1 - 97 > 0xA )
        goto LABEL_125;
      v26 = (((_BYTE)a1 - 97) & 1) == 0;
      goto LABEL_51;
    }
    if ( a1 == 96 || a1 == 86 || a1 == 87 || a1 == 88 || a1 == 90 )
      goto LABEL_401;
    v28 = a1 - 91;
    v27 = a1 == 91;
LABEL_122:
    if ( v27 )
      goto LABEL_401;
    v23 = v28 == 2;
    goto LABEL_124;
  }
  if ( a1 > 0x1017 )
  {
    if ( a1 <= 0x2003 )
    {
      if ( a1 == 8195 )
        goto LABEL_401;
      if ( a1 > 0x1049 )
      {
        if ( a1 == 4171 || a1 == 4173 || a1 == 4175 || a1 == 4177 || a1 == 4179 )
          goto LABEL_401;
        v23 = a1 == 8193;
        goto LABEL_124;
      }
      if ( a1 == 4169 )
        goto LABEL_401;
      if ( a1 == 4121 )
        goto LABEL_401;
      v29 = 4LL;
      if ( a1 == 4125 || a1 == 4127 || a1 == 4135 )
        goto LABEL_401;
      v31 = a1 - 4161;
      v30 = a1 == 4161;
      goto LABEL_112;
    }
    if ( a1 > 0x2019 )
    {
      if ( a1 == 8219 || a1 == 8221 )
        goto LABEL_401;
      v25 = a1 - 8241;
      v24 = a1 == 8241;
LABEL_118:
      if ( v24 )
        goto LABEL_401;
      v22 = v25 - 2;
      v21 = v22 == 0;
      goto LABEL_120;
    }
    if ( a1 == 8217 )
      goto LABEL_401;
    if ( a1 == 8197 )
      goto LABEL_401;
    v29 = 4LL;
    if ( a1 == 8201 )
      goto LABEL_401;
    if ( a1 == 8207 )
      goto LABEL_401;
    v32 = a1 - 8209;
    if ( a1 == 8209 )
      goto LABEL_401;
LABEL_111:
    v31 = v32 - 4;
    v30 = v31 == 0;
    goto LABEL_112;
  }
  if ( a1 == 4119 )
    goto LABEL_401;
  if ( a1 > 0xAD )
  {
    if ( a1 <= 0x1007 )
    {
      if ( a1 == 4103 || a1 == 175 || a1 == 177 || a1 == 179 )
        goto LABEL_401;
      v22 = a1 - 4097;
      v21 = a1 == 4097;
LABEL_120:
      if ( v21 )
        goto LABEL_401;
      v28 = v22 - 2;
      v27 = v28 == 0;
      goto LABEL_122;
    }
    switch ( a1 )
    {
      case 0x1009u:
        goto LABEL_401;
      case 0x100Bu:
        goto LABEL_401;
      case 0x100Du:
        goto LABEL_401;
    }
    v32 = a1 - 4111;
    if ( a1 == 4111 )
      goto LABEL_401;
    v29 = 4LL;
    goto LABEL_111;
  }
  if ( a1 == 173 )
    goto LABEL_401;
  if ( a1 > 0x99 )
  {
    if ( a1 == 155 || a1 == 161 || a1 == 163 || a1 == 166 )
      goto LABEL_401;
    v28 = a1 - 169;
    v27 = a1 == 169;
    goto LABEL_122;
  }
  switch ( a1 )
  {
    case 0x99u:
      goto LABEL_401;
    case 0x6Fu:
      goto LABEL_401;
    case 0x71u:
      goto LABEL_401;
  }
  v29 = 4LL;
  if ( a1 == 117 || a1 == 119 || a1 == 147 )
    goto LABEL_401;
  v31 = a1 - 149;
  v30 = a1 == 149;
LABEL_112:
  if ( v30 || v31 == 2 )
    goto LABEL_401;
LABEL_126:
  v35 = (_DWORD *)Win32AllocPoolWithQuotaZInitImpl(v15, 0x228uLL, 0x79747355u);
  if ( !v35 )
  {
    v36 = 0;
    v37 = 8;
LABEL_404:
    UserSetLastError(v37);
LABEL_405:
    Win32RawOptionalLockedItemAlways<void,&void Win32FreePool(void *)>::~Win32RawOptionalLockedItemAlways<void,&void Win32FreePool(void *)>((__int64)v77);
    Win32RawOptionalLockedItemAlways<void,&void Win32FreePool(void *)>::~Win32RawOptionalLockedItemAlways<void,&void Win32FreePool(void *)>((__int64)BugCheckParameter2);
    goto LABEL_406;
  }
  if ( v80 != (void (__fastcall *)(char *, __int64, __int64, __int64))-1LL )
  {
    BugCheckParameter4 = PtiCurrent(v34, v33);
    KeBugCheckEx(0x164u, 0x12uLL, (ULONG_PTR)BugCheckParameter2, (ULONG_PTR)v35, (ULONG_PTR)BugCheckParameter4);
  }
  v39 = PtiCurrent(v34, v33);
  BugCheckParameter2[0] = *((_QWORD *)v39 + 47);
  v41 = BugCheckParameter2;
  *((_QWORD *)v39 + 47) = BugCheckParameter2;
  BugCheckParameter2[1] = (ULONG_PTR)v35;
  v80 = GreDeleteFastMutex;
  if ( a1 > 0x1026 )
  {
    if ( a1 == 4135 )
      goto LABEL_398;
    if ( a1 == 8221 )
    {
      v36 = 0;
      if ( BugCheckParameter3 > 2 )
        goto LABEL_397;
      goto LABEL_398;
    }
    goto LABEL_379;
  }
  if ( a1 == 4134 )
    goto LABEL_394;
  if ( a1 <= 0x62 )
  {
    if ( a1 == 98 )
      goto LABEL_394;
    if ( a1 <= 0x32 )
    {
      if ( a1 == 50 )
      {
        v7 = 24;
        goto LABEL_376;
      }
      if ( a1 <= 0x19 )
      {
        if ( a1 == 25 )
          goto LABEL_394;
        if ( a1 <= 0xE )
        {
          if ( a1 == 14 || a1 == 1 )
            goto LABEL_394;
          if ( a1 != 3 )
          {
            if ( a1 != 4 )
            {
              if ( a1 != 5 && a1 != 10 )
              {
                if ( a1 != 13 )
                  goto LABEL_379;
                goto LABEL_156;
              }
              goto LABEL_394;
            }
            goto LABEL_147;
          }
          goto LABEL_149;
        }
        switch ( a1 )
        {
          case 0x10u:
          case 0x12u:
            goto LABEL_394;
          case 0x14u:
            if ( !BugCheckParameter3 )
              BugCheckParameter3 = -1LL;
            if ( BugCheckParameter3 == -2LL || BugCheckParameter3 == -1LL )
              goto LABEL_160;
            break;
          case 0x15u:
            if ( (_DWORD)v5 == -1 )
              goto LABEL_398;
            if ( !BugCheckParameter3 )
            {
LABEL_160:
              LODWORD(v5) = -1;
              v82 = -1;
              goto LABEL_398;
            }
            break;
          default:
            if ( a1 != 22 )
            {
              if ( a1 != 24 )
                goto LABEL_379;
LABEL_156:
              if ( (BugCheckParameter3 & 0xFFFFFFFFFFFF0000uLL) == 0 )
                goto LABEL_398;
            }
LABEL_394:
            v7 = 4;
            v50 = (_DWORD *)BugCheckParameter3;
            v76 = BugCheckParameter3;
            BugCheckParameter3 = (ULONG_PTR)v35;
            ULongFromUser = RtlReadULongFromUser(v76, v40);
            RtlWriteULongToUser(v50, ULongFromUser);
            goto LABEL_395;
        }
        v42 = DuplicateUnicodeStringFromUser<0>();
        if ( v42 < 0 )
          ExRaiseStatus(v42);
        BugCheckParameter3 = *((_QWORD *)&v87 + 1);
        v45 = *((_QWORD *)&v87 + 1);
        if ( v78 != (void (__fastcall *)(char *, __int64, __int64, __int64))-1LL )
        {
          v46 = PtiCurrent(v44, v43);
          KeBugCheckEx(0x164u, 0x12uLL, (ULONG_PTR)v77, v45, (ULONG_PTR)v46);
        }
        v47 = PtiCurrent(v44, v43);
        v77[0] = *((_QWORD *)v47 + 47);
        *((_QWORD *)v47 + 47) = v77;
        v77[1] = v45;
        v78 = GreDeleteFastMutex;
        goto LABEL_398;
      }
      if ( a1 <= 0x2A )
      {
        switch ( a1 )
        {
          case 0x2Au:
            if ( (((_DWORD)v5 - 500) & 0xFFFFFFFB) != 0 )
              goto LABEL_314;
            v7 = v5;
            break;
          case 0x1Bu:
            goto LABEL_394;
          case 0x1Fu:
            v7 = 92;
            goto LABEL_376;
          case 0x22u:
            v7 = 92;
            break;
          case 0x23u:
          case 0x26u:
            goto LABEL_394;
          case 0x29u:
            if ( (((_DWORD)v5 - 500) & 0xFFFFFFFB) != 0 )
              goto LABEL_314;
            v7 = v5;
LABEL_376:
            v50 = (_DWORD *)BugCheckParameter3;
            BugCheckParameter3 = (ULONG_PTR)v35;
            CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v41, v40);
            ProbeForWrite(v50, v7, CurrentProcessWow64Process != 0 ? 1 : 4);
            v69 = 1;
            v81 = 1;
            *v35 = *v50;
            goto LABEL_399;
          default:
            goto LABEL_379;
        }
LABEL_371:
        ProbeForRead((volatile void *)BugCheckParameter3, v7, 4u);
        memmove(v35, (const void *)BugCheckParameter3, v7);
        BugCheckParameter3 = (ULONG_PTR)v35;
        goto LABEL_398;
      }
      switch ( a1 )
      {
        case '+':
          v7 = 20;
          goto LABEL_376;
        case ',':
          v7 = 20;
          goto LABEL_371;
        case '-':
          v7 = 108;
          goto LABEL_376;
        case '.':
          v7 = 108;
          goto LABEL_371;
      }
      if ( a1 != 47 )
      {
        if ( a1 != 48 )
          goto LABEL_379;
        goto LABEL_192;
      }
      goto LABEL_321;
    }
    if ( a1 > 0x43 )
    {
      if ( a1 > 0x50 )
      {
        if ( a1 == 83 || a1 == 84 )
          goto LABEL_394;
        if ( a1 != 89 )
        {
          if ( a1 != 90 )
          {
            v48 = a1 - 94;
            if ( a1 == 94 )
              goto LABEL_394;
LABEL_245:
            v54 = v48 == 1;
LABEL_271:
            if ( v54 )
              goto LABEL_394;
            goto LABEL_379;
          }
          goto LABEL_219;
        }
      }
      else
      {
        if ( a1 == 80 || a1 == 68 || a1 == 70 )
          goto LABEL_394;
        if ( a1 != 72 )
        {
          if ( a1 != 73 )
          {
            if ( a1 == 74 )
              goto LABEL_394;
            v54 = a1 == 79;
            goto LABEL_271;
          }
          goto LABEL_219;
        }
      }
LABEL_246:
      v7 = 8;
      goto LABEL_376;
    }
    if ( a1 != 67 )
    {
      if ( a1 <= 0x3A )
      {
        if ( a1 != 58 )
        {
          if ( a1 == 51 )
          {
            v7 = 24;
            goto LABEL_371;
          }
          if ( a1 != 52 )
          {
            if ( a1 != 53 )
            {
              if ( a1 != 54 )
              {
                v48 = a1 - 55;
                if ( a1 == 55 )
                  goto LABEL_207;
                goto LABEL_245;
              }
LABEL_208:
              v7 = 28;
              goto LABEL_376;
            }
LABEL_219:
            v7 = 8;
            goto LABEL_371;
          }
        }
        goto LABEL_246;
      }
      if ( a1 == 59 )
        goto LABEL_219;
      if ( a1 != 60 )
      {
        if ( a1 != 61 )
        {
          switch ( a1 )
          {
            case '@':
              v7 = 56;
              goto LABEL_376;
            case 'A':
              v7 = 56;
              goto LABEL_371;
            case 'B':
              v7 = 16;
              v49 = PsGetCurrentProcessWow64Process(BugCheckParameter2, v40);
              ProbeForWrite((volatile void *)BugCheckParameter3, 0x10uLL, v49 != 0 ? 1 : 4);
              v50 = (_DWORD *)BugCheckParameter3;
              *(_OWORD *)v35 = *(_OWORD *)BugCheckParameter3;
              BugCheckParameter3 = (ULONG_PTR)v35;
              ProbeForWrite(*((volatile void **)v35 + 1), 0x100uLL, 2u);
LABEL_395:
              v69 = 1;
              v81 = 1;
              goto LABEL_399;
          }
LABEL_379:
          if ( a1 < 0xB6 )
            goto LABEL_398;
          if ( a1 - 4096 <= 0x55 || a1 - 0x2000 <= 0x37 )
          {
            v36 = 0;
            if ( (_DWORD)v5
              && (*((_DWORD *)PtiCurrent((__int64)BugCheckParameter2, v40) + 166) > 0x400u
               || a1 != 4159
               || (_DWORD)v5 != 1) )
            {
              goto LABEL_397;
            }
            if ( (a1 & 1) != 0 )
            {
              if ( a1 != 8203 )
              {
                if ( a1 == 8211 )
                {
                  v86 = BugCheckParameter3;
                  if ( (BugCheckParameter3 & 0xFFFFFFFE) != 0 )
                    goto LABEL_397;
                }
                goto LABEL_398;
              }
              v84 = BugCheckParameter3;
              if ( (BugCheckParameter3 & 0xFFFFFFFC) != 0 )
              {
LABEL_397:
                UserSetLastError(87);
                Win32RawOptionalLockedItemAlways<void,&void Win32FreePool(void *)>::~Win32RawOptionalLockedItemAlways<void,&void Win32FreePool(void *)>((__int64)v77);
                Win32RawOptionalLockedItemAlways<void,&void Win32FreePool(void *)>::~Win32RawOptionalLockedItemAlways<void,&void Win32FreePool(void *)>((__int64)BugCheckParameter2);
                goto LABEL_406;
              }
LABEL_398:
              v50 = 0LL;
              v69 = 0;
LABEL_399:
              v36 = xxxSystemParametersInfo(a1, v5);
              if ( v69 )
                memmove(v50, (const void *)BugCheckParameter3, v7);
              goto LABEL_405;
            }
            goto LABEL_394;
          }
          goto LABEL_314;
        }
LABEL_147:
        v7 = 12;
        goto LABEL_371;
      }
LABEL_149:
      v7 = 12;
      goto LABEL_376;
    }
    v87 = 0LL;
    v88 = 0LL;
    RtlCopyFromUser(&v87, (void *)BugCheckParameter3, 0x18uLL);
    *(_OWORD *)v35 = v87;
    *((_QWORD *)v35 + 2) = v88;
    BugCheckParameter3 = (ULONG_PTR)v35;
    v51 = *((_QWORD *)v35 + 2);
    if ( (v51 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v52 = *((unsigned __int16 *)v35 + 4);
    v53 = v51 + v52 + 2;
    if ( v53 <= v51 || v53 >= MmUserProbeAddress )
      ExRaiseAccessViolation();
    if ( (unsigned __int16)v52 > *((_WORD *)v35 + 5) )
    {
      if ( (v52 & 1) == 0 )
        goto LABEL_230;
    }
    else if ( (v52 & 1) == 0 )
    {
      if ( !(_WORD)v52 )
        *((_QWORD *)v35 + 2) = 0LL;
      goto LABEL_398;
    }
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 474LL);
LABEL_230:
    ExRaiseAccessViolation();
  }
  if ( a1 <= 0x94 )
  {
    if ( a1 == 148 )
    {
      v7 = 40;
      if ( (_DWORD)v5 != 40 )
        goto LABEL_314;
      goto LABEL_376;
    }
    if ( a1 > 0x7A )
    {
      if ( a1 > 0x88 )
      {
        if ( a1 == 138 || a1 == 140 || a1 == 142 || a1 == 144 )
          goto LABEL_394;
        if ( a1 == 146 )
        {
          if ( (_DWORD)v5 != 68 )
            goto LABEL_314;
          v7 = 68;
          goto LABEL_376;
        }
        if ( a1 != 147 )
          goto LABEL_379;
        if ( (_DWORD)v5 != 68 )
          goto LABEL_314;
        v7 = 68;
        goto LABEL_371;
      }
      if ( a1 == 136 || a1 == 124 || a1 == 126 || a1 == 128 || a1 == 130 )
        goto LABEL_394;
      v56 = a1 - 132;
      v55 = a1 == 132;
    }
    else
    {
      if ( a1 == 122 )
        goto LABEL_394;
      if ( a1 <= 0x70 )
      {
        if ( ((a1 - 100) & 0xFFFFFFF1) != 0 )
          goto LABEL_379;
        goto LABEL_394;
      }
      switch ( a1 )
      {
        case 'r':
          goto LABEL_394;
        case 's':
          v50 = (_DWORD *)BugCheckParameter3;
          v75 = (volatile void *)BugCheckParameter3;
          BugCheckParameter3 = (ULONG_PTR)v35;
          ProbeForWrite(v75, 2 * v5, 2u);
          if ( (unsigned int)v86 >= 0x104 )
            LODWORD(v5) = 260;
          v82 = v5;
          v7 = 2 * v5;
          goto LABEL_395;
        case 't':
          goto LABEL_149;
        case 'u':
          goto LABEL_147;
      }
      v56 = a1 - 118;
      v55 = a1 == 118;
    }
    if ( v55 )
      goto LABEL_394;
    v54 = v56 == 2;
    goto LABEL_271;
  }
  if ( a1 <= 0xA5 )
  {
    if ( a1 != 165 )
    {
      if ( a1 > 0x9B )
      {
        if ( a1 == 156 )
        {
          if ( (_DWORD)v5 != 16 )
            goto LABEL_314;
LABEL_192:
          v7 = 16;
          goto LABEL_376;
        }
        if ( a1 != 157 )
        {
          if ( a1 == 158 || a1 == 160 )
            goto LABEL_394;
          if ( a1 == 162 )
            goto LABEL_192;
          if ( a1 != 163 )
            goto LABEL_379;
        }
LABEL_321:
        v7 = 16;
        goto LABEL_371;
      }
      if ( a1 == 155 )
      {
        if ( (_DWORD)v5 == 548 )
        {
          v7 = 548;
          memset(v89, 0, 0x224uLL);
          RtlCopyFromUser(v89, (void *)BugCheckParameter3, 0x224uLL);
          v60 = v35;
          v61 = v89;
          do
          {
            *v60 = *v61;
            v60[1] = v61[1];
            v60[2] = v61[2];
            v60[3] = v61[3];
            v60[4] = v61[4];
            v60[5] = v61[5];
            v60[6] = v61[6];
            v60 += 8;
            *(v60 - 1) = v61[7];
            v61 += 8;
            --v29;
          }
          while ( v29 );
          *v60 = *v61;
          v60[1] = v61[1];
          *((_DWORD *)v60 + 8) = *((_DWORD *)v61 + 8);
          BugCheckParameter3 = (ULONG_PTR)v35;
          if ( v35[6] <= 0x104u )
            goto LABEL_398;
        }
        goto LABEL_314;
      }
      if ( a1 == 149 )
      {
        v7 = 40;
        if ( (_DWORD)v5 != 40 )
          goto LABEL_314;
        goto LABEL_371;
      }
      if ( a1 != 150 )
      {
        if ( a1 != 151 )
        {
          if ( a1 == 152 )
          {
            if ( (_DWORD)v5 != 128 )
              goto LABEL_314;
            v7 = 128;
            goto LABEL_376;
          }
          if ( a1 != 153 )
          {
            if ( (_DWORD)v5 == 548 )
            {
              v7 = 548;
              v57 = PsGetCurrentProcessWow64Process(BugCheckParameter2, v40);
              ProbeForWrite((volatile void *)BugCheckParameter3, 0x224uLL, v57 != 0 ? 1 : 4);
              v50 = (_DWORD *)BugCheckParameter3;
              v58 = (_OWORD *)BugCheckParameter3;
              v59 = v35;
              do
              {
                *v59 = *v58;
                v59[1] = v58[1];
                v59[2] = v58[2];
                v59[3] = v58[3];
                v59[4] = v58[4];
                v59[5] = v58[5];
                v59[6] = v58[6];
                v59 += 8;
                *(v59 - 1) = v58[7];
                v58 += 8;
                --v29;
              }
              while ( v29 );
              *v59 = *v58;
              v59[1] = v58[1];
              *((_DWORD *)v59 + 8) = *((_DWORD *)v58 + 8);
              BugCheckParameter3 = (ULONG_PTR)v35;
              goto LABEL_395;
            }
            goto LABEL_314;
          }
          if ( (_DWORD)v5 != 128 )
            goto LABEL_314;
          v7 = 128;
          goto LABEL_371;
        }
        if ( (_DWORD)v5 != 28 )
          goto LABEL_314;
LABEL_207:
        v7 = 28;
        goto LABEL_371;
      }
      if ( (_DWORD)v5 != 28 )
        goto LABEL_314;
      goto LABEL_208;
    }
LABEL_347:
    v7 = 12;
    if ( (_DWORD)v5 != 12 )
      goto LABEL_314;
    goto LABEL_376;
  }
  if ( a1 > 0xAF )
  {
    switch ( a1 )
    {
      case 0xB0u:
        v36 = 0;
        if ( (_DWORD)v5 )
          goto LABEL_397;
        break;
      case 0xB2u:
        if ( (_DWORD)v5 != 4 )
          goto LABEL_314;
        break;
      case 0xB3u:
        if ( (_DWORD)v5 != 4 )
          goto LABEL_314;
LABEL_370:
        v7 = 4;
        goto LABEL_371;
      case 0xB4u:
        v7 = 56;
        if ( (_DWORD)v5 != 56 )
          goto LABEL_314;
        goto LABEL_376;
      case 0xB5u:
        v7 = 56;
        if ( (_DWORD)v5 != 56 )
          goto LABEL_314;
        goto LABEL_371;
      default:
        goto LABEL_379;
    }
LABEL_375:
    v7 = 4;
    goto LABEL_376;
  }
  if ( a1 != 175 )
  {
    if ( a1 == 167 )
      goto LABEL_347;
    if ( a1 == 168 || a1 == 170 )
      goto LABEL_394;
    if ( a1 != 172 )
    {
      if ( a1 != 173 )
      {
        if ( a1 != 174 )
          goto LABEL_379;
        v66 = PsGetCurrentProcessWow64Process(BugCheckParameter2, v40);
        ProbeForRead((volatile void *)BugCheckParameter3, 4uLL, v66 != 0 ? 1 : 4);
        if ( *(_DWORD *)BugCheckParameter3 )
        {
          switch ( *(_DWORD *)BugCheckParameter3 )
          {
            case 1:
              v7 = 44;
              break;
            case 2:
              v7 = 48;
              break;
            case 3:
              v7 = 52;
              break;
            default:
              goto LABEL_314;
          }
        }
        else
        {
          v7 = 24;
        }
        if ( (_DWORD)v5 != v7 )
          goto LABEL_314;
        *v35 = *(_DWORD *)BugCheckParameter3;
        goto LABEL_376;
      }
      if ( (_DWORD)v5 != 4 )
        goto LABEL_314;
      goto LABEL_370;
    }
    if ( (_DWORD)v5 != 4 )
      goto LABEL_314;
    goto LABEL_375;
  }
  v67 = PsGetCurrentProcessWow64Process(BugCheckParameter2, v40);
  ProbeForRead((volatile void *)BugCheckParameter3, 4uLL, v67 != 0 ? 1 : 4);
  if ( *(_DWORD *)BugCheckParameter3 )
  {
    switch ( *(_DWORD *)BugCheckParameter3 )
    {
      case 1:
        v7 = 44;
        break;
      case 2:
        v7 = 48;
        break;
      case 3:
        v7 = 52;
        break;
      default:
        goto LABEL_314;
    }
  }
  else
  {
    v7 = 24;
  }
  if ( (_DWORD)v5 == v7 )
    goto LABEL_371;
LABEL_314:
  UserSetLastError(87);
  v36 = 0;
  Win32RawOptionalLockedItemAlways<void,&void Win32FreePool(void *)>::~Win32RawOptionalLockedItemAlways<void,&void Win32FreePool(void *)>((__int64)v77);
  Win32RawOptionalLockedItemAlways<void,&void Win32FreePool(void *)>::~Win32RawOptionalLockedItemAlways<void,&void Win32FreePool(void *)>((__int64)BugCheckParameter2);
LABEL_406:
  UserSessionSwitchLeaveCritWithNonPaged(v63, v62, v64, v65);
  return v36;
}
