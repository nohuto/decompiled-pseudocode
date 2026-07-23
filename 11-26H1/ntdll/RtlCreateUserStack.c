/*
 * XREFs of RtlCreateUserStack @ 0x18010FC60
 * Callers:
 *     <none>
 * Callees:
 *     RtlImageNtHeaderEx @ 0x1800315B0 (RtlImageNtHeaderEx.c)
 *     ZwAllocateVirtualMemory @ 0x18015F140 (ZwAllocateVirtualMemory.c)
 *     NtSetInformationProcess @ 0x18015F1C0 (NtSetInformationProcess.c)
 *     ZwFreeVirtualMemory @ 0x18015F200 (ZwFreeVirtualMemory.c)
 */

NTSTATUS __cdecl RtlCreateUserStack(
        SIZE_T CommittedStackSize,
        SIZE_T MaximumStackSize,
        ULONG_PTR ZeroBits,
        SIZE_T PageSize,
        ULONG_PTR ReserveAlignment,
        PINITIAL_TEB InitialTeb)
{
  SIZE_T SizeOfStackReserve; // rdi
  SIZE_T SizeOfStackCommit; // rbx
  SIZE_T v8; // r12
  SIZE_T v9; // rsi
  ULONG_PTR v10; // r15
  struct _PEB *v11; // r13
  __int64 v12; // rdx
  ULONG_PTR v13; // r14
  __int64 v14; // rcx
  unsigned __int64 v15; // rbx
  NTSTATUS result; // eax
  PINITIAL_TEB v17; // rsi
  char *v18; // rcx
  ULONG_PTR v19; // rbx
  int v20; // edi
  char *v21; // rax
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+30h] [rbp-88h] BYREF
  ULONG_PTR v23; // [rsp+38h] [rbp-80h] BYREF
  ULONG_PTR RegionSize; // [rsp+40h] [rbp-78h] BYREF
  ULONG_PTR v25; // [rsp+48h] [rbp-70h] BYREF
  ULONG_PTR MinimumStackCommit; // [rsp+50h] [rbp-68h]
  int ProcessInformation; // [rsp+58h] [rbp-60h] BYREF
  __int64 v28; // [rsp+5Ch] [rbp-5Ch]
  int v29; // [rsp+64h] [rbp-54h]
  unsigned __int64 v30; // [rsp+68h] [rbp-50h]
  ULONG_PTR v31; // [rsp+70h] [rbp-48h]
  char *v32; // [rsp+78h] [rbp-40h]
  ULONG_PTR v33; // [rsp+D0h] [rbp+18h]
  PVOID BaseAddress; // [rsp+D8h] [rbp+20h] BYREF

  v33 = ZeroBits;
  SizeOfStackReserve = MaximumStackSize;
  SizeOfStackCommit = CommittedStackSize;
  v23 = 0LL;
  v32 = 0LL;
  v8 = HIBYTE(PageSize);
  v9 = PageSize & 0xFFFFFFFFFFFFFFLL;
  if ( HIBYTE(PageSize) > 0x40u )
    return -1073741811;
  if ( !v9 )
    return -1073741811;
  v10 = ReserveAlignment;
  if ( !ReserveAlignment || ReserveAlignment < v9 )
    return -1073741811;
  v25 = 3 * v9;
  v11 = NtCurrentPeb();
  if ( !CommittedStackSize || !MaximumStackSize )
  {
    OutHeaders = 0LL;
    RtlImageNtHeaderEx(1u, v11->ImageBaseAddress, 0LL, &OutHeaders);
    if ( !OutHeaders )
      return -1073741701;
    if ( !SizeOfStackCommit )
      SizeOfStackCommit = OutHeaders->OptionalHeader.SizeOfStackCommit;
    if ( !SizeOfStackReserve )
      SizeOfStackReserve = OutHeaders->OptionalHeader.SizeOfStackReserve;
    ZeroBits = v33;
  }
  if ( !SizeOfStackCommit )
    SizeOfStackCommit = 0x4000LL;
  if ( SizeOfStackCommit >= SizeOfStackReserve )
    SizeOfStackReserve = (SizeOfStackCommit + 0xFFFFF) & 0xFFFFFFFFFFF00000uLL;
  v12 = ~(v9 - 1);
  v13 = v12 & (SizeOfStackCommit + v9 - 1);
  v14 = ~(v10 - 1);
  v15 = v14 & (SizeOfStackReserve + v10 - 1);
  MinimumStackCommit = v11->MinimumStackCommit;
  if ( MinimumStackCommit && v13 < MinimumStackCommit )
  {
    v13 = v12 & (v9 + MinimumStackCommit - 1);
    if ( v13 >= v15 )
      v15 = (v13 + 0xFFFFF) & 0xFFFFFFFFFFF00000uLL;
    v15 = v14 & (v10 + v15 - 1);
  }
  ProcessInformation = v8;
  v28 = 0LL;
  v29 = 0;
  v30 = v15;
  v31 = ZeroBits;
  result = NtSetInformationProcess(
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             ProcessThreadStackAllocation,
             &ProcessInformation,
             0x28u);
  if ( result >= 0 )
  {
    v17 = InitialTeb;
    InitialTeb->OldInitialTeb.OldStackBase = 0LL;
    v17->OldInitialTeb.OldStackLimit = 0LL;
    v18 = v32;
    v17->StackAllocationBase = v32;
    v17->StackBase = &v18[v15];
    BaseAddress = &v18[v15 - v13];
    v19 = v15 - v13;
    RegionSize = v13;
    v20 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u);
    if ( v20 < 0
      || (v21 = (char *)BaseAddress, v17->StackLimit = BaseAddress, v19 >= v25)
      && (BaseAddress = &v21[-v25],
          v23 = v25,
          v20 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &v23, 0x1000u, 0x104u),
          v20 < 0) )
    {
      OutHeaders = (PIMAGE_NT_HEADERS)v17->StackAllocationBase;
      v25 = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)&OutHeaders, &v25, 0x8000u);
      return v20;
    }
    else
    {
      return 0;
    }
  }
  return result;
}
