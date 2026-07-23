/*
 * XREFs of KiEvaluateGroupSchedulingPreemption @ 0x1403070D0
 * Callers:
 *     KiSearchForNewThreadsForRescheduleContext @ 0x14022E570 (KiSearchForNewThreadsForRescheduleContext.c)
 *     KiDeferredReadySingleThread @ 0x140233180 (KiDeferredReadySingleThread.c)
 *     KiDirectSwitchThread @ 0x14023B540 (KiDirectSwitchThread.c)
 *     ?KiDoesThreadDominateRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KTHREAD@@KPEAPEAU_KSCB@@@Z @ 0x1403076F0 (-KiDoesThreadDominateRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KTHREAD@@.c)
 * Callees:
 *     KiIsThreadConstrainedBySchedulingGroup @ 0x1402313D0 (KiIsThreadConstrainedBySchedulingGroup.c)
 *     KiShouldPreemptionBeDeferred @ 0x140231EA0 (KiShouldPreemptionBeDeferred.c)
 *     KiGetComparisonRanks @ 0x1404C3378 (KiGetComparisonRanks.c)
 */

bool __fastcall KiEvaluateGroupSchedulingPreemption(__int64 *a1, __int64 a2, char a3, _QWORD *a4)
{
  char v4; // si
  int v5; // eax
  __int64 v6; // rdi
  __int64 v8; // r10
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v15; // rcx
  unsigned int v16; // edx
  __int64 v17; // r11
  __int64 v18; // rcx
  unsigned int v19; // r8d
  __int64 v20; // r10
  char v21; // dl
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // r9
  __int64 v25; // r8
  unsigned int v26; // esi
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // r8
  unsigned int v30[10]; // [rsp+20h] [rbp-28h] BYREF
  int v31; // [rsp+50h] [rbp+8h] BYREF

  v4 = *((_BYTE *)a1 + 32);
  v5 = 0;
  v6 = a1[2];
  v8 = *a1;
  if ( (v4 & 1) != 0 )
  {
    v12 = *(_QWORD *)(a2 + 104);
    *a4 = 0LL;
    if ( v12 )
    {
      v13 = v12 + *(unsigned int *)(v8 + 216);
      if ( v13 )
      {
        if ( *(char *)(a2 + 195) < 16
          && (*(_DWORD *)(a2 + 120) & 0x200) == 0
          && !*(_DWORD *)(a2 + 484)
          && *(_BYTE *)(a2 + 390) != 1 )
        {
          v29 = v12 + *(unsigned int *)(v8 + 216);
          do
          {
            if ( (*(_BYTE *)(v29 + 128) & 2) != 0 )
              goto LABEL_63;
            v29 = *(_QWORD *)(v29 + 440);
          }
          while ( v29 );
          do
          {
            v5 += *(_DWORD *)(v13 + 140);
            if ( v5 )
              break;
            v13 = *(_QWORD *)(v13 + 440);
          }
          while ( v13 );
          if ( v5 )
          {
LABEL_63:
            *a4 = v12 + *(unsigned int *)(v8 + 216);
            return 1;
          }
        }
      }
    }
    return 1;
  }
  v15 = *(_QWORD *)(v6 + 104);
  v16 = 0;
  v30[0] = 0;
  if ( v15 )
  {
    v17 = v15 + *(unsigned int *)(v8 + 216);
    if ( v17 )
    {
      v22 = v15 + *(unsigned int *)(v8 + 216);
      if ( *(char *)(v6 + 195) < 16
        && (*(_DWORD *)(v6 + 120) & 0x200) == 0
        && ((v4 & 4) == 0 || !*(_DWORD *)(v6 + 484) && *(_BYTE *)(v6 + 390) != 1) )
      {
        v23 = v15 + *(unsigned int *)(v8 + 216);
        do
        {
          if ( (*(_BYTE *)(v23 + 128) & 2) != 0 )
          {
            v16 = -1;
            goto LABEL_27;
          }
          v23 = *(_QWORD *)(v23 + 440);
        }
        while ( v23 );
        do
        {
          v16 = *(_DWORD *)(v22 + 140);
          if ( v16 )
            break;
          v22 = *(_QWORD *)(v22 + 440);
        }
        while ( v22 );
      }
LABEL_27:
      v30[0] = v16;
    }
  }
  else
  {
    v17 = 0LL;
  }
  v18 = *(_QWORD *)(a2 + 104);
  v19 = 0;
  v31 = 0;
  *a4 = 0LL;
  if ( v18 )
  {
    v20 = v18 + *(unsigned int *)(v8 + 216);
    if ( v20 )
    {
      v24 = v20;
      if ( *(char *)(a2 + 195) < 16
        && (*(_DWORD *)(a2 + 120) & 0x200) == 0
        && !*(_DWORD *)(a2 + 484)
        && *(_BYTE *)(a2 + 390) != 1 )
      {
        v25 = v20;
        while ( (*(_BYTE *)(v25 + 128) & 2) == 0 )
        {
          v25 = *(_QWORD *)(v25 + 440);
          if ( !v25 )
          {
            do
            {
              v26 = *(_DWORD *)(v24 + 140);
              if ( v26 )
                break;
              v24 = *(_QWORD *)(v24 + 440);
            }
            while ( v24 );
            v31 = v26;
            v19 = v26;
            if ( !v26 )
              goto LABEL_41;
LABEL_66:
            *a4 = v20;
            goto LABEL_10;
          }
        }
        v19 = -1;
        v31 = -1;
        goto LABEL_66;
      }
LABEL_41:
      if ( (a3 & 2) == 0 )
      {
        v27 = v20;
        do
        {
          v5 += *(_DWORD *)(v27 + 140);
          v27 = *(_QWORD *)(v27 + 440);
        }
        while ( v27 );
        if ( v5
          && KiIsThreadConstrainedBySchedulingGroup(a2)
          && (*(_DWORD *)(a2 + 120) & 0xC00) == 0
          && KiShouldPreemptionBeDeferred(v28) )
        {
          _interlockedbittestandset((volatile signed __int32 *)(a2 + 120), 0xBu);
        }
      }
    }
  }
  else
  {
    v20 = 0LL;
  }
LABEL_10:
  if ( v17 && v20 && v16 && v19 )
  {
    KiGetComparisonRanks(v17, v20, v30, &v31);
    v19 = v31;
    v16 = v30[0];
  }
  if ( v19 < v16 )
    return 1;
  if ( v19 != v16 )
    return (a1[4] & 0x10) != 0 && (*(_BYTE *)(a2 + 195) || !*(_BYTE *)(v6 + 195));
  v21 = *(_BYTE *)(a2 + 195);
  if ( v21 > *(char *)(v6 + 195) || v21 == *(_BYTE *)(v6 + 195) && ((a1[4] & 0x18) != 0 || (a3 & 1) != 0) )
    return 1;
  if ( (a1[4] & 0x10) == 0 )
    return 0;
  return v21 != 0;
}
