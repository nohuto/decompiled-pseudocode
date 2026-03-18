/*
 * XREFs of ValidateHandleSecure @ 0x1400A1F30
 * Callers:
 *     HMValidateHandleWithDescriptor @ 0x1400A1BA0 (HMValidateHandleWithDescriptor.c)
 *     HMValidateCatHandleNoRip @ 0x14019B25C (HMValidateCatHandleNoRip.c)
 * Callees:
 *     IsHandleEntrySecure @ 0x1400A2040 (IsHandleEntrySecure.c)
 *     ?IsHandleEntryAccessibleForIL@@YAHPEAU_HANDLEENTRY@@@Z @ 0x1400A21E4 (-IsHandleEntryAccessibleForIL@@YAHPEAU_HANDLEENTRY@@@Z.c)
 *     W32GetCurrentThreadNonPaged @ 0x1401A595C (W32GetCurrentThreadNonPaged.c)
 *     ?IsHandleILCheckDisabled@tagTHREADINFO@@QEBA_NXZ @ 0x1401AC164 (-IsHandleILCheckDisabled@tagTHREADINFO@@QEBA_NXZ.c)
 */

__int64 __fastcall ValidateHandleSecure(__int64 a1, __int64 a2)
{
  char v2; // di
  int v3; // ebp
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 UserSessionState; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int16 v13; // ax
  tagTHREADINFO **CurrentThreadNonPaged; // rax
  tagTHREADINFO *v15; // rcx

  v2 = a2;
  v3 = (unsigned __int16)a1;
  if ( (unsigned __int64)(unsigned __int16)a1 >= *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(a1, a2) + 19872) + 8LL) )
    return 0LL;
  UserSessionState = W32GetUserSessionState(v6, v5);
  v10 = (unsigned int)(*(_DWORD *)(W32GetUserSessionState(v9, v8) + 19896) * v3);
  v11 = v10 + *(_QWORD *)(UserSessionState + 19888);
  W32GetUserSessionState(v10, v12);
  v13 = WORD1(a1) & 0x7FFF;
  if ( (WORD1(a1) & 0x7FFF) != *(_WORD *)(v11 + 26) && v13 != 0x7FFF && (v13 || !PsGetCurrentProcessWow64Process()) )
    return 0LL;
  if ( !*(_BYTE *)(v11 + 24) || (v2 & 1) != 0 && !(unsigned int)IsHandleEntrySecure(a1, v11) || (v2 & 2) == 0 )
    return 0LL;
  CurrentThreadNonPaged = (tagTHREADINFO **)W32GetCurrentThreadNonPaged();
  if ( CurrentThreadNonPaged )
    v15 = *CurrentThreadNonPaged;
  else
    v15 = 0LL;
  if ( tagTHREADINFO::IsHandleILCheckDisabled(v15) )
    return 1LL;
  else
    return IsHandleEntryAccessibleForIL((struct _HANDLEENTRY *)v11);
}
