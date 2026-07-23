/*
 * XREFs of FsRtlpHeatUnregisterVolume @ 0x14079320C
 * Callers:
 *     FsRtlHeatUninit @ 0x140793010 (FsRtlHeatUninit.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140274770 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall FsRtlpHeatUnregisterVolume(_QWORD *a1)
{
  __int64 *i; // rcx
  __int64 v3; // rdx
  __int64 *v5; // rdx
  __int64 **v6; // rax

  ExAcquireResourceExclusiveLite((PERESOURCE)&VslpReservedTransferLock.ReadTransferCount, 1u);
  for ( i = (__int64 *)VslpReservedTransferLock.WriteOperationCount;
        i != &VslpReservedTransferLock.WriteOperationCount;
        i = (__int64 *)*i )
  {
    v3 = *(__int64 *)((char *)i + 20) - *a1;
    if ( !v3 )
      v3 = *(__int64 *)((char *)i + 28) - a1[1];
    if ( !v3 )
    {
      if ( (*((_DWORD *)i + 4))-- == 1 )
      {
        v5 = (__int64 *)*i;
        if ( *(__int64 **)(*i + 8) != i || (v6 = (__int64 **)i[1], *v6 != i) )
          __fastfail(3u);
        *v6 = v5;
        v5[1] = (__int64)v6;
        ExFreePoolWithTag(i, 0x68745346u);
      }
      break;
    }
  }
  ExReleaseResourceLite((PERESOURCE)&VslpReservedTransferLock.ReadTransferCount);
}
