/*
 * XREFs of NtUserFunctionalizeDisplayConfig @ 0x14016F770
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140047540 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x140048E98 (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     UserIsWddmConnectedSession @ 0x14006BDB0 (UserIsWddmConnectedSession.c)
 *     SetLastNtError @ 0x14009DA54 (SetLastNtError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x1400A2310 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     DrvNeedDisplayStateCheck @ 0x14014FD98 (DrvNeedDisplayStateCheck.c)
 *     DrvFunctionalizeDisplayConfig @ 0x140157D40 (DrvFunctionalizeDisplayConfig.c)
 *     DrvIsDisplayStateCurrent @ 0x14015A540 (DrvIsDisplayStateCurrent.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14019B238 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     RtlCopyVolatileMemory @ 0x140242F00 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall NtUserFunctionalizeDisplayConfig(
        unsigned int a1,
        unsigned int *a2,
        volatile void *a3,
        unsigned __int64 a4,
        __int64 a5,
        _DWORD *Address)
{
  const struct DISPLAYCONFIG_PATH_INFO_INTERNAL *v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // rdx
  int v12; // ebx
  _DWORD *v13; // rdx
  __int64 CurrentProcessWow64Process; // rax
  __int64 v15; // rcx
  unsigned int v16; // ebx
  unsigned int v17; // edx
  __int64 *i; // rcx
  __int64 *v19; // r15
  __int64 *v20; // r12
  unsigned int v21; // r14d
  unsigned int v22; // r13d
  __int64 v23; // rdx
  unsigned __int64 v24; // rcx
  unsigned int v26; // [rsp+30h] [rbp-C8h] BYREF
  unsigned int v27; // [rsp+34h] [rbp-C4h]
  const struct DISPLAYCONFIG_PATH_INFO_INTERNAL *v28; // [rsp+38h] [rbp-C0h]
  _DWORD v29[2]; // [rsp+40h] [rbp-B8h] BYREF
  __int64 *v30; // [rsp+48h] [rbp-B0h]
  int v31; // [rsp+50h] [rbp-A8h]
  int v32; // [rsp+54h] [rbp-A4h]
  void *v33; // [rsp+68h] [rbp-90h]
  __int128 v34; // [rsp+70h] [rbp-88h] BYREF
  __int64 v35; // [rsp+80h] [rbp-78h]
  int v36; // [rsp+88h] [rbp-70h]
  int v37; // [rsp+98h] [rbp-60h]
  int v38; // [rsp+9Ch] [rbp-5Ch]
  int v39; // [rsp+A0h] [rbp-58h]
  __int64 v40; // [rsp+A8h] [rbp-50h] BYREF

  v37 = 0x2000;
  v38 = -1;
  v39 = 0;
  v9 = 0LL;
  v28 = 0LL;
  v26 = 0;
  v29[0] = -1;
  v34 = 0LL;
  v35 = 0LL;
  v36 = 0;
  v29[1] = -1073741811;
  EnterLeaveCritShared::EnterLeaveCritShared(&v40, 1LL);
  PtiCurrent();
  if ( !*(_DWORD *)(W32GetUserGdiSessionState(v10) + 32) )
  {
    v12 = -1073741823;
LABEL_46:
    if ( a4 && (unsigned int)DrvNeedDisplayStateCheck(&v34) && !(unsigned int)DrvIsDisplayStateCurrent(1LL, &v34) )
      v12 = -1071774921;
    goto LABEL_50;
  }
  v13 = a2;
  if ( (unsigned __int64)a2 >= MmUserProbeAddress )
    v13 = (_DWORD *)MmUserProbeAddress;
  *v13 = *v13;
  v26 = *a2;
  if ( v26 - 1 > 0x3FF )
    ExRaiseStatus(-1073741811);
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process();
  ProbeForWrite(a3, 216LL * v26, CurrentProcessWow64Process != 0 ? 1 : 4);
  v9 = (const struct DISPLAYCONFIG_PATH_INFO_INTERNAL *)Win32AllocPoolWithQuotaZInitImpl(v15, 216LL * v26, 0x63447355u);
  v28 = v9;
  if ( !v9 )
    ExRaiseStatus(-1073741801);
  v30 = 0LL;
  v33 = 0LL;
  v27 = 0;
  v16 = 0;
  v31 = 0;
  v17 = 0;
  for ( i = (__int64 *)a3; ; i += 27 )
  {
    v30 = i;
    v27 = v17;
    if ( v17 >= v26 )
      break;
    if ( *i < 0 )
      v31 = ++v16;
    ++v17;
    v9 = v28;
  }
  if ( v26 != v16 )
    ExRaiseStatus(-1073741811);
  v19 = (__int64 *)a3;
  v30 = (__int64 *)a3;
  v20 = (__int64 *)v9;
  v33 = v9;
  v21 = 0;
  v32 = 0;
  v22 = 0;
  while ( 1 )
  {
    v27 = v22;
    if ( v22 >= v16 )
      break;
    if ( *v19 < 0 )
    {
      if ( v21 >= v16 )
        ExRaiseStatus(-1073741811);
      RtlCopyVolatileMemory(v20, v19, 0xD8uLL);
      if ( *v20 >= 0 )
        ExRaiseStatus(-1073741790);
      v32 = ++v21;
      v20 += 27;
      v33 = v20;
    }
    ++v22;
    v19 += 27;
    v30 = v19;
    v9 = v28;
  }
  if ( v21 != v16 )
    ExRaiseStatus(-1073741811);
  if ( !Address )
    ExRaiseStatus(-1073741811);
  ProbeForWrite(Address, 4uLL, 4u);
  if ( a4 )
  {
    if ( ((PsGetCurrentProcessWow64Process() == 0 ? 3 : 0) & (unsigned __int8)a4) != 0 )
      ExRaiseDatatypeMisalignment();
    v24 = a4 + 28;
    if ( a4 + 28 > MmUserProbeAddress || v24 < a4 )
      v9 = v28;
    v34 = *(_OWORD *)a4;
    v35 = *(_QWORD *)(a4 + 16);
    v36 = *(_DWORD *)(a4 + 24);
  }
  if ( !(unsigned int)UserIsWddmConnectedSession(v24, v23) )
  {
    v12 = -1073741790;
    goto LABEL_46;
  }
  if ( a4 && (unsigned int)DrvNeedDisplayStateCheck(&v34) && !(unsigned int)DrvIsDisplayStateCurrent(1LL, &v34) )
  {
    v12 = -1071774921;
    goto LABEL_46;
  }
  v12 = DrvFunctionalizeDisplayConfig(&v26, v9, a1, a5, (__int64)v29);
  if ( v12 == -2147483643 )
    v12 = -1073741789;
  RtlCopyVolatileMemory((void *)a3, v9, 216LL * v26);
  *a2 = v26;
  *Address = v29[0];
  if ( v12 < 0 )
    goto LABEL_46;
LABEL_50:
  if ( v9 )
  {
    GreDeleteFastMutex((char *)v9);
    v28 = 0LL;
  }
  UserSessionSwitchLeaveCritWithNonPaged(0LL, v11);
  return (unsigned int)v12;
}
