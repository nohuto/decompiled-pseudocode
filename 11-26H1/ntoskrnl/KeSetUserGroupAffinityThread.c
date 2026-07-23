/*
 * XREFs of KeSetUserGroupAffinityThread @ 0x1402F56D4
 * Callers:
 *     MiMoveBackgroundZeroThreads @ 0x1402F53B0 (MiMoveBackgroundZeroThreads.c)
 *     MiAssignBackgroundZeroThreadToProcessor @ 0x1402F5E34 (MiAssignBackgroundZeroThreadToProcessor.c)
 * Callees:
 *     KiSetUserAffinityThread @ 0x14022C114 (KiSetUserAffinityThread.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402BE490 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1402D0030 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     KiProcessDeferredReadyList @ 0x14037E6D0 (KiProcessDeferredReadyList.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiCpuPartitionCheckAffinitization @ 0x1405F6B2C (KiCpuPartitionCheckAffinitization.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall KeSetUserGroupAffinityThread(__int64 a1, __int64 *a2)
{
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 v7; // rcx
  __int64 v8; // r14
  unsigned __int8 CurrentIrql; // di
  char *v10; // r9
  unsigned __int16 v11; // r8
  unsigned __int16 v12; // bx
  unsigned __int16 v13; // si
  __int64 *v14; // r11
  unsigned __int16 i; // dx
  unsigned __int16 j; // cx
  unsigned __int16 v17; // ax
  unsigned __int16 v18; // cx
  __int64 v19; // r10
  signed __int64 v20; // r9
  _QWORD *v21; // rdx
  __int64 v22; // rax
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v24; // r8
  _QWORD v25[2]; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v26; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v27[33]; // [rsp+38h] [rbp-C8h] BYREF

  memset_0(v27, 0, 0x100uLL);
  v4 = *((unsigned __int16 *)a2 + 4);
  v25[0] = 0LL;
  if ( (unsigned __int16)v4 >= (unsigned __int16)KiActiveGroups )
    return 3221225485LL;
  v5 = *a2;
  if ( (*(_QWORD *)((char *)&stru_140FC11F0.116 + 8 * v4 + 4) & *a2) != *a2
    || *((_WORD *)a2 + 5) | (unsigned __int16)(*((_WORD *)a2 + 6) | *((_WORD *)a2 + 7)) )
  {
    return 3221225485LL;
  }
  v26 = 2097153LL;
  memset_0(v27, 0, 0x100uLL);
  v7 = *((unsigned __int16 *)a2 + 4);
  if ( !(_WORD)v7 )
    goto LABEL_6;
  if ( WORD1(v26) > (unsigned __int16)v7 )
  {
    LOWORD(v26) = v7 + 1;
LABEL_6:
    v27[v7] |= v5;
  }
  v8 = *(_QWORD *)(a1 + 544);
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v7) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(v7, 2LL);
  }
  ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(v8 + 64));
  v10 = *(char **)(v8 + 80);
  v11 = *(_WORD *)v10;
  if ( (unsigned __int16)v26 >= *(_WORD *)v10 )
  {
    v12 = *(_WORD *)v10;
    v14 = &v26;
    v13 = v26;
  }
  else
  {
    v12 = v26;
    v13 = *(_WORD *)v10;
    v14 = *(__int64 **)(v8 + 80);
  }
  for ( i = 0; i < v12; ++i )
  {
    if ( (v27[i] & *(_QWORD *)&v10[8 * i + 8]) != v27[i] )
    {
LABEL_35:
      ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v8 + 64));
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
      return 3221225473LL;
    }
  }
  if ( v14 != (__int64 *)v10 )
  {
    while ( i < v13 )
    {
      if ( v27[i] )
        goto LABEL_35;
      ++i;
    }
  }
  for ( j = 0; j < (unsigned __int16)v26; ++j )
  {
    if ( v27[j] )
      goto LABEL_31;
  }
  v17 = WORD1(v26);
  v18 = 0;
  HIDWORD(v26) = 0;
  if ( v11 > WORD1(v26) )
    v11 = WORD1(v26);
  LOWORD(v26) = v11;
  if ( v11 )
  {
    v19 = v11;
    v20 = v10 - (char *)v27;
    v21 = v27;
    v18 = v11;
    do
    {
      *v21 = *(_QWORD *)((char *)v21 + v20 + 8);
      ++v21;
      --v19;
    }
    while ( v19 );
    v17 = WORD1(v26);
  }
  if ( v18 < v17 )
  {
    do
    {
      v22 = v18++;
      v27[v22] = 0LL;
    }
    while ( v18 < WORD1(v26) );
  }
LABEL_31:
  KiSetUserAffinityThread(a1, (__int64)v25, (unsigned __int16 *)&v26, CurrentIrql);
  CurrentPrcb = KeGetCurrentPrcb();
  ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v8 + 64));
  LOBYTE(v24) = CurrentIrql;
  KiProcessDeferredReadyList(CurrentPrcb, v25, v24);
  if ( (WORD2(xmmword_140FC0C10) & 0x200) != 0 )
    KiCpuPartitionCheckAffinitization(v8, a1, &v26, 0LL);
  return 0LL;
}
