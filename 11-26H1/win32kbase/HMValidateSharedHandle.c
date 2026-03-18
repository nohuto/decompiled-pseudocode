/*
 * XREFs of HMValidateSharedHandle @ 0x140087920
 * Callers:
 *     DrvGetCurrentDpiInfo @ 0x1400877B0 (DrvGetCurrentDpiInfo.c)
 *     NtUserGetUniformSpaceMapping @ 0x14011D250 (NtUserGetUniformSpaceMapping.c)
 *     NtUserGetDpiForMonitor @ 0x14017AFC0 (NtUserGetDpiForMonitor.c)
 *     xxxCreateThreadInfo @ 0x1401A6A18 (xxxCreateThreadInfo.c)
 *     NtUserCreateSyntheticPointerDevice2 @ 0x1401E2960 (NtUserCreateSyntheticPointerDevice2.c)
 *     NtUserInitializeInputDeviceInjection @ 0x1401E5550 (NtUserInitializeInputDeviceInjection.c)
 * Callees:
 *     UserSetLastError @ 0x140087A14 (UserSetLastError.c)
 */

__int64 __fastcall HMValidateSharedHandle(int a1, int a2, int a3)
{
  __int16 v3; // edi^2
  unsigned __int64 v4; // rsi
  __int64 v5; // rdx
  int v6; // ecx
  int v7; // r8d
  __int64 UserSessionState; // rbx
  int v9; // edx
  int v10; // ecx
  int v11; // r8d
  unsigned int v12; // ecx
  __int64 v13; // rbx
  int v14; // edx
  int v15; // r8d
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 *v18; // rsi
  __int16 v19; // di
  __int64 result; // rax

  v3 = HIWORD(a1);
  v4 = (unsigned __int16)a1;
  v5 = *(_QWORD *)(W32GetUserSessionState(a1, a2, a3) + 19904);
  if ( v4 >= *(_QWORD *)(v5 + 8) )
    goto LABEL_9;
  UserSessionState = W32GetUserSessionState(v6, v5, v7);
  v12 = *(_DWORD *)(W32GetUserSessionState(v10, v9, v11) + 19928) * v4;
  v13 = v12 + *(_QWORD *)(UserSessionState + 19920);
  v16 = W32GetUserSessionState(v12, v14, v15);
  v17 = (unsigned int)((v13 - *(_QWORD *)(v16 + 19920)) >> 5);
  v18 = (__int64 *)(*(_QWORD *)(v16 + 19864) + 40 * v17);
  v19 = v3 & 0x7FFF;
  if ( (v3 & 0x7FFF) != *(_WORD *)(v13 + 26) && v19 != 0x7FFF && (v19 || !PsGetCurrentProcessWow64Process(v17, 5 * v17)) )
    goto LABEL_9;
  if ( (*(_BYTE *)(v13 + 25) & 1) != 0 || *(_BYTE *)(v13 + 24) != 12 || (result = *v18) == 0 )
  {
LABEL_9:
    UserSetLastError(1461LL);
    return 0LL;
  }
  return result;
}
