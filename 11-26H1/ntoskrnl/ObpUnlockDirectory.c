/*
 * XREFs of ObpUnlockDirectory @ 0x1409E2240
 * Callers:
 *     ObpInsertOrLocateNamedObject @ 0x1408EEAF0 (ObpInsertOrLocateNamedObject.c)
 *     ObpDeleteNameCheck @ 0x1408FC8F0 (ObpDeleteNameCheck.c)
 *     NtSetInformationObject @ 0x140970880 (NtSetInformationObject.c)
 *     ObpCreateSymbolicLinkName @ 0x1409E185C (ObpCreateSymbolicLinkName.c)
 *     NtQueryDirectoryObject @ 0x1409E1C50 (NtQueryDirectoryObject.c)
 *     ObpMarkDirectoryObjectsTemporary @ 0x1409E1F80 (ObpMarkDirectoryObjectsTemporary.c)
 * Callees:
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14027C870 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLock @ 0x1402E3120 (ExfReleasePushLock.c)
 */

__int64 __fastcall ObpUnlockDirectory(__int64 a1)
{
  __int64 *v2; // rdi
  signed __int64 v3; // rax
  signed __int64 v4; // rdx
  __int64 v5; // rtt
  __int64 v6; // rdx
  __int64 v7; // r8

  v2 = (__int64 *)(*(_QWORD *)a1 + 296LL);
  _m_prefetchw(v2);
  v3 = *v2;
  v4 = *v2 - 16;
  if ( (*v2 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v4 = 0LL;
  if ( (v3 & 2) != 0 || (v5 = *v2, v5 != _InterlockedCompareExchange64(v2, v4, v3)) )
    ExfReleasePushLock(v2);
  KeAbPostRelease((unsigned __int64)v2);
  if ( *(_BYTE *)(a1 + 22) )
  {
    ObDereferenceObjectDeferDeleteWithTag(*(PVOID *)a1, 0x554C624Fu);
    *(_BYTE *)(a1 + 22) = 0;
  }
  *(_QWORD *)a1 = 0LL;
  *(_BYTE *)(a1 + 21) = 0;
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v6, v7);
}
