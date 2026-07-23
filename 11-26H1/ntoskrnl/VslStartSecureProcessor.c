/*
 * XREFs of VslStartSecureProcessor @ 0x1407957D4
 * Callers:
 *     HvlHalStartVirtualProcessor @ 0x1405BFD30 (HvlHalStartVirtualProcessor.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x14024F250 (MmGetPhysicalAddress.c)
 *     VslpEnterIumSecureMode @ 0x14036A34C (VslpEnterIumSecureMode.c)
 *     VslpLockPagesForTransfer @ 0x14040F6A8 (VslpLockPagesForTransfer.c)
 *     VslpUnlockPagesForTransfer @ 0x140410294 (VslpUnlockPagesForTransfer.c)
 *     KeIsKernelCetEnabled @ 0x14047D230 (KeIsKernelCetEnabled.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall VslStartSecureProcessor(int a1, __int64 a2)
{
  _DWORD *Pool2; // rax
  _DWORD *v5; // rbx
  __int64 result; // rax
  __int64 v7; // rdi
  int v8; // edi
  __int64 *v9[10]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 *v10[10]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v11[8]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 *v12; // [rsp+D8h] [rbp-28h]
  __int64 *v13; // [rsp+E0h] [rbp-20h]

  memset_0(v10, 0, 0x48uLL);
  memset_0(v11, 0, 0x68uLL);
  memset_0(v9, 0, 0x48uLL);
  Pool2 = (_DWORD *)ExAllocatePool2(0x40uLL);
  v5 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  v7 = *(_QWORD *)(KeLoaderBlock_0 + 136);
  *Pool2 = a1;
  Pool2[1] = *(unsigned __int8 *)(v7 + 209) | (*(unsigned __int8 *)(v7 + 208) << 8);
  if ( KeIsKernelCetEnabled() )
  {
    *((_QWORD *)v5 + 4) = *(_QWORD *)(*(_QWORD *)(KeLoaderBlock_0 + 240) + 3720LL);
    *((_QWORD *)v5 + 5) = *(_QWORD *)(*(_QWORD *)(KeLoaderBlock_0 + 240) + 3728LL);
    *((PHYSICAL_ADDRESS *)v5 + 6) = MmGetPhysicalAddress(*(PVOID *)(*(_QWORD *)(KeLoaderBlock_0 + 240) + 3728LL));
  }
  *(_OWORD *)(v5 + 14) = *(_OWORD *)a2;
  *(_OWORD *)(v5 + 18) = *(_OWORD *)(a2 + 16);
  *(_OWORD *)(v5 + 22) = *(_OWORD *)(a2 + 32);
  *(_OWORD *)(v5 + 26) = *(_OWORD *)(a2 + 48);
  *(_OWORD *)(v5 + 30) = *(_OWORD *)(a2 + 64);
  *(_OWORD *)(v5 + 34) = *(_OWORD *)(a2 + 80);
  *(_OWORD *)(v5 + 38) = *(_OWORD *)(a2 + 96);
  *(_OWORD *)(v5 + 42) = *(_OWORD *)(a2 + 112);
  *(_OWORD *)(v5 + 46) = *(_OWORD *)(a2 + 128);
  *(_OWORD *)(v5 + 50) = *(_OWORD *)(a2 + 144);
  *(_OWORD *)(v5 + 54) = *(_OWORD *)(a2 + 160);
  *(_OWORD *)(v5 + 58) = *(_OWORD *)(a2 + 176);
  *(_OWORD *)(v5 + 62) = *(_OWORD *)(a2 + 192);
  *(_OWORD *)(v5 + 66) = *(_OWORD *)(a2 + 208);
  result = VslpLockPagesForTransfer((__int64)v10, (struct _MDL *)(v7 - 384), 0xD080u, 2, 2u);
  if ( (int)result >= 0 )
  {
    *((__int64 **)v5 + 1) = v10[0];
    *((__int64 **)v5 + 2) = v10[7];
    *((PHYSICAL_ADDRESS *)v5 + 3) = MmGetPhysicalAddress(*(PVOID *)(a2 + 176));
    v8 = VslpLockPagesForTransfer((__int64)v9, (struct _MDL *)v5, 0x118u, 0, 0);
    if ( v8 >= 0 )
    {
      v12 = v9[0];
      v13 = v9[7];
      v8 = VslpEnterIumSecureMode(2u, 2u, 0, (__int64)v11);
      VslpUnlockPagesForTransfer(v9);
    }
    VslpUnlockPagesForTransfer(v10);
    ExFreePoolWithTag(v5, 0);
    return (unsigned int)v8;
  }
  return result;
}
