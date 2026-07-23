/*
 * XREFs of LdrLoadEnclaveModule @ 0x180139250
 * Callers:
 *     <none>
 * Callees:
 *     LdrpPreprocessDllName @ 0x180030180 (LdrpPreprocessDllName.c)
 *     LdrpObtainLockedEnclave @ 0x1800364A0 (LdrpObtainLockedEnclave.c)
 *     LdrpReleaseDllPath @ 0x18003B980 (LdrpReleaseDllPath.c)
 *     LdrpUnlockAndDereferenceEnclave @ 0x1800911BC (LdrpUnlockAndDereferenceEnclave.c)
 *     LdrpInitializeDllPath @ 0x18009AA90 (LdrpInitializeDllPath.c)
 *     LdrpCleanupEnclaveLoadState @ 0x1800C4AE4 (LdrpCleanupEnclaveLoadState.c)
 *     LdrpCreatePendingEnclaveModule @ 0x1800CF104 (LdrpCreatePendingEnclaveModule.c)
 *     LdrpLoadEnclaveModule @ 0x180116A00 (LdrpLoadEnclaveModule.c)
 *     RtlGetImageEnclaveConfig @ 0x18014EFF4 (RtlGetImageEnclaveConfig.c)
 *     LdrpLogVsmEnclaveLdrLoadEnclaveModuleTelemetry @ 0x18015DADC (LdrpLogVsmEnclaveLdrLoadEnclaveModuleTelemetry.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

NTSTATUS __cdecl LdrLoadEnclaveModule(PVOID BaseAddress, PWSTR DllPath, PUNICODE_STRING DllName)
{
  bool v6; // di
  __int64 *v7; // rax
  __int64 *v8; // rsi
  int EnclaveModule; // ebx
  _QWORD *v11; // r15
  _QWORD *i; // r14
  __int64 v13; // rdx
  int v14; // [rsp+40h] [rbp-C0h] BYREF
  int v15[3]; // [rsp+44h] [rbp-BCh] BYREF
  _BYTE v16[80]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v17[128]; // [rsp+A0h] [rbp-60h] BYREF
  _UNICODE_STRING v18; // [rsp+120h] [rbp+20h] BYREF
  __int16 v19; // [rsp+130h] [rbp+30h] BYREF

  memset_thunk_772440563353939046(v16, 0, 0x50uLL);
  memset_thunk_772440563353939046(v17, 0, 0x80uLL);
  v6 = 0;
  v15[0] = 0;
  memset_thunk_772440563353939046(&v18, 0, 0x110uLL);
  v7 = LdrpObtainLockedEnclave((unsigned __int64)BaseAddress, 1);
  v8 = v7;
  if ( !v7 )
    return -1073741664;
  if ( *((_DWORD *)v7 + 14) == 16 )
  {
    LdrpInitializeDllPath((__int64)DllName->Buffer, (__int64)DllPath, (__int64)v17);
    if ( v8[11] || (v11 = v8 + 12, (_QWORD *)*v11 != v11) )
    {
      EnclaveModule = -1073741800;
    }
    else
    {
      *(_DWORD *)&v18.Length = 0x1000000;
      v18.Buffer = (wchar_t *)&v19;
      v19 = 0;
      v14 = 0x800000;
      EnclaveModule = LdrpPreprocessDllName(&DllName->Length, &v18, 0LL, &v14);
      if ( EnclaveModule >= 0 )
      {
        EnclaveModule = LdrpCreatePendingEnclaveModule(v8, &v18, v14, 7, (int)v17, 0LL, 0LL, (__int64)v15);
        if ( EnclaveModule >= 0 )
        {
          for ( i = (_QWORD *)*v11; i != v11; i = (_QWORD *)*i )
          {
            EnclaveModule = LdrpLoadEnclaveModule((unsigned __int16 *)i[22]);
            if ( EnclaveModule < 0 )
              goto LABEL_16;
          }
          EnclaveModule = RtlGetImageEnclaveConfig(*(PVOID *)(v8[14] + 48), v16);
          if ( EnclaveModule >= 0 )
          {
            EnclaveModule = v15[0];
            v6 = (v16[8] & 2) != 0;
          }
        }
      }
    }
  }
  else
  {
    EnclaveModule = -1073741664;
  }
LABEL_16:
  LdrpCleanupEnclaveLoadState((__int64)v8, EnclaveModule);
  LdrpUnlockAndDereferenceEnclave((char *)v8);
  LdrpReleaseDllPath((__int64)v17);
  LOBYTE(v13) = v6;
  LdrpLogVsmEnclaveLdrLoadEnclaveModuleTelemetry((unsigned int)EnclaveModule, v13);
  return EnclaveModule;
}
