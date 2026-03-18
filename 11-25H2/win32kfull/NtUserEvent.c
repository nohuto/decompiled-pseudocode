/*
 * XREFs of NtUserEvent @ 0x140296770
 * Callers:
 *     <none>
 * Callees:
 *     xxxCsEvent @ 0x1402DD438 (xxxCsEvent.c)
 */

__int64 __fastcall NtUserEvent(ULONG64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // rax
  ULONG64 v4; // rdx
  unsigned int v5; // ebx
  __int64 CurrentProcessWow64Process; // rax
  unsigned int v7; // ebx
  __int64 v8; // rcx
  unsigned __int16 v10; // [rsp+20h] [rbp-18h]

  EnterCrit(0LL, 0LL);
  v3 = -PsGetCurrentProcessWow64Process(v2, v1);
  v4 = a1;
  if ( ((v3 != 0 ? 0 : 3) & (unsigned int)a1) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( a1 >= MmUserProbeAddress )
    v4 = MmUserProbeAddress;
  v5 = *(unsigned __int16 *)(a1 + 6);
  v10 = *(_WORD *)(a1 + 6);
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(MmUserProbeAddress, v4);
  ProbeForRead((volatile void *)(a1 + 8), v5, CurrentProcessWow64Process != 0 ? 1 : 4);
  v7 = xxxCsEvent(a1, v10);
  UserSessionSwitchLeaveCrit(v8);
  return v7;
}
