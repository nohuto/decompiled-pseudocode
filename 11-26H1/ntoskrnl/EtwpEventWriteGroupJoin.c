/*
 * XREFs of EtwpEventWriteGroupJoin @ 0x140AE5C40
 * Callers:
 *     EtwpAddRegEntryToGroup @ 0x1409172C0 (EtwpAddRegEntryToGroup.c)
 * Callees:
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall EtwpEventWriteGroupJoin(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+30h] [rbp-38h] BYREF
  __int64 v6; // [rsp+40h] [rbp-28h]
  __int64 v7; // [rsp+48h] [rbp-20h]

  v5.Ptr = *(_QWORD *)(a3 + 32) + 40LL;
  v3 = *(_QWORD *)(a3 + 40);
  *(_QWORD *)&v5.Size = 16LL;
  v6 = v3 + 40;
  v7 = 16LL;
  return EtwWrite((REGHANDLE)stru_140F03830.SavedApcState.ApcListHead[0].Blink, &ETW_EVENT_GROUP_JOIN, 0LL, 2u, &v5);
}
