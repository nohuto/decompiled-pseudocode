/*
 * XREFs of FsRtlSetDriverBacking @ 0x140792A50
 * Callers:
 *     IoRegisterFileSystem @ 0x140799160 (IoRegisterFileSystem.c)
 *     IoRegisterFsRegistrationChangeMountAware @ 0x140799330 (IoRegisterFsRegistrationChangeMountAware.c)
 * Callees:
 *     MmReleaseLoadLockShared @ 0x14049E268 (MmReleaseLoadLockShared.c)
 *     MiLockLoadedDataTableEntryIfNecessary @ 0x1404A53D4 (MiLockLoadedDataTableEntryIfNecessary.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     MiBackSystemImageWithPagefile @ 0x14086A544 (MiBackSystemImageWithPagefile.c)
 */

__int64 __fastcall FsRtlSetDriverBacking(__int64 a1, char a2)
{
  unsigned int v2; // ebx
  unsigned __int64 v3; // rdi
  struct _LIST_ENTRY *v4; // rax
  unsigned int v5; // edi
  unsigned int v7; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0;
  if ( (a2 & 1) != 0 )
  {
    v3 = *(_QWORD *)(a1 + 88);
    if ( v3 )
    {
      v7 = 0;
      v4 = MiLockLoadedDataTableEntryIfNecessary(v3, &v7);
      if ( !v4 )
        KeBugCheckEx(0x1Au, 0x101FuLL, v3, 0LL, 0LL);
      v5 = MiBackSystemImageWithPagefile(v4, v7);
      if ( v7 )
        MmReleaseLoadLockShared(0LL);
      return v5;
    }
    else
    {
      return (unsigned int)-1073741213;
    }
  }
  return v2;
}
