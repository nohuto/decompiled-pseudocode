/*
 * XREFs of VfBeforeCallDriver @ 0x140C2C2D8
 * Callers:
 *     IovCallDriver @ 0x1404F36FC (IovCallDriver.c)
 *     IovCallDriverWithStackBuffer @ 0x140C2A83C (IovCallDriverWithStackBuffer.c)
 * Callees:
 *     ExAcquireRundownProtection_0 @ 0x1402F0590 (ExAcquireRundownProtection_0.c)
 *     RtlpInterlockedPopEntrySList @ 0x140730C90 (RtlpInterlockedPopEntrySList.c)
 *     IovExpandIrpStackTracker @ 0x140C2A97C (IovExpandIrpStackTracker.c)
 *     IovExpandIrpTracker @ 0x140C2A9E4 (IovExpandIrpTracker.c)
 *     IovStatelessIoCallDriverRules @ 0x140C2AADC (IovStatelessIoCallDriverRules.c)
 *     IovpCallDriver1 @ 0x140C2B2B8 (IovpCallDriver1.c)
 *     VfGetPristineDispatchRoutine @ 0x140C2BE94 (VfGetPristineDispatchRoutine.c)
 */

void __fastcall VfBeforeCallDriver(ULONG_PTR a1, ULONG_PTR a2, __int64 a3)
{
  BOOLEAN v6; // al
  __int64 v7; // rax
  __int64 v8; // rax
  PSLIST_ENTRY v9; // rdx
  PSLIST_ENTRY v10; // rax
  unsigned __int8 CurrentIrql; // al
  __int64 v12; // rax

  if ( a3 )
  {
    v6 = ExAcquireRundownProtection_0(&IovRundown);
    *(_BYTE *)(a3 + 192) = v6;
    if ( v6 )
    {
      v7 = *(_QWORD *)(a2 + 184);
      if ( *(_QWORD *)(v7 - 16) )
        *(_BYTE *)(v7 - 69) |= 4u;
      IovStatelessIoCallDriverRules(a2, a1, *(_QWORD *)(a3 + 176));
      v8 = *(_QWORD *)(a2 + 200);
      if ( v8 )
      {
        if ( !*(_QWORD *)(v8 + 8) )
        {
          v9 = RtlpInterlockedPopEntrySList((PSLIST_HEADER)&stru_140E27B08.WaitBlockFill11[152]);
          if ( v9
            || IovExpandIrpTracker()
            && (v9 = RtlpInterlockedPopEntrySList((PSLIST_HEADER)&stru_140E27B08.WaitBlockFill11[152])) != 0LL )
          {
            *v9 = 0LL;
            _InterlockedIncrement(&IovIrpTrackerCount);
            *(_QWORD *)(*(_QWORD *)(a2 + 200) + 8LL) = v9;
            *(_QWORD *)(a3 + 200) = v9;
          }
        }
      }
      v10 = RtlpInterlockedPopEntrySList((PSLIST_HEADER)&stru_140E27B08.LastXStateSaveDebugInfo);
      if ( v10
        || IovExpandIrpStackTracker()
        && (v10 = RtlpInterlockedPopEntrySList((PSLIST_HEADER)&stru_140E27B08.LastXStateSaveDebugInfo)) != 0LL )
      {
        *v10 = 0LL;
        v10[1] = 0LL;
        _InterlockedIncrement(&IovIrpStackTrackerCount);
      }
      else
      {
        v10 = 0LL;
      }
      *(_QWORD *)(a3 + 208) = v10;
      *(_QWORD *)(a3 + 48) = VfGetPristineDispatchRoutine(
                               *(struct _DRIVER_OBJECT **)(a1 + 8),
                               *(unsigned __int8 *)(*(_QWORD *)(a2 + 184) - 72LL));
      CurrentIrql = KeGetCurrentIrql();
      *(_BYTE *)(a3 + 156) = CurrentIrql;
      *(_DWORD *)(a3 + 188) = KeGetCurrentThread()->WaitBlock[3].SpareLong;
      if ( *(char *)(a2 + 67) == *(char *)(a2 + 66) + 1 )
      {
        v12 = *(_QWORD *)(a2 + 80);
        if ( v12 )
        {
          if ( !*(_BYTE *)(a2 + 64) && *(_DWORD *)(v12 + 4) )
            *(_DWORD *)(a3 + 152) |= 2u;
        }
      }
      if ( !VfIoDisabled )
      {
        *(_DWORD *)(a3 + 152) |= 1u;
        IovpCallDriver1(a3);
      }
    }
  }
}
