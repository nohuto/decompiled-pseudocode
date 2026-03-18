/*
 * XREFs of RIMIDEInjectKeyboardFromKeybdInputStruct @ 0x1401546A0
 * Callers:
 *     NtUserInjectKeyboardInput @ 0x1401E6330 (NtUserInjectKeyboardInput.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140099D08 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMIsRunningOnDesktop @ 0x1400F0800 (RIMIsRunningOnDesktop.c)
 *     ?InjectInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4InputTracing_RimInjectionSource@@K@Z @ 0x1401557FC (-InjectInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4InputTracing_RimInjectionSource@@K@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMIDEValidateKeybdInputStruct @ 0x1401BBC44 (RIMIDEValidateKeybdInputStruct.c)
 *     RIMIDEInjectKeyboardInput @ 0x14020943C (RIMIDEInjectKeyboardInput.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

__int64 __fastcall RIMIDEInjectKeyboardFromKeybdInputStruct(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int i; // ebp
  __int64 v7; // rbx
  int v8; // edx
  int v9; // ecx
  int v10; // r8d
  char v11; // al
  unsigned int v12; // r8d
  __int16 v13; // ax
  __int16 v14; // ax
  __int16 v15; // dx
  __int16 v16; // dx
  __int16 v17; // ax
  _WORD *v18; // rcx
  __int16 v19; // ax
  unsigned __int64 v20; // rcx
  bool v21; // zf
  char v22; // bl
  bool v23; // di
  __int64 UserSessionState; // rax
  int v25; // r8d
  int v26; // edx
  int v27; // ebx
  int v28; // ecx
  int v29; // r8d
  char v30; // di
  bool v31; // si
  __int64 v32; // rax
  int v33; // r8d
  int v34; // edx
  _DWORD v36[48]; // [rsp+60h] [rbp-108h] BYREF

  memset(v36, 0, sizeof(v36));
  if ( a3 > 0x10 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1551LL);
  InputTraceLogging::RIM::InjectInput(-(__int64)(a1 != 0) & (a1 + 72), 2LL, a3);
  for ( i = 0; i < a3; ++i )
  {
    v7 = a2 + 24LL * i;
    if ( !(unsigned int)RIMIDEValidateKeybdInputStruct(v7) )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v22 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
      {
        v22 = 0;
      }
      v23 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v22 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, (unsigned int)&WPP_GLOBAL_Control, v10);
        LOBYTE(v25) = v23;
        LOBYTE(v26) = v22;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v26,
          v25,
          *(_QWORD *)(UserSessionState + 19368),
          2,
          1,
          33,
          (__int64)&WPP_5940d7f453ab3f2490058f6b99ed3f44_Traceguids);
      }
      return (unsigned int)-1073741811;
    }
    if ( *(_DWORD *)(a1 + 460) || (v21 = !RIMIsRunningOnDesktop(v9, v8, v10), v11 = 0, v21) )
      v11 = 1;
    v12 = *(_DWORD *)(v7 + 4);
    if ( (v12 & 0x8000) == 0 || (v21 = v11 == 0, v13 = -3, v21) )
      v13 = -2;
    LOWORD(v36[3 * i]) = v13;
    v14 = 8 * (v12 & 0x10);
    if ( (v12 & 4) != 0 )
    {
      v15 = v14 | 0x20;
    }
    else
    {
      v15 = 8 * (v12 & 0x10);
      if ( *(_WORD *)v7 && (v12 & 8) == 0 )
        v15 = v14 | 0x40;
    }
    v16 = (2 * (v12 & 1)) | (v12 >> 1) & 1 | v15;
    if ( (v12 & 0x8000) != 0 )
    {
      v17 = *(_WORD *)(v7 + 16);
      if ( v17 == 256 )
      {
        v16 |= 0x100u;
      }
      else if ( v17 == 512 )
      {
        v16 |= 0x200u;
      }
    }
    LOWORD(v36[3 * i + 1]) = v16;
    v18 = (_WORD *)(a2 + 24LL * i);
    if ( (v16 & 0x40) == 0 )
      v18 = (_WORD *)(v7 + 2);
    HIWORD(v36[3 * i]) = *v18;
    if ( (v12 & 0x20) != 0 )
      v19 = *(_WORD *)(v7 + 18);
    else
      v19 = 0;
    HIWORD(v36[3 * i + 1]) = v19;
    LODWORD(v20) = *(_DWORD *)(v7 + 8);
    if ( !(_DWORD)v20 )
      v20 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    v36[3 * i + 2] = v20;
  }
  v27 = RIMIDEInjectKeyboardInput(a1, v36, a3);
  if ( v27 < 0 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (v28 = *((_DWORD *)WPP_GLOBAL_Control + 11), (v28 & 1) == 0)
      || (v30 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
    {
      v30 = 0;
    }
    v31 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v30 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v32 = W32GetUserSessionState(v28, (unsigned int)&WPP_GLOBAL_Control, v29);
      LOBYTE(v33) = v31;
      LOBYTE(v34) = v30;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v34,
        v33,
        *(_QWORD *)(v32 + 19368),
        2,
        1,
        34,
        (__int64)&WPP_5940d7f453ab3f2490058f6b99ed3f44_Traceguids,
        v27);
    }
  }
  return (unsigned int)v27;
}
