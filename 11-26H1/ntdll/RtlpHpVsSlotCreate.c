/*
 * XREFs of RtlpHpVsSlotCreate @ 0x180075AE0
 * Callers:
 *     RtlpHpVsContextStart @ 0x1800756B8 (RtlpHpVsContextStart.c)
 *     RtlpHpVsContextHandleContention @ 0x1800977E0 (RtlpHpVsContextHandleContention.c)
 * Callees:
 *     RtlInitializeSListHead @ 0x180075D90 (RtlInitializeSListHead.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180170020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

union _SLIST_HEADER *__fastcall RtlpHpVsSlotCreate(unsigned __int64 a1)
{
  __int64 v2; // rax
  union _SLIST_HEADER *v3; // rbx
  char v4; // cl

  v2 = ((__int64 (__fastcall *)(unsigned __int64, __int64))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 48)))(
         *(_QWORD *)(a1 + 8) ^ a1,
         128LL);
  v3 = (union _SLIST_HEADER *)v2;
  if ( v2 )
  {
    memset_thunk_772440563353939046((void *)(v2 + 16), 0, 0x70uLL);
    v3->Alignment = a1;
    v3->Region = 0LL;
    v4 = *(_BYTE *)(a1 + 5);
    v3[1].Alignment = 0LL;
    v3[1].Region = 0LL;
    if ( (v4 & 1) != 0 )
      *((_BYTE *)&v3[1].HeaderX64 + 8) = 1;
    v3[2].Region = 0LL;
    v3[2].Alignment = 0LL;
    v3[4] = 0LL;
    RtlInitializeSListHead(v3 + 4);
  }
  return v3;
}
