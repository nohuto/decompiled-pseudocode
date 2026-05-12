/*
 * XREFs of RaidAdapterRequestComplete @ 0x14000E730
 * Callers:
 *     StorPortNotification @ 0x14000DE70 (StorPortNotification.c)
 *     RaidpAdapterContinueScatterGather @ 0x140015370 (RaidpAdapterContinueScatterGather.c)
 *     RaidAdapterPostScatterGatherExecute @ 0x140015840 (RaidAdapterPostScatterGatherExecute.c)
 *     StorTickEventQueue @ 0x1400341D0 (StorTickEventQueue.c)
 *     RaidpAdapterContinueDataBufferScatterGather @ 0x14006DF50 (RaidpAdapterContinueDataBufferScatterGather.c)
 *     RaidAdapterProgramCryptoKeyRoutine @ 0x140071020 (RaidAdapterProgramCryptoKeyRoutine.c)
 *     RaidUnitAbortSrbCompletion @ 0x1400A6D90 (RaidUnitAbortSrbCompletion.c)
 * Callees:
 *     RaidLogMiniportCompletion @ 0x14000E920 (RaidLogMiniportCompletion.c)
 *     RaidpIsPerProcessorCompletionsFlushSet @ 0x14000EC70 (RaidpIsPerProcessorCompletionsFlushSet.c)
 *     _tlgCreate1Sz_wchar_t @ 0x14003F144 (_tlgCreate1Sz_wchar_t.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x14003F1BC (_tlgWriteEx_EtwWriteEx.c)
 *     _tlgKeywordOn @ 0x140049D1C (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

char __fastcall RaidAdapterRequestComplete(__int64 a1, __int64 a2, char a3)
{
  PSLIST_ENTRY v5; // rax
  __int64 v6; // rcx
  struct _PROCESSOR_NUMBER v7; // eax
  void *v8; // rdx
  struct _KDPC *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rdx
  int v12; // r8d
  int v13; // r9d
  int v15; // [rsp+20h] [rbp-B8h]
  int v16; // [rsp+28h] [rbp-B0h]
  char v17; // [rsp+40h] [rbp-98h] BYREF
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+44h] [rbp-94h] BYREF
  int v19; // [rsp+48h] [rbp-90h] BYREF
  __int64 v20[8]; // [rsp+50h] [rbp-88h] BYREF
  _BYTE v21[16]; // [rsp+90h] [rbp-48h] BYREF
  char *v22; // [rsp+A0h] [rbp-38h]
  __int64 v23; // [rsp+A8h] [rbp-30h]
  _BYTE v24[16]; // [rsp+B0h] [rbp-28h] BYREF

  if ( (*(_DWORD *)(a1 + 624) & 4) != 0 && !a3 )
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 5152));
  if ( a3 )
    goto LABEL_7;
  if ( (qword_140172448 & 8) != 0 )
    RaidLogMiniportCompletion(a2);
  if ( *(_DWORD *)a1 != 1094997074
    || (*(_BYTE *)(a1 + 604) & 0x10) == 0
    || (LODWORD(v5) = _InterlockedExchange((volatile __int32 *)(a2 + 776), 4), (_DWORD)v5 != 1) )
  {
LABEL_7:
    v5 = *(PSLIST_ENTRY *)(a2 + 160);
    if ( v5 )
    {
      v6 = *((unsigned __int8 *)&v5[8].Next + 13);
      if ( (_BYTE)v6 == 0xAC || (_BYTE)v6 == 0xAB )
      {
        if ( (unsigned int)dword_140172178 > 5 )
        {
          LOBYTE(v5) = tlgKeywordOn(v6, 0x400000000000LL);
          if ( (_BYTE)v5 )
          {
            v10 = *(_QWORD *)(a1 + 4784);
            v20[4] = a1 + 5128;
            v19 = *(_DWORD *)(a1 + 56);
            v20[6] = (__int64)&v19;
            v20[5] = 16LL;
            v20[7] = 4LL;
            tlgCreate1Sz_wchar_t(v21, v10);
            v11 = *(_QWORD *)(a1 + 4792);
            v17 = *(_BYTE *)(a1 + 4340);
            v22 = &v17;
            v23 = 1LL;
            tlgCreate1Sz_wchar_t(v24, v11);
            LOBYTE(v5) = tlgWriteEx_EtwWriteEx((int)v20, (int)&dword_140160035, v12, v13, v15, v16, 7u, (__int64)v20);
          }
        }
        return (char)v5;
      }
      *((_BYTE *)&v5[8].Next + 13) = -85;
    }
    *(_BYTE *)(a2 + 16) = *(_BYTE *)(a2 + 16) & 0xE3 | 0x10;
    v7 = *(struct _PROCESSOR_NUMBER *)(a2 + 20);
    ProcNumber = v7;
    if ( v7.Group == 0xFFFF )
      goto LABEL_25;
    if ( (*(_BYTE *)(a1 + 4435) & 2) != 0 )
    {
      KeGetCurrentProcessorNumberEx(&ProcNumber);
      v7.Group = ProcNumber.Group;
    }
    if ( v7.Group >= (unsigned int)g_RaidPerfRedirectGroupCount
      || (unsigned int)ProcNumber.Number >= *((_DWORD *)g_RaidDPCRedirectionProcessors + v7.Group) )
    {
LABEL_25:
      ExpInterlockedPushEntrySList((PSLIST_HEADER)(a1 + 256), (PSLIST_ENTRY)(a2 + 32));
      v9 = (struct _KDPC *)(*(_QWORD *)(a1 + 8) + 200LL);
      v8 = 0LL;
      goto LABEL_19;
    }
    v5 = ExpInterlockedPushEntrySList(
           (PSLIST_HEADER)g_RaidPerProcessorState + 8 * (unsigned __int64)(ProcNumber.Number + (v7.Group << 6)) + 4,
           (PSLIST_ENTRY)(a2 + 32));
    if ( !v5 )
    {
      LOBYTE(v5) = RaidpIsPerProcessorCompletionsFlushSet(&ProcNumber);
      if ( !(_BYTE)v5 )
      {
        v8 = *(void **)(a1 + 8);
        v9 = (struct _KDPC *)((char *)g_RaidPerProcessorState
                            + 128 * (unsigned __int64)(ProcNumber.Number + (ProcNumber.Group << 6)));
LABEL_19:
        LOBYTE(v5) = KeInsertQueueDpc(v9, v8, 0LL);
      }
    }
  }
  return (char)v5;
}
