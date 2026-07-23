/*
 * XREFs of KiRemoveThreadFromScbQueue @ 0x140307964
 * Callers:
 *     ?KiRemoveThreadFromSchedulingGroup@@YAXPEAU_KTHREAD@@EPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x1402040B4 (-KiRemoveThreadFromSchedulingGroup@@YAXPEAU_KTHREAD@@EPEAU_SINGLE_LIST_ENTRY@@@Z.c)
 *     KiSearchForNewThreadsForRescheduleContext @ 0x14022E570 (KiSearchForNewThreadsForRescheduleContext.c)
 *     KiRemoveCurrentThreadScbReadyQueueEnumerator @ 0x140232078 (KiRemoveCurrentThreadScbReadyQueueEnumerator.c)
 * Callees:
 *     ?KiResortScbQueue@@YAEPEAU_KPRCB@@PEAU_KSCB@@E@Z @ 0x140338648 (-KiResortScbQueue@@YAEPEAU_KPRCB@@PEAU_KSCB@@E@Z.c)
 *     ?KiRemoveSchedulingGroupQueue@@YAXPEAU_KPRCB@@PEAU_KSCB@@E@Z @ 0x1403387BC (-KiRemoveSchedulingGroupQueue@@YAXPEAU_KPRCB@@PEAU_KSCB@@E@Z.c)
 */

unsigned __int8 __fastcall KiRemoveThreadFromScbQueue(struct _KPRCB *a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v7; // r10
  _QWORD *v8; // r9
  unsigned __int8 v9; // r8
  _QWORD *v10; // rax
  int v11; // ecx
  char v12; // al
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rcx
  unsigned __int8 result; // al

  if ( (*(_DWORD *)(a3 + 120) & 0x400000) != 0 )
    _InterlockedAnd(*(volatile signed __int32 **)(a3 + 968), 0xFFFBFFFF);
  v7 = a3 + 216;
  v8 = *(_QWORD **)(a3 + 216);
  v9 = 0;
  v10 = *(_QWORD **)(a3 + 224);
  if ( v8[1] != a3 + 216 || *v10 != v7 )
    __fastfail(3u);
  *v10 = v8;
  v8[1] = v10;
  if ( v10 == v8 )
  {
    v11 = *(unsigned __int16 *)(a2 + 136) ^ (1 << a4);
    v12 = *(_BYTE *)(a2 + 128) & 3;
    *(_WORD *)(a2 + 136) = v11;
    if ( v12 == 1 )
    {
      if ( (_WORD)v11 )
      {
LABEL_11:
        v9 = KiResortScbQueue(a1, (struct _KSCB *)a2, 1u);
        goto LABEL_12;
      }
      v13 = a2 + 424;
      if ( (*(_BYTE *)(a2 + 432) & 1) != 0 )
      {
        if ( !*(_QWORD *)v13 )
          goto LABEL_13;
        v14 = *(_QWORD *)v13 ^ v13;
      }
      else
      {
        v14 = *(_QWORD *)v13;
      }
      if ( v14 )
        goto LABEL_11;
LABEL_13:
      KiRemoveSchedulingGroupQueue(a1, (struct _KSCB *)a2, 1u);
      v9 = 1;
    }
  }
LABEL_12:
  *(_DWORD *)(a3 + 116) &= ~0x2000u;
  result = v9;
  *(_QWORD *)(a3 + 944) = 0LL;
  return result;
}
