/*
 * XREFs of ?ThrottleRawMouseInputToBackgroundListener@@YA_NPEAUtagPROCESS_HID_TABLE@@PEAXPEBUtagRAWMOUSE@@_KK@Z @ 0x140237898
 * Callers:
 *     EditionPostRawMouseInputMessage @ 0x1402386D0 (EditionPostRawMouseInputMessage.c)
 * Callees:
 *     ?FlushThrottledRawMouseInput@@YAXPEAUtagPROCESS_HID_TABLE@@K@Z @ 0x14017F348 (-FlushThrottledRawMouseInput@@YAXPEAUtagPROCESS_HID_TABLE@@K@Z.c)
 *     ?ThrottleRawInput@Mouse@InputTraceLogging@@SAXPEAUHWND__@@_K1@Z @ 0x1401C780C (-ThrottleRawInput@Mouse@InputTraceLogging@@SAXPEAUHWND__@@_K1@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?CanCoalesceRawInputPayload@@YA_NPEAUtagPROCESS_HID_TABLE@@PEAXPEBUtagRAWMOUSE@@@Z @ 0x140275804 (-CanCoalesceRawInputPayload@@YA_NPEAUtagPROCESS_HID_TABLE@@PEAXPEBUtagRAWMOUSE@@@Z.c)
 */

char __fastcall ThrottleRawMouseInputToBackgroundListener(
        struct tagPROCESS_HID_TABLE *a1,
        void *a2,
        const struct tagRAWMOUSE *a3,
        unsigned __int64 a4,
        unsigned int a5)
{
  __int64 RawMouseThrottlingThresholds; // rax
  __int64 v10; // rcx
  int v11; // r9d
  int v12; // eax
  unsigned __int64 v13; // rax
  __int64 v14; // r8
  _QWORD *v15; // rcx
  HWND v16; // rcx
  int v17; // edx
  __int128 v19; // [rsp+50h] [rbp-B0h]
  __int128 v20; // [rsp+80h] [rbp-80h]
  __int64 v21; // [rsp+90h] [rbp-70h]
  _BYTE v22[128]; // [rsp+A0h] [rbp-60h] BYREF

  RawMouseThrottlingThresholds = GetRawMouseThrottlingThresholds(v22);
  v19 = *(_OWORD *)(RawMouseThrottlingThresholds + 48);
  v20 = *(_OWORD *)(RawMouseThrottlingThresholds + 96);
  v21 = *(_QWORD *)(RawMouseThrottlingThresholds + 112);
  if ( !_mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)RawMouseThrottlingThresholds, 8))
    || (*((_DWORD *)a1 + 25) & 0x800) != 0 && !(unsigned int)*(_OWORD *)(RawMouseThrottlingThresholds + 32)
    || *(_WORD *)a3
    || *((_DWORD *)a3 + 1)
    || *((_DWORD *)a1 + 28) == 2 && !CanCoalesceRawInputPayload(a1, a2, a3) )
  {
    FlushThrottledRawMouseInput(a1, a5);
    return 0;
  }
  if ( *((_DWORD *)a1 + 28) == 1 )
  {
    if ( a4 < *((_QWORD *)a1 + 16) )
    {
      if ( a4 > *((_QWORD *)a1 + 15) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 435LL);
    }
    else
    {
      *((_DWORD *)a1 + 28) = 0;
    }
  }
  v12 = *((_DWORD *)a1 + 28);
  if ( !v12 )
  {
    *((_DWORD *)a1 + 28) = 1;
    *((_QWORD *)a1 + 15) = a4
                         + *((_QWORD *)&v20 + 1)
                         + *((_QWORD *)&v20 + 1) * (unsigned __int64)((unsigned int)rand() % DWORD2(v19)) / DWORD2(v19);
    v13 = *((_QWORD *)&v20 + 1) - v21 + a4;
    if ( v13 <= a4 )
      v13 = a4;
    *((_QWORD *)a1 + 16) = v13;
    return 0;
  }
  if ( v12 == 1 )
  {
    v14 = *((_QWORD *)a1 + 15);
    *((_DWORD *)a1 + 28) = 2;
    *((_QWORD *)a1 + 17) = a2;
    *((_QWORD *)a1 + 18) = 0LL;
    *((_DWORD *)a1 + 38) = *((_DWORD *)a3 + 5);
    *((_DWORD *)a1 + 42) = 0;
    v15 = (_QWORD *)*((_QWORD *)a1 + 8);
    v16 = v15 ? (HWND)*v15 : 0LL;
    InputTraceLogging::Mouse::ThrottleRawInput(v16, a4, v14, v11);
    if ( a4 >= *((_QWORD *)a1 + 15) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 469LL);
  }
  v17 = *((_DWORD *)a1 + 28);
  if ( v17 != 2 )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 473LL);
    v17 = *((_DWORD *)a1 + 28);
  }
  *((_DWORD *)a1 + 36) += *((_DWORD *)a3 + 3);
  *((_DWORD *)a1 + 37) += *((_DWORD *)a3 + 4);
  ++*((_DWORD *)a1 + 42);
  *((_QWORD *)a1 + 20) = a4;
  if ( a4 < *((_QWORD *)a1 + 15) )
  {
    if ( v17 == 2 )
    {
      LOBYTE(v10) = 1;
      ArmRawMouseThrottlingTimer(v10, (unsigned int)v20);
    }
  }
  else
  {
    FlushThrottledRawMouseInput(a1, a5);
    *((_QWORD *)a1 + 15) += *((_QWORD *)&v20 + 1);
    *((_QWORD *)a1 + 16) = *((_QWORD *)a1 + 15);
    *((_DWORD *)a1 + 28) = 1;
  }
  return 1;
}
