/*
 * XREFs of NtUserSystemParametersInfo @ 0x140175320
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14003F714 (UserSetLastError.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140047540 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x140048E98 (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     SetLastNtError @ 0x14009DA54 (SetLastNtError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x1400A2310 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxSystemParametersInfo @ 0x1400A70D0 (xxxSystemParametersInfo.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400AF2F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     ??1?$Win32RawOptionalLockedItemAlways@X$1?Win32FreePool@@YAXPEAX@Z@@QEAA@XZ @ 0x1400D00F8 (--1-$Win32RawOptionalLockedItemAlways@X$1-Win32FreePool@@YAXPEAX@Z@@QEAA@XZ.c)
 *     ??0?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ @ 0x1400E2330 (--0-$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1401617E4 (DestroySharedUserCritDeferredUnlockList.c)
 *     EtwTraceUIPISystemError @ 0x14016E1F0 (EtwTraceUIPISystemError.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RtlCopyFromUser @ 0x1401A4E78 (RtlCopyFromUser.c)
 *     Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline @ 0x1401A530C (Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline @ 0x1401A53B4 (Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline.c)
 *     ?CheckAccessEx@UIPrivilegeIsolation@@YA_NAEBUtagUIPI_INFO@@0_N@Z @ 0x1401A8AA8 (-CheckAccessEx@UIPrivilegeIsolation@@YA_NAEBUtagUIPI_INFO@@0_N@Z.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401ABFE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternalEx @ 0x1401AC078 (UserCritInternal--_anonymous_namespace_--EnterCritInternalEx.c)
 *     ?HasUILimit@tagPROCESSINFO@@QEBA_NK@Z @ 0x1401AC114 (-HasUILimit@tagPROCESSINFO@@QEBA_NK@Z.c)
 *     memset @ 0x140243000 (memset.c)
 *     memmove @ 0x140243540 (memmove.c)
 */

