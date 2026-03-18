/*
 * XREFs of SynthesizeTouchInputContainer @ 0x14021CAC4
 * Callers:
 *     ?OnTouchSynthesizeNotification@CHidInput@@EEAAJXZ @ 0x140212B70 (-OnTouchSynthesizeNotification@CHidInput@@EEAAJXZ.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x140067260 (HMValidateHandleNoSecure.c)
 *     ?InjectInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4InputTracing_RimInjectionSource@@K@Z @ 0x140125534 (-InjectInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4InputTracing_RimInjectionSource@@K@Z.c)
 *     ?ProcessInjectedInput@CTouchProcessor@@QEAAXPEAX0_NK1@Z @ 0x140207858 (-ProcessInjectedInput@CTouchProcessor@@QEAAXPEAX0_NK1@Z.c)
 *     ?CreateInjectionDevice@@YAHXZ @ 0x14021C5BC (-CreateInjectionDevice@@YAHXZ.c)
 */

char __fastcall SynthesizeTouchInputContainer(struct RIMCOMPLETEFRAME *a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 UserSessionState; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  int InjectionDevice; // eax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx
  _QWORD *v15; // rcx
  PERESOURCE *v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax

  if ( *(_QWORD *)(W32GetUserSessionState(a1, a2) + 19288) )
  {
    UserSessionState = W32GetUserSessionState(v4, v3);
    if ( !HMValidateHandleNoSecure(*(_QWORD *)(UserSessionState + 19328), 19) )
      *(_QWORD *)(W32GetUserSessionState(v4, v3) + 19288) = 0LL;
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v4, v3) + 19288) || (InjectionDevice = CreateInjectionDevice(v7, v6)) != 0 )
  {
    v9 = W32GetUserSessionState(v7, v6);
    v10 = HMValidateHandleNoSecure(*(_QWORD *)(v9 + 19328), 19);
    InputTraceLogging::RIM::InjectInput(v10);
    v13 = W32GetUserSessionState(v12, v11);
    v14 = 0LL;
    *((_QWORD *)a1 + 4) = *(_QWORD *)(v13 + 19288);
    v15 = (_QWORD *)*((_QWORD *)a1 + 29);
    *((_DWORD *)a1 + 48) = 1;
    if ( *((_DWORD *)a1 + 6) )
    {
      v15 += 4;
      do
      {
        v14 = (unsigned int)(v14 + 1);
        *v15 = *((_QWORD *)a1 + 4);
        v15 += 24;
      }
      while ( (unsigned int)v14 < *((_DWORD *)a1 + 6) );
    }
    v16 = *(PERESOURCE **)(W32GetUserSessionState(v15, v14) + 3256);
    v19 = W32GetUserSessionState(v18, v17);
    CTouchProcessor::ProcessInjectedInput(v16, *(_QWORD *)(v19 + 19288), a1, 0, 0, 0);
    LOBYTE(InjectionDevice) = 1;
  }
  return InjectionDevice;
}
