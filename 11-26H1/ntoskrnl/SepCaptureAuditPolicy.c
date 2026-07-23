/*
 * XREFs of SepCaptureAuditPolicy @ 0x1408194F0
 * Callers:
 *     NtSetInformationToken @ 0x140816660 (NtSetInformationToken.c)
 * Callees:
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 *     ExAllocatePoolWithTag @ 0x140C16340 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
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
