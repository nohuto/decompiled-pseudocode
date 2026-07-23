/*
 * XREFs of FsRtlpOplockTryStartBreakAckTimeout @ 0x14077E784
 * Callers:
 *     FsRtlpOplockBreakByCacheFlags @ 0x1403F5200 (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlpOplockBreakToII @ 0x14050E330 (FsRtlpOplockBreakToII.c)
 *     FsRtlpOplockBreakToNone @ 0x1405297A0 (FsRtlpOplockBreakToNone.c)
 *     FsRtlpBreakRHOplocksForNonCachedIo @ 0x140B717F0 (FsRtlpBreakRHOplocksForNonCachedIo.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021DD80 (KeQueryPerformanceCounter.c)
 *     KiSetTimerEx @ 0x1403B5C30 (KiSetTimerEx.c)
 *     Feature_OwnerAckTimeout__private_IsEnabledDeviceUsageNoInline @ 0x140529158 (Feature_OwnerAckTimeout__private_IsEnabledDeviceUsageNoInline.c)
 *     FsRtlpOplockIsSubjectToTimeout @ 0x1405B9FB0 (FsRtlpOplockIsSubjectToTimeout.c)
 *     FsRtlpOplockGetThreadIntegrityLevel @ 0x140791B6C (FsRtlpOplockGetThreadIntegrityLevel.c)
 */

char __fastcall FsRtlpOplockTryStartBreakAckTimeout(LARGE_INTEGER *a1, __int64 a2)
{
  unsigned int IsEnabledDeviceUsageNoInline; // eax
  __int64 v5; // rdx
  unsigned int v7; // [rsp+40h] [rbp+8h] BYREF

  if ( !a1->QuadPart )
    *a1 = KeQueryPerformanceCounter(0LL);
  IsEnabledDeviceUsageNoInline = Feature_OwnerAckTimeout__private_IsEnabledDeviceUsageNoInline();
  if ( IsEnabledDeviceUsageNoInline )
  {
    LOBYTE(IsEnabledDeviceUsageNoInline) = FsRtlpOplockIsSubjectToTimeout((__int64)a1);
    if ( (_BYTE)IsEnabledDeviceUsageNoInline )
    {
      if ( a2 )
      {
        v7 = 0;
        LOBYTE(IsEnabledDeviceUsageNoInline) = FsRtlpOplockGetThreadIntegrityLevel(KeGetCurrentThread(), &v7);
        if ( (_BYTE)IsEnabledDeviceUsageNoInline )
        {
          IsEnabledDeviceUsageNoInline = *(_DWORD *)(a2 + 176);
          if ( v7 > IsEnabledDeviceUsageNoInline && !*(_BYTE *)(a2 + 180) )
          {
            v5 = -10000 * g_OplockAckTimeoutMs;
            *(_BYTE *)(a2 + 180) = 1;
            LOBYTE(IsEnabledDeviceUsageNoInline) = KiSetTimerEx(a2, v5, 0, 0, a2 + 64);
          }
        }
      }
    }
  }
  return IsEnabledDeviceUsageNoInline;
}
