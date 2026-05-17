/*
 * XREFs of LdrLoadEnclaveModule @ 0x1801394E0
 * Callers:
 *     <none>
 * Callees:
 *     LdrpPreprocessDllName @ 0x180045C10 (LdrpPreprocessDllName.c)
 *     LdrpObtainLockedEnclave @ 0x18004BF20 (LdrpObtainLockedEnclave.c)
 *     LdrpReleaseDllPath @ 0x180051400 (LdrpReleaseDllPath.c)
 *     LdrpUnlockAndDereferenceEnclave @ 0x180070D6C (LdrpUnlockAndDereferenceEnclave.c)
 *     LdrpInitializeDllPath @ 0x18009B960 (LdrpInitializeDllPath.c)
 *     LdrpCleanupEnclaveLoadState @ 0x1800C7324 (LdrpCleanupEnclaveLoadState.c)
 *     LdrpCreatePendingEnclaveModule @ 0x1800D1994 (LdrpCreatePendingEnclaveModule.c)
 *     LdrpLoadEnclaveModule @ 0x180117220 (LdrpLoadEnclaveModule.c)
 *     RtlGetImageEnclaveConfig @ 0x18014F144 (RtlGetImageEnclaveConfig.c)
 *     LdrpLogVsmEnclaveLdrLoadEnclaveModuleTelemetry @ 0x18015DC1C (LdrpLogVsmEnclaveLdrLoadEnclaveModuleTelemetry.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall LdrLoadEnclaveModule(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  bool v6; // di
  __int64 *v7; // rax
  __int64 *v8; // rsi
  int PendingEnclaveModule; // ebx
  _QWORD *v11; // r15
  _QWORD *i; // r14
  __int64 v13; // rdx
  int v14; // [rsp+40h] [rbp-C0h] BYREF
  int v15[3]; // [rsp+44h] [rbp-BCh] BYREF
  _BYTE v16[80]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v17[128]; // [rsp+A0h] [rbp-60h] BYREF
  int v18; // [rsp+120h] [rbp+20h] BYREF
  __int16 *v19; // [rsp+128h] [rbp+28h]
  __int16 v20; // [rsp+130h] [rbp+30h] BYREF

  memset_thunk_772440563353939046(v16, 0, 0x50uLL);
  memset_thunk_772440563353939046(v17, 0, 0x80uLL);
  v6 = 0;
  v15[0] = 0;
  memset_thunk_772440563353939046(&v18, 0, 0x110uLL);
  v7 = LdrpObtainLockedEnclave(a1, 1);
  v8 = v7;
  if ( !v7 )
    return 3221225632LL;
  if ( *((_DWORD *)v7 + 14) == 16 )
  {
    LdrpInitializeDllPath(*(_QWORD *)(a3 + 8), a2, (__int64)v17);
    if ( v8[11] || (v11 = v8 + 12, (_QWORD *)*v11 != v11) )
    {
      PendingEnclaveModule = -1073741800;
    }
    else
    {
      v18 = 0x1000000;
      v19 = &v20;
      v20 = 0;
      v14 = 0x800000;
      PendingEnclaveModule = LdrpPreprocessDllName((unsigned __int16 *)a3, (unsigned __int16 *)&v18, 0LL, &v14);
      if ( PendingEnclaveModule >= 0 )
      {
        PendingEnclaveModule = LdrpCreatePendingEnclaveModule(
                                 v8,
                                 (unsigned __int16 *)&v18,
                                 v14,
                                 7,
                                 (__int64)v17,
                                 0LL,
                                 0LL,
                                 (__int64)v15);
        if ( PendingEnclaveModule >= 0 )
        {
          for ( i = (_QWORD *)*v11; i != v11; i = (_QWORD *)*i )
          {
            PendingEnclaveModule = LdrpLoadEnclaveModule((unsigned __int16 *)i[22]);
            if ( PendingEnclaveModule < 0 )
              goto LABEL_16;
          }
          PendingEnclaveModule = RtlGetImageEnclaveConfig(*(_QWORD *)(v8[14] + 48), v16);
          if ( PendingEnclaveModule >= 0 )
          {
            PendingEnclaveModule = v15[0];
            v6 = (v16[8] & 2) != 0;
          }
        }
      }
    }
  }
  else
  {
    PendingEnclaveModule = -1073741664;
  }
LABEL_16:
  LdrpCleanupEnclaveLoadState((__int64)v8, PendingEnclaveModule);
  LdrpUnlockAndDereferenceEnclave((__int64)v8);
  LdrpReleaseDllPath((__int64)v17);
  LOBYTE(v13) = v6;
  LdrpLogVsmEnclaveLdrLoadEnclaveModuleTelemetry((unsigned int)PendingEnclaveModule, v13);
  return (unsigned int)PendingEnclaveModule;
}
