/*
 * XREFs of RtlUnlockCurrentThread @ 0x180108930
 * Callers:
 *     <none>
 * Callees:
 *     RtlpUnlockStack @ 0x1801089E4 (RtlpUnlockStack.c)
 *     ZwUnlockVirtualMemory @ 0x180162A10 (ZwUnlockVirtualMemory.c)
 */

NTSTATUS RtlUnlockCurrentThread(void)
{
  struct _TEB *v0; // rbx
  unsigned int LockCount; // eax
  unsigned int v2; // eax
  struct _TEB *v3; // rcx
  __int64 WowTebOffset; // rax
  ULONG_PTR RegionSize; // [rsp+30h] [rbp+8h] BYREF
  ULONG_PTR v7; // [rsp+38h] [rbp+10h] BYREF
  struct _TEB *v8; // [rsp+40h] [rbp+18h] BYREF
  PVOID BaseAddress; // [rsp+48h] [rbp+20h] BYREF

  RegionSize = 0LL;
  v0 = NtCurrentTeb();
  LockCount = v0->LockCount;
  if ( !LockCount )
    return -1073741782;
  v2 = LockCount - 1;
  v0->LockCount = v2;
  if ( !v2 )
  {
    v8 = v0;
    v7 = 6256LL;
    ZwUnlockVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)&v8, &v7, 1u);
    v3 = NtCurrentTeb();
    WowTebOffset = v3->WowTebOffset;
    if ( (int)WowTebOffset < 0 )
      v3 = (struct _TEB *)((char *)v3 + WowTebOffset);
    BaseAddress = v3;
    if ( v0 != v3 )
    {
      RegionSize = 6256LL;
      ZwUnlockVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 1u);
    }
    RtlpUnlockStack();
  }
  return 0;
}
