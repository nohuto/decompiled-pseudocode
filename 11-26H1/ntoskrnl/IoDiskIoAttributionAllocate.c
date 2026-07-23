/*
 * XREFs of IoDiskIoAttributionAllocate @ 0x140ABF1E4
 * Callers:
 *     PspIoRateEntryActivate @ 0x140ABECE0 (PspIoRateEntryActivate.c)
 *     PspSetJobIoAttribution @ 0x140ABEEC8 (PspSetJobIoAttribution.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x14045CD60 (ExWaitForRundownProtectionRelease.c)
 *     IoDiskIoAttributionReference @ 0x14049ADF0 (IoDiskIoAttributionReference.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
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
      v6 = _InterlockedExchangeAdd64(&IopDiskIoAttributionKey, 1uLL);
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
