/*
 * XREFs of RtlpHpEnvAllocVA @ 0x18006F2D0
 * Callers:
 *     RtlpHpVaMgrAllocAligned @ 0x18006DEC4 (RtlpHpVaMgrAllocAligned.c)
 *     RtlCSparseBitmapStart @ 0x18006E51C (RtlCSparseBitmapStart.c)
 *     RtlpCSparseBitmapPageCommit @ 0x18006E838 (RtlpCSparseBitmapPageCommit.c)
 *     RtlpHpAllocVA @ 0x18006EF50 (RtlpHpAllocVA.c)
 *     RtlpHpVaMgrRangeCommit @ 0x18011D38C (RtlpHpVaMgrRangeCommit.c)
 * Callees:
 *     NtAllocateVirtualMemoryEx @ 0x18015FD30 (NtAllocateVirtualMemoryEx.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

NTSTATUS __fastcall RtlpHpEnvAllocVA(
        PVOID *BaseAddress,
        PSIZE_T RegionSize,
        __int64 a3,
        int a4,
        ULONG PageProtection,
        int a6,
        int a7,
        __int64 a8)
{
  int v9; // ecx
  ULONG v11; // r9d
  ULONG ExtendedParameterCount; // r8d
  MEM_EXTENDED_PARAMETER *ExtendedParameters; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 *v17; // r10
  __int128 v18; // [rsp+50h] [rbp-58h] BYREF
  __int64 v19; // [rsp+60h] [rbp-48h]
  __int64 v20; // [rsp+68h] [rbp-40h] BYREF
  _QWORD v21[5]; // [rsp+70h] [rbp-38h]

  v19 = 0LL;
  v9 = a7;
  v18 = 0LL;
  if ( (a4 & 0x20001000) == 0x20001000 && (unsigned int)(a7 - 2) > 2 )
    v9 = 3;
  v11 = a4 & 0xBFFFFFFF;
  if ( RtlpHpEnvEnableSimulatedLargePageCommit && (v11 & 0x2000) == 0 )
    v11 &= ~0x20000000u;
  ExtendedParameterCount = 0;
  if ( (v11 & 0x2000) != 0 )
  {
    v19 = a3;
    ExtendedParameterCount = 1;
    v20 = 1LL;
    v21[0] = &v18;
    if ( (v11 & 0x40000) != 0 )
    {
      v11 &= ~0x40000u;
      *(_QWORD *)&v18 = 0x100000000LL;
    }
  }
  if ( a8 && v9 != 5 )
  {
    v16 = 2LL * ExtendedParameterCount++;
    *(_OWORD *)&v21[v16 - 1] = 0LL;
    LOBYTE(v21[v16 - 1]) = 3;
    v21[v16] = a8;
  }
  if ( (v11 & 0x20400000) == 0x20400000 )
  {
    v15 = 2LL * ExtendedParameterCount;
    *(_OWORD *)&v21[v15 - 1] = 0LL;
    v21[v15] = 2LL;
  }
  else
  {
    if ( (v11 & 0x20000000) == 0 )
      goto LABEL_9;
    v15 = 2LL * ExtendedParameterCount;
    *(_OWORD *)&v21[v15 - 1] = 0LL;
    v21[v15] = 8LL;
  }
  ++ExtendedParameterCount;
  LOBYTE(v21[v15 - 1]) = 5;
LABEL_9:
  if ( v9 == 5 )
  {
    v17 = &v20;
    if ( !ExtendedParameterCount )
      v17 = 0LL;
    return ((__int64 (__fastcall *)(__int64, __int64, PVOID *, PSIZE_T, ULONG, ULONG, __int64 *, ULONG))(a8 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a8 + 8)))(
             a8 ^ RtlpHpHeapGlobals ^ *(_QWORD *)a8,
             -1LL,
             BaseAddress,
             RegionSize,
             v11,
             PageProtection,
             v17,
             ExtendedParameterCount);
  }
  else
  {
    ExtendedParameters = (MEM_EXTENDED_PARAMETER *)&v20;
    if ( !ExtendedParameterCount )
      ExtendedParameters = 0LL;
    return NtAllocateVirtualMemoryEx(
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             BaseAddress,
             RegionSize,
             v11,
             PageProtection,
             ExtendedParameters,
             ExtendedParameterCount);
  }
}
