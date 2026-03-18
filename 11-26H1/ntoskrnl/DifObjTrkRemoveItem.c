/*
 * XREFs of DifObjTrkRemoveItem @ 0x1403ADC70
 * Callers:
 *     KiSwapThread @ 0x14023C0A0 (KiSwapThread.c)
 *     ExDeleteTimer @ 0x1403AABC0 (ExDeleteTimer.c)
 *     KiObjTrkTimerUntrack @ 0x1403AB700 (KiObjTrkTimerUntrack.c)
 *     KiSetTimerEx @ 0x1403ABF20 (KiSetTimerEx.c)
 *     KeSetTimerEx @ 0x1403AC190 (KeSetTimerEx.c)
 *     KeSetTimer @ 0x1403AC590 (KeSetTimer.c)
 *     KiCancelTimer @ 0x1403AD2D0 (KiCancelTimer.c)
 *     KeCancelTimer @ 0x1403AD790 (KeCancelTimer.c)
 *     MmUnlockPages @ 0x140410C10 (MmUnlockPages.c)
 *     ExDeleteResourceLite @ 0x140474A20 (ExDeleteResourceLite.c)
 *     ExDeletePagedLookasideList @ 0x1404BCAF0 (ExDeletePagedLookasideList.c)
 *     ExDeleteNPagedLookasideList @ 0x1404BCB50 (ExDeleteNPagedLookasideList.c)
 *     ExDeleteLookasideListEx @ 0x1404BCBF0 (ExDeleteLookasideListEx.c)
 * Callees:
 *     RtlDeleteElementGenericTableAvl @ 0x1403B8A60 (RtlDeleteElementGenericTableAvl.c)
 *     RtlGetElementGenericTableAvl @ 0x1404CA470 (RtlGetElementGenericTableAvl.c)
 *     DifIsValidTrackingObject @ 0x14064ADB4 (DifIsValidTrackingObject.c)
 *     DifObjTrkGetPluginContext @ 0x14064AEAC (DifObjTrkGetPluginContext.c)
 *     DifAcquireSpinLockAtDpcLevelSafe @ 0x14064D16C (DifAcquireSpinLockAtDpcLevelSafe.c)
 *     DifReleaseSpinLockFromDpcLevelSafe @ 0x14064D224 (DifReleaseSpinLockFromDpcLevelSafe.c)
 *     MmGetVaTypeForVerifier @ 0x1406F38B0 (MmGetVaTypeForVerifier.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

BOOLEAN __fastcall DifObjTrkRemoveItem(__int64 a1, _RTL_BALANCED_LINKS *a2, unsigned int a3)
{
  __int64 v3; // r14
  BOOLEAN v4; // bp
  unsigned int v6; // esi
  unsigned int *PluginContext; // r15
  int VaTypeForVerifier; // eax
  __int64 v9; // rdx
  RTL_AVL_TABLE *v10; // rbx
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
  v9 = 120LL * VaTypeForVerifier;
  v10 = (RTL_AVL_TABLE *)((char *)&stru_140E27B08.1144 + v9);
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
  DifAcquireSpinLockAtDpcLevelSafe(&v17, v9, stru_140E27B08.Spare35);
  if ( DifObjTrkInitialized )
  {
    v4 = RtlDeleteElementGenericTableAvl(v10, Buffer);
    if ( v4 )
    {
      --dword_140E28278;
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
  DifReleaseSpinLockFromDpcLevelSafe(&v17, stru_140E27B08.Spare35);
  return v4;
}
