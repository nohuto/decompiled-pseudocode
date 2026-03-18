/*
 * XREFs of ObpInitStackTrace @ 0x140CCDE7C
 * Callers:
 *     ObInitSystem @ 0x140D0936C (ObInitSystem.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14045D040 (RtlInitUnicodeStringEx.c)
 *     ObpTraceAllocateMemory @ 0x14052F738 (ObpTraceAllocateMemory.c)
 *     ObpTraceFreeMemory @ 0x140530A70 (ObpTraceFreeMemory.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     ObpInitStackAndObjectTables @ 0x1407C4BE8 (ObpInitStackAndObjectTables.c)
 *     ObpSetPoolTags @ 0x1407C50D8 (ObpSetPoolTags.c)
 */

int ObpInitStackTrace()
{
  __int64 v0; // rdi
  int v1; // ebx
  _KAFFINITY_EX *Memory; // rax
  __int64 v3; // rax
  __int64 v4; // rbx

  LODWORD(dword_140F13280[0]) = 275;
  *(_QWORD *)&stru_140F132C8.Header.Lock = 0LL;
  v0 = -1LL;
  v1 = 0;
  qword_140F132A0 = 0LL;
  qword_140F13298 = (__int64)ObpPushStackInfoDpc;
  Memory = (_KAFFINITY_EX *)ObpPushStackInfoQueue;
  qword_140F13250 = (__int64)ObpPushStackInfoQueue;
  qword_140F132B8 = 0LL;
  qword_140F13290 = 0LL;
  qword_140F13258 = 0LL;
  qword_140F13240.List.Flink = 0LL;
  qword_140F132C0 = 0LL;
  stru_140F132C8.Timer.DueTime.QuadPart = 0LL;
  *(_DWORD *)&stru_140F132C8.AffinityPrimaryGroup = 0;
  LODWORD(stru_140F12D20.Padding[4]) = 0;
  dword_140F13260[0] = 0;
  if ( stru_140F132C8.Timer.Processor )
  {
    v3 = -1LL;
    do
      ++v3;
    while ( *(&stru_140F132C8.Timer.Processor + v3) );
    v4 = (unsigned __int16)(2 * v3);
    Memory = (_KAFFINITY_EX *)ObpTraceAllocateMemory(v4 + 2);
    stru_140F132C8.Affinity = Memory;
    if ( !Memory )
      return (int)Memory;
    LOWORD(stru_140F132C8.AffinityVersion) = v4;
    WORD1(stru_140F132C8.AffinityVersion) = v4 + 2;
    LODWORD(Memory) = (unsigned int)memmove(Memory, &stru_140F132C8.Timer.Processor, (unsigned __int16)(v4 + 2));
    v1 = 32;
  }
  if ( LOWORD(stru_140F132C8.SListFaultAddress) )
  {
    do
      ++v0;
    while ( *((_WORD *)&stru_140F132C8.SListFaultAddress + v0) );
    LODWORD(Memory) = ObpSetPoolTags((__int64)&stru_140F132C8.SListFaultAddress, v0);
    v1 |= 0x10u;
  }
  if ( v1 )
  {
    if ( LODWORD(stru_140F132C8.Header.WaitListHead.Flink) )
      v1 |= 0x40u;
    LODWORD(Memory) = ObpInitStackAndObjectTables();
    if ( (int)Memory < 0 )
    {
      ObpSetPoolTags(0LL, 0);
      LODWORD(Memory) = ObpTraceFlags;
      if ( (ObpTraceFlags & 0x20) != 0 )
      {
        ObpTraceFreeMemory(stru_140F132C8.Affinity);
        LODWORD(Memory) = RtlInitUnicodeStringEx((PUNICODE_STRING)&stru_140F132C8.AffinityVersion, 0LL);
      }
    }
    else
    {
      *(_DWORD *)&stru_140F132C8.SavedApcStateFill[16] = v1 | 1;
      ObpTraceFlags = v1 | 1;
      if ( (v1 & 0x20) != 0 )
        stru_140F132C8.NpxState = (unsigned __int64)&stru_140F132C8.AffinityVersion;
      ExpHandleTableFastRefsDisabled = 1;
    }
  }
  return (int)Memory;
}
