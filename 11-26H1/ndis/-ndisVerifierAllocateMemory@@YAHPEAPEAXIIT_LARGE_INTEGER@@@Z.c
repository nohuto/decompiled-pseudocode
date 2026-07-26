/*
 * XREFs of ?ndisVerifierAllocateMemory@@YAHPEAPEAXIIT_LARGE_INTEGER@@@Z @ 0x1400C8F10
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisVerifierInjectResourceFailure@@YAEE@Z @ 0x1400C9484 (-ndisVerifierInjectResourceFailure@@YAEE@Z.c)
 *     NdisAllocateMemory @ 0x1400D97A0 (NdisAllocateMemory.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ndisVerifierAllocateMemory(void **a1, int a2, UINT a3, union _LARGE_INTEGER a4)
{
  NDIS_PHYSICAL_ADDRESS v7; // r9
  char *v8; // r10
  UINT v9; // r11d
  PVOID VirtualAddress; // [rsp+30h] [rbp-18h] BYREF
  void *retaddr; // [rsp+48h] [rbp+0h]

  VirtualAddress = 0LL;
  if ( (ndisFlags & 0x400) != 0 && (unsigned int)(a2 + 40) < 0x28 )
  {
    *a1 = 0LL;
    return 3221225485LL;
  }
  else
  {
    ndisMiniportTrackAlloc = 0LL;
    ndisFlags |= 0x800u;
    ndisDriverTrackAlloc = 0LL;
    if ( !ndisVerifierInjectResourceFailure((unsigned __int8)a1) )
    {
      if ( a3 )
      {
        NdisAllocateMemory(&VirtualAddress, v9, a3, v7);
        v8 = (char *)VirtualAddress;
      }
      else
      {
        v8 = (char *)(*((__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64, void *))ndisVerifierWdmDispatch + 6))(
                       512LL,
                       v9,
                       1836467278LL,
                       24LL,
                       retaddr);
      }
    }
    *a1 = v8;
    if ( v8 )
    {
      if ( (ndisFlags & 0x400) != 0 )
      {
        v8 += 40;
        *a1 = v8;
      }
    }
    return v8 == 0LL ? 0xC0000001 : 0;
  }
}
