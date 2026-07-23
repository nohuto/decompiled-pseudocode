/*
 * XREFs of DifObjTrkRemoveItem @ 0x1403B7980
 * Callers:
 *     KiSwapThread @ 0x14023DA00 (KiSwapThread.c)
 *     ExDeleteTimer @ 0x1403B48D0 (ExDeleteTimer.c)
 *     KiObjTrkTimerUntrack @ 0x1403B5410 (KiObjTrkTimerUntrack.c)
 *     KiSetTimerEx @ 0x1403B5C30 (KiSetTimerEx.c)
 *     KeSetTimerEx @ 0x1403B5EA0 (KeSetTimerEx.c)
 *     KeSetTimer @ 0x1403B62A0 (KeSetTimer.c)
 *     KiCancelTimer @ 0x1403B6FE0 (KiCancelTimer.c)
 *     KeCancelTimer @ 0x1403B74A0 (KeCancelTimer.c)
 *     MmUnlockPages @ 0x140410330 (MmUnlockPages.c)
 *     ExDeleteResourceLite @ 0x14046E1A0 (ExDeleteResourceLite.c)
 *     ExDeletePagedLookasideList @ 0x1404B62D0 (ExDeletePagedLookasideList.c)
 *     ExDeleteNPagedLookasideList @ 0x1404B6330 (ExDeleteNPagedLookasideList.c)
 *     ExDeleteLookasideListEx @ 0x1404B63D0 (ExDeleteLookasideListEx.c)
 * Callees:
 *     RtlDeleteElementGenericTableAvl @ 0x1403C2960 (RtlDeleteElementGenericTableAvl.c)
 *     RtlGetElementGenericTableAvl @ 0x1404C3EA0 (RtlGetElementGenericTableAvl.c)
 *     DifIsValidTrackingObject @ 0x14064E994 (DifIsValidTrackingObject.c)
 *     DifObjTrkGetPluginContext @ 0x14064EA8C (DifObjTrkGetPluginContext.c)
 *     DifAcquireSpinLockAtDpcLevelSafe @ 0x140650D4C (DifAcquireSpinLockAtDpcLevelSafe.c)
 *     DifReleaseSpinLockFromDpcLevelSafe @ 0x140650E04 (DifReleaseSpinLockFromDpcLevelSafe.c)
 *     MmGetVaTypeForVerifier @ 0x1406F8520 (MmGetVaTypeForVerifier.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

BOOLEAN __fastcall DifObjTrkRemoveItem(__int64 a1, _RTL_BALANCED_LINKS *a2, unsigned int a3)
{
  __int64 v3; // r14
  BOOLEAN v4; // bp
  unsigned int v6; // esi
  unsigned int *PluginContext; // r15
  int VaTypeForVerifier; // eax
  __int64 v9; // rdx
  _RTL_AVL_TABLE *v10; // rbx
  __int64 v11; // rax
  char *v12; // rax
  unsigned int NumberGenericTableElements; // ecx
  PVOID ElementGenericTableAvl; // rax
  _RTL_BALANCED_LINKS *v15; // rdi
  int v17; // [rsp+20h] [rbp-68h] BYREF
  _DWORD Buffer[2]; // [rsp+28h] [rbp-60h] BYREF
  _RTL_BALANCED_LINKS *v19; // [rsp+30h] [rbp-58h]
  char *v20; // [rsp+38h] [rbp-50h]

  v3 = a3;
  Buffer[1] = 0;
  v4 = 0;
  LOWORD(v17) = 0;
  v6 = a1;
  if ( KeGetCurrentIrql() > 2u )
    return 0;
  if ( (int)DifIsValidTrackingObject(a1, a2, a3, 0LL, v17) < 0 )
    return 0;
  PluginContext = (unsigned int *)DifObjTrkGetPluginContext(v6);
  VaTypeForVerifier = MmGetVaTypeForVerifier(a2);
  if ( VaTypeForVerifier == 5 )
    return 0;
  v9 = 15LL * VaTypeForVerifier;
  v10 = (_RTL_AVL_TABLE *)&stru_140E27C48.Spare35[v9];
  if ( !v10->NumberGenericTableElements || a2 < v10[1].BalancedRoot.Parent || a2 > v10[1].BalancedRoot.LeftChild )
    return 0;
  Buffer[0] = v6;
  v19 = a2;
  v11 = *PluginContext;
  if ( (_DWORD)v11 )
    v12 = (char *)a2 + v11;
  else
    v12 = (char *)a2 + v3;
  v20 = v12;
  DifAcquireSpinLockAtDpcLevelSafe(&v17, v9 * 8, &stru_140E27C48.InGlobalUpdateVpThreadPriorityList);
  if ( DifObjTrkInitialized )
  {
    v4 = RtlDeleteElementGenericTableAvl(v10, Buffer);
    if ( v4 )
    {
      --dword_140E28378;
      NumberGenericTableElements = v10->NumberGenericTableElements;
      if ( NumberGenericTableElements )
      {
        if ( NumberGenericTableElements == 1 )
        {
          ElementGenericTableAvl = RtlGetElementGenericTableAvl(v10, 0);
          v10[1].BalancedRoot.Parent = (_RTL_BALANCED_LINKS *)*((_QWORD *)ElementGenericTableAvl + 1);
          v10[1].BalancedRoot.LeftChild = (_RTL_BALANCED_LINKS *)*((_QWORD *)ElementGenericTableAvl + 1);
        }
        else
        {
          v15 = v19;
          if ( v19 <= v10[1].BalancedRoot.Parent )
            v10[1].BalancedRoot.Parent = (_RTL_BALANCED_LINKS *)*((_QWORD *)RtlGetElementGenericTableAvl(v10, 0) + 1);
          if ( v15 >= v10[1].BalancedRoot.LeftChild )
            v10[1].BalancedRoot.LeftChild = (_RTL_BALANCED_LINKS *)*((_QWORD *)RtlGetElementGenericTableAvl(
                                                                                 v10,
                                                                                 v10->NumberGenericTableElements - 1)
                                                                   + 1);
        }
      }
      else
      {
        v10[1].BalancedRoot.LeftChild = 0LL;
        v10[1].BalancedRoot.Parent = 0LL;
      }
    }
  }
  DifReleaseSpinLockFromDpcLevelSafe(&v17, &stru_140E27C48.InGlobalUpdateVpThreadPriorityList);
  return v4;
}
