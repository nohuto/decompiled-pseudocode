/*
 * XREFs of RtlpHpVsSlotCreate @ 0x140504EA8
 * Callers:
 *     RtlpHpVsContextHandleContention @ 0x140354304 (RtlpHpVsContextHandleContention.c)
 *     RtlpHpVsContextStart @ 0x140504DE0 (RtlpHpVsContextStart.c)
 * Callees:
 *     RtlpHpInitializeLock @ 0x14034B490 (RtlpHpInitializeLock.c)
 *     InitializeSListHead @ 0x140499200 (InitializeSListHead.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

union _SLIST_HEADER *__fastcall RtlpHpVsSlotCreate(unsigned __int64 a1)
{
  __int64 v2; // rax
  union _SLIST_HEADER *v3; // rbx
  char v4; // cl

  v2 = guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 8) ^ a1, 128LL);
  v3 = (union _SLIST_HEADER *)v2;
  if ( v2 )
  {
    memset_0((void *)(v2 + 8), 0, 0x78uLL);
    v3->Alignment = a1;
    RtlpHpInitializeLock(&v3->Region, *(unsigned __int8 *)(a1 + 3));
    v4 = *(_BYTE *)(a1 + 5);
    v3[1].Alignment = 0LL;
    v3[1].Region = 0LL;
    if ( (v4 & 1) != 0 )
      *((_BYTE *)&v3[1].HeaderX64 + 8) = 1;
    v3[2].Region = 0LL;
    v3[2].Alignment = 0LL;
    v3[4] = 0LL;
    InitializeSListHead(v3 + 4);
  }
  return v3;
}
