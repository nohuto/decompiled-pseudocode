/*
 * XREFs of RtlpHpVaMgrRangeFree @ 0x18008D010
 * Callers:
 *     RtlpHpVaMgrCtxFree @ 0x18008C0B4 (RtlpHpVaMgrCtxFree.c)
 * Callees:
 *     RtlpHpVaMgrRangeCleanup @ 0x180089FD8 (RtlpHpVaMgrRangeCleanup.c)
 *     ZwFreeVirtualMemory @ 0x18015F300 (ZwFreeVirtualMemory.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180170020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RtlpHpVaMgrRangeFree(__int64 a1, __int64 a2)
{
  bool v3; // zf
  __int64 v4; // rax
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int64 v7; // [rsp+48h] [rbp+10h] BYREF

  v3 = (*(_BYTE *)a2 & 4) == 0;
  v7 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL)
     + ((unsigned __int64)(a2 - *(_QWORD *)(*(_QWORD *)(a1 + 24) + 40LL)) >> *(_DWORD *)(*(_QWORD *)(a1 + 24) + 24LL) << 20);
  if ( v3 )
    v4 = *(unsigned __int16 *)(a2 + 24);
  else
    v4 = *(_QWORD *)(a2 + 24);
  v6 = v4 << 20;
  RtlpHpVaMgrRangeCleanup(a1, (char *)a2);
  if ( (*(_BYTE *)(a1 + 46) & 0xE) == 0xA )
    return ((__int64 (__fastcall *)(__int64, __int64, unsigned __int64 *, __int64 *, int))(RtlpHpHeapGlobals ^ *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) ^ *(_QWORD *)(a1 + 32)))(
             RtlpHpHeapGlobals ^ **(_QWORD **)(a1 + 32) ^ *(_QWORD *)(a1 + 32),
             -1LL,
             &v7,
             &v6,
             0x8000);
  else
    return ZwFreeVirtualMemory(-1LL, &v7, &v6, 0x8000LL);
}
