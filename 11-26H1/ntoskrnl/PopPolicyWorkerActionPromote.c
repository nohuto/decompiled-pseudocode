/*
 * XREFs of PopPolicyWorkerActionPromote @ 0x140B3D020
 * Callers:
 *     <none>
 * Callees:
 *     PopGetPolicyWorker @ 0x14043864C (PopGetPolicyWorker.c)
 *     PopSetPowerActionState @ 0x1404F4374 (PopSetPowerActionState.c)
 *     PopIssueActionRequest @ 0x140A37878 (PopIssueActionRequest.c)
 *     PopAcquirePolicyLock @ 0x140C04BF0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140C04C40 (PopReleasePolicyLock.c)
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
  qword_140F0FD30 = (__int64)KeGetCurrentThread();
  if ( !(_BYTE)byte_140F0FB60 )
    goto LABEL_2;
  v7 = byte_140F0FB60;
  if ( !byte_140F0FB61 )
  {
    if ( (byte_140F0FB60 & 2) == 0 )
      goto LABEL_2;
    PopSetPowerActionState(1);
    v8 = 2;
    goto LABEL_13;
  }
  if ( byte_140F0FB61 != 2 )
    goto LABEL_2;
  if ( (int)PopIssueActionRequest(1, qword_140F0FB64, HIDWORD(qword_140F0FB64), dword_140F0FB6C) >= 0 )
  {
    LOBYTE(byte_140F0FB60) = ~v7 & byte_140F0FB60;
    goto LABEL_2;
  }
  if ( byte_140F0FB61 != 2 )
  {
    v8 = 1;
LABEL_13:
    PopGetPolicyWorker(v8);
  }
LABEL_2:
  qword_140F0FD30 = 0LL;
  PopReleasePolicyLock(v3, v2, v4, v5, v9);
  if ( KeGetCurrentThread()->WaitBlock[3].SpareLong )
    __fastfail(0x20u);
  return 0LL;
}
