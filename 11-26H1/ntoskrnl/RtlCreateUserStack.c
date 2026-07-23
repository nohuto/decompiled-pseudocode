/*
 * XREFs of RtlCreateUserStack @ 0x1409E6B78
 * Callers:
 *     PspSetupUserStack @ 0x1409E6A04 (PspSetupUserStack.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140462E40 (RtlImageNtHeader.c)
 *     ZwAllocateVirtualMemory @ 0x1407282C0 (ZwAllocateVirtualMemory.c)
 *     ZwSetInformationProcess @ 0x140728340 (ZwSetInformationProcess.c)
 *     ZwFreeVirtualMemory @ 0x140728380 (ZwFreeVirtualMemory.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlReadUShortFromUser @ 0x1407820CC (RtlReadUShortFromUser.c)
 */

NTSTATUS __cdecl RtlCreateUserStack(
        SIZE_T CommittedStackSize,
        SIZE_T MaximumStackSize,
        ULONG_PTR ZeroBits,
        SIZE_T PageSize,
        ULONG_PTR ReserveAlignment,
        PINITIAL_TEB InitialTeb)
{
  SIZE_T v6; // rdi
  SIZE_T v7; // rbx
  SIZE_T v8; // r12
  SIZE_T v9; // r14
  ULONG_PTR v10; // r13
  ULONG_PTR Blink; // rax
  __int64 v12; // r15
  ULONG_PTR v13; // rsi
  unsigned __int64 v14; // rbx
  void *v15; // rax
  NTSTATUS result; // eax
  PINITIAL_TEB v17; // r14
  char *v18; // rcx
  ULONG_PTR v19; // rbx
  int v20; // edi
  char *v21; // rax
  PIMAGE_NT_HEADERS v22; // rax
  PIMAGE_NT_HEADERS v23; // rsi
  unsigned __int64 *p_SizeOfStackReserve; // r15
  __int64 ULong64FromUser; // rsi
  __int64 ULongFromUser; // rax
  ULONG_PTR v27; // [rsp+30h] [rbp-88h] BYREF
  ULONG_PTR RegionSize; // [rsp+38h] [rbp-80h] BYREF
  PVOID v29[2]; // [rsp+40h] [rbp-78h] BYREF
  int ProcessInformation; // [rsp+50h] [rbp-68h] BYREF
  __int64 v31; // [rsp+54h] [rbp-64h]
  int v32; // [rsp+5Ch] [rbp-5Ch]
  unsigned __int64 v33; // [rsp+60h] [rbp-58h]
  ULONG_PTR v34; // [rsp+68h] [rbp-50h]
  char *v35; // [rsp+70h] [rbp-48h]
  PVOID BaseAddress; // [rsp+D8h] [rbp+20h] BYREF

  v6 = MaximumStackSize;
  v7 = CommittedStackSize;
  ReserveAlignment = 0LL;
  v35 = 0LL;
  v8 = HIBYTE(PageSize);
  v9 = PageSize & 0xFFFFFFFFFFFFFFLL;
  if ( HIBYTE(PageSize) > 0x40u )
    return -1073741811;
  v10 = 3 * v9;
  Blink = (ULONG_PTR)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Blink;
  v27 = Blink;
  if ( !CommittedStackSize || !MaximumStackSize )
  {
    v22 = RtlImageNtHeader((PVOID)KeGetCurrentThread()->ApcState.Process[1].Padding[5]);
    v23 = v22;
    if ( !v22 )
      return -1073741701;
    p_SizeOfStackReserve = &v22->OptionalHeader.SizeOfStackReserve;
    if ( (unsigned __int16)RtlReadUShortFromUser(&v22->OptionalHeader.Magic) == 523 )
    {
      ULong64FromUser = RtlReadULong64FromUser(&v23->OptionalHeader.SizeOfStackCommit);
      ULongFromUser = RtlReadULong64FromUser(p_SizeOfStackReserve);
    }
    else
    {
      ULong64FromUser = (unsigned int)RtlReadULongFromUser((unsigned int *)&v23->OptionalHeader.SizeOfStackReserve + 1);
      ULongFromUser = (unsigned int)RtlReadULongFromUser((unsigned int *)p_SizeOfStackReserve);
    }
    if ( !v7 )
      v7 = ULong64FromUser;
    if ( !v6 )
      v6 = ULongFromUser;
    Blink = v27;
  }
  if ( !v7 )
    v7 = 0x4000LL;
  if ( v7 >= v6 )
    v6 = (v7 + 0xFFFFF) & 0xFFFFFFFFFFF00000uLL;
  v12 = ~(v9 - 1);
  v13 = v12 & (v7 + v9 - 1);
  v14 = (v6 + 0xFFFF) & 0xFFFFFFFFFFFF0000uLL;
  v15 = (void *)RtlReadULong64FromUser((volatile void *)(Blink + 792));
  v29[1] = v15;
  if ( v15 && v13 < (unsigned __int64)v15 )
  {
    v13 = v12 & ((unsigned __int64)v15 + v9 - 1);
    if ( v13 >= v14 )
      v14 = (v13 + 0xFFFFF) & 0xFFFFFFFFFFF00000uLL;
    v14 = (v14 + 0xFFFF) & 0xFFFFFFFFFFFF0000uLL;
  }
  ProcessInformation = v8;
  v31 = 0LL;
  v32 = 0;
  v33 = v14;
  v34 = ZeroBits;
  result = ZwSetInformationProcess(
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             ProcessThreadStackAllocation,
             &ProcessInformation,
             0x28u);
  if ( result >= 0 )
  {
    v17 = InitialTeb;
    InitialTeb->OldInitialTeb.OldStackBase = 0LL;
    v17->OldInitialTeb.OldStackLimit = 0LL;
    v18 = v35;
    v17->StackAllocationBase = v35;
    v17->StackBase = &v18[v14];
    BaseAddress = &v18[v14 - v13];
    v19 = v14 - v13;
    RegionSize = v13;
    v20 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u);
    if ( v20 < 0
      || (v21 = (char *)BaseAddress, v17->StackLimit = BaseAddress, v19 >= v10)
      && (BaseAddress = &v21[-v10],
          ReserveAlignment = v10,
          v20 = ZwAllocateVirtualMemory(
                  (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                  &BaseAddress,
                  0LL,
                  &ReserveAlignment,
                  0x1000u,
                  0x104u),
          v20 < 0) )
    {
      v29[0] = v17->StackAllocationBase;
      v27 = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v29, &v27, 0x8000u);
      return v20;
    }
    else
    {
      return 0;
    }
  }
  return result;
}
