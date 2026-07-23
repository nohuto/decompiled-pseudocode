/*
 * XREFs of VfTargetDriversRemove @ 0x1403C1B48
 * Callers:
 *     VfDriverUnloadImage @ 0x140C4CD98 (VfDriverUnloadImage.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x1403BF960 (ExFreeToNPagedLookasideList.c)
 *     VfUtilFreePoolCheckIRQL @ 0x1403C1640 (VfUtilFreePoolCheckIRQL.c)
 *     VfAvlLookupTreeNode @ 0x1403C1D8C (VfAvlLookupTreeNode.c)
 *     ViAvlAcquireTableLockAtDpcLevelSafe @ 0x1403C22D0 (ViAvlAcquireTableLockAtDpcLevelSafe.c)
 *     ViAvlRaiseIrqlSafe @ 0x1403C2338 (ViAvlRaiseIrqlSafe.c)
 *     VfAvlCleanupLockContext @ 0x1403C23FC (VfAvlCleanupLockContext.c)
 *     ViAvlReleaseTableLockFromDpcLevel @ 0x1403C2460 (ViAvlReleaseTableLockFromDpcLevel.c)
 *     RtlDeleteElementGenericTableAvl @ 0x1403C2960 (RtlDeleteElementGenericTableAvl.c)
 *     ViTargetDriversFreeVerifiedData @ 0x140645370 (ViTargetDriversFreeVerifiedData.c)
 *     DifRemovePerDriverDataForPlugins @ 0x14064E8B0 (DifRemovePerDriverDataForPlugins.c)
 *     CarDeleteDriverRuleViolations @ 0x14064FF90 (CarDeleteDriverRuleViolations.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 *     ViTargetRemovingCheckContiguousMemory @ 0x140C2F7F4 (ViTargetRemovingCheckContiguousMemory.c)
 *     ViTargetRemovingCheckEtwWmi @ 0x140C2F880 (ViTargetRemovingCheckEtwWmi.c)
 *     VfPoolCheckForLeaks @ 0x140C3E56C (VfPoolCheckForLeaks.c)
 *     VfThunkRemoveTargetNotify @ 0x140C4DB2C (VfThunkRemoveTargetNotify.c)
 */

void __fastcall VfTargetDriversRemove(__int64 a1)
{
  unsigned __int64 v2; // rdi
  _SLIST_ENTRY *v3; // rsi
  __int64 v4; // rax
  __int64 v5; // rbx
  ULONG_PTR v6; // rsi
  void *v7; // rcx
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  unsigned __int64 v11; // rbx
  __int64 v12; // rbx
  unsigned __int64 Buffer; // [rsp+28h] [rbp-29h] BYREF
  __int64 v14; // [rsp+30h] [rbp-21h]
  __int128 v15; // [rsp+38h] [rbp-19h] BYREF
  __int64 v16; // [rsp+48h] [rbp-9h]
  _OWORD v17[4]; // [rsp+58h] [rbp+7h] BYREF
  __int64 v18; // [rsp+98h] [rbp+47h]

  memset_0(v17, 0, 0x48uLL);
  if ( !VfSafeMode && ViTargetInitialized )
  {
    v2 = *(_QWORD *)(a1 + 48);
    v3 = 0LL;
    v15 = 0LL;
    v16 = 0LL;
    BYTE12(v15) = 4;
    v4 = ((__int64 (__fastcall *)(void *, __int128 *, unsigned __int64, __int64, unsigned __int64, __int64))VfAvlLookupTreeNode)(
           &ViTargetDriversAvl,
           &v15,
           v2,
           1LL,
           Buffer,
           v14);
    v5 = v4;
    if ( v4 )
    {
      v6 = *(_QWORD *)(v4 + 64);
      if ( v6 )
      {
        ViTargetRemovingCheckEtwWmi(*(_QWORD *)(v4 + 64), v2);
        VfPoolCheckForLeaks(v6);
        ViTargetRemovingCheckContiguousMemory(v6);
        DifRemovePerDriverDataForPlugins(v6 + 96);
        CarDeleteDriverRuleViolations(*(_QWORD *)v5, *(_QWORD *)(v5 + 8));
      }
      v7 = *(void **)(v5 + 48);
      if ( v7 )
      {
        ExFreePoolWithTag(v7, 0x62436656u);
        *(_QWORD *)(v5 + 48) = 0LL;
      }
      v8 = *(_OWORD *)(v5 + 16);
      v17[0] = *(_OWORD *)v5;
      v9 = *(_OWORD *)(v5 + 32);
      v17[1] = v8;
      v10 = *(_OWORD *)(v5 + 48);
      v17[2] = v9;
      v18 = *(_QWORD *)(v5 + 64);
      v17[3] = v10;
      if ( v18 )
        --dword_140F09120;
      Buffer = v2;
      v14 = 1LL;
      if ( dword_140F09118 == 1 )
        v11 = 0LL;
      else
        v11 = (v2 >> 12) % (unsigned int)dword_140F09118;
      ViAvlRaiseIrqlSafe(&v15);
      v12 = 192 * v11;
      ViAvlAcquireTableLockAtDpcLevelSafe(v12 + qword_140F09110, &v15);
      RtlDeleteElementGenericTableAvl((PRTL_AVL_TABLE)(v12 + qword_140F09110), &Buffer);
      _InterlockedDecrement64(&qword_140F09108);
      v3 = *(_SLIST_ENTRY **)(v12 + qword_140F09110 + 112);
      *(_QWORD *)(v12 + qword_140F09110 + 112) = 0LL;
      ViAvlReleaseTableLockFromDpcLevel(v12 + qword_140F09110, &v15);
    }
    VfAvlCleanupLockContext(&v15);
    if ( v3 )
    {
      VfThunkRemoveTargetNotify(v17);
      if ( v18 )
        ViTargetDriversFreeVerifiedData(v18);
      if ( dword_140F0911C == 1 )
        ExFreeToNPagedLookasideList((PPAGED_LOOKASIDE_LIST)&stru_140E27C48.ApcStateFill[32], v3);
      else
        VfUtilFreePoolCheckIRQL(v3);
    }
  }
}
