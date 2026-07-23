/*
 * XREFs of IoNotifyQuotaState @ 0x1404D0850
 * Callers:
 *     <none>
 * Callees:
 *     IopFindDiskIoAttribution @ 0x140207950 (IopFindDiskIoAttribution.c)
 *     IoDiskIoAttributionDereference @ 0x14021EF64 (IoDiskIoAttributionDereference.c)
 *     ObReferenceObjectSafeWithTag @ 0x140259C30 (ObReferenceObjectSafeWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     PsIoRateControlOverQuotaNotify @ 0x1404D091C (PsIoRateControlOverQuotaNotify.c)
 */

__int64 __fastcall IoNotifyQuotaState(unsigned __int64 a1, int a2, int a3, int a4, int a5)
{
  struct _EX_RUNDOWN_REF *DiskIoAttribution; // rax
  unsigned int v9; // ebx
  struct _EX_RUNDOWN_REF *v10; // rdi
  void *Ptr; // rsi

  DiskIoAttribution = (struct _EX_RUNDOWN_REF *)IopFindDiskIoAttribution(a1);
  v9 = 0;
  v10 = DiskIoAttribution;
  if ( DiskIoAttribution )
  {
    if ( ExAcquireRundownProtection_0(DiskIoAttribution + 21) )
    {
      Ptr = v10[20].Ptr;
      if ( ObReferenceObjectSafeWithTag((__int64)Ptr, 0x746C6644u) )
      {
        PsIoRateControlOverQuotaNotify((_DWORD)Ptr, a2, a3, a4, a5);
        ObfDereferenceObjectWithTag(Ptr, 0x746C6644u);
      }
      else
      {
        v9 = -1073741431;
      }
      ExReleaseRundownProtection_0(v10 + 21);
    }
    else
    {
      v9 = -1073741431;
    }
    IoDiskIoAttributionDereference((__int64)v10);
  }
  else
  {
    return (unsigned int)-1073741275;
  }
  return v9;
}
