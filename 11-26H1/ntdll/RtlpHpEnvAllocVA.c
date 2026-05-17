/*
 * XREFs of RtlpHpEnvAllocVA @ 0x18008BE90
 * Callers:
 *     RtlpHpVaMgrAllocAligned @ 0x18008AA8C (RtlpHpVaMgrAllocAligned.c)
 *     RtlCSparseBitmapStart @ 0x18008B0E4 (RtlCSparseBitmapStart.c)
 *     RtlpCSparseBitmapPageCommit @ 0x18008B400 (RtlpCSparseBitmapPageCommit.c)
 *     RtlpHpAllocVA @ 0x18008BB10 (RtlpHpAllocVA.c)
 *     RtlpHpVaMgrRangeCommit @ 0x18011D5DC (RtlpHpVaMgrRangeCommit.c)
 * Callees:
 *     NtAllocateVirtualMemoryEx @ 0x18015FE30 (NtAllocateVirtualMemoryEx.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180170020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RtlpHpEnvAllocVA(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        __int64 a6,
        int a7,
        unsigned __int64 a8)
{
  int v9; // ecx
  unsigned int v11; // r9d
  unsigned int v12; // r8d
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 *v16; // r10
  __int128 v17; // [rsp+50h] [rbp-58h] BYREF
  __int64 v18; // [rsp+60h] [rbp-48h]
  __int64 v19; // [rsp+68h] [rbp-40h] BYREF
  _QWORD v20[5]; // [rsp+70h] [rbp-38h]

  v18 = 0LL;
  v9 = a7;
  v17 = 0LL;
  if ( (a4 & 0x20001000) == 0x20001000 && (unsigned int)(a7 - 2) > 2 )
    v9 = 3;
  v11 = a4 & 0xBFFFFFFF;
  if ( RtlpHpEnvEnableSimulatedLargePageCommit && (v11 & 0x2000) == 0 )
    v11 &= ~0x20000000u;
  v12 = 0;
  if ( (v11 & 0x2000) != 0 )
  {
    v18 = a3;
    v12 = 1;
    v19 = 1LL;
    v20[0] = &v17;
    if ( (v11 & 0x40000) != 0 )
    {
      v11 &= ~0x40000u;
      *(_QWORD *)&v17 = 0x100000000LL;
    }
  }
  if ( a8 && v9 != 5 )
  {
    v15 = 2LL * v12++;
    *(_OWORD *)&v20[v15 - 1] = 0LL;
    LOBYTE(v20[v15 - 1]) = 3;
    v20[v15] = a8;
  }
  if ( (v11 & 0x20400000) == 0x20400000 )
  {
    v14 = 2LL * v12;
    *(_OWORD *)&v20[v14 - 1] = 0LL;
    v20[v14] = 2LL;
  }
  else
  {
    if ( (v11 & 0x20000000) == 0 )
      goto LABEL_9;
    v14 = 2LL * v12;
    *(_OWORD *)&v20[v14 - 1] = 0LL;
    v20[v14] = 8LL;
  }
  ++v12;
  LOBYTE(v20[v14 - 1]) = 5;
LABEL_9:
  if ( v9 != 5 )
    return NtAllocateVirtualMemoryEx(-1LL, a1, a2);
  v16 = &v19;
  if ( !v12 )
    v16 = 0LL;
  return ((__int64 (__fastcall *)(unsigned __int64, __int64, __int64, __int64, unsigned int, int, __int64 *, unsigned int))(a8 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a8 + 8)))(
           a8 ^ RtlpHpHeapGlobals ^ *(_QWORD *)a8,
           -1LL,
           a1,
           a2,
           v11,
           a5,
           v16,
           v12);
}
