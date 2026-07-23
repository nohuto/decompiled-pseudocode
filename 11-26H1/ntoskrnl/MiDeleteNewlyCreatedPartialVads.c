/*
 * XREFs of MiDeleteNewlyCreatedPartialVads @ 0x1408853D4
 * Callers:
 *     MiAllocateSplitVads @ 0x140AC258C (MiAllocateSplitVads.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     MiReadVadFlags @ 0x14045E590 (MiReadVadFlags.c)
 *     MiComputeVadCharges @ 0x1404BDF20 (MiComputeVadCharges.c)
 *     MiUpControlAreaRefs @ 0x1404D7C38 (MiUpControlAreaRefs.c)
 *     Feature_Servicing_Mm_RotateSplitResAvailLeak__private_IsEnabledDeviceUsageNoInline @ 0x140711D14 (Feature_Servicing_Mm_RotateSplitResAvailLeak__private_IsEnabledDeviceUsageNoInline.c)
 *     MiReturnVadCharges @ 0x140997954 (MiReturnVadCharges.c)
 *     MiRemoveSharedCommitNode @ 0x140998C50 (MiRemoveSharedCommitNode.c)
 *     MiReleaseVadEventBlocks @ 0x140A01D8C (MiReleaseVadEventBlocks.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeleteNewlyCreatedPartialVads(__int64 a1)
{
  void **v1; // rdi
  int v2; // ebx
  _KPROCESS *Process; // rbp
  void **v4; // rsi
  void *v5; // rcx
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+30h] [rbp-18h]

  v1 = *(void ***)a1;
  v2 = *(_DWORD *)(a1 + 40);
  v6 = 0LL;
  v7 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( v1 )
  {
    do
    {
      v4 = (void **)*v1;
      if ( (unsigned int)Feature_Servicing_Mm_RotateSplitResAvailLeak__private_IsEnabledDeviceUsageNoInline() )
      {
        if ( !v4 && (v2 & 2) == 0 )
          goto LABEL_18;
        MiComputeVadCharges((__int64)v1, (__int64)&v6);
      }
      else
      {
        MiComputeVadCharges((__int64)v1, (__int64)&v6);
        if ( !v4 && (v2 & 2) == 0 )
        {
          v7 = 0LL;
          *((_QWORD *)&v6 + 1) = 0LL;
        }
      }
      MiReturnVadCharges(v1, &v6);
      if ( !v4 && (v2 & 2) == 0 )
        goto LABEL_18;
      if ( (MiReadVadFlags((__int64)v1) & 0x80000) == 0 )
      {
        v5 = v1[17];
        if ( v5 )
          ObfReferenceObjectWithTag(v5, 0x63536D4Du);
        if ( !v4 && (v2 & 4) == 0 )
          goto LABEL_18;
        MiUpControlAreaRefs((__int64)v1, 0);
      }
      if ( v4 )
        goto LABEL_19;
LABEL_18:
      if ( (v2 & 1) != 0 )
      {
LABEL_19:
        if ( (MiReadVadFlags((__int64)v1) & 0x80000) == 0 )
          MiRemoveSharedCommitNode(*(_QWORD *)v1[10], Process, 0LL);
      }
      MiReleaseVadEventBlocks(v1);
      ExFreePoolWithTag(v1, 0);
      v1 = v4;
    }
    while ( v4 );
  }
}
