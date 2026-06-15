/*
 * XREFs of sub_1400AD960 @ 0x1400AD960
 * Callers:
 *     sub_140033800 @ 0x140033800 (sub_140033800.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1400AD960(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r8
  __int64 v4; // rdx
  signed int v6; // ecx
  DWORD ProcessId; // edi
  DWORD CurrentProcessId; // ebx
  _QWORD v10[4]; // [rsp+40h] [rbp-30h] BYREF
  __int128 v11; // [rsp+60h] [rbp-10h]
  HANDLE Process; // [rsp+90h] [rbp+20h] BYREF

  v2 = *a2;
  v4 = *(_QWORD *)(a1 + 8);
  v10[0] = 48LL;
  Process = 0LL;
  memset(&v10[1], 0, 24);
  v11 = 0LL;
  v6 = NtAlpcOpenSenderProcess(&Process, v4, v2, 0LL, 0x80000000, v10);
  if ( v6 >= 0 )
  {
    ProcessId = GetProcessId(Process);
    CurrentProcessId = GetCurrentProcessId();
    NtClose(Process);
    v6 = ProcessId != CurrentProcessId ? 0xC0000001 : 0;
    if ( CurrentProcessId == ProcessId )
    {
      v6 = NtAlpcSendWaitReceivePort(*(_QWORD *)(a1 + 8), 0x10000LL, *a2, 0LL, 0LL, 0LL, 0LL, 0LL);
      if ( v6 >= 0 )
        _InterlockedExchange((volatile __int32 *)(a1 + 48), 1);
    }
  }
  return (unsigned int)v6;
}
