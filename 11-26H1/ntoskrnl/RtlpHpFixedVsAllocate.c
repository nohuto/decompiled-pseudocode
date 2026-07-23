/*
 * XREFs of RtlpHpFixedVsAllocate @ 0x1404D1C30
 * Callers:
 *     <none>
 * Callees:
 *     RtlpHpAcquireLockExclusive @ 0x14027D6E0 (RtlpHpAcquireLockExclusive.c)
 *     RtlpHpReleaseLockExclusive @ 0x14034F380 (RtlpHpReleaseLockExclusive.c)
 *     RtlFindClearBitsEx @ 0x140361740 (RtlFindClearBitsEx.c)
 *     RtlSetBitsEx @ 0x1403712C0 (RtlSetBitsEx.c)
 *     RtlFindClearRunsEx @ 0x1404E8604 (RtlFindClearRunsEx.c)
 */

__int64 __fastcall RtlpHpFixedVsAllocate(__int64 a1, unsigned int a2, _DWORD *a3, struct _KLOCK_ENTRIES *a4)
{
  unsigned __int64 v6; // rdi
  char v8; // si
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rbp
  unsigned __int64 ClearBits; // rax
  unsigned __int64 v12; // rdi
  __int64 v13; // rdi
  int ClearRuns; // eax
  int v16; // ecx
  unsigned __int64 v17[5]; // [rsp+20h] [rbp-28h] BYREF
  char v18; // [rsp+50h] [rbp+8h] BYREF
  int v19; // [rsp+54h] [rbp+Ch]

  v6 = a2;
  if ( (*(_DWORD *)(a1 + 20) & 0x8000000) != 0 )
    v8 = -1;
  else
    v8 = RtlpHpAcquireLockExclusive((int *)(a1 + 24), *(unsigned __int8 *)(a1 + 32), (__int64)a3, a4);
  v9 = a1 ^ *(_QWORD *)(a1 + 56);
  v17[0] = *(_QWORD *)(a1 + 48);
  v10 = v6 >> 12;
  v17[1] = v9;
  ClearBits = RtlFindClearBitsEx(v17, v6 >> 12, 0LL);
  v12 = ClearBits;
  if ( ClearBits == -1LL )
  {
    ClearRuns = RtlFindClearRunsEx(v17, &v18);
    v16 = 0;
    if ( ClearRuns == 1 )
      v16 = v19;
    LODWORD(a4->Thread) = v16 << 12;
    v13 = 0LL;
  }
  else
  {
    RtlSetBitsEx((__int64)v17, ClearBits, v10);
    LODWORD(a4->Thread) = 0;
    v13 = a1 + (v12 << 12);
    *a3 = 0;
  }
  if ( (*(_DWORD *)(a1 + 20) & 0x8000000) == 0 )
    RtlpHpReleaseLockExclusive((struct _KTHREAD *)(a1 + 24), *(unsigned __int8 *)(a1 + 32), v8);
  return v13;
}
