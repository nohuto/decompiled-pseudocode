/*
 * XREFs of MiProcessLargeCoalesceBitmapCandidates @ 0x1403D2B10
 * Callers:
 *     MiProcessLargeCoalesceCandidates @ 0x1403D2564 (MiProcessLargeCoalesceCandidates.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiCoalesceFreeSmallPages @ 0x14028C5C0 (MiCoalesceFreeSmallPages.c)
 *     MiSafeLockPage @ 0x1402D5780 (MiSafeLockPage.c)
 *     MiSafeLockPageAtDpc @ 0x14035A998 (MiSafeLockPageAtDpc.c)
 *     MiCheckLargePagesExist @ 0x1403D30D4 (MiCheckLargePagesExist.c)
 *     MiCoalesceFreeLargePages @ 0x1403D3124 (MiCoalesceFreeLargePages.c)
 *     MiAccumulateTimeBoundTime @ 0x1403D357C (MiAccumulateTimeBoundTime.c)
 *     MiRecordLargePageCandidate @ 0x1404409A0 (MiRecordLargePageCandidate.c)
 */

__int64 __fastcall MiProcessLargeCoalesceBitmapCandidates(
        _WORD *a1,
        ULONG_PTR a2,
        unsigned int a3,
        _WORD *a4,
        unsigned __int64 a5,
        __int64 a6,
        unsigned __int8 a7,
        __int64 a8)
{
  __int64 v9; // rdx
  _WORD *v12; // r10
  __int64 v13; // rsi
  unsigned __int64 v14; // rax
  int v15; // r12d
  char v16; // al
  unsigned __int8 v17; // dl
  __int64 v18; // r13
  char v19; // al
  __int64 v20; // r13
  unsigned int v23; // [rsp+88h] [rbp+20h]
  char v24; // [rsp+90h] [rbp+28h]

  v9 = a7;
  v12 = a1;
  v13 = a3;
  v23 = 261;
  while ( 1 )
  {
    if ( (unsigned __int64)a4 > a5 )
      return v23;
    if ( (_DWORD)v13 == 2 )
      v14 = *a4 & 0x1F;
    else
      v14 = (_DWORD)v13 == 1
          ? (unsigned __int64)(unsigned __int16)*a4 >> 10
          : ((unsigned __int64)*(unsigned int *)a4 >> 19) & 0x3FF;
    if ( v14 == MiLargePageCoalesceSizes[v13] )
      break;
LABEL_6:
    a2 += MiPageSizes[v13];
    a4 = (_WORD *)((char *)a4 + a6);
  }
  if ( (unsigned int)v13 <= 1 )
  {
    v20 = a8;
    v15 = MiCoalesceFreeLargePages(v12, a2, (unsigned int)(v13 + 1), (unsigned __int8)v9, a8 != 0);
LABEL_22:
    if ( v15 )
    {
      MiRecordLargePageCandidate(a1, a2, (unsigned int)v13, 2LL);
      v23 = -1073741267;
    }
    goto LABEL_24;
  }
  v15 = 0;
  if ( (_BYTE)v9 == 2 )
    v16 = MiSafeLockPageAtDpc(a2);
  else
    v16 = MiSafeLockPage(a2, v9, 0x140000000LL);
  v24 = v16;
  v17 = v16;
  if ( v16 != 17 )
  {
    v18 = 48 * a2 - 0x220000000000LL;
    if ( ((*(_QWORD *)(v18 + 40) >> 43) & 0x3FF) == *a1 )
    {
      v19 = MiCoalesceFreeSmallPages(a2, 0);
      v17 = v24;
      if ( (v19 & 2) != 0 )
        v15 = 1;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( a7 != 2 && v17 < 2u )
    {
      if ( KiIrqlFlags )
      {
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v17);
        v17 = v24;
      }
      __writecr8(v17);
    }
    v20 = a8;
    goto LABEL_22;
  }
  v20 = a8;
LABEL_24:
  if ( !v20 )
    goto LABEL_25;
  if ( (unsigned int)MiCheckLargePagesExist(v20) )
    return 255LL;
  if ( !(unsigned int)MiAccumulateTimeBoundTime(*(_QWORD *)(v20 + 32) + 40LL, 0LL) )
  {
LABEL_25:
    v12 = a1;
    v9 = a7;
    goto LABEL_6;
  }
  return 258LL;
}
