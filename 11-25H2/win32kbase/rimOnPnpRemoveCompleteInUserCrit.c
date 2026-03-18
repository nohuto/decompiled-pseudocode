/*
 * XREFs of rimOnPnpRemoveCompleteInUserCrit @ 0x14002B6EC
 * Callers:
 *     rimDoRimDevChangeAsyncWorkItem @ 0x14002B53C (rimDoRimDevChangeAsyncWorkItem.c)
 *     RIMDoOnPnpNotification @ 0x140113F30 (RIMDoOnPnpNotification.c)
 * Callees:
 *     rimEndAllActiveContactsWorker @ 0x14002F41C (rimEndAllActiveContactsWorker.c)
 *     RIMLockExclusive @ 0x140033CB0 (RIMLockExclusive.c)
 *     RIMUnlockExclusive @ 0x140033F70 (RIMUnlockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x140036548 (WPP_RECORDER_AND_TRACE_SF_q.c)
 */

__int64 __fastcall rimOnPnpRemoveCompleteInUserCrit(struct RawInputManagerObject *a1, __int64 a2)
{
  char *v2; // r14
  unsigned int v5; // edi
  __int64 v6; // rdx
  __int64 v7; // r8
  int v8; // eax
  int v9; // eax
  bool v11; // si
  bool v12; // bp
  __int64 UserSessionState; // rax
  int v14; // r8d
  int v15; // edx

  v2 = (char *)a1 + 760;
  v5 = 1;
  RIMLockExclusive((char *)a1 + 760);
  if ( (*(_DWORD *)(a2 + 184) & 0x80u) != 0 )
    rimEndAllActiveContactsWorker(a1);
  v8 = *(_DWORD *)(a2 + 168);
  if ( (v8 & 0x2000) == 0 && (v8 & 0x20) == 0 && *(_DWORD *)(a2 + 48) != 3 )
  {
    v9 = *(_DWORD *)(a2 + 172);
    if ( (v9 & 8) != 0 || *(_QWORD *)(a2 + 176) || (v9 & 0x10) != 0 )
    {
      *(_DWORD *)(a2 + 184) |= 1u;
      v11 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
      v12 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v6);
        LOBYTE(v14) = v12;
        LOBYTE(v15) = v11;
        WPP_RECORDER_AND_TRACE_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v15,
          v14,
          *(_QWORD *)(UserSessionState + 19336),
          4,
          1,
          40,
          (__int64)&WPP_68930b79bb6d3bf986a646580dbfeb5c_Traceguids,
          a2);
      }
      v5 = 0;
    }
  }
  RIMUnlockExclusive(v2, v6, v7);
  return v5;
}
