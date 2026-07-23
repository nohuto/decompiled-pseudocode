/*
 * XREFs of MiLaunchZeroCalibrationProcessor @ 0x1407156E0
 * Callers:
 *     MiWakeOnlyParticipatingProcessorsFromAssignedNode @ 0x14071591C (MiWakeOnlyParticipatingProcessorsFromAssignedNode.c)
 * Callees:
 *     MiAllocateAcceleratorDescriptor @ 0x140533E70 (MiAllocateAcceleratorDescriptor.c)
 *     RtlpInterlockedPopEntrySList @ 0x140735860 (RtlpInterlockedPopEntrySList.c)
 */

PSLIST_ENTRY __fastcall MiLaunchZeroCalibrationProcessor(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rdi
  PSLIST_ENTRY v4; // rbx
  __int64 v6; // rax
  PSLIST_ENTRY result; // rax

  v3 = *(_QWORD *)(a2 + 34872);
  v4 = 0LL;
  *(_DWORD *)(v3 + 260) = a3;
  *(_DWORD *)(v3 + 256) = *(_DWORD *)(a1 + 8);
  v6 = *(_QWORD *)(a1 + 296);
  *(_QWORD *)(v3 + 272) = v6;
  *(_QWORD *)(v3 + 264) = *(_QWORD *)(a1 + 272) + v6 * a3;
  result = *(PSLIST_ENTRY *)a1;
  if ( !**(_DWORD **)a1 )
  {
    result = RtlpInterlockedPopEntrySList((PSLIST_HEADER)(a1 + 320));
    if ( result || (result = (PSLIST_ENTRY)MiAllocateAcceleratorDescriptor(*(_DWORD *)(a1 + 268))) != 0LL )
      v4 = result + 2;
    else
      _InterlockedIncrement(&MiZeroThreadStats);
  }
  *(_QWORD *)(v3 + 280) = v4;
  *(_DWORD *)(v3 + 192) = 1;
  return result;
}
