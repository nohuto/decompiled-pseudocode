/*
 * XREFs of TppWorkInitialize @ 0x180037E20
 * Callers:
 *     TpAllocWork @ 0x180038DB0 (TpAllocWork.c)
 *     TppInitializeTimer @ 0x180038F40 (TppInitializeTimer.c)
 *     TpAllocTimer @ 0x180039180 (TpAllocTimer.c)
 *     TpAllocWait @ 0x1800399E0 (TpAllocWait.c)
 *     TpSimpleTryPost @ 0x1800D7DF0 (TpSimpleTryPost.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     TppAdjustRunningThreadGoalWithLock @ 0x18002A1C8 (TppAdjustRunningThreadGoalWithLock.c)
 *     TppCleanupGroupMemberDestroy @ 0x180037BD0 (TppCleanupGroupMemberDestroy.c)
 *     TppCleanupGroupMemberInitialize @ 0x180037F90 (TppCleanupGroupMemberInitialize.c)
 */

__int64 __fastcall TppWorkInitialize(__int64 a1, int a2, int a3, int a4, __int64 a5, __int64 a6)
{
  int v7; // esi
  __int64 v8; // r14
  unsigned __int64 Number; // r13
  unsigned __int16 Group; // r8
  int v11; // r12d
  int v12; // eax
  unsigned int i; // edx
  __int64 v14; // rax
  __int64 v15; // rax
  unsigned __int16 v17; // [rsp+30h] [rbp-38h]

  v7 = TppCleanupGroupMemberInitialize(a1, a2, a3, a4, a5);
  if ( v7 >= 0 )
  {
    v8 = *(_QWORD *)(a1 + 144);
    if ( v8 )
    {
      *(_QWORD *)(a1 + 200) = a6;
      v7 = 0;
      *(_DWORD *)(a1 + 208) = 0;
      Number = NtCurrentTeb()->CurrentIdealProcessor.Number;
      Group = NtCurrentTeb()->CurrentIdealProcessor.Group;
      v17 = Group;
      v11 = TppNumberNodes;
      v12 = *(_DWORD *)(v8 + 440);
      if ( !v12 )
        v12 = MEMORY[0x7FFE03C0];
      if ( *(_DWORD *)(v8 + 424) != v12 )
      {
        RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(v8 + 72));
        TppAdjustRunningThreadGoalWithLock(v8);
        RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(v8 + 72));
        Group = v17;
      }
      for ( i = 0; i < TppNumberNodes; ++i )
      {
        v14 = *(_QWORD *)(v8 + 48);
        if ( *(_WORD *)(v14 + 16LL * (Group + TppMaximumGroups * i) + 8) == Group )
        {
          v15 = *(_QWORD *)(v14 + 16LL * (Group + TppMaximumGroups * i));
          if ( _bittest64(&v15, Number) )
          {
            v11 = i;
            break;
          }
        }
      }
      *(_DWORD *)(a1 + 208) = v11;
      if ( a1 != -212 )
        *(_BYTE *)(a1 + 212) = Number;
      *(_DWORD *)(a1 + 232) = 1;
    }
    else
    {
      v7 = -1073741811;
    }
    if ( v7 < 0 )
      TppCleanupGroupMemberDestroy((_QWORD *)a1);
  }
  return (unsigned int)v7;
}
