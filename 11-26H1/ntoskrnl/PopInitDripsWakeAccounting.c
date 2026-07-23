/*
 * XREFs of PopInitDripsWakeAccounting @ 0x140CD5A7C
 * Callers:
 *     PoInitSystem @ 0x140CD49D0 (PoInitSystem.c)
 * Callees:
 *     PpmConvertTimeFrom @ 0x1402F3288 (PpmConvertTimeFrom.c)
 */

__int64 PopInitDripsWakeAccounting()
{
  __int64 v0; // rbx
  __int64 v1; // rdi
  __int64 v2; // r11
  __int64 v3; // rcx
  unsigned __int128 v4; // rax

  v0 = 0LL;
  v1 = 9LL;
  do
  {
    *(_QWORD *)((char *)&PopDripsWakeIdleAccountingBucketLimitsQpc + v0) = PpmConvertTimeFrom(
                                                                             *(_QWORD *)((char *)&PopDripsWakeIdleAccountingBucketLimitsMs
                                                                                       + v0),
                                                                             1000LL);
    v0 += 8LL;
    --v1;
  }
  while ( v1 );
  v3 = 11LL;
  qword_140FC2308 = -1LL;
  do
  {
    v4 = *(unsigned __int64 *)((char *)&PopDripsWakePeriodAccountingBucketLimitsHns + v2)
       * (unsigned __int128)0x346DC5D63886594BuLL;
    v2 += 8LL;
    *(_QWORD *)((char *)&unk_140FC2428 + v2) = *((_QWORD *)&v4 + 1) >> 11;
    --v3;
  }
  while ( v3 );
  qword_140FC2488 = -1LL;
  return v4;
}
