/*
 * XREFs of ControllerAllocateUncachedExtension @ 0x140011CE0
 * Callers:
 *     NVMeHwFindAdapter @ 0x140012650 (NVMeHwFindAdapter.c)
 * Callees:
 *     NVMeIceConfigureExclusionAddress @ 0x1400315BC (NVMeIceConfigureExclusionAddress.c)
 *     memset @ 0x140032A40 (memset.c)
 */

char __fastcall ControllerAllocateUncachedExtension(__int64 a1, __int64 a2)
{
  unsigned int v3; // edi
  void *UncachedExtension; // rax
  unsigned __int64 v6; // r8
  __int64 v7; // rax
  bool v8; // zf
  __int64 v9; // r8
  __int64 *v10; // rcx
  __int64 v11; // rdx
  __int64 PhysicalAddress; // rax
  int v13; // r9d
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rdx
  int v17; // [rsp+E0h] [rbp+8h] BYREF

  v17 = 0;
  v3 = *(_BYTE *)(a1 + 20) != 0 ? 40960 : 53248;
  UncachedExtension = (void *)StorPortGetUncachedExtension(a1, a2, v3);
  *(_QWORD *)(a1 + 1576) = UncachedExtension;
  if ( !UncachedExtension )
  {
    *(_DWORD *)(a1 + 28) = 1;
    return 0;
  }
  memset(UncachedExtension, 0, v3 & 0xFFFFFFFC);
  v6 = *(_QWORD *)(a1 + 1576);
  if ( *(_BYTE *)(a1 + 20) )
  {
    v6 = (v6 + 4095) & 0xFFFFFFFFFFFFF000uLL;
    *(_QWORD *)(a1 + 1576) = v6;
  }
  *(_QWORD *)(a1 + 1560) = v6;
  *(_QWORD *)(a1 + 1568) = StorPortGetPhysicalAddress(a1, 0LL, v6, &v17);
  v7 = *(_QWORD *)(a1 + 1576) + 4096LL;
  v8 = *(_BYTE *)(a1 + 20) == 0;
  *(_QWORD *)(a1 + 1104) = v7;
  v9 = v7 + 0x2000;
  *(_QWORD *)(a1 + 1576) = v7 + 0x2000;
  if ( v8 )
  {
    v10 = (__int64 *)(a1 + 1232);
    v11 = 2LL;
    do
    {
      *v10 = v9;
      v10 += 16;
      v9 = *(_QWORD *)(a1 + 1576) + 0x2000LL;
      *(_QWORD *)(a1 + 1576) = v9;
      --v11;
    }
    while ( v11 );
  }
  *(_QWORD *)(a1 + 1656) = v9;
  PhysicalAddress = StorPortGetPhysicalAddress(a1, 0LL, v9, &v17);
  v14 = *(_QWORD *)(a1 + 1576) + 4096LL;
  v15 = v14 + ((unsigned __int64)*(unsigned __int16 *)(a1 + 324) << 6);
  *(_QWORD *)(a1 + 1664) = PhysicalAddress;
  *(_QWORD *)(a1 + 336) = v14;
  if ( (v15 & 0xFFF) != 0 )
    v15 = v15 - (v15 & 0xFFF) + 4096;
  *(_QWORD *)(a1 + 544) = v15;
  v16 = v15 + 4096;
  v8 = *(_BYTE *)(a1 + 20) == 0;
  *(_QWORD *)(a1 + 1576) = v16;
  if ( !v8 )
  {
    *(_QWORD *)(a1 + 936) = v16 + 7592;
    *(_QWORD *)(a1 + 1576) = v16 + 0x2000;
    *(_QWORD *)(a1 + 944) = v16 + 7800;
    *(_QWORD *)(v16 + 7592) = v16;
    **(_QWORD **)(a1 + 944) = v16 + 4096;
  }
  if ( (*(_DWORD *)(a1 + 4344) & 4) != 0 )
  {
    LOBYTE(v13) = 1;
    if ( (unsigned int)NVMeIceConfigureExclusionAddress(a1, *(_QWORD *)(a1 + 1664), 4096, v13, 1, 1) )
    {
      if ( (*(_BYTE *)(a1 + 21) & 2) != 0 )
        StorPortExtendedFunction(87LL, a1, 0LL, 1LL);
      return 0;
    }
  }
  return 1;
}
