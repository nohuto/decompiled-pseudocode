/*
 * XREFs of RIMIDE_InjectGenericHidInput @ 0x1401252D8
 * Callers:
 *     NtUserInjectGenericHidInput @ 0x14011EB50 (NtUserInjectGenericHidInput.c)
 *     ?ProcessInput@VirtualTouchpadProcessor@@QEAAXPEBUCPointerInputFrame@@@Z @ 0x14021D858 (-ProcessInput@VirtualTouchpadProcessor@@QEAAXPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     RIMLockExclusive @ 0x140033CB0 (RIMLockExclusive.c)
 *     RIMUnlockExclusive @ 0x140033F70 (RIMUnlockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1400366AC (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?InjectInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4InputTracing_RimInjectionSource@@K@Z @ 0x140125534 (-InjectInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4InputTracing_RimInjectionSource@@K@Z.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x140125744 (rimProcessDeviceBufferAndStartRead.c)
 *     memmove @ 0x140243540 (memmove.c)
 */

__int64 __fastcall RIMIDE_InjectGenericHidInput(__int64 a1, int a2, const void *a3, unsigned int a4)
{
  size_t v4; // rbx
  __int64 v7; // rsi
  __int64 v8; // rax

  v4 = a4;
  InputTraceLogging::RIM::InjectInput((a1 + 72) & -(__int64)(a1 != 0), 1LL, 1LL);
  v7 = *(_QWORD *)(a1 + 392);
  v8 = *(_QWORD *)(a1 + 440);
  if ( !*(_DWORD *)(v8 + 16) )
    *(_DWORD *)(v8 + 16) = 1;
  RIMLockExclusive(v7 + 104);
  if ( !*(_BYTE *)(v7 + 81) )
  {
    if ( a2 && (_DWORD)v4 && ((unsigned __int8)a3 & (PsGetCurrentProcessWow64Process() == 0 ? 3 : 0)) != 0 )
      ExRaiseDatatypeMisalignment();
    memmove(*(void **)(*(_QWORD *)(a1 + 512) + 24LL), a3, v4);
    RIMLockExclusive(v7 + 760);
    *(_DWORD *)(a1 + 312) = 0;
    *(_QWORD *)(a1 + 320) = *(unsigned __int16 *)(*(_QWORD *)(a1 + 512) + 44LL);
    rimProcessDeviceBufferAndStartRead(
      (struct RawInputManagerObject *)v7,
      (struct RIMDEV *)((a1 + 72) & -(__int64)(a1 != 0)));
    RIMUnlockExclusive(v7 + 760);
  }
  RIMUnlockExclusive(v7 + 104);
  return 0LL;
}
