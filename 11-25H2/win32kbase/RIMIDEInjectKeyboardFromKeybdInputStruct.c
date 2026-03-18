/*
 * XREFs of RIMIDEInjectKeyboardFromKeybdInputStruct @ 0x140180A6C
 * Callers:
 *     NtUserInjectKeyboardInput @ 0x140171970 (NtUserInjectKeyboardInput.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1400366AC (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     RIMIsRunningOnDesktop @ 0x1400B29E8 (RIMIsRunningOnDesktop.c)
 *     ?InjectInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4InputTracing_RimInjectionSource@@K@Z @ 0x140125534 (-InjectInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4InputTracing_RimInjectionSource@@K@Z.c)
 *     RIMIDEValidateKeybdInputStruct @ 0x14019D7D4 (RIMIDEValidateKeybdInputStruct.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMIDEInjectKeyboardInput @ 0x1401EA290 (RIMIDEInjectKeyboardInput.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     memset @ 0x140243000 (memset.c)
 */

__int64 __fastcall RIMIDEInjectKeyboardFromKeybdInputStruct(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v6; // r14d
  _BYTE *v7; // rdi
  _WORD *v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  bool v11; // zf
  char v12; // al
  unsigned int v13; // r8d
  __int16 v14; // ax
  __int16 v15; // ax
  __int16 v16; // dx
  __int16 v17; // dx
  __int16 v18; // cx
  __int16 v19; // ax
  __int16 v20; // ax
  unsigned __int64 v21; // rcx
  __int64 v22; // rcx
  int v23; // ebx
  char v24; // di
  bool v25; // si
  __int64 v26; // rax
  int v27; // r8d
  int v28; // edx
  char v30; // bl
  bool v31; // di
  __int64 UserSessionState; // rax
  int v33; // r8d
  int v34; // edx
  _BYTE v35[192]; // [rsp+60h] [rbp-108h] BYREF

  memset(v35, 0, sizeof(v35));
  if ( a3 > 0x10 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1562LL);
  InputTraceLogging::RIM::InjectInput(-(__int64)(a1 != 0) & (a1 + 72));
  v6 = 0;
  if ( a3 )
  {
    v7 = &v35[4];
    v8 = (_WORD *)(a2 + 16);
    while ( (unsigned int)RIMIDEValidateKeybdInputStruct(a2 + 24LL * v6) )
    {
      if ( *(_DWORD *)(a1 + 460) || (v11 = !RIMIsRunningOnDesktop(v10, v9), v12 = 0, v11) )
        v12 = 1;
      v13 = *((_DWORD *)v8 - 3);
      if ( (v13 & 0x8000) == 0 || (v11 = v12 == 0, v14 = -3, v11) )
        v14 = -2;
      *((_WORD *)v7 - 2) = v14;
      v15 = 8 * (v13 & 0x10);
      if ( (v13 & 4) != 0 )
      {
        v16 = v15 | 0x20;
      }
      else
      {
        v16 = 8 * (v13 & 0x10);
        if ( *(v8 - 8) && (v13 & 8) == 0 )
          v16 = v15 | 0x40;
      }
      v17 = (2 * (v13 & 1)) | (v13 >> 1) & 1 | v16;
      if ( (v13 & 0x8000) != 0 )
      {
        v18 = 256;
        if ( *v8 == 256 || (v18 = 512, *v8 == 512) )
          v17 |= v18;
      }
      *(_WORD *)v7 = v17;
      if ( (v17 & 0x40) != 0 )
        v19 = *(v8 - 8);
      else
        v19 = *(v8 - 7);
      *((_WORD *)v7 - 1) = v19;
      if ( (v13 & 0x20) != 0 )
        v20 = v8[1];
      else
        v20 = 0;
      *((_WORD *)v7 + 1) = v20;
      LODWORD(v21) = *((_DWORD *)v8 - 2);
      if ( !(_DWORD)v21 )
        v21 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      *((_DWORD *)v7 + 1) = v21;
      ++v6;
      v7 += 12;
      v8 += 12;
      if ( v6 >= a3 )
        goto LABEL_30;
    }
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v30 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
    {
      v30 = 0;
    }
    v31 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v30 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_GLOBAL_Control);
      LOBYTE(v33) = v31;
      LOBYTE(v34) = v30;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v34,
        v33,
        *(_QWORD *)(UserSessionState + 19336),
        2,
        1,
        33,
        (__int64)&WPP_5648251fa1fb356694568c9688803d0d_Traceguids);
    }
    return (unsigned int)-1073741811;
  }
  else
  {
LABEL_30:
    v23 = RIMIDEInjectKeyboardInput(a1, v35, a3);
    if ( v23 < 0 )
    {
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (v22 = *((unsigned int *)WPP_GLOBAL_Control + 11), (v22 & 1) == 0)
        || (v24 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
      {
        v24 = 0;
      }
      v25 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v24 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v26 = W32GetUserSessionState(v22, &WPP_GLOBAL_Control);
        LOBYTE(v27) = v25;
        LOBYTE(v28) = v24;
        WPP_RECORDER_AND_TRACE_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v28,
          v27,
          *(_QWORD *)(v26 + 19336),
          2,
          1,
          34,
          (__int64)&WPP_5648251fa1fb356694568c9688803d0d_Traceguids,
          v23);
      }
    }
  }
  return (unsigned int)v23;
}