__int64 __fastcall NtUserSystemParametersInfo(__int64 a1, __int64 a2, ULONG64 a3, char a4)
{
  unsigned int v5; // edi
  unsigned int v6; // r14d
  _QWORD *UserSessionState; // rsi
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rdx
  bool HasUILimit; // al
  __int64 v13; // rcx
  __int64 CurrentProcessWin32Process; // rax
  bool v15; // r9
  int v16; // eax
  unsigned __int8 v17; // cf
  bool v18; // zf
  unsigned int v19; // eax
  bool v20; // zf
  bool v21; // zf
  unsigned int v22; // eax
  bool v23; // zf
  bool v24; // zf
  unsigned int v25; // eax
  __int64 v26; // rsi
  bool v27; // zf
  unsigned int v28; // eax
  unsigned int v29; // eax
  volatile void **v30; // r12
  int v31; // ebx
  int v32; // ecx
  struct tagTHREADINFO *BugCheckParameter4; // rax
  struct tagTHREADINFO *v34; // rax
  int v35; // eax
  unsigned int *v36; // rdx
  __int64 v37; // rcx
  const void *v38; // r14
  size_t v39; // rsi
  ULONG64 v40; // rdx
  struct tagTHREADINFO *v41; // rax
  struct tagTHREADINFO *v42; // rax
  unsigned int v43; // eax
  __int64 CurrentProcessWow64Process; // rax
  ULONG64 v45; // rax
  __int64 v46; // rcx
  ULONG64 v47; // rdx
  bool v48; // zf
  int v49; // ecx
  bool v50; // zf
  unsigned int v51; // eax
  unsigned int v52; // eax
  unsigned int v53; // eax
  bool v54; // zf
  unsigned int v55; // eax
  volatile void **v56; // rcx
  _OWORD *v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rax
  _OWORD *v60; // rax
  volatile void **v61; // rcx
  int v62; // eax
  __int64 v63; // rax
  _DWORD *v64; // rbx
  _DWORD *v65; // rdx
  unsigned __int64 v66; // rax
  unsigned int Size; // [rsp+30h] [rbp-338h]
  int Size_4; // [rsp+34h] [rbp-334h]
  unsigned int v71; // [rsp+40h] [rbp-328h]
  int v72; // [rsp+48h] [rbp-320h]
  unsigned int v73; // [rsp+4Ch] [rbp-31Ch]
  int v74; // [rsp+4Ch] [rbp-31Ch]
  ULONG_PTR v75[2]; // [rsp+50h] [rbp-318h] BYREF
  void (__fastcall *v76)(char *); // [rsp+60h] [rbp-308h]
  ULONG_PTR BugCheckParameter2[2]; // [rsp+68h] [rbp-300h] BYREF
  void (__fastcall *v78)(char *); // [rsp+78h] [rbp-2F0h]
  unsigned int v79; // [rsp+80h] [rbp-2E8h]
  volatile void *Address; // [rsp+88h] [rbp-2E0h]
  _DWORD v81[6]; // [rsp+A0h] [rbp-2C8h] BYREF
  __int128 v82; // [rsp+B8h] [rbp-2B0h] BYREF
  volatile void *v83; // [rsp+C8h] [rbp-2A0h]
  __int128 v84; // [rsp+D0h] [rbp-298h]
  ULONG64 v85; // [rsp+E0h] [rbp-288h]
  ULONG64 v86; // [rsp+E8h] [rbp-280h]
  _BYTE v87[616]; // [rsp+100h] [rbp-268h] BYREF

  v73 = a2;
  v5 = a1;
  v6 = a2;
  v71 = a2;
  v84 = 0LL;
  Size = 0;
  Address = 0LL;
  v72 = 0;
  v81[0] = 0x2000;
  v81[1] = -1;
  v81[2] = 0;
  UserSessionState = (_QWORD *)W32GetUserSessionState(a1, a2);
  if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
  {
    v9 = UserCritInternal::_anonymous_namespace_::EnterCritInternalEx(
           UserSessionState,
           0LL,
           0LL,
           _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  }
  else
  {
    LOBYTE(v8) = 1;
    v9 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(UserSessionState, v8);
  }
  v10 = v9;
  UserSessionState[3] = v9;
  if ( !(unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( !v10 )
      goto LABEL_9;
    *(_BYTE *)(v10 + 1708) = 1;
  }
  if ( v10 )
  {
    DestroySharedUserCritDeferredUnlockList((__int64)(UserSessionState + 2461), v11);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2468);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2466);
  }
LABEL_9:
  Win32RawLockedNtObject<tagDESKTOP>::Win32RawLockedNtObject<tagDESKTOP>((__int64)BugCheckParameter2);
  Win32RawLockedNtObject<tagDESKTOP>::Win32RawLockedNtObject<tagDESKTOP>((__int64)v75);
  v79 = a4 & 3;
  if ( (unsigned int)Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline() )
  {
    HasUILimit = tagPROCESSINFO::HasUILimit(*(tagPROCESSINFO **)(v10 + 464), 8u);
  }
  else
  {
    if ( (_InterlockedCompareExchange((volatile signed __int32 *)PtiCurrent() + 132, 0, 0) & 0x20000000) != 0 )
      v13 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)PtiCurrent() + 58) + 752LL) + 24LL) & 8;
    else
      v13 = 0LL;
    v6 = v71;
    if ( (_DWORD)v13 )
      goto LABEL_21;
    HasUILimit = 0;
  }
  if ( !HasUILimit )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v13);
    if ( CurrentProcessWin32Process )
      CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
    if ( UIPrivilegeIsolation::CheckAccessEx(
           (UIPrivilegeIsolation *)(CurrentProcessWin32Process + 864),
           (const struct tagUIPI_INFO *)v81,
           0LL,
           v15) )
    {
      goto LABEL_131;
    }
  }
