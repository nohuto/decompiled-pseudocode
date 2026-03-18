/*
 * XREFs of VslAllocateSecureHibernateResources @ 0x140703628
 * Callers:
 *     PopAllocateHiberContext @ 0x140ABEFAC (PopAllocateHiberContext.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140282F50 (VslpEnterIumSecureMode.c)
 *     PoSetHiberRange @ 0x140472260 (PoSetHiberRange.c)
 *     KeAllocateKernelHiberSwapShadowStacks @ 0x1405B8408 (KeAllocateKernelHiberSwapShadowStacks.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall VslAllocateSecureHibernateResources(PVOID MemoryMap, PVOID *a2, ULONG_PTR *a3)
{
  __int64 result; // rax
  int v7; // ebx
  _BYTE v8[16]; // [rsp+30h] [rbp-98h] BYREF
  ULONG_PTR Length; // [rsp+40h] [rbp-88h]
  PVOID Address; // [rsp+48h] [rbp-80h]

  memset_0(v8, 0, 0x68uLL);
  result = KeAllocateKernelHiberSwapShadowStacks(1u);
  if ( (int)result >= 0 )
  {
    v7 = VslpEnterIumSecureMode(2u, 0x25u, 0, (__int64)v8);
    if ( v7 < 0 )
    {
      KeAllocateKernelHiberSwapShadowStacks(0);
    }
    else
    {
      PoSetHiberRange(MemoryMap, 0xC000u, Address, Length, 0x526C7356u);
      *a3 = Length;
      *a2 = Address;
    }
    return (unsigned int)v7;
  }
  return result;
}
