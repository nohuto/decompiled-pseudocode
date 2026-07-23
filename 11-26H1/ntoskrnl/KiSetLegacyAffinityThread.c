/*
 * XREFs of KiSetLegacyAffinityThread @ 0x14025BD0C
 * Callers:
 *     KeSetAffinityThread @ 0x1405EE9A0 (KeSetAffinityThread.c)
 *     NtSetInformationThread @ 0x14094C4F0 (NtSetInformationThread.c)
 * Callees:
 *     KiSetUserAffinityThread @ 0x14022C114 (KiSetUserAffinityThread.c)
 *     ?RtlpAndAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z @ 0x14025BF70 (-RtlpAndAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402BE490 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1402D0030 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     KiProcessDeferredReadyList @ 0x14037E6D0 (KiProcessDeferredReadyList.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiCpuPartitionCheckAffinitization @ 0x1405F6B2C (KiCpuPartitionCheckAffinitization.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall KiSetLegacyAffinityThread(__int64 a1, __int64 a2)
{
  __int64 v4; // r13
  __int64 v5; // r14
  char v6; // r12
  __int64 v7; // rcx
  char CurrentIrql; // r15
  __int64 v9; // rbx
  unsigned __int16 Size; // r9
  unsigned __int16 i; // cx
  _WORD *v12; // rcx
  __int64 v13; // r8
  struct _KAFFINITY_EX *v15; // r8
  unsigned __int16 Count; // r9
  unsigned __int16 v17; // r10
  struct _KAFFINITY_EX *v18; // r11
  unsigned __int16 j; // dx
  __int64 v20; // [rsp+28h] [rbp-E0h] BYREF
  struct _KPRCB *CurrentPrcb; // [rsp+30h] [rbp-D8h]
  struct _KAFFINITY_EX v22; // [rsp+38h] [rbp-D0h] BYREF

  memset_0(&v22.8, 0, sizeof(v22.8));
  v4 = *(_QWORD *)(a1 + 544);
  v5 = 0LL;
  v6 = 0;
  if ( !a2 )
    return v5;
  *(_QWORD *)&v22.Count = 2097153LL;
  memset_0(&v22.8, 0, sizeof(v22.8));
  v20 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v7) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(v7, 2LL);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(v4 + 64));
  v9 = *(unsigned __int16 *)(a1 + 560);
  if ( v22.Count > (unsigned __int16)v9 )
    goto LABEL_7;
  Size = v22.Size;
  if ( v22.Size > (unsigned __int16)v9 )
  {
    v22.Count = v9 + 1;
LABEL_7:
    v22.Bitmap[v9] |= a2;
    Size = v22.Size;
  }
  RtlpAndAffinityEx(&v22, (struct _KAFFINITY_EX *)&stru_140FC11F0.WaitRegister, &v22, Size);
  for ( i = 0; i < v22.Count; ++i )
  {
    if ( v22.Bitmap[i] )
    {
      v15 = *(struct _KAFFINITY_EX **)(v4 + 80);
      Count = v15->Count;
      if ( v22.Count >= v15->Count )
      {
        v17 = v15->Count;
        v18 = &v22;
        Count = v22.Count;
      }
      else
      {
        v17 = v22.Count;
        v18 = *(struct _KAFFINITY_EX **)(v4 + 80);
      }
      for ( j = 0; j < v17; ++j )
      {
        if ( (v22.Bitmap[j] & v15->Bitmap[j]) != v22.Bitmap[j] )
          goto LABEL_17;
      }
      if ( v18 != v15 )
      {
        while ( j < Count )
        {
          if ( v22.Bitmap[j] )
            goto LABEL_17;
          ++j;
        }
      }
      v12 = *(_WORD **)(a1 + 552);
      if ( (unsigned __int16)v9 < *v12 )
        v5 = *(_QWORD *)&v12[4 * v9 + 4];
      KiSetUserAffinityThread(a1, (__int64)&v20, &v22.Count, CurrentIrql);
      v6 = 1;
      break;
    }
  }
LABEL_17:
  ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v4 + 64));
  LOBYTE(v13) = CurrentIrql;
  KiProcessDeferredReadyList(CurrentPrcb, &v20, v13);
  if ( v6 && (WORD2(xmmword_140FC0C10) & 0x200) != 0 )
    KiCpuPartitionCheckAffinitization(v4, a1, &v22, 0LL);
  return v5;
}
