/*
 * XREFs of RtlpWow64CreateUserStack @ 0x140AB9B7C
 * Callers:
 *     PspWow64SetupUserStack @ 0x140AB9ACC (PspWow64SetupUserStack.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140462E40 (RtlImageNtHeader.c)
 *     ZwAllocateVirtualMemory @ 0x1407282C0 (ZwAllocateVirtualMemory.c)
 *     ZwSetInformationProcess @ 0x140728340 (ZwSetInformationProcess.c)
 *     ZwFreeVirtualMemory @ 0x140728380 (ZwFreeVirtualMemory.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 */

NTSTATUS __fastcall RtlpWow64CreateUserStack(
        unsigned __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        int a4,
        ULONG_PTR a5)
{
  int v5; // r14d
  __int64 v6; // r12
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rsi
  ULONG_PTR v9; // r13
  struct _LIST_ENTRY *Blink; // rax
  NTSTATUS v11; // r14d
  PIMAGE_NT_HEADERS v12; // rax
  PIMAGE_NT_HEADERS v13; // r13
  unsigned int ULongFromUser; // r12d
  unsigned int v15; // eax
  ULONG_PTR v16; // rsi
  unsigned __int64 v17; // rdi
  unsigned __int64 ULong64FromUser; // rax
  NTSTATUS result; // eax
  __int64 v20; // rcx
  unsigned __int64 v21; // rdi
  _QWORD *v22; // rsi
  char *v23; // rax
  PVOID BaseAddress; // [rsp+30h] [rbp-A8h] BYREF
  int v25; // [rsp+38h] [rbp-A0h]
  PVOID v26; // [rsp+40h] [rbp-98h] BYREF
  ULONG_PTR v27; // [rsp+48h] [rbp-90h] BYREF
  ULONG_PTR v28; // [rsp+50h] [rbp-88h] BYREF
  struct _LIST_ENTRY *v29; // [rsp+58h] [rbp-80h]
  ULONG_PTR RegionSize; // [rsp+60h] [rbp-78h] BYREF
  int ProcessInformation; // [rsp+68h] [rbp-70h] BYREF
  __int64 v32; // [rsp+6Ch] [rbp-6Ch]
  int v33; // [rsp+74h] [rbp-64h]
  unsigned __int64 v34; // [rsp+78h] [rbp-60h]
  __int64 v35; // [rsp+80h] [rbp-58h]
  __int64 v36; // [rsp+88h] [rbp-50h]
  unsigned __int64 v37; // [rsp+90h] [rbp-48h]

  v5 = a4;
  v6 = a3;
  v7 = a2;
  v8 = a1;
  v9 = a5;
  v27 = a5;
  v28 = 0LL;
  v36 = 0LL;
  Blink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Blink;
  v29 = Blink;
  v26 = Blink;
  if ( !a1 || !a2 )
  {
    v11 = 0;
    v12 = RtlImageNtHeader((PVOID)KeGetCurrentThread()->ApcState.Process[1].Padding[5]);
    v13 = v12;
    if ( v12 )
    {
      ULongFromUser = RtlReadULongFromUser((unsigned int *)&v12->OptionalHeader.SizeOfStackReserve + 1);
      v15 = RtlReadULongFromUser((unsigned int *)&v13->OptionalHeader.SizeOfStackReserve);
      if ( !v8 )
        v8 = ULongFromUser;
      if ( !v7 )
        v7 = v15;
    }
    else
    {
      v11 = -1073741701;
      v25 = -1073741701;
    }
    Blink = v29;
    if ( v11 < 0 )
      return v11;
    v9 = v27;
    v5 = a4;
    v6 = a3;
  }
  if ( !v8 )
    v8 = 0x4000LL;
  if ( v8 >= v7 )
    v7 = (v8 + 0xFFFFF) & 0xFFFFFFFFFFF00000uLL;
  v16 = (v8 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  v17 = (v7 + 0xFFFF) & 0xFFFFFFFFFFFF0000uLL;
  ULong64FromUser = RtlReadULong64FromUser(&Blink[49].Blink);
  v37 = ULong64FromUser;
  if ( ULong64FromUser && v16 < ULong64FromUser )
  {
    v16 = (ULong64FromUser + 4095) & 0xFFFFFFFFFFFFF000uLL;
    v17 = (v16 + 0xFFFFF) & 0xFFFFFFFFFFF00000uLL;
  }
  ProcessInformation = v5;
  v32 = 0LL;
  v33 = 0;
  v34 = v17;
  v35 = v6;
  result = ZwSetInformationProcess(
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             ProcessThreadStackAllocation,
             &ProcessInformation,
             0x28u);
  if ( result >= 0 )
  {
    v20 = v36;
    *(_QWORD *)(a5 + 56) = v36;
    *(_QWORD *)(a5 + 40) = v20 + v17;
    BaseAddress = (PVOID)(v17 + v20 - v16);
    v21 = v17 - v16;
    RegionSize = v16;
    v11 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u);
    if ( v11 < 0 )
    {
      v22 = (_QWORD *)(v9 + 48);
    }
    else
    {
      v22 = (_QWORD *)(a5 + 48);
      v23 = (char *)BaseAddress;
      *(_QWORD *)(a5 + 48) = BaseAddress;
      if ( v21 < 0x2000 )
        return 0;
      BaseAddress = v23 - 0x2000;
      v28 = 0x2000LL;
      v11 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &v28, 0x1000u, 0x104u);
      if ( v11 >= 0 )
        return 0;
    }
    v26 = *(PVOID *)(a5 + 56);
    v27 = 0LL;
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v26, &v27, 0x8000u);
    *(_QWORD *)(a5 + 56) = 0LL;
    *(_QWORD *)(a5 + 40) = 0LL;
    *v22 = 0LL;
    return v11;
  }
  return result;
}
