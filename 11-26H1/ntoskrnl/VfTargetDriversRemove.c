/*
 * XREFs of VfTargetDriversRemove @ 0x1403B7C48
 * Callers:
 *     VfDriverUnloadImage @ 0x140C46D88 (VfDriverUnloadImage.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x1403B5A60 (ExFreeToNPagedLookasideList.c)
 *     VfUtilFreePoolCheckIRQL @ 0x1403B7740 (VfUtilFreePoolCheckIRQL.c)
 *     VfAvlLookupTreeNode @ 0x1403B7E8C (VfAvlLookupTreeNode.c)
 *     ViAvlAcquireTableLockAtDpcLevelSafe @ 0x1403B83D0 (ViAvlAcquireTableLockAtDpcLevelSafe.c)
 *     ViAvlRaiseIrqlSafe @ 0x1403B8438 (ViAvlRaiseIrqlSafe.c)
 *     VfAvlCleanupLockContext @ 0x1403B84FC (VfAvlCleanupLockContext.c)
 *     ViAvlReleaseTableLockFromDpcLevel @ 0x1403B8560 (ViAvlReleaseTableLockFromDpcLevel.c)
 *     RtlDeleteElementGenericTableAvl @ 0x1403B8A60 (RtlDeleteElementGenericTableAvl.c)
 *     ViTargetDriversFreeVerifiedData @ 0x140641790 (ViTargetDriversFreeVerifiedData.c)
 *     DifRemovePerDriverDataForPlugins @ 0x14064ACD0 (DifRemovePerDriverDataForPlugins.c)
 *     CarDeleteDriverRuleViolations @ 0x14064C3B0 (CarDeleteDriverRuleViolations.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 *     ViTargetRemovingCheckContiguousMemory @ 0x140C297E4 (ViTargetRemovingCheckContiguousMemory.c)
 *     ViTargetRemovingCheckEtwWmi @ 0x140C29870 (ViTargetRemovingCheckEtwWmi.c)
 *     VfPoolCheckForLeaks @ 0x140C3855C (VfPoolCheckForLeaks.c)
 *     VfThunkRemoveTargetNotify @ 0x140C47B1C (VfThunkRemoveTargetNotify.c)
 */

void __fastcall VfTargetDriversRemove(__int64 a1)
{
  unsigned __int64 v2; // rdi
  struct _SLIST_ENTRY *v3; // rsi
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
        --dword_140F08DA0;
      Buffer = v2;
      v14 = 1LL;
      if ( dword_140F08D98 == 1 )
        v11 = 0LL;
      else
        v11 = (v2 >> 12) % (unsigned int)dword_140F08D98;
      ViAvlRaiseIrqlSafe(&v15);
      v12 = 192 * v11;
      ViAvlAcquireTableLockAtDpcLevelSafe(v12 + qword_140F08D90, &v15);
      RtlDeleteElementGenericTableAvl((PRTL_AVL_TABLE)(v12 + qword_140F08D90), &Buffer);
      _InterlockedDecrement64(&qword_140F08D88);
      v3 = *(struct _SLIST_ENTRY **)(v12 + qword_140F08D90 + 112);
      *(_QWORD *)(v12 + qword_140F08D90 + 112) = 0LL;
      ViAvlReleaseTableLockFromDpcLevel(v12 + qword_140F08D90, &v15);
    }
    VfAvlCleanupLockContext(&v15);
    if ( v3 )
    {
      VfThunkRemoveTargetNotify(v17);
      if ( v18 )
        ViTargetDriversFreeVerifiedData(v18);
      if ( dword_140F08D9C == 1 )
        ExFreeToNPagedLookasideList((PPAGED_LOOKASIDE_LIST)&stru_140E27B08.ApcStateFill[32], v3);
      else
        VfUtilFreePoolCheckIRQL(v3);
    }
  }
}
