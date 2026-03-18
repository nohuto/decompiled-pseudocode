/*
 * XREFs of NtUserFunctionalizeDisplayConfig @ 0x1401E3DB0
 * Callers:
 *     <none>
 * Callees:
 *     UserIsWddmConnectedSession @ 0x1400293B0 (UserIsWddmConnectedSession.c)
 *     DrvFunctionalizeDisplayConfig @ 0x14002E708 (DrvFunctionalizeDisplayConfig.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14003D7B0 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x140044FF0 (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048E80 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SetLastNtError @ 0x140087ACC (SetLastNtError.c)
 *     DrvNeedDisplayStateCheck @ 0x140186E8C (DrvNeedDisplayStateCheck.c)
 *     DrvIsDisplayStateCurrent @ 0x1401986B0 (DrvIsDisplayStateCurrent.c)
 *     RtlCopyVolatileMemory @ 0x14024BC90 (RtlCopyVolatileMemory.c)
 *     RtlReadULongFromUser @ 0x1402D21A0 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x1402D2364 (RtlWriteULongToUser.c)
 */

__int64 __fastcall NtUserFunctionalizeDisplayConfig(
        unsigned int a1,
        __int64 a2,
        volatile void *a3,
        __int128 *a4,
        __int64 a5,
        _DWORD *Address)
{
  const struct DISPLAYCONFIG_PATH_INFO_INTERNAL *v9; // r14
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  int v17; // esi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 CurrentProcessWow64Process; // rax
  int v21; // ecx
  unsigned int v22; // esi
  unsigned int v23; // ecx
  __int64 *i; // rdx
  __int64 *v25; // r13
  const struct DISPLAYCONFIG_PATH_INFO_INTERNAL *v26; // rcx
  unsigned int v27; // r12d
  unsigned int j; // edx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rax
  unsigned int ULongFromUser; // [rsp+30h] [rbp-A8h] BYREF
  unsigned int v36; // [rsp+34h] [rbp-A4h]
  _DWORD v37[2]; // [rsp+38h] [rbp-A0h] BYREF
  __int64 *v38; // [rsp+40h] [rbp-98h]
  const struct DISPLAYCONFIG_PATH_INFO_INTERNAL *v39; // [rsp+48h] [rbp-90h]
  int v40; // [rsp+50h] [rbp-88h]
  int v41; // [rsp+54h] [rbp-84h]
  __int64 *v42; // [rsp+78h] [rbp-60h]
  __int128 v43; // [rsp+80h] [rbp-58h] BYREF
  __int64 v44; // [rsp+90h] [rbp-48h]
  int v45; // [rsp+98h] [rbp-40h]
  __int64 v46[7]; // [rsp+A0h] [rbp-38h] BYREF

  v9 = 0LL;
  v39 = 0LL;
  ULongFromUser = 0;
  v37[0] = -1;
  v43 = 0LL;
  v44 = 0LL;
  v45 = 0;
  v37[1] = -1073741811;
  EnterLeaveCritShared::EnterLeaveCritShared(v46);
  PtiCurrent(v11, v10);
  if ( !*(_DWORD *)(W32GetUserGdiSessionState(v12) + 32) )
  {
    v17 = -1073741823;
LABEL_39:
    if ( a4 && (unsigned int)DrvNeedDisplayStateCheck(&v43) && !(unsigned int)DrvIsDisplayStateCurrent(1LL, &v43) )
      v17 = -1071774921;
    goto LABEL_43;
  }
  ULongFromUser = RtlReadULongFromUser(a2, v13);
  if ( ULongFromUser - 1 > 0x3FF )
    ExRaiseStatus(-1073741811);
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v19, v18);
  ProbeForWrite(a3, 216LL * ULongFromUser, CurrentProcessWow64Process != 0 ? 1 : 4);
  v9 = (const struct DISPLAYCONFIG_PATH_INFO_INTERNAL *)Win32AllocPoolWithQuotaZInitImpl(
                                                          v21,
                                                          216LL * ULongFromUser,
                                                          0x63447355u);
  v39 = v9;
  if ( !v9 )
    ExRaiseStatus(-1073741801);
  v38 = 0LL;
  v42 = 0LL;
  v36 = 0;
  v22 = 0;
  v40 = 0;
  v23 = 0;
  for ( i = (__int64 *)a3; ; i += 27 )
  {
    v38 = i;
    v36 = v23;
    if ( v23 >= ULongFromUser )
      break;
    if ( *i < 0 )
      v40 = ++v22;
    ++v23;
  }
  if ( ULongFromUser != v22 )
    ExRaiseStatus(-1073741811);
  v25 = (__int64 *)a3;
  v38 = (__int64 *)a3;
  v26 = v9;
  v42 = (__int64 *)v9;
  v27 = 0;
  v41 = 0;
  for ( j = 0; ; ++j )
  {
    v36 = j;
    if ( j >= v22 )
      break;
    if ( *v25 < 0 )
    {
      if ( v27 >= v22 )
        ExRaiseStatus(-1073741811);
      RtlCopyVolatileMemory(v26, v25, 0xD8uLL);
      if ( *v42 >= 0 )
        ExRaiseStatus(-1073741790);
      v41 = ++v27;
      v26 = (const struct DISPLAYCONFIG_PATH_INFO_INTERNAL *)(v42 + 27);
      v42 += 27;
      j = v36;
    }
    v25 += 27;
    v38 = v25;
  }
  if ( v27 != v22 )
    ExRaiseStatus(-1073741811);
  if ( !Address )
    ExRaiseStatus(-1073741811);
  ProbeForWrite(Address, 4uLL, 4u);
  if ( a4 )
  {
    v33 = PsGetCurrentProcessWow64Process(v30, v29);
    ProbeForRead(a4, 0x1CuLL, v33 != 0 ? 1 : 4);
    v43 = *a4;
    v44 = *((_QWORD *)a4 + 2);
    v45 = *((_DWORD *)a4 + 6);
  }
  if ( !(unsigned int)UserIsWddmConnectedSession(v30, v29, v31, v32) )
  {
    v17 = -1073741790;
    goto LABEL_39;
  }
  if ( a4 && (unsigned int)DrvNeedDisplayStateCheck(&v43) && !(unsigned int)DrvIsDisplayStateCurrent(1LL, &v43) )
  {
    v17 = -1071774921;
    goto LABEL_39;
  }
  v17 = DrvFunctionalizeDisplayConfig(&ULongFromUser, v9, a1, a5, (__int64)v37);
  if ( v17 == -2147483643 )
    v17 = -1073741789;
  RtlCopyVolatileMemory((void *)a3, v9, 216LL * ULongFromUser);
  RtlWriteULongToUser(a2, ULongFromUser);
  *Address = v37[0];
  if ( v17 < 0 )
    goto LABEL_39;
LABEL_43:
  if ( v9 )
  {
    GreDeleteFastMutex((char *)v9, v13, v15, v16);
    v39 = 0LL;
  }
  UserSessionSwitchLeaveCritWithNonPaged(v14, v13, v15, v16);
  return (unsigned int)v17;
}
