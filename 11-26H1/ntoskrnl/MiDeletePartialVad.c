/*
 * XREFs of MiDeletePartialVad @ 0x1403C6AC4
 * Callers:
 *     MiFreeVadRange @ 0x1403C67C8 (MiFreeVadRange.c)
 * Callees:
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x140317570 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     MiPerformVadSplitting @ 0x140317B74 (MiPerformVadSplitting.c)
 *     MiReturnResident @ 0x140370060 (MiReturnResident.c)
 *     MiComputeVadCharges @ 0x1404BDF20 (MiComputeVadCharges.c)
 *     Feature_Servicing_Mm_RotateSplitResAvailLeak__private_IsEnabledDeviceUsageNoInline @ 0x140711D14 (Feature_Servicing_Mm_RotateSplitResAvailLeak__private_IsEnabledDeviceUsageNoInline.c)
 *     MiUnmapVad @ 0x140994B10 (MiUnmapVad.c)
 *     MiDeleteVad @ 0x140A017D0 (MiDeleteVad.c)
 *     MiAllocateSplitVads @ 0x140AC258C (MiAllocateSplitVads.c)
 */

__int64 __fastcall MiDeletePartialVad(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3, int a4)
{
  int IsEnabledDeviceUsageNoInline; // r14d
  __int64 Process; // r15
  int v10; // ebx
  __int64 result; // rax
  unsigned __int64 v12; // rdi
  __int128 v13; // [rsp+20h] [rbp-50h] BYREF
  __int64 v14; // [rsp+30h] [rbp-40h]
  _QWORD v15[2]; // [rsp+38h] [rbp-38h] BYREF
  int v16; // [rsp+48h] [rbp-28h]
  int v17; // [rsp+4Ch] [rbp-24h]
  __int64 v18; // [rsp+50h] [rbp-20h]
  __int64 v19; // [rsp+58h] [rbp-18h]
  __int64 v20; // [rsp+60h] [rbp-10h]
  struct _KTHREAD *CurrentThread; // [rsp+A0h] [rbp+30h]

  v15[0] = 0LL;
  v17 = 0;
  v20 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  IsEnabledDeviceUsageNoInline = Feature_Servicing_Mm_RotateSplitResAvailLeak__private_IsEnabledDeviceUsageNoInline();
  CurrentThread = KeGetCurrentThread();
  Process = (__int64)CurrentThread->ApcState.Process;
  v10 = *(_DWORD *)(BugCheckParameter2 + 48) & 0x80000;
  if ( !v10 && *(_QWORD *)(**(_QWORD **)(BugCheckParameter2 + 80) + 64LL) && *(__int64 *)(BugCheckParameter2 + 128) < 0 )
    return 3221225505LL;
  v16 = a4;
  v18 = a2;
  v19 = a3;
  v15[1] = BugCheckParameter2;
  result = MiAllocateSplitVads(v15);
  if ( (int)result >= 0 )
  {
    if ( IsEnabledDeviceUsageNoInline )
      MiComputeVadCharges(BugCheckParameter2, &v13);
    MiPerformVadSplitting((__int64)v15);
    v12 = v13;
    if ( IsEnabledDeviceUsageNoInline && (_QWORD)v13 )
    {
      v13 = 0LL;
      v14 = 0LL;
      MiComputeVadCharges(BugCheckParameter2, &v13);
      v12 -= v13;
    }
    UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, Process);
    if ( v10 )
      MiDeleteVad(BugCheckParameter2);
    else
      MiUnmapVad(BugCheckParameter2);
    if ( IsEnabledDeviceUsageNoInline )
    {
      if ( v12 )
        MiReturnResident(*(_QWORD *)(stru_140E2ED08.ThreadLock + 8LL * *(unsigned __int16 *)(Process + 1198)), v12);
    }
    return 0LL;
  }
  return result;
}
