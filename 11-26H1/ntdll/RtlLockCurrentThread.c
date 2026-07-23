/*
 * XREFs of RtlLockCurrentThread @ 0x1800FA9D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpLockStack @ 0x1800FAAD8 (RtlpLockStack.c)
 *     NtLockVirtualMemory @ 0x180161110 (NtLockVirtualMemory.c)
 *     ZwUnlockVirtualMemory @ 0x180162A10 (ZwUnlockVirtualMemory.c)
 */

NTSTATUS RtlLockCurrentThread(void)
{
  struct _TEB *v0; // rsi
  unsigned int LockCount; // eax
  int v2; // edi
  struct _TEB *v3; // rcx
  char v4; // bl
  __int64 WowTebOffset; // rax
  ULONG_PTR v7; // [rsp+60h] [rbp+38h] BYREF
  ULONG_PTR RegionSize; // [rsp+68h] [rbp+40h] BYREF
  PVOID BaseAddress; // [rsp+70h] [rbp+48h] BYREF
  PVOID v10; // [rsp+78h] [rbp+50h] BYREF

  v7 = 0LL;
  v0 = NtCurrentTeb();
  LockCount = v0->LockCount;
  if ( LockCount )
  {
    v0->LockCount = LockCount + 1;
    return 0;
  }
  BaseAddress = v0;
  RegionSize = 6256LL;
  v2 = NtLockVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 1u);
  if ( v2 >= 0 )
  {
    v3 = NtCurrentTeb();
    v4 = 1;
    WowTebOffset = v3->WowTebOffset;
    if ( (int)WowTebOffset < 0 )
      v3 = (struct _TEB *)((char *)v3 + WowTebOffset);
    v10 = v3;
    if ( v0 != v3 )
    {
      v7 = 6256LL;
      v2 = NtLockVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v10, &v7, 1u);
      if ( v2 < 0 )
      {
LABEL_12:
        ZwUnlockVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 1u);
        if ( (unsigned __int8)v4 >= 2u )
          ZwUnlockVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v10, &v7, 1u);
        return v2;
      }
      v4 = 3;
    }
    v2 = RtlpLockStack();
    if ( v2 >= 0 )
    {
      v0->LockCount = 1;
      return 0;
    }
    goto LABEL_12;
  }
  return v2;
}
