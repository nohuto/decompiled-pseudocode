/*
 * XREFs of rimOnPnpRemoveCompleteInUserCrit @ 0x140095794
 * Callers:
 *     RIMDoOnPnpNotification @ 0x140091548 (RIMDoOnPnpNotification.c)
 *     rimDoRimDevChangeAsyncWorkItem @ 0x140096618 (rimDoRimDevChangeAsyncWorkItem.c)
 * Callees:
 *     RIMUnlockExclusive @ 0x14005A690 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x14005A6D0 (RIMLockExclusive.c)
 *     rimEndAllActiveContactsWorker @ 0x14007A7BC (rimEndAllActiveContactsWorker.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x140099638 (WPP_RECORDER_AND_TRACE_SF_q.c)
 */

__int64 __fastcall rimOnPnpRemoveCompleteInUserCrit(struct RawInputManagerObject *a1, __int64 a2)
{
  char *v2; // r14
  unsigned int v5; // edi
  int v6; // edx
  int v7; // r8d
  int v8; // eax
  int v9; // eax
  bool v11; // si
  bool v12; // bp
  __int64 UserSessionState; // rax
  int v14; // r8d
  int v15; // edx

  v2 = (char *)a1 + 760;
  v5 = 1;
  RIMLockExclusive((__int64)a1 + 760);
  if ( (*(_DWORD *)(a2 + 184) & 0x80u) != 0 )
    rimEndAllActiveContactsWorker(a1, *(_QWORD *)(a2 + 456), 0LL);
  v8 = *(_DWORD *)(a2 + 168);
  if ( (v8 & 0x2000) == 0 && (v8 & 0x20) == 0 && *(_DWORD *)(a2 + 48) != 3 )
  {
    v9 = *(_DWORD *)(a2 + 172);
    if ( (v9 & 8) != 0 || *(_QWORD *)(a2 + 176) || (v9 & 0x10) != 0 )
    {
      *(_DWORD *)(a2 + 184) |= 1u;
      v11 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
      v12 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v6, v7);
        LOBYTE(v14) = v12;
        LOBYTE(v15) = v11;
        WPP_RECORDER_AND_TRACE_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v15,
          v14,
          *(_QWORD *)(UserSessionState + 19368),
          4,
          1,
          40,
          (__int64)&WPP_8f2753a93c4e3e90acbb2f7643baf67d_Traceguids,
          a2);
      }
      v5 = 0;
    }
  }
  RIMUnlockExclusive((__int64)v2);
  return v5;
}
