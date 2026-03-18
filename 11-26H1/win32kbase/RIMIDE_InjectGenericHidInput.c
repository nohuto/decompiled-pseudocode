/*
 * XREFs of RIMIDE_InjectGenericHidInput @ 0x14005FCEC
 * Callers:
 *     NtUserInjectGenericHidInput @ 0x14005F280 (NtUserInjectGenericHidInput.c)
 *     ?ProcessInput@VirtualTouchpadProcessor@@QEAAXPEBUCPointerInputFrame@@@Z @ 0x1401BD5D8 (-ProcessInput@VirtualTouchpadProcessor@@QEAAXPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     RIMUnlockExclusive @ 0x14005A690 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x14005A6D0 (RIMLockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140099D08 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x14009E9D0 (rimProcessDeviceBufferAndStartRead.c)
 *     ?InjectInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4InputTracing_RimInjectionSource@@K@Z @ 0x1401557FC (-InjectInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4InputTracing_RimInjectionSource@@K@Z.c)
 *     memmove @ 0x14024C2C0 (memmove.c)
 */

__int64 __fastcall RIMIDE_InjectGenericHidInput(__int64 a1, int a2, volatile void *a3, unsigned int a4)
{
  SIZE_T v4; // r13
  struct RIMDEV *v7; // r12
  __int64 v8; // r14
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 CurrentProcessWow64Process; // rax

  v4 = a4;
  v7 = (struct RIMDEV *)((a1 + 72) & -(__int64)(a1 != 0));
  InputTraceLogging::RIM::InjectInput(v7, 1LL, 1LL);
  v8 = *(_QWORD *)(a1 + 392);
  v9 = *(_QWORD *)(a1 + 440);
  if ( !*(_DWORD *)(v9 + 16) )
    *(_DWORD *)(v9 + 16) = 1;
  RIMLockExclusive(v8 + 104);
  if ( !*(_BYTE *)(v8 + 81) )
  {
    if ( a2 )
    {
      CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v11, v10);
      ProbeForRead(a3, v4, CurrentProcessWow64Process != 0 ? 1 : 4);
    }
    memmove(*(void **)(*(_QWORD *)(a1 + 512) + 24LL), (const void *)a3, v4);
    RIMLockExclusive(v8 + 760);
    *(_DWORD *)(a1 + 312) = 0;
    *(_QWORD *)(a1 + 320) = *(unsigned __int16 *)(*(_QWORD *)(a1 + 512) + 44LL);
    rimProcessDeviceBufferAndStartRead((struct RawInputManagerObject *)v8, v7);
    RIMUnlockExclusive(v8 + 760);
  }
  RIMUnlockExclusive(v8 + 104);
  return 0LL;
}
