/*
 * XREFs of SepCaptureAuditPolicy @ 0x140813690
 * Callers:
 *     NtSetInformationToken @ 0x140810BD0 (NtSetInformationToken.c)
 * Callees:
 *     RtlCopyFromUser @ 0x140533E38 (RtlCopyFromUser.c)
 *     RtlCopyVolatileMemory @ 0x140733080 (RtlCopyVolatileMemory.c)
 *     ProbeForRead @ 0x1408EF880 (ProbeForRead.c)
 *     ExAllocatePoolWithTag @ 0x140C10340 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepCaptureAuditPolicy(void *Src, char a2, __int64 a3, __int64 a4, int a5, int a6, _QWORD *a7)
{
  PVOID PoolWithTag; // rax

  if ( a2 )
    ProbeForRead(Src, 0x1FuLL, 4u);
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)1025, 0x1FuLL, 0x61506553u);
  *a7 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  if ( a2 )
    RtlCopyFromUser(PoolWithTag, Src, 0x1FuLL);
  else
    RtlCopyVolatileMemory(PoolWithTag, Src, 0x1FuLL);
  return 0LL;
}
