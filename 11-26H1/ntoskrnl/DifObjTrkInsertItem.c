/*
 * XREFs of DifObjTrkInsertItem @ 0x14064AED0
 * Callers:
 *     ExpAddResourceToSystemResourceList @ 0x140260A5C (ExpAddResourceToSystemResourceList.c)
 *     MiProbeAndLockComplete @ 0x1403A0050 (MiProbeAndLockComplete.c)
 *     MiProbeAndLockPages @ 0x1403A016C (MiProbeAndLockPages.c)
 *     KeSetTimer @ 0x1403AC590 (KeSetTimer.c)
 *     KiObjTrkTimerPend @ 0x1403ADE18 (KiObjTrkTimerPend.c)
 *     ExAllocateTimerInternal2 @ 0x140456D20 (ExAllocateTimerInternal2.c)
 *     ExInitializeNPagedLookasideListInternal @ 0x140498C60 (ExInitializeNPagedLookasideListInternal.c)
 *     ExInitializePagedLookasideListInternal @ 0x140498DA0 (ExInitializePagedLookasideListInternal.c)
 *     ExInitializeLookasideListExInternal @ 0x140498FD0 (ExInitializeLookasideListExInternal.c)
 * Callees:
 *     RtlInsertElementGenericTableAvl @ 0x1403B88C0 (RtlInsertElementGenericTableAvl.c)
 *     DifIsValidTrackingObject @ 0x14064ADB4 (DifIsValidTrackingObject.c)
 *     DifObjTrkGetPluginContext @ 0x14064AEAC (DifObjTrkGetPluginContext.c)
 *     DifAcquireSpinLockAtDpcLevelSafe @ 0x14064D16C (DifAcquireSpinLockAtDpcLevelSafe.c)
 *     DifReleaseSpinLockFromDpcLevelSafe @ 0x14064D224 (DifReleaseSpinLockFromDpcLevelSafe.c)
 *     MmGetVaTypeForVerifier @ 0x1406F38B0 (MmGetVaTypeForVerifier.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

__int64 __fastcall DifObjTrkInsertItem(unsigned int a1, unsigned __int64 a2, unsigned int a3)
{
  __int64 v3; // r15
  __int64 result; // rax
  unsigned int *PluginContext; // r14
  int VaTypeForVerifier; // eax
  __int64 v9; // rdx
  RTL_AVL_TABLE *v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rax
  _RTL_BALANCED_LINKS *v13; // rax
  BOOLEAN NewElement[4]; // [rsp+20h] [rbp-30h] BYREF
  _WORD v15[2]; // [rsp+24h] [rbp-2Ch] BYREF
  _DWORD Buffer[2]; // [rsp+28h] [rbp-28h] BYREF
  _RTL_BALANCED_LINKS *v17; // [rsp+30h] [rbp-20h]
  __int64 v18; // [rsp+38h] [rbp-18h]

  v3 = a3;
  Buffer[1] = 0;
  v15[0] = 0;
  if ( KeGetCurrentIrql() <= 2u )
  {
    result = DifIsValidTrackingObject(a1, a2);
    if ( (int)result < 0 )
      return result;
    PluginContext = (unsigned int *)DifObjTrkGetPluginContext(a1);
    if ( PluginContext )
    {
      if ( (unsigned int)dword_140E28278 >= (unsigned __int64)qword_140E28280 )
        return 3221225998LL;
      VaTypeForVerifier = MmGetVaTypeForVerifier(a2);
      if ( VaTypeForVerifier == 5 )
        return 3221225485LL;
      Buffer[0] = a1;
      v10 = (RTL_AVL_TABLE *)(&stru_140E27B08.1144 + 15 * VaTypeForVerifier);
      v17 = (_RTL_BALANCED_LINKS *)a2;
      v11 = *PluginContext;
      if ( (_DWORD)v11 )
        v12 = a2 + v11;
      else
        v12 = a2 + v3;
      v18 = v12;
      NewElement[0] = 0;
      DifAcquireSpinLockAtDpcLevelSafe(v15, v9, stru_140E27B08.Spare35);
      if ( !DifObjTrkInitialized )
        goto LABEL_19;
      RtlInsertElementGenericTableAvl(v10, Buffer, 0x18u, NewElement);
      if ( !NewElement[0] )
        goto LABEL_19;
      ++dword_140E28278;
      v13 = v17;
      if ( v10->NumberGenericTableElements == 1 )
      {
        v10[1].BalancedRoot.Parent = v17;
      }
      else
      {
        if ( v17 < v10[1].BalancedRoot.Parent )
          v10[1].BalancedRoot.Parent = v17;
        if ( v13 <= v10[1].BalancedRoot.LeftChild )
          goto LABEL_19;
      }
      v10[1].BalancedRoot.LeftChild = v13;
LABEL_19:
      DifReleaseSpinLockFromDpcLevelSafe(v15, stru_140E27B08.Spare35);
      return 0LL;
    }
  }
  return 3221225659LL;
}
