/*
 * XREFs of KiUpdateStandbyStealSummaryForStandbyChange @ 0x140380B40
 * Callers:
 *     KiUpdateThreadSchedulingProperties @ 0x14020433C (KiUpdateThreadSchedulingProperties.c)
 *     ?KiCommitRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@KPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x140240AA0 (-KiCommitRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@KPEAU_SINGLE_L.c)
 *     KiUpdateThreadPriority @ 0x140380850 (KiUpdateThreadPriority.c)
 *     KiSetPriorityThread @ 0x140381000 (KiSetPriorityThread.c)
 * Callees:
 *     <none>
 */

char __fastcall KiUpdateStandbyStealSummaryForStandbyChange(__int64 a1)
{
  __int64 v1; // r11
  unsigned __int64 v2; // rbx
  __int64 v3; // r9
  char result; // al
  __int64 v5; // rdi
  char v6; // si
  unsigned __int64 v7; // rdx

  v1 = *(_QWORD *)(a1 + 192);
  v2 = *(_QWORD *)(a1 + 200);
  v3 = *(_QWORD *)(a1 + 16);
  if ( v3 )
  {
    if ( v3 == *(_QWORD *)(a1 + 24) )
    {
      result = 0;
    }
    else if ( v3 == *(_QWORD *)(a1 + 14392) )
    {
      result = 0;
    }
    else if ( v3 == *(_QWORD *)(a1 + 36544) )
    {
      result = 0;
    }
    else if ( (**(_BYTE **)(a1 + 56) & 0x7Fu) >= 0x10 )
    {
      result = 1;
    }
    else
    {
      if ( (KiVelocityFlags & 0x1000000) == 0 )
        goto LABEL_13;
      if ( !*(_BYTE *)(a1 + 7) )
        goto LABEL_13;
      v5 = *(_QWORD *)(a1 + 34880);
      if ( !v5 || !*(_DWORD *)(v5 + 40) )
        goto LABEL_13;
      v6 = *(_BYTE *)(a1 + 172);
      v7 = *(unsigned int *)(352LL * *(unsigned int *)(a1 + 34960) + v5 + 1336);
      if ( v6 )
        v7 <<= v6;
      if ( (unsigned __int64)(4 * ((v7 * (unsigned __int128)*(unsigned __int64 *)(a1 + 176)) >> 64)) > *(unsigned int *)(v3 + 84) )
        result = 1;
      else
LABEL_13:
        result = 0;
    }
  }
  else
  {
    result = 0;
  }
  if ( ((v2 & *(_QWORD *)(v1 + 400)) != 0) != result )
  {
    if ( result )
      _InterlockedOr64((volatile signed __int64 *)(v1 + 400), v2);
    else
      _InterlockedAnd64((volatile signed __int64 *)(v1 + 400), ~v2);
  }
  return result;
}
