/*
 * XREFs of KiRemoveThreadFromAnyReadyQueue @ 0x140338054
 * Callers:
 *     KiRescheduleThreadAfterAffinityChange @ 0x14022CBFC (KiRescheduleThreadAfterAffinityChange.c)
 *     KiSetPriorityThread @ 0x140381000 (KiSetPriorityThread.c)
 *     KiApplyForegroundBoostThread @ 0x1405243B4 (KiApplyForegroundBoostThread.c)
 * Callees:
 *     KiRemoveThreadFromReadyQueue @ 0x140232008 (KiRemoveThreadFromReadyQueue.c)
 *     KiRemoveThreadFromSharedReadyQueue @ 0x140338180 (KiRemoveThreadFromSharedReadyQueue.c)
 *     ?KiResortScbQueue@@YAEPEAU_KPRCB@@PEAU_KSCB@@E@Z @ 0x140338648 (-KiResortScbQueue@@YAEPEAU_KPRCB@@PEAU_KSCB@@E@Z.c)
 *     ?KiRemoveSchedulingGroupQueue@@YAXPEAU_KPRCB@@PEAU_KSCB@@E@Z @ 0x1403387BC (-KiRemoveSchedulingGroupQueue@@YAXPEAU_KPRCB@@PEAU_KSCB@@E@Z.c)
 */

void __fastcall KiRemoveThreadFromAnyReadyQueue(struct _KPRCB *a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v6; // rdx
  _QWORD *v7; // r8
  _QWORD *v8; // rcx
  _QWORD *v9; // rax
  int v10; // ecx
  char v11; // al
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rcx

  if ( (*(_DWORD *)(a3 + 116) & 0x2000) != 0 )
  {
    v6 = *(_QWORD *)(a3 + 944);
    if ( (*(_DWORD *)(a3 + 120) & 0x400000) != 0 )
      _InterlockedAnd(*(volatile signed __int32 **)(a3 + 968), 0xFFFBFFFF);
    v7 = (_QWORD *)(a3 + 216);
    v8 = (_QWORD *)*v7;
    v9 = (_QWORD *)v7[1];
    if ( *(_QWORD **)(*v7 + 8LL) != v7 || (_QWORD *)*v9 != v7 )
      __fastfail(3u);
    *v9 = v8;
    v8[1] = v9;
    if ( v9 != v8 )
      goto LABEL_15;
    v10 = *(unsigned __int16 *)(v6 + 136) ^ (1 << a4);
    v11 = *(_BYTE *)(v6 + 128) & 3;
    *(_WORD *)(v6 + 136) = v10;
    if ( v11 != 1 )
      goto LABEL_15;
    if ( (_WORD)v10 )
      goto LABEL_14;
    v12 = v6 + 424;
    if ( (*(_BYTE *)(v6 + 432) & 1) != 0 )
    {
      if ( !*(_QWORD *)v12 )
        goto LABEL_16;
      v13 = *(_QWORD *)v12 ^ v12;
    }
    else
    {
      v13 = *(_QWORD *)v12;
    }
    if ( v13 )
    {
LABEL_14:
      KiResortScbQueue(a1, (struct _KSCB *)v6, 1u);
LABEL_15:
      *(_DWORD *)(a3 + 116) &= ~0x2000u;
      *(_QWORD *)(a3 + 944) = 0LL;
      return;
    }
LABEL_16:
    KiRemoveSchedulingGroupQueue(a1, (struct _KSCB *)v6, 1u);
    goto LABEL_15;
  }
  if ( *(int *)(a3 + 536) >= 0 )
    KiRemoveThreadFromReadyQueue((__int64)a1, (_QWORD *)(a3 + 216), a4);
  else
    KiRemoveThreadFromSharedReadyQueue(a2, a3, a4);
}
