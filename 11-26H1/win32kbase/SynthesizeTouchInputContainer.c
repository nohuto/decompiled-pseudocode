/*
 * XREFs of SynthesizeTouchInputContainer @ 0x1402204A8
 * Callers:
 *     ?OnTouchSynthesizeNotification@CHidInput@@EEAAJXZ @ 0x140219840 (-OnTouchSynthesizeNotification@CHidInput@@EEAAJXZ.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x14006E810 (HMValidateHandleNoSecure.c)
 *     ?InjectInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4InputTracing_RimInjectionSource@@K@Z @ 0x1401557FC (-InjectInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4InputTracing_RimInjectionSource@@K@Z.c)
 *     ?ProcessInjectedInput@CTouchProcessor@@QEAAXPEAX0_N1@Z @ 0x1402161B4 (-ProcessInjectedInput@CTouchProcessor@@QEAAXPEAX0_N1@Z.c)
 *     ?CreateInjectionDevice@@YAHXZ @ 0x14021FF8C (-CreateInjectionDevice@@YAHXZ.c)
 */

char __fastcall SynthesizeTouchInputContainer(struct RIMCOMPLETEFRAME *a1, int a2, int a3)
{
  int v4; // edx
  int v5; // ecx
  int v6; // r8d
  __int64 UserSessionState; // rax
  __int64 v8; // rdx
  int v9; // edx
  int v10; // ecx
  int v11; // r8d
  int InjectionDevice; // eax
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  int v16; // edx
  int v17; // ecx
  int v18; // r8d
  __int64 v19; // rax
  int v20; // r8d
  unsigned int v21; // edx
  _QWORD *v22; // rcx
  PERESOURCE *v23; // rbx
  int v24; // edx
  int v25; // ecx
  int v26; // r8d
  __int64 v27; // rax

  if ( *(_QWORD *)(W32GetUserSessionState((_DWORD)a1, a2, a3) + 19320) )
  {
    UserSessionState = W32GetUserSessionState(v5, v4, v6);
    LOBYTE(v8) = 19;
    if ( !HMValidateHandleNoSecure(*(_QWORD *)(UserSessionState + 19360), v8) )
      *(_QWORD *)(W32GetUserSessionState(v5, v4, v6) + 19320) = 0LL;
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v5, v4, v6) + 19320)
    || (InjectionDevice = CreateInjectionDevice(v10, v9, v11)) != 0 )
  {
    v13 = W32GetUserSessionState(v10, v9, v11);
    LOBYTE(v14) = 19;
    v15 = HMValidateHandleNoSecure(*(_QWORD *)(v13 + 19360), v14);
    InputTraceLogging::RIM::InjectInput(v15, 0, 1);
    v19 = W32GetUserSessionState(v17, v16, v18);
    v21 = 0;
    *((_QWORD *)a1 + 4) = *(_QWORD *)(v19 + 19320);
    v22 = (_QWORD *)*((_QWORD *)a1 + 29);
    *((_DWORD *)a1 + 48) = 1;
    if ( *((_DWORD *)a1 + 6) )
    {
      v22 += 4;
      do
      {
        ++v21;
        *v22 = *((_QWORD *)a1 + 4);
        v22 += 24;
      }
      while ( v21 < *((_DWORD *)a1 + 6) );
    }
    v23 = *(PERESOURCE **)(W32GetUserSessionState((_DWORD)v22, v21, v20) + 3256);
    v27 = W32GetUserSessionState(v25, v24, v26);
    CTouchProcessor::ProcessInjectedInput(v23, *(void **)(v27 + 19320), a1, 0, 0);
    LOBYTE(InjectionDevice) = 1;
  }
  return InjectionDevice;
}
