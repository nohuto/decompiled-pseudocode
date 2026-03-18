/*
 * XREFs of TtmiInitTerminals @ 0x14075FE20
 * Callers:
 *     TtmInit @ 0x14075A160 (TtmInit.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x1402D6540 (ExInitializeResourceLite.c)
 *     KeInitializeTimer @ 0x140454D20 (KeInitializeTimer.c)
 *     KeInitializeDpc @ 0x140454E30 (KeInitializeDpc.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     TtmIsEnabled @ 0x140964038 (TtmIsEnabled.c)
 *     ExSubscribeWnfStateChange @ 0x140A139C0 (ExSubscribeWnfStateChange.c)
 *     ObCreateObjectTypeEx @ 0x140A97FF0 (ObCreateObjectTypeEx.c)
 */

__int64 TtmiInitTerminals()
{
  __int64 result; // rax
  const wchar_t *v1; // rcx
  __int64 v2; // rdx
  int v3; // eax
  UNICODE_STRING SourceString; // [rsp+30h] [rbp-49h] BYREF
  __int16 Src; // [rsp+40h] [rbp-39h] BYREF
  char v6; // [rsp+42h] [rbp-37h]
  int v7; // [rsp+48h] [rbp-31h]
  __int128 v8; // [rsp+4Ch] [rbp-2Dh]
  int v9; // [rsp+5Ch] [rbp-1Dh]
  int v10; // [rsp+64h] [rbp-15h]
  int v11; // [rsp+6Ch] [rbp-Dh]
  __int64 (__fastcall *v12)(); // [rsp+78h] [rbp-1h]
  __int64 (__fastcall *v13)(PEPROCESS); // [rsp+80h] [rbp+7h]
  __int64 (__fastcall *v14)(); // [rsp+88h] [rbp+Fh]

  result = TtmIsEnabled();
  if ( (_BYTE)result )
  {
    if ( !TtmpProximityEscapeMsec )
      TtmpProximityEscapeMsec = 3000;
    TtmpTerminalInactivityTimeout = -300000000LL;
    ExInitializeResourceLite(&TtmpTerminalInactivityLock);
    KeInitializeTimer(&TtmpTerminalInactivityTimer);
    KeInitializeDpc(&TtmpTerminalInactivityTimerDpc, (PKDEFERRED_ROUTINE)TtmpTerminalInactivityTimerDpcRoutine, 0LL);
    TtmpTerminalInactivityWorkItem.Parameter = 0LL;
    TtmpTerminalInactivityWorkItem.WorkerRoutine = (void (__fastcall *)(void *))TtmpTerminalInactivityWorkerRoutine;
    TtmpTerminalInactivityWorkItem.List.Flink = 0LL;
    memset_0(&Src, 0, 0x78uLL);
    Src = 120;
    v7 = 400;
    v6 = v6 & 0xF1 | 6;
    v9 = 2031619;
    v12 = TtmpOpenTerminalHandle;
    v1 = L"Terminal";
    v10 = 512;
    v13 = TtmpCloseTerminalHandle;
    v11 = 288;
    v14 = TtmpDeleteTerminal;
    v8 = TtmpTerminalMapping;
    v2 = 0x7FFFLL;
    SourceString = 0LL;
    while ( *v1 )
    {
      ++v1;
      if ( !--v2 )
        goto LABEL_10;
    }
    SourceString.Buffer = L"Terminal";
    SourceString.Length = 2 * (0x7FFF - v2);
    SourceString.MaximumLength = SourceString.Length + 2;
LABEL_10:
    v3 = ObCreateObjectTypeEx(&SourceString, &Src, (__int64)&TtmpTerminalObjectType);
    if ( v3 < 0 )
      KeBugCheckEx(0x19Bu, 1uLL, v3, 0LL, 0LL);
    return ExSubscribeWnfStateChange(
             (unsigned int)&SourceString,
             (unsigned int)&WNF_SHEL_INACTIVITY_TIMEOUT_IN_MS,
             1,
             0,
             (__int64)TtmpWnfInactivityTimeoutCallback,
             0LL);
  }
  else
  {
    TtmpTerminalObjectType = 0LL;
  }
  return result;
}
