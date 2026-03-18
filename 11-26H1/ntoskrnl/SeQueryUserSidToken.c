/*
 * XREFs of SeQueryUserSidToken @ 0x14094E160
 * Callers:
 *     CmpLogHiveFileInaccessible @ 0x1408B5990 (CmpLogHiveFileInaccessible.c)
 *     ExpWnfQueryCurrentUserSID @ 0x14094E028 (ExpWnfQueryCurrentUserSID.c)
 *     PopEtGetProcessSidAndPackageIdentity @ 0x14094E20C (PopEtGetProcessSidAndPackageIdentity.c)
 *     PiDqSameUserHive @ 0x1409917AC (PiDqSameUserHive.c)
 *     AlpcpPortQueryConnectedSidInfo @ 0x140A6C0A8 (AlpcpPortQueryConnectedSidInfo.c)
 *     MiFindProcessImageHotPatchRecord @ 0x140A99998 (MiFindProcessImageHotPatchRecord.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x1402B3C80 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     memmove @ 0x14073D480 (memmove.c)
 */

__int64 __fastcall SeQueryUserSidToken(__int64 a1, void *a2, unsigned int a3, unsigned int *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v9; // ebp
  const void **v10; // rax
  unsigned int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  v9 = -1073741789;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(*(PERESOURCE *)(a1 + 48), 1u);
  v10 = *(const void ***)(a1 + 152);
  v11 = 4 * *((unsigned __int8 *)*v10 + 1) + 8;
  if ( a3 >= v11 )
  {
    memmove(a2, *v10, v11);
    v9 = 0;
  }
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v12, v13);
  result = v9;
  if ( a4 )
    *a4 = v11;
  return result;
}
