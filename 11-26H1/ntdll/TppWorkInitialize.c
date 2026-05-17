/*
 * XREFs of TppWorkInitialize @ 0x18004D8A0
 * Callers:
 *     TpAllocWork @ 0x18004E830 (TpAllocWork.c)
 *     TppInitializeTimer @ 0x18004E9C0 (TppInitializeTimer.c)
 *     TpAllocTimer @ 0x18004EC00 (TpAllocTimer.c)
 *     TpAllocWait @ 0x18004F460 (TpAllocWait.c)
 *     TpSimpleTryPost @ 0x1800DAE30 (TpSimpleTryPost.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     TppAdjustRunningThreadGoalWithLock @ 0x18003FC58 (TppAdjustRunningThreadGoalWithLock.c)
 *     TppCleanupGroupMemberDestroy @ 0x18004D650 (TppCleanupGroupMemberDestroy.c)
 *     TppCleanupGroupMemberInitialize @ 0x18004DA10 (TppCleanupGroupMemberInitialize.c)
 */

__int64 __fastcall TppWorkInitialize(__int64 a1, int a2, int a3, int a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rdx
  int v8; // esi
  __int64 v9; // r14
  unsigned __int64 Number; // r13
  unsigned __int16 Group; // r8
  int v12; // r12d
  int v13; // eax
  unsigned int i; // edx
  __int64 v15; // rax
  __int64 v16; // rax
  unsigned __int16 v18; // [rsp+30h] [rbp-38h]

  v8 = TppCleanupGroupMemberInitialize(a1, a2, a3, a4, a5);
  if ( v8 >= 0 )
  {
    v9 = *(_QWORD *)(a1 + 144);
    if ( v9 )
    {
      *(_QWORD *)(a1 + 200) = a6;
      v8 = 0;
      *(_DWORD *)(a1 + 208) = 0;
      Number = NtCurrentTeb()->CurrentIdealProcessor.Number;
      Group = NtCurrentTeb()->CurrentIdealProcessor.Group;
      v18 = Group;
      v12 = TppNumberNodes;
      v13 = *(_DWORD *)(v9 + 440);
      if ( !v13 )
        v13 = MEMORY[0x7FFE03C0];
      if ( *(_DWORD *)(v9 + 424) != v13 )
      {
        RtlAcquireSRWLockExclusive((volatile signed __int64 *)(v9 + 72), v7);
        TppAdjustRunningThreadGoalWithLock(v9);
        RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v9 + 72));
        Group = v18;
      }
      for ( i = 0; i < TppNumberNodes; ++i )
      {
        v15 = *(_QWORD *)(v9 + 48);
        if ( *(_WORD *)(v15 + 16LL * (Group + TppMaximumGroups * i) + 8) == Group )
        {
          v16 = *(_QWORD *)(v15 + 16LL * (Group + TppMaximumGroups * i));
          if ( _bittest64(&v16, Number) )
          {
            v12 = i;
            break;
          }
        }
      }
      *(_DWORD *)(a1 + 208) = v12;
      if ( a1 != -212 )
        *(_BYTE *)(a1 + 212) = Number;
      *(_DWORD *)(a1 + 232) = 1;
    }
    else
    {
      v8 = -1073741811;
    }
    if ( v8 < 0 )
      TppCleanupGroupMemberDestroy(a1);
  }
  return (unsigned int)v8;
}
