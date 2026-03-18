/*
 * XREFs of PiUpdateDeviceResourceLists @ 0x140771DA4
 * Callers:
 *     PiProcessQueryDeviceState @ 0x14090E340 (PiProcessQueryDeviceState.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x140278070 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x140278D40 (KeReleaseGuardedMutex.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     IopQueryBusResourceUpdateInterface @ 0x140771EE0 (IopQueryBusResourceUpdateInterface.c)
 *     PnpCopyResourceList @ 0x1407B2438 (PnpCopyResourceList.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiUpdateDeviceResourceLists(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rdx
  int v3; // ebx
  void *Src; // [rsp+60h] [rbp+18h] BYREF

  Src = 0LL;
  result = IopQueryBusResourceUpdateInterface(*(PVOID *)(a1 + 32));
  if ( (int)result >= 0 )
  {
    v3 = guard_dispatch_icall_no_overrides(MEMORY[8], (__int64)&Src);
    if ( v3 >= 0 )
      v3 = 0;
    guard_dispatch_icall_no_overrides(MEMORY[8], v2);
    ExFreePoolWithTag(0LL, 0);
    return (unsigned int)v3;
  }
  return result;
}
