/*
 * XREFs of MiCoalesceFreeLargePages @ 0x1403D3124
 * Callers:
 *     MiProcessLargeCoalesceBitmapCandidates @ 0x1403D2B10 (MiProcessLargeCoalesceBitmapCandidates.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiPageToNode @ 0x140288C70 (MiPageToNode.c)
 *     MiIssuePageHeatList @ 0x1402D58BC (MiIssuePageHeatList.c)
 *     MiSafeLockPageAtDpc @ 0x14035A998 (MiSafeLockPageAtDpc.c)
 *     MiChangePageAttributeLargeFreeZeroPage @ 0x1403D1950 (MiChangePageAttributeLargeFreeZeroPage.c)
 *     MiLargePfnPromoteCandidate @ 0x1403D3470 (MiLargePfnPromoteCandidate.c)
 *     MiLargePagePromote @ 0x140473560 (MiLargePagePromote.c)
 *     MiAddPageToHeatList @ 0x14048AF80 (MiAddPageToHeatList.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall MiCoalesceFreeLargePages(__int64 a1, ULONG_PTR a2, unsigned int a3, unsigned __int8 a4, int a5)
{
  unsigned __int64 v5; // r13
  __int64 v7; // rsi
  unsigned __int64 v8; // r12
  __int64 v9; // r14
  unsigned __int64 v10; // r15
  unsigned __int64 v11; // r12
  int v12; // ebx
  __int64 v13; // rdi
  unsigned __int64 v14; // rax
  unsigned int v15; // r9d
  unsigned int *v16; // r8
  unsigned int v17; // edx
  unsigned int v18; // eax
  unsigned int v19; // r10d
  ULONG_PTR v20; // r12
  __int64 v21; // rdi
  __int64 CurrentIrql; // rcx
  unsigned __int64 v23; // rbx
  __int64 v24; // r15
  unsigned int v25; // r12d
  ULONG_PTR v26; // rdi
  __int64 j; // rax
  __int64 v29; // rdi
  unsigned __int64 i; // rbx
  unsigned __int64 v31; // rdx
  ULONG_PTR BugCheckParameter2; // [rsp+38h] [rbp-49h]
  unsigned int BugCheckParameter2a; // [rsp+38h] [rbp-49h]
  int v36; // [rsp+48h] [rbp-39h]
  int v37; // [rsp+4Ch] [rbp-35h] BYREF
  unsigned int v38; // [rsp+50h] [rbp-31h]
  unsigned __int64 v39; // [rsp+58h] [rbp-29h]
  __int64 v40; // [rsp+60h] [rbp-21h]
  __int128 v41; // [rsp+68h] [rbp-19h] BYREF
  __int128 v42; // [rsp+78h] [rbp-9h] BYREF
  __int64 v43; // [rsp+88h] [rbp+7h]

  v5 = a4;
  v43 = 0LL;
  v40 = a1;
  v7 = MiPageSizes[a3];
  v36 = MiLargePageShifts[a3];
  v41 = 0LL;
  v38 = a3 - 1;
  v8 = MiPageSizes[a3 - 1];
  v42 = 0LL;
  v9 = 48 * a2 - 0x220000000000LL;
  v10 = 0LL;
  v11 = v8 >> v36;
  v12 = MiPageToNode(a2);
  v37 = 0;
  BugCheckParameter2 = a2;
  v39 = v11;
  if ( v11 )
  {
    v13 = v9;
    while ( (unsigned int)MiLargePfnPromoteCandidate(v40, v13, a3)
         && v12 == (unsigned int)MiPageToNode(BugCheckParameter2) )
    {
      v14 = *(unsigned int *)(v13 + 32);
      ++v10;
      BugCheckParameter2 += v7;
      v13 += 48 * v7;
      ++*((_DWORD *)&v41 + ((v14 >> 22) & 3));
      if ( v10 >= v39 )
      {
        v11 = v39;
        goto LABEL_7;
      }
    }
    return 0LL;
  }
LABEL_7:
  if ( v10 != v11 )
    return 0LL;
  v15 = 0;
  v16 = (unsigned int *)&v41;
  v17 = 0;
  v18 = 0;
  v19 = 1;
  do
  {
    if ( *v16 )
    {
      ++v17;
      if ( v18 != 3 && v15 < *v16 )
      {
        v15 = *v16;
        v19 = v18;
      }
    }
    ++v18;
    ++v16;
  }
  while ( v18 < 4 );
  BugCheckParameter2a = v19;
  if ( v17 > 1 )
  {
    v29 = v9;
    for ( i = 0LL; i < v11; ++i )
    {
      if ( !(unsigned int)MiChangePageAttributeLargeFreeZeroPage(v29, a3, v19, v5) )
        return 0LL;
      v19 = BugCheckParameter2a;
      v29 += 48 * v7;
    }
  }
  v20 = a2;
  v21 = v9;
  if ( (unsigned __int8)v5 < 2u )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (_BYTE)CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
  }
  v23 = 0LL;
  v24 = 48 * v7;
  while ( v23 < v39 )
  {
    if ( v21 == v9 )
    {
      if ( MiSafeLockPageAtDpc(v20) == 17 )
      {
LABEL_24:
        v25 = 0;
LABEL_25:
        v26 = a2;
        goto LABEL_26;
      }
    }
    else if ( _interlockedbittestandset64((volatile signed __int32 *)(v21 + 24), 0x3FuLL) )
    {
      v25 = 1;
      goto LABEL_25;
    }
    ++v23;
    if ( !(unsigned int)MiLargePfnPromoteCandidate(v40, v21, a3) )
      goto LABEL_24;
    if ( ((*(_DWORD *)(v21 + 32) >> 22) & 3) != BugCheckParameter2a )
    {
      v26 = a2;
      goto LABEL_50;
    }
    v21 += v24;
    v20 += v7;
  }
  v26 = a2;
  LODWORD(v42) = a5 != 0 ? 12 : 10;
  *((_QWORD *)&v42 + 1) = qword_140E2D950;
  MiLargePagePromote(a2, v38, (_DWORD)v16, 0, (__int64)&v37);
LABEL_50:
  v25 = 0;
LABEL_26:
  for ( j = v9 + 48 * ((v23 << v36) - v7); ; j -= v24 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(j + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( j == v9 )
      break;
  }
  if ( (unsigned __int8)v5 < 2u )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v5);
    __writecr8(v5);
  }
  if ( v37 )
  {
    MiAddPageToHeatList(&v42, v26, v38);
    if ( DWORD1(v42) )
      MiIssuePageHeatList(&v42, v31);
  }
  return v25;
}