LABEL_21:
  if ( v5 <= 0x6D )
  {
    if ( v5 == 109 )
      goto LABEL_419;
    if ( v5 <= 0x37 )
    {
      if ( v5 == 55 )
        goto LABEL_419;
      if ( v5 <= 0x1D )
      {
        if ( v5 == 29 )
          goto LABEL_419;
        if ( v5 <= 0x13 )
        {
          v16 = 698452;
          v17 = _bittest(&v16, v5);
          goto LABEL_29;
        }
        if ( v5 == 20 || v5 == 21 || v5 == 23 )
          goto LABEL_419;
        v19 = v5 - 24;
        v18 = v5 == 24;
        goto LABEL_126;
      }
      if ( v5 <= 0x2A )
      {
        if ( v5 == 42 || v5 == 30 || v5 == 32 || v5 == 33 || v5 == 34 || v5 == 36 )
          goto LABEL_419;
        v20 = v5 == 37;
LABEL_130:
        if ( v20 )
          goto LABEL_419;
        goto LABEL_131;
      }
      if ( v5 == 44 || v5 == 46 )
        goto LABEL_419;
      v22 = v5 - 47;
      v21 = v5 == 47;
      goto LABEL_124;
    }
    if ( v5 <= 0x55 )
    {
      if ( v5 == 85 )
        goto LABEL_419;
      if ( v5 <= 0x49 )
      {
        if ( v5 - 57 <= 0x10 )
        {
          v13 = 87317LL;
          v17 = _bittest((const int *)&v13, v5 - 57);
LABEL_29:
          if ( !v17 )
            goto LABEL_131;
LABEL_419:
          v66 = PsGetCurrentProcessWin32Process(v13);
          if ( v66 )
            v66 &= -(__int64)(*(_QWORD *)v66 != 0LL);
          EtwTraceUIPISystemError((PEPROCESS *)v66, 0LL, 1);
          v31 = 0;
          v32 = 5;
          goto LABEL_422;
        }
LABEL_131:
        v26 = 4LL;
        goto LABEL_132;
      }
      if ( v5 == 75 || v5 == 76 || v5 == 77 || v5 == 78 || v5 == 81 )
        goto LABEL_419;
      v23 = v5 == 82;
LABEL_57:
      if ( !v23 )
        goto LABEL_131;
      goto LABEL_419;
    }
    if ( v5 > 0x60 )
    {
      if ( v5 - 97 > 0xA )
        goto LABEL_131;
      v23 = (((_BYTE)v5 - 97) & 1) == 0;
      goto LABEL_57;
    }
    if ( v5 == 96 || v5 == 86 || v5 == 87 || v5 == 88 || v5 == 90 )
      goto LABEL_419;
    v25 = v5 - 91;
    v24 = v5 == 91;
LABEL_128:
    if ( v24 )
      goto LABEL_419;
    v20 = v25 == 2;
    goto LABEL_130;
  }
  if ( v5 > 0x1017 )
  {
    if ( v5 <= 0x2003 )
    {
      if ( v5 == 8195 )
        goto LABEL_419;
      if ( v5 > 0x1049 )
      {
        if ( v5 == 4171 || v5 == 4173 || v5 == 4175 || v5 == 4177 || v5 == 4179 )
          goto LABEL_419;
        v20 = v5 == 8193;
        goto LABEL_130;
      }
      if ( v5 == 4169 )
        goto LABEL_419;
      if ( v5 == 4121 )
        goto LABEL_419;
      v26 = 4LL;
      if ( v5 == 4125 || v5 == 4127 || v5 == 4135 )
        goto LABEL_419;
      v28 = v5 - 4161;
      v27 = v5 == 4161;
      goto LABEL_118;
    }
    if ( v5 > 0x2019 )
    {
      if ( v5 == 8219 || v5 == 8221 )
        goto LABEL_419;
      v22 = v5 - 8241;
      v21 = v5 == 8241;
LABEL_124:
      if ( v21 )
        goto LABEL_419;
      v19 = v22 - 2;
      v18 = v19 == 0;
      goto LABEL_126;
    }
    if ( v5 == 8217 )
      goto LABEL_419;
    if ( v5 == 8197 )
      goto LABEL_419;
    v26 = 4LL;
    if ( v5 == 8201 )
      goto LABEL_419;
    if ( v5 == 8207 )
      goto LABEL_419;
    v29 = v5 - 8209;
    if ( v5 == 8209 )
      goto LABEL_419;
LABEL_117:
    v28 = v29 - 4;
    v27 = v28 == 0;
    goto LABEL_118;
  }
  if ( v5 == 4119 )
    goto LABEL_419;
  if ( v5 > 0xAD )
  {
    if ( v5 <= 0x1007 )
    {
      if ( v5 == 4103 || v5 == 175 || v5 == 177 || v5 == 179 )
        goto LABEL_419;
      v19 = v5 - 4097;
      v18 = v5 == 4097;
LABEL_126:
      if ( v18 )
        goto LABEL_419;
      v25 = v19 - 2;
      v24 = v25 == 0;
      goto LABEL_128;
    }
    switch ( v5 )
    {
      case 0x1009u:
        goto LABEL_419;
      case 0x100Bu:
        goto LABEL_419;
      case 0x100Du:
        goto LABEL_419;
    }
    v29 = v5 - 4111;
    if ( v5 == 4111 )
      goto LABEL_419;
    v26 = 4LL;
    goto LABEL_117;
  }
  if ( v5 == 173 )
    goto LABEL_419;
  if ( v5 > 0x99 )
  {
    if ( v5 == 155 || v5 == 161 || v5 == 163 || v5 == 166 )
      goto LABEL_419;
    v25 = v5 - 169;
    v24 = v5 == 169;
    goto LABEL_128;
  }
  switch ( v5 )
  {
    case 0x99u:
      goto LABEL_419;
    case 0x6Fu:
      goto LABEL_419;
    case 0x71u:
      goto LABEL_419;
  }
  v26 = 4LL;
  if ( v5 == 117 || v5 == 119 || v5 == 147 )
    goto LABEL_419;
  v28 = v5 - 149;
  v27 = v5 == 149;
