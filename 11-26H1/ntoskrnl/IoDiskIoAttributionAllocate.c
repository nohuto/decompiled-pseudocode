/*
 * XREFs of IoDiskIoAttributionAllocate @ 0x140AFB68C
 * Callers:
 *     PspSetJobIoAttribution @ 0x140958108 (PspSetJobIoAttribution.c)
 *     PspIoRateEntryActivate @ 0x140AFB4A4 (PspIoRateEntryActivate.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x140463DA0 (ExWaitForRundownProtectionRelease.c)
 *     IoDiskIoAttributionReference @ 0x1404A12C0 (IoDiskIoAttributionReference.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

struct _EX_RUNDOWN_REF *__fastcall IoDiskIoAttributionAllocate(unsigned __int64 a1, __int64 a2)
{
  struct _EX_RUNDOWN_REF *result; // rax
  struct _EX_RUNDOWN_REF *v5; // rbx
  signed __int64 v6; // rax

  result = (struct _EX_RUNDOWN_REF *)ExAllocatePool2(0x40uLL);
  v5 = result;
  if ( result )
  {
    result[5].Count = 0LL;
    result[4].Count = 1LL;
    result[2].Count = -1LL;
    do
    {
      v6 = _InterlockedExchangeAdd64((volatile signed __int64 *)&IopSessionNotificationLock.152, 1uLL);
      v5[3].Count = v6 + 1;
    }
    while ( v6 == -1 );
    v5[21].Count = 0LL;
    if ( a1 )
      v5[20].Count = a1;
    else
      ExWaitForRundownProtectionRelease(v5 + 21);
    if ( a2 )
    {
      IoDiskIoAttributionReference(a2);
      v5[22].Count = a2;
    }
    return v5;
  }
  return result;
}
