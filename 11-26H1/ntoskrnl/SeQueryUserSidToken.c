/*
 * XREFs of SeQueryUserSidToken @ 0x1409C9AA0
 * Callers:
 *     CmpLogHiveFileInaccessible @ 0x1408BBF64 (CmpLogHiveFileInaccessible.c)
 *     PiDqSameUserHive @ 0x14095220C (PiDqSameUserHive.c)
 *     ExpWnfQueryCurrentUserSID @ 0x1409C9978 (ExpWnfQueryCurrentUserSID.c)
 *     PopEtGetProcessSidAndPackageIdentity @ 0x1409C9B4C (PopEtGetProcessSidAndPackageIdentity.c)
 *     AlpcpPortQueryConnectedSidInfo @ 0x140A7D6D8 (AlpcpPortQueryConnectedSidInfo.c)
 *     MiFindProcessImageHotPatchRecord @ 0x140A9DB18 (MiFindProcessImageHotPatchRecord.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x1402FE950 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

__int64 __fastcall SeQueryUserSidToken(__int64 a1, void *a2, unsigned int a3, unsigned int *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v9; // ebp
  const void **v10; // rax
  unsigned int v11; // ebx
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
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  result = v9;
  if ( a4 )
    *a4 = v11;
  return result;
}