LABEL_118:
  if ( v27 || v28 == 2 )
    goto LABEL_419;
LABEL_132:
  v30 = (volatile void **)Win32AllocPoolWithQuotaZInitImpl(v13, 0x228uLL, 0x79747355u);
  if ( !v30 )
  {
    v31 = 0;
    v32 = 8;
LABEL_422:
    UserSetLastError(v32);
LABEL_423:
    Win32RawOptionalLockedItemAlways<void,&void Win32FreePool(void *)>::~Win32RawOptionalLockedItemAlways<void,&void Win32FreePool(void *)>((__int64)v75);
    Win32RawOptionalLockedItemAlways<void,&void Win32FreePool(void *)>::~Win32RawOptionalLockedItemAlways<void,&void Win32FreePool(void *)>((__int64)BugCheckParameter2);
    goto LABEL_424;
  }
  if ( v78 != (void (__fastcall *)(char *))-1LL )
  {
    BugCheckParameter4 = PtiCurrent();
    KeBugCheckEx(0x164u, 0x12uLL, (ULONG_PTR)BugCheckParameter2, (ULONG_PTR)v30, (ULONG_PTR)BugCheckParameter4);
  }
  v34 = PtiCurrent();
  BugCheckParameter2[0] = *((_QWORD *)v34 + 48);
  *((_QWORD *)v34 + 48) = BugCheckParameter2;
  BugCheckParameter2[1] = (ULONG_PTR)v30;
  v78 = GreDeleteFastMutex;
  if ( v5 > 0x1026 )
  {
    if ( v5 == 4135 )
      goto LABEL_416;
    if ( v5 != 8221 )
      goto LABEL_396;
    if ( a3 <= 2 )
      goto LABEL_416;
    goto LABEL_331;
  }
  if ( v5 == 4134 )
    goto LABEL_412;
  if ( v5 <= 0x5F )
  {
    if ( v5 == 95 )
      goto LABEL_412;
    if ( v5 <= 0x32 )
    {
      if ( v5 == 50 )
      {
        Size = 24;
        goto LABEL_392;
      }
      if ( v5 <= 0x19 )
      {
        if ( v5 == 25 )
          goto LABEL_412;
        if ( v5 <= 0xE )
        {
          if ( v5 == 14 || v5 == 1 )
            goto LABEL_412;
          if ( v5 != 3 )
          {
            if ( v5 != 4 )
            {
              if ( v5 != 5 && v5 != 10 )
              {
                if ( v5 != 13 )
                  goto LABEL_396;
                goto LABEL_161;
              }
              goto LABEL_412;
            }
            goto LABEL_153;
          }
          goto LABEL_154;
        }
        switch ( v5 )
        {
          case 0x10u:
          case 0x12u:
            goto LABEL_412;
          case 0x14u:
            if ( !a3 )
              a3 = -1LL;
            if ( a3 == -2LL || a3 == -1LL )
              goto LABEL_165;
            break;
          case 0x15u:
            if ( v6 == -1 )
            {
LABEL_416:
              v35 = xxxSystemParametersInfo(v5, v71, (void *)a3, v79);
LABEL_417:
              v31 = v35;
              Size_4 = v35;
              if ( v72 )
              {
                memmove((void *)Address, (const void *)a3, Size);
                v31 = Size_4;
              }
              goto LABEL_423;
            }
            if ( !a3 )
            {
LABEL_165:
              v35 = xxxSystemParametersInfo(v5, 0xFFFFFFFF, (void *)a3, v79);
              goto LABEL_417;
            }
            break;
          case 0x16u:
            goto LABEL_412;
          case 0x18u:
LABEL_161:
            if ( (a3 & 0xFFFFFFFFFFFF0000uLL) == 0 )
              goto LABEL_416;
            goto LABEL_412;
          default:
LABEL_396:
            if ( v5 < 0xB4 )
              goto LABEL_416;
            if ( v5 - 4096 > 0x55 && v5 - 0x2000 > 0x37 )
              goto LABEL_331;
            v31 = 0;
            if ( v6 && (*((_DWORD *)PtiCurrent() + 168) > 0x400u || v5 != 4159 || v6 != 1) )
            {
LABEL_411:
              UserSetLastError(87);
              Win32RawOptionalLockedItemAlways<void,&void Win32FreePool(void *)>::~Win32RawOptionalLockedItemAlways<void,&void Win32FreePool(void *)>((__int64)v75);
              Win32RawOptionalLockedItemAlways<void,&void Win32FreePool(void *)>::~Win32RawOptionalLockedItemAlways<void,&void Win32FreePool(void *)>((__int64)BugCheckParameter2);
              goto LABEL_424;
            }
            if ( (v5 & 1) != 0 )
            {
              if ( v5 == 8203 )
              {
                v86 = a3;
                if ( (a3 & 0xFFFFFFFC) != 0 )
                  goto LABEL_411;
              }
              else if ( v5 == 8211 )
              {
                v85 = a3;
                if ( (a3 & 0xFFFFFFFE) != 0 )
                  goto LABEL_411;
              }
              goto LABEL_416;
            }
            goto LABEL_412;
        }
        v36 = (unsigned int *)a3;
        if ( a3 >= MmUserProbeAddress )
          v36 = (unsigned int *)MmUserProbeAddress;
        v37 = *v36;
        v74 = *v36;
        LODWORD(v84) = *v36;
        v38 = (const void *)*((_QWORD *)v36 + 1);
        *((_QWORD *)&v84 + 1) = v38;
        if ( ((unsigned __int8)v38 & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v39 = (unsigned __int16)v37;
        v40 = (ULONG64)v38 + (unsigned __int16)v37 + 2;
        if ( v40 <= (unsigned __int64)v38 || v40 >= MmUserProbeAddress )
          ExRaiseAccessViolation();
        if ( (unsigned __int16)v37 > HIWORD(v74) )
        {
          if ( (v37 & 1) == 0 )
            goto LABEL_185;
        }
        else if ( (v37 & 1) == 0 )
        {
          a3 = Win32AllocPoolWithQuotaZInitImpl(v37, (unsigned __int16)v37 + 2LL, 0x79747355u);
          if ( !a3 )
            ExRaiseStatus(-1073741801);
          if ( v76 != (void (__fastcall *)(char *))-1LL )
          {
            v41 = PtiCurrent();
            KeBugCheckEx(0x164u, 0x12uLL, (ULONG_PTR)v75, a3, (ULONG_PTR)v41);
          }
          v42 = PtiCurrent();
          v75[0] = *((_QWORD *)v42 + 48);
          *((_QWORD *)v42 + 48) = v75;
          v75[1] = a3;
          v76 = GreDeleteFastMutex;
          memmove((void *)a3, v38, v39);
          *(_WORD *)(a3 + 2 * (v39 >> 1)) = 0;
          goto LABEL_416;
        }
        v79 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 336LL);
LABEL_185:
        ExRaiseAccessViolation();
      }
      if ( v5 <= 0x2A )
      {
        if ( v5 != 42 )
        {
          if ( v5 == 27 )
            goto LABEL_412;
          if ( v5 == 31 )
          {
            Size = 92;
            goto LABEL_392;
          }
          if ( v5 != 34 )
          {
            if ( v5 == 35 || v5 == 38 )
              goto LABEL_412;
            if ( v5 != 41 )
              goto LABEL_396;
            if ( ((v6 - 500) & 0xFFFFFFFB) == 0 )
            {
              Size = v6;
              goto LABEL_392;
            }
            goto LABEL_331;
          }
          Size = 92;
LABEL_376:
          if ( (a3 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          goto LABEL_378;
        }
        if ( ((v6 - 500) & 0xFFFFFFFB) != 0 )
          goto LABEL_331;
        Size = v6;
LABEL_375:
        if ( !Size )
        {
LABEL_378:
          memmove(v30, (const void *)a3, Size);
          a3 = (ULONG64)v30;
          v35 = xxxSystemParametersInfo(v5, v71, v30, v79);
          goto LABEL_417;
        }
        goto LABEL_376;
      }
      switch ( v5 )
      {
        case '+':
          Size = 20;
          goto LABEL_392;
        case ',':
          Size = 20;
          goto LABEL_376;
        case '-':
          Size = 108;
          goto LABEL_392;
        case '.':
          Size = 108;
          goto LABEL_376;
      }
      if ( v5 != 47 )
      {
        if ( v5 != 48 )
          goto LABEL_396;
        goto LABEL_208;
      }
      goto LABEL_209;
    }
    if ( v5 > 0x43 )
    {
      if ( v5 > 0x50 )
      {
        if ( v5 == 83 || v5 == 84 )
          goto LABEL_412;
        if ( v5 != 89 )
        {
          if ( v5 != 90 )
          {
            v48 = v5 == 94;
            goto LABEL_323;
          }
          goto LABEL_226;
        }
      }
      else
      {
        if ( v5 == 80 || v5 == 68 || v5 == 70 )
          goto LABEL_412;
        if ( v5 != 72 )
        {
          if ( v5 != 73 )
          {
            if ( v5 == 74 )
              goto LABEL_412;
            v48 = v5 == 79;
            goto LABEL_323;
          }
          goto LABEL_226;
        }
      }
LABEL_263:
      Size = 8;
      goto LABEL_392;
    }
    if ( v5 != 67 )
    {
      if ( v5 <= 0x3A )
      {
        if ( v5 != 58 )
        {
          if ( v5 == 51 )
          {
            Size = 24;
            goto LABEL_376;
          }
          if ( v5 != 52 )
          {
            if ( v5 != 53 )
            {
              if ( v5 != 54 )
              {
                v43 = v5 - 55;
                if ( v5 == 55 )
                {
LABEL_224:
                  Size = 28;
                  goto LABEL_376;
                }
                goto LABEL_276;
              }
LABEL_225:
              Size = 28;
              goto LABEL_392;
            }
LABEL_226:
            Size = 8;
            goto LABEL_376;
          }
        }
        goto LABEL_263;
      }
      if ( v5 == 59 )
        goto LABEL_226;
      if ( v5 != 60 )
      {
        if ( v5 != 61 )
        {
          if ( v5 == 64 )
          {
            Size = 56;
            goto LABEL_392;
          }
          if ( v5 == 65 )
          {
            Size = 56;
            goto LABEL_376;
          }
          if ( v5 != 66 )
            goto LABEL_396;
          Size = 16;
          CurrentProcessWow64Process = PsGetCurrentProcessWow64Process();
          ProbeForWrite((volatile void *)a3, 0x10uLL, CurrentProcessWow64Process != 0 ? 1 : 4);
          Address = (volatile void *)a3;
          *(_OWORD *)v30 = *(_OWORD *)a3;
          a3 = (ULONG64)v30;
          ProbeForWrite(v30[1], 0x100uLL, 2u);
LABEL_235:
          v72 = 1;
          goto LABEL_416;
        }
LABEL_153:
        Size = 12;
        goto LABEL_376;
      }
      goto LABEL_154;
    }
    v82 = 0LL;
    v83 = 0LL;
    RtlCopyFromUser(&v82, (void *)a3, 0x18uLL);
    *(_OWORD *)v30 = v82;
    v30[2] = v83;
    a3 = (ULONG64)v30;
    v45 = (ULONG64)v30[2];
    if ( (v45 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v46 = *((unsigned __int16 *)v30 + 4);
    v47 = v45 + v46 + 2;
    if ( v47 <= v45 || v47 >= MmUserProbeAddress )
      ExRaiseAccessViolation();
    if ( (unsigned __int16)v46 > *((_WORD *)v30 + 5) )
    {
      if ( (v46 & 1) == 0 )
        goto LABEL_248;
    }
    else if ( (v46 & 1) == 0 )
    {
      if ( !(_WORD)v46 )
        v30[2] = 0LL;
      goto LABEL_416;
    }
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 471LL);
LABEL_248:
    ExRaiseAccessViolation();
  }
  if ( v5 <= 0x92 )
  {
    if ( v5 == 146 )
    {
      if ( v6 == 68 )
      {
        Size = 68;
        goto LABEL_392;
      }
      goto LABEL_331;
    }
    if ( v5 <= 0x78 )
    {
      if ( v5 == 120 )
        goto LABEL_412;
      if ( v5 <= 0x6E )
      {
        if ( ((v5 - 98) & 0xFFFFFFF1) == 0 )
          goto LABEL_412;
        goto LABEL_396;
      }
      if ( v5 == 112 || v5 == 114 )
        goto LABEL_412;
      if ( v5 == 115 )
      {
        Address = (volatile void *)a3;
        a3 = (ULONG64)v30;
        ProbeForWrite(Address, 2LL * v71, 2u);
        v49 = v73;
        if ( v73 >= 0x104 )
          v49 = 260;
        v71 = v49;
        Size = 2 * v49;
        goto LABEL_235;
      }
      if ( v5 != 116 )
      {
        v43 = v5 - 117;
        if ( v5 != 117 )
        {
LABEL_276:
          v48 = v43 == 1;
LABEL_323:
          if ( !v48 )
            goto LABEL_396;
          goto LABEL_412;
        }
        goto LABEL_153;
      }
LABEL_154:
      Size = 12;
LABEL_392:
      Address = (volatile void *)a3;
      a3 = (ULONG64)v30;
      v63 = PsGetCurrentProcessWow64Process();
      v64 = Address;
      ProbeForWrite(Address, Size, v63 != 0 ? 1 : 4);
      v72 = 1;
      *(_DWORD *)v30 = *v64;
      v35 = xxxSystemParametersInfo(v5, v71, v30, v79);
      goto LABEL_417;
    }
    if ( v5 > 0x86 )
    {
      v50 = v5 == 136;
      v51 = v5 - 136;
    }
    else
    {
      if ( v5 == 134 || v5 == 122 )
        goto LABEL_412;
      v51 = v5 - 124;
      v50 = v5 == 124;
    }
    if ( v50 || (v52 = v51 - 2) == 0 || (v53 = v52 - 2) == 0 )
    {
LABEL_412:
      Size = 4;
      Address = (volatile void *)a3;
      a3 = (ULONG64)v30;
      v65 = Address;
      if ( (unsigned __int64)Address >= MmUserProbeAddress )
        v65 = (_DWORD *)MmUserProbeAddress;
      *v65 = *v65;
      goto LABEL_235;
    }
    v55 = v53 - 2;
    v54 = v55 == 0;
LABEL_321:
    if ( v54 )
      goto LABEL_412;
    v48 = v55 == 2;
    goto LABEL_323;
  }
  if ( v5 <= 0xA2 )
  {
    if ( v5 == 162 )
      goto LABEL_208;
    if ( v5 <= 0x99 )
    {
      switch ( v5 )
      {
        case 0x99u:
          if ( v6 != 128 )
            goto LABEL_331;
          Size = 128;
          goto LABEL_376;
        case 0x93u:
          if ( v6 != 68 )
            goto LABEL_331;
          Size = 68;
          goto LABEL_376;
        case 0x94u:
          if ( v6 == 40 )
          {
            Size = 40;
            goto LABEL_392;
          }
          goto LABEL_331;
        case 0x95u:
          if ( v6 != 40 )
            goto LABEL_331;
          Size = 40;
          goto LABEL_376;
      }
      if ( v5 != 150 )
      {
        if ( v5 != 151 )
        {
          if ( v6 == 128 )
          {
            Size = 128;
            goto LABEL_392;
          }
          goto LABEL_331;
        }
        if ( v6 != 28 )
          goto LABEL_331;
        goto LABEL_224;
      }
      if ( v6 != 28 )
        goto LABEL_331;
      goto LABEL_225;
    }
    switch ( v5 )
    {
      case 0x9Au:
        if ( v6 != 548 )
          goto LABEL_331;
        Size = 548;
        v59 = PsGetCurrentProcessWow64Process();
        ProbeForWrite((volatile void *)a3, 0x224uLL, v59 != 0 ? 1 : 4);
        Address = (volatile void *)a3;
        v60 = (_OWORD *)a3;
        v61 = v30;
        do
        {
          *(_OWORD *)v61 = *v60;
          *((_OWORD *)v61 + 1) = v60[1];
          *((_OWORD *)v61 + 2) = v60[2];
          *((_OWORD *)v61 + 3) = v60[3];
          *((_OWORD *)v61 + 4) = v60[4];
          *((_OWORD *)v61 + 5) = v60[5];
          *((_OWORD *)v61 + 6) = v60[6];
          v61 += 16;
          *((_OWORD *)v61 - 1) = v60[7];
          v60 += 8;
          --v26;
        }
        while ( v26 );
        *(_OWORD *)v61 = *v60;
        *((_OWORD *)v61 + 1) = v60[1];
        *((_DWORD *)v61 + 8) = *((_DWORD *)v60 + 8);
        a3 = (ULONG64)v30;
        goto LABEL_235;
      case 0x9Bu:
        if ( v6 != 548 )
          goto LABEL_331;
        Size = 548;
        memset(v87, 0, 0x224uLL);
        RtlCopyFromUser(v87, (void *)a3, 0x224uLL);
        v56 = v30;
        v57 = v87;
        do
        {
          *(_OWORD *)v56 = *v57;
          *((_OWORD *)v56 + 1) = v57[1];
          *((_OWORD *)v56 + 2) = v57[2];
          *((_OWORD *)v56 + 3) = v57[3];
          *((_OWORD *)v56 + 4) = v57[4];
          *((_OWORD *)v56 + 5) = v57[5];
          *((_OWORD *)v56 + 6) = v57[6];
          v56 += 16;
          *((_OWORD *)v56 - 1) = v57[7];
          v57 += 8;
          --v26;
        }
        while ( v26 );
        *(_OWORD *)v56 = *v57;
        *((_OWORD *)v56 + 1) = v57[1];
        *((_DWORD *)v56 + 8) = *((_DWORD *)v57 + 8);
        a3 = (ULONG64)v30;
        if ( *((_DWORD *)v30 + 6) > 0x104u )
          goto LABEL_331;
        goto LABEL_416;
      case 0x9Cu:
        if ( v6 != 16 )
          goto LABEL_331;
LABEL_208:
        Size = 16;
        goto LABEL_392;
      case 0x9Du:
LABEL_209:
        Size = 16;
        goto LABEL_376;
    }
    v55 = v5 - 158;
    v54 = v5 == 158;
    goto LABEL_321;
  }
  if ( v5 <= 0xAD )
  {
    if ( v5 != 173 )
    {
      switch ( v5 )
      {
        case 0xA3u:
          goto LABEL_209;
        case 0xA5u:
        case 0xA7u:
          if ( v6 != 12 )
            goto LABEL_331;
          goto LABEL_154;
        case 0xA8u:
        case 0xAAu:
          goto LABEL_412;
      }
      if ( v5 != 172 )
        goto LABEL_396;
      if ( v6 != 4 )
        goto LABEL_331;
LABEL_360:
      Size = 4;
      goto LABEL_392;
    }
    if ( v6 != 4 )
      goto LABEL_331;
    goto LABEL_350;
  }
  switch ( v5 )
  {
    case 0xAEu:
      if ( ((PsGetCurrentProcessWow64Process() == 0 ? 3 : 0) & (unsigned __int8)a3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( *(_DWORD *)a3 )
      {
        switch ( *(_DWORD *)a3 )
        {
          case 1:
            v62 = 44;
            break;
          case 2:
            v62 = 48;
            break;
          case 3:
            v62 = 52;
            break;
          default:
            goto LABEL_331;
        }
      }
      else
      {
        v62 = 24;
      }
      Size = v62;
      if ( v71 == v62 )
      {
        *(_DWORD *)v30 = *(_DWORD *)a3;
        goto LABEL_392;
      }
      break;
    case 0xAFu:
      if ( ((PsGetCurrentProcessWow64Process() == 0 ? 3 : 0) & (unsigned __int8)a3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( *(_DWORD *)a3 )
      {
        switch ( *(_DWORD *)a3 )
        {
          case 1:
            Size = 44;
            break;
          case 2:
            Size = 48;
            break;
          case 3:
            Size = 52;
            break;
          default:
            goto LABEL_331;
        }
      }
      else
      {
        Size = 24;
      }
      if ( v71 == Size )
        goto LABEL_375;
      break;
    case 0xB0u:
      if ( !v6 )
      {
        Size = 4;
        goto LABEL_392;
      }
      break;
    case 0xB2u:
      if ( v6 != 4 )
        break;
      goto LABEL_360;
    case 0xB3u:
      if ( v6 != 4 )
        break;
LABEL_350:
      Size = 4;
      goto LABEL_376;
    default:
      goto LABEL_396;
  }
LABEL_331:
  UserSetLastError(87);
  v31 = 0;
  Win32RawOptionalLockedItemAlways<void,&void Win32FreePool(void *)>::~Win32RawOptionalLockedItemAlways<void,&void Win32FreePool(void *)>((__int64)v75);
  Win32RawOptionalLockedItemAlways<void,&void Win32FreePool(void *)>::~Win32RawOptionalLockedItemAlways<void,&void Win32FreePool(void *)>((__int64)BugCheckParameter2);
LABEL_424:
  UserSessionSwitchLeaveCritWithNonPaged(0LL, v58);
  return v31;
}
