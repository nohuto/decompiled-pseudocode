/*
 * XREFs of RtlpHpVsSlotCreate @ 0x1800966D0
 * Callers:
 *     RtlpHpVsContextStart @ 0x1800962A8 (RtlpHpVsContextStart.c)
 *     RtlpHpVsContextHandleContention @ 0x1800E0854 (RtlpHpVsContextHandleContention.c)
 * Callees:
 *     RtlInitializeSListHead @ 0x180096990 (RtlInitializeSListHead.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

_SLIST_HEADER *__fastcall RtlpHpVsSlotCreate(__int64 a1)
{
  __int64 v2; // rax
  _SLIST_HEADER *v3; // rbx
  char v4; // cl

  v2 = ((__int64 (__fastcall *)(__int64, __int64))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 48)))(
         *(_QWORD *)(a1 + 8) ^ a1,
         128LL);
  v3 = (_SLIST_HEADER *)v2;
  if ( v2 )
  {
    memset_thunk_772440563353939046((void *)(v2 + 16), 0, 0x70uLL);
    v3->Region = 0LL;
    v3->Alignment = (unsigned __int64)v3 - a1;
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
