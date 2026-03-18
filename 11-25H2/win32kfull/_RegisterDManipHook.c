/*
 * XREFs of _RegisterDManipHook @ 0x140222070
 * Callers:
 *     NtUserRegisterDManipHook @ 0x140222020 (NtUserRegisterDManipHook.c)
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     GetHmodTableIndex @ 0x1400C8B54 (GetHmodTableIndex.c)
 *     AddHmodDependency @ 0x1400C8D80 (AddHmodDependency.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x140131080 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     RtlStringCopyWorkerW @ 0x140142600 (RtlStringCopyWorkerW.c)
 *     ?RtlStringCbCatW@@YAJPEAG_KPEBG@Z @ 0x140265864 (-RtlStringCbCatW@@YAJPEAG_KPEBG@Z.c)
 *     Feature_IsPrivilegedEx__private_IsEnabledDeviceUsageNoInline @ 0x140283680 (Feature_IsPrivilegedEx__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 RegisterDManipHook()
{
  __int64 v0; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v2; // r8
  __int64 v3; // rax
  __int64 v4; // r8
  bool v5; // zf
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 UserSessionState; // rax
  __int64 v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  const wchar_t *NtSystemRoot; // rax
  size_t *v20; // r8
  unsigned __int64 v21; // rdx
  const unsigned __int16 *v22; // r8
  int HmodTableIndex; // eax
  int v24; // ecx
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  size_t v30; // [rsp+20h] [rbp-238h]
  wchar_t pszDest[264]; // [rsp+30h] [rbp-228h] BYREF

  if ( (unsigned __int8)IsRestricted(KeGetCurrentThread()) )
    goto LABEL_26;
  if ( (unsigned int)Feature_IsPrivilegedEx__private_IsEnabledDeviceUsageNoInline() )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v0);
    v2 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
      v2 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
    if ( *(_DWORD *)(v2 + 764) != luidSystem[0] )
      goto LABEL_26;
    v3 = PsGetCurrentProcessWin32Process(luidSystem[0]);
    v4 = v3;
    if ( v3 )
      v4 = -(__int64)(*(_QWORD *)v3 != 0LL) & v3;
    if ( *(_DWORD *)(v4 + 768) != luidSystem[1] )
      goto LABEL_26;
    v5 = (unsigned __int8)HasTcbPrivilege() == 0;
  }
  else
  {
    v8 = PsGetCurrentProcessWin32Process(v0);
    v9 = v8;
    if ( v8 )
      v9 = -(__int64)(*(_QWORD *)v8 != 0LL) & v8;
    if ( *(_DWORD *)(v9 + 764) != luidSystem[0] )
      goto LABEL_26;
    v10 = PsGetCurrentProcessWin32Process(luidSystem[0]);
    v12 = v10;
    if ( v10 )
    {
      v11 = -(__int64)(*(_QWORD *)v10 != 0LL);
      v12 = v11 & v10;
    }
    v13 = luidSystem[1];
    if ( *(_DWORD *)(v12 + 768) != (_DWORD)v13 )
      goto LABEL_26;
    UserSessionState = W32GetUserSessionState(v13, v11);
    v5 = (unsigned int)IsPrivileged(UserSessionState + 42544) == 0;
  }
  if ( v5 )
  {
LABEL_26:
    v24 = 5;
    goto LABEL_27;
  }
  v15 = W32GetUserSessionState(v7, v6);
  NtSystemRoot = (const wchar_t *)RtlGetNtSystemRoot(v17, v16, v18);
  if ( RtlStringCopyWorkerW(pszDest, 0x82uLL, v20, NtSystemRoot, v30) < 0 || (int)RtlStringCbCatW(pszDest, v21, v22) < 0 )
  {
    v24 = 3;
    goto LABEL_27;
  }
  RtlStringCchCopyW((char *)(v15 + 65268), 260LL, (char *)pszDest);
  HmodTableIndex = GetHmodTableIndex((__int64)pszDest);
  *(_DWORD *)(v15 + 65264) = HmodTableIndex;
  if ( HmodTableIndex == -1 )
  {
    v24 = 126;
LABEL_27:
    UserSetLastError(v24);
    return 0LL;
  }
  AddHmodDependency(HmodTableIndex);
  v26 = PsGetCurrentProcessWin32Process(v25);
  if ( v26 )
  {
    v28 = -*(_QWORD *)v26;
    v27 = -(__int64)(*(_QWORD *)v26 != 0LL);
    v26 &= v27;
  }
  *(_QWORD *)(v15 + 64184) = v26;
  _InterlockedOr(*(volatile signed __int32 **)(W32GetUserSessionState(v28, v27) + 19872), 0x10u);
  return 1LL;
}
