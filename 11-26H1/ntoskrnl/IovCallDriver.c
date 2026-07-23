/*
 * XREFs of IovCallDriver @ 0x1404ECCDC
 * Callers:
 *     IofCallDriver @ 0x140264B10 (IofCallDriver.c)
 *     IofCallDriverSpecifyReturn @ 0x1404D5EB0 (IofCallDriverSpecifyReturn.c)
 * Callees:
 *     IopfCallDriver @ 0x140264B50 (IopfCallDriver.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     VfBugCheckNoStackUsage @ 0x140646BD0 (VfBugCheckNoStackUsage.c)
 *     IovCallDriverNoIrpTracking @ 0x140C30834 (IovCallDriverNoIrpTracking.c)
 *     IovCallDriverWithStackBuffer @ 0x140C3084C (IovCallDriverWithStackBuffer.c)
 *     IovValidateDeviceObject @ 0x140C30C5C (IovValidateDeviceObject.c)
 *     VfAfterCallDriver @ 0x140C320AC (VfAfterCallDriver.c)
 *     VfBeforeCallDriver @ 0x140C322E8 (VfBeforeCallDriver.c)
 *     VfIrpAllocateCallDriverData @ 0x140C32580 (VfIrpAllocateCallDriverData.c)
 *     VfIrpReleaseCallDriverData @ 0x140C325E0 (VfIrpReleaseCallDriverData.c)
 */

__int64 __fastcall IovCallDriver(__int64 a1, ULONG_PTR a2, __int64 a3)
{
  unsigned __int8 CurrentIrql; // bl
  _QWORD *v8; // rdi
  __int64 v9; // rbx
  __int64 v10; // rax
  unsigned int v11; // ebx
  PVOID Entry; // [rsp+58h] [rbp+20h] BYREF

  Entry = 0LL;
  if ( !IovpEnabledInThePast && (VfRuleClasses & 0x20) == 0
    || ViVerifyAllDrivers != 1 && (*(_DWORD *)(a2 + 16) & 0x40000000) == 0 )
  {
    return IopfCallDriver(a1, a2);
  }
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > 2u && !_bittest((const signed __int32 *)&VfRuleClasses, 0x16u) )
  {
    KeAcquireSpinLockRaiseToDpc(&VfBugcheckTmpDataLock);
    qword_140FF0ED8 = CurrentIrql;
    *(_OWORD *)&xmmword_140FF0EE0 = 0LL;
    *(_QWORD *)&VfBugcheckTmpData = 201LL;
    BugCheckParameter1 = 16LL;
    VfBugCheckNoStackUsage();
  }
  if ( !(unsigned int)VfIrpAllocateCallDriverData(a2, &Entry) )
    return IovCallDriverWithStackBuffer(a1, a2, a3);
  v8 = Entry;
  if ( !Entry )
    return IovCallDriverNoIrpTracking(a1, a2);
  *((_QWORD *)Entry + 20) = a1;
  v8[21] = a2;
  v8[22] = a3;
  if ( *(_WORD *)v8[21] != 6 && !_bittest((const signed __int32 *)&VfRuleClasses, 0x16u) )
  {
    *((_BYTE *)v8 + 157) = KeAcquireSpinLockRaiseToDpc(&VfBugcheckTmpDataLock);
    qword_140FF0ED8 = v8[21];
    *(_QWORD *)&VfBugcheckTmpData = 201LL;
    BugCheckParameter1 = 3LL;
    *(_OWORD *)&xmmword_140FF0EE0 = 0LL;
    VfBugCheckNoStackUsage();
  }
  if ( !(unsigned __int8)IovValidateDeviceObject(a1) && !_bittest((const signed __int32 *)&VfRuleClasses, 0x16u) )
  {
    *((_BYTE *)v8 + 157) = KeAcquireSpinLockRaiseToDpc(&VfBugcheckTmpDataLock);
    qword_140FF0ED8 = v8[20];
    *(_QWORD *)&VfBugcheckTmpData = 201LL;
    BugCheckParameter1 = 4LL;
    *(_OWORD *)&xmmword_140FF0EE0 = 0LL;
    VfBugCheckNoStackUsage();
  }
  v9 = *(_QWORD *)(a2 + 184);
  if ( !*(_BYTE *)(v9 - 72) )
  {
    v10 = *(_QWORD *)(v9 - 24);
    if ( v10 )
    {
      if ( (*(_DWORD *)(v10 + 80) & 0x204000) == 0x204000 && !_bittest((const signed __int32 *)&VfRuleClasses, 0x16u) )
      {
        *((_BYTE *)v8 + 157) = KeAcquireSpinLockRaiseToDpc(&VfBugcheckTmpDataLock);
        qword_140FF0ED8 = v8[20];
        xmmword_140FF0EE0 = v8[21];
        *(&xmmword_140FF0EE0 + 1) = *(_QWORD *)(v9 - 24);
        *(_QWORD *)&VfBugcheckTmpData = 201LL;
        BugCheckParameter1 = 15LL;
        VfBugCheckNoStackUsage();
      }
    }
  }
  VfBeforeCallDriver(a1, a2, v8);
  *((_DWORD *)v8 + 46) = IopfCallDriver(a1, a2);
  VfAfterCallDriver(v8, v8 + 23);
  v11 = *((_DWORD *)v8 + 46);
  VfIrpReleaseCallDriverData(v8);
  return v11;
}
