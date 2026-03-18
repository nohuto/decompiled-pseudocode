/*
 * XREFs of Crashdump_EventRing_UpdateDequeuePointer @ 0x1400532A4
 * Callers:
 *     Crashdump_EventRing_AsyncPoll @ 0x140052A1C (Crashdump_EventRing_AsyncPoll.c)
 *     Crashdump_EventRing_Poll @ 0x140052DA4 (Crashdump_EventRing_Poll.c)
 *     Crashdump_EventRing_PrepareForDump @ 0x140053088 (Crashdump_EventRing_PrepareForDump.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall Crashdump_EventRing_UpdateDequeuePointer(__int64 a1)
{
  __int64 v1; // rdx
  unsigned __int64 result; // rax
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  v1 = *(_QWORD *)(a1 + 16);
  result = (*(_QWORD *)(a1 + 48) + 16LL * *(unsigned int *)(a1 + 92)) & 0xFFFFFFFFFFFFFFF0uLL | 8;
  if ( (*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) & 1) != 0 )
  {
    *(_DWORD *)(v1 + 24) = result;
    _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
    result >>= 32;
    *(_DWORD *)(v1 + 28) = result;
  }
  else
  {
    *(_QWORD *)(v1 + 24) = result;
  }
  _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
  return result;
}
