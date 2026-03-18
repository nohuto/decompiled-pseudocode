/*
 * XREFs of ValidateHandleSecure @ 0x1401A87C0
 * Callers:
 *     HMValidateHandleWithDescriptor @ 0x140049640 (HMValidateHandleWithDescriptor.c)
 *     HMValidateCatHandleNoRip @ 0x1401B511C (HMValidateCatHandleNoRip.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048E80 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?IsHandleEntryAccessibleForIL@@YAHPEAU_HANDLEENTRY@@@Z @ 0x1401226B8 (-IsHandleEntryAccessibleForIL@@YAHPEAU_HANDLEENTRY@@@Z.c)
 *     ?ValidateHandleSecure_New@@YAHPEAXK@Z @ 0x1401CE67C (-ValidateHandleSecure_New@@YAHPEAXK@Z.c)
 *     Feature_RestrictedFlagUpdate__private_IsEnabledDeviceUsageNoInline @ 0x1401CE7F4 (Feature_RestrictedFlagUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     IsHandleEntrySecure @ 0x1401CE84C (IsHandleEntrySecure.c)
 */

__int64 __fastcall ValidateHandleSecure(void *a1, unsigned int a2)
{
  int v4; // edx
  int v5; // ecx
  int v6; // r8d
  int v8; // edx
  __int64 v9; // rcx
  int v10; // r8d
  __int64 UserSessionState; // rbx
  int v12; // edx
  int v13; // ecx
  int v14; // r8d
  unsigned int v15; // ecx
  __int64 v16; // rbx
  int v17; // edx
  int v18; // r8d
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int16 v21; // ax
  int v22; // edx
  int v23; // r8d

  if ( (unsigned int)Feature_RestrictedFlagUpdate__private_IsEnabledDeviceUsageNoInline() )
    return ValidateHandleSecure_New(a1, a2);
  v9 = *(_QWORD *)(W32GetUserSessionState(v5, v4, v6) + 19904);
  if ( (unsigned __int64)(unsigned __int16)a1 >= *(_QWORD *)(v9 + 8) )
    return 0LL;
  UserSessionState = W32GetUserSessionState(v9, v8, v10);
  v15 = *(_DWORD *)(W32GetUserSessionState(v13, v12, v14) + 19928) * (unsigned __int16)a1;
  v16 = v15 + *(_QWORD *)(UserSessionState + 19920);
  W32GetUserSessionState(v15, v17, v18);
  v20 = 0x7FFFLL;
  v21 = WORD1(a1) & 0x7FFF;
  if ( (WORD1(a1) & 0x7FFF) != *(_WORD *)(v16 + 26)
    && v21 != 0x7FFF
    && (v21 || !PsGetCurrentProcessWow64Process(0x7FFFLL, v19)) )
  {
    return 0LL;
  }
  if ( !*(_BYTE *)(v16 + 24) || (a2 & 1) != 0 && !(unsigned int)IsHandleEntrySecure(a1, v16) || (a2 & 2) == 0 )
    return 0LL;
  if ( *((_BYTE *)PtiCurrent(v20, v19) + 1708) )
    return IsHandleEntryAccessibleForIL((struct _HANDLEENTRY *)v16, v22, v23);
  return 1LL;
}
