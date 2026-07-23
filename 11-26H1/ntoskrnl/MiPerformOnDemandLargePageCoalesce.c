/*
 * XREFs of MiPerformOnDemandLargePageCoalesce @ 0x1403D2D74
 * Callers:
 *     MiGetLargePageDemoteAsNeeded @ 0x1403D1EE0 (MiGetLargePageDemoteAsNeeded.c)
 *     MiGetLargePage @ 0x1405209D4 (MiGetLargePage.c)
 * Callees:
 *     KeQueryUnbiasedInterruptTimePrecise @ 0x140207CD0 (KeQueryUnbiasedInterruptTimePrecise.c)
 *     MiProcessLargeCoalesceCandidates @ 0x1403D2564 (MiProcessLargeCoalesceCandidates.c)
 *     MiLargeCoalesceCandidatesExist @ 0x1403D306C (MiLargeCoalesceCandidatesExist.c)
 *     MiCheckLargePagesExist @ 0x1403D30D4 (MiCheckLargePagesExist.c)
 *     MiAccumulateTimeBoundTime @ 0x1403D357C (MiAccumulateTimeBoundTime.c)
 */

__int64 __fastcall MiPerformOnDemandLargePageCoalesce(_QWORD *a1, unsigned int a2, unsigned int a3, int a4, _QWORD *a5)
{
  _QWORD *v5; // rsi
  unsigned int v6; // edi
  __int64 v7; // r13
  __int64 v9; // rdx
  __int64 v11; // r10
  __int64 v12; // rdx
  __int64 v13; // rax
  int v14; // r11d
  int v15; // r12d
  unsigned int v16; // r8d
  __int64 v17; // rax
  unsigned int v18; // r8d
  int v19; // esi
  int v20; // r15d
  __int64 v21; // rbx
  unsigned int i; // r15d
  int v24; // r11d
  int v25; // eax
  _QWORD *v26; // rax
  int v27; // eax
  ULONG64 v28; // rax
  int v29; // eax
  int v30; // eax
  __int64 v31; // [rsp+20h] [rbp-48h]
  _QWORD *v32; // [rsp+28h] [rbp-40h]
  _QWORD *v33; // [rsp+30h] [rbp-38h] BYREF
  int v34; // [rsp+38h] [rbp-30h]
  unsigned int v35; // [rsp+3Ch] [rbp-2Ch]
  int v36; // [rsp+40h] [rbp-28h]
  int v37; // [rsp+44h] [rbp-24h]
  __int64 v38; // [rsp+48h] [rbp-20h]
  _QWORD *v39; // [rsp+50h] [rbp-18h]
  unsigned __int64 QpcTimeStamp; // [rsp+B0h] [rbp+48h] BYREF
  int v41; // [rsp+B8h] [rbp+50h]
  unsigned int v42; // [rsp+C0h] [rbp+58h]
  int v43; // [rsp+C8h] [rbp+60h]

  v5 = a5;
  v6 = 0;
  v7 = a2;
  v9 = a1[2];
  v11 = 56320LL * a3;
  v37 = 0;
  v12 = v11 + v9;
  v31 = v11;
  v38 = v12;
  v33 = a1;
  v34 = v7;
  v13 = *(_QWORD *)(v12 + 13888);
  v35 = a3;
  v36 = a4;
  v39 = a5;
  if ( !v13 && (MiFlags & 0x30) != 0 )
    return 0LL;
  v32 = a5 + 5;
  if ( a5[6] >= a5[5] )
    return 0LL;
  QpcTimeStamp = 0LL;
  v14 = 0;
  v43 = 0;
  v15 = 1;
  v41 = 0;
  v16 = v7;
  v42 = v7;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( !v15 )
        goto LABEL_11;
      if ( (_DWORD)v7 == 2 )
        v17 = v11 + qword_140E37E50 + 56216;
      else
        v17 = v12 + 56216;
      if ( *(__int64 *)(v17 + 8 * v7) <= 0
        || *((_DWORD *)v5 + v7) == a3 && *(_QWORD *)(v12 + 8 * v7 + 56240) <= v5[v7 + 2] )
      {
        v15 = 0;
        goto LABEL_11;
      }
      v15 = 1;
      if ( v14 )
      {
        v20 = v41;
      }
      else
      {
        v5[7] = KeQueryUnbiasedInterruptTimePrecise(&QpcTimeStamp);
        QpcTimeStamp = (unsigned __int64)KeGetCurrentThread();
        v30 = *(_DWORD *)(QpcTimeStamp + 340);
        v20 = 1;
        v41 = 1;
        v43 = v30;
      }
      v27 = MiProcessLargeCoalesceCandidates(a1, v7, (__int64)&v33);
      v16 = v42;
      v19 = v27;
      v12 = v38;
      v11 = v31;
      if ( v27 != -1073741267 )
        break;
      v5 = a5;
      v14 = v41;
    }
    if ( v27 != 261 )
      goto LABEL_14;
LABEL_11:
    v18 = v16 + 1;
    v42 = v18;
    if ( v18 == 3 )
      break;
    for ( i = v18; i > (unsigned int)v7; --i )
    {
      v15 = MiLargeCoalesceCandidatesExist(&v33, i);
      if ( !v15 )
        break;
      if ( !v24 )
      {
        v28 = KeQueryUnbiasedInterruptTimePrecise(&QpcTimeStamp);
        v41 = 1;
        a5[7] = v28;
        QpcTimeStamp = (unsigned __int64)KeGetCurrentThread();
        v43 = *(_DWORD *)(QpcTimeStamp + 340);
      }
      v29 = MiProcessLargeCoalesceCandidates(a1, i, (__int64)&v33);
      v19 = v29;
      if ( v29 == -1073741267 )
      {
        ++i;
      }
      else if ( v29 != 261 )
      {
        goto LABEL_13;
      }
    }
    v25 = MiCheckLargePagesExist(&v33);
    v5 = a5;
    v14 = v41;
    v16 = v42;
    v12 = v38;
    v11 = v31;
    if ( v25 )
    {
      v19 = 255;
      v20 = v41;
      goto LABEL_14;
    }
  }
  v19 = 261;
LABEL_13:
  v20 = v41;
LABEL_14:
  v21 = 6 * v7;
  if ( v20 )
  {
    MiAccumulateTimeBoundTime(v32, 1LL);
    _InterlockedIncrement((volatile signed __int32 *)&a1[v21 + 2112]);
  }
  if ( v19 == 258 )
  {
    if ( !QpcTimeStamp || (v26 = a1 + 2113, v43 == *(_DWORD *)(QpcTimeStamp + 340)) )
      v26 = (_QWORD *)((char *)a1 + 16900);
    _InterlockedIncrement((volatile signed __int32 *)&v26[v21]);
  }
  else if ( v19 == 255 )
  {
    _InterlockedIncrement((volatile signed __int32 *)&a1[v21 + 2113] + 1);
    return 1;
  }
  return v6;
}
