/*
 * XREFs of PopPolicyWorkerActionPromote @ 0x140B3F1F0
 * Callers:
 *     <none>
 * Callees:
 *     PopGetPolicyWorker @ 0x14042756C (PopGetPolicyWorker.c)
 *     PopSetPowerActionState @ 0x1404ED954 (PopSetPowerActionState.c)
 *     PopIssueActionRequest @ 0x1409F3438 (PopIssueActionRequest.c)
 *     PopAcquirePolicyLock @ 0x140C0AE00 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140C0AE50 (PopReleasePolicyLock.c)
 */

__int64 __fastcall PopPolicyWorkerActionPromote(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  char v7; // bl
  int v8; // ecx
  __int64 v9; // [rsp+20h] [rbp-8h]

  PopAcquirePolicyLock(a1, a2);
  qword_140F105F0 = (__int64)KeGetCurrentThread();
  if ( !(_BYTE)PopAction )
    goto LABEL_2;
  v7 = PopAction;
  if ( !byte_140F10421 )
  {
    if ( (PopAction & 2) == 0 )
      goto LABEL_2;
    PopSetPowerActionState(1);
    v8 = 2;
    goto LABEL_13;
  }
  if ( byte_140F10421 != 2 )
    goto LABEL_2;
  if ( (int)PopIssueActionRequest(1, (POWER_ACTION)qword_140F10424, SHIDWORD(qword_140F10424), dword_140F1042C) >= 0 )
  {
    LOBYTE(PopAction) = ~v7 & PopAction;
    goto LABEL_2;
  }
  if ( byte_140F10421 != 2 )
  {
    v8 = 1;
LABEL_13:
    PopGetPolicyWorker(v8);
  }
LABEL_2:
  qword_140F105F0 = 0LL;
  PopReleasePolicyLock(v3, v2, v4, v5, v9);
  if ( KeGetCurrentThread()->WaitBlock[3].SpareLong )
    __fastfail(0x20u);
  return 0LL;
}
