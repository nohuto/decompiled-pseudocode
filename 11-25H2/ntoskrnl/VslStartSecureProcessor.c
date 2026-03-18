/*
 * XREFs of VslStartSecureProcessor @ 0x1407042F8
 * Callers:
 *     HvlHalStartVirtualProcessor @ 0x140583C50 (HvlHalStartVirtualProcessor.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140282F50 (VslpEnterIumSecureMode.c)
 *     MmGetPhysicalAddress @ 0x1402AB2E0 (MmGetPhysicalAddress.c)
 *     VslpLockPagesForTransfer @ 0x1402D3E38 (VslpLockPagesForTransfer.c)
 *     VslpUnlockPagesForTransfer @ 0x1402D45D0 (VslpUnlockPagesForTransfer.c)
 *     KeIsKernelCetEnabled @ 0x14045663C (KeIsKernelCetEnabled.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall VslStartSecureProcessor(int a1, __int64 a2)
{
  __int64 Pool2; // rbx
  __int64 result; // rax
  __int64 v6; // rax
  __int64 v7; // rcx
  struct _MDL *v8; // r14
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  int v12; // edi
  __int64 *v13[10]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 *v14[10]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v15[8]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 *v16; // [rsp+D8h] [rbp-28h]
  __int64 *v17; // [rsp+E0h] [rbp-20h]

  memset_0(v14, 0, 0x48uLL);
  memset_0(v15, 0, 0x68uLL);
  memset_0(v13, 0, 0x48uLL);
  Pool2 = ExAllocatePool2(0x40uLL);
  if ( !Pool2 )
    return 3221225626LL;
  v6 = *(_QWORD *)&KeNumberProcessorsGroup0[1];
  v7 = *(_QWORD *)(v6 + 136);
  *(_DWORD *)Pool2 = a1;
  v8 = (struct _MDL *)(v7 - 384);
  *(_DWORD *)(Pool2 + 4) = *(unsigned __int8 *)(v7 + 209) | (*(unsigned __int8 *)(v7 + 208) << 8);
  if ( KeIsKernelCetEnabled() )
  {
    v9 = *(_QWORD *)&KeNumberProcessorsGroup0[1];
    *(_QWORD *)(Pool2 + 32) = *(_QWORD *)(*(_QWORD *)(v9 + 240) + 3720LL);
    v10 = *(_QWORD *)&KeNumberProcessorsGroup0[1];
    *(_QWORD *)(Pool2 + 40) = *(_QWORD *)(*(_QWORD *)(v10 + 240) + 3728LL);
    v11 = *(_QWORD *)&KeNumberProcessorsGroup0[1];
    *(PHYSICAL_ADDRESS *)(Pool2 + 48) = MmGetPhysicalAddress(*(PVOID *)(*(_QWORD *)(v11 + 240) + 3728LL));
  }
  *(_OWORD *)(Pool2 + 56) = *(_OWORD *)a2;
  *(_OWORD *)(Pool2 + 72) = *(_OWORD *)(a2 + 16);
  *(_OWORD *)(Pool2 + 88) = *(_OWORD *)(a2 + 32);
  *(_OWORD *)(Pool2 + 104) = *(_OWORD *)(a2 + 48);
  *(_OWORD *)(Pool2 + 120) = *(_OWORD *)(a2 + 64);
  *(_OWORD *)(Pool2 + 136) = *(_OWORD *)(a2 + 80);
  *(_OWORD *)(Pool2 + 152) = *(_OWORD *)(a2 + 96);
  *(_OWORD *)(Pool2 + 168) = *(_OWORD *)(a2 + 112);
  *(_OWORD *)(Pool2 + 184) = *(_OWORD *)(a2 + 128);
  *(_OWORD *)(Pool2 + 200) = *(_OWORD *)(a2 + 144);
  *(_OWORD *)(Pool2 + 216) = *(_OWORD *)(a2 + 160);
  *(_OWORD *)(Pool2 + 232) = *(_OWORD *)(a2 + 176);
  *(_OWORD *)(Pool2 + 248) = *(_OWORD *)(a2 + 192);
  *(_OWORD *)(Pool2 + 264) = *(_OWORD *)(a2 + 208);
  result = VslpLockPagesForTransfer((__int64)v14, v8, 0xD080u, IoModifyAccess, 2u);
  if ( (int)result >= 0 )
  {
    *(__int64 **)(Pool2 + 8) = v14[0];
    *(__int64 **)(Pool2 + 16) = v14[7];
    *(PHYSICAL_ADDRESS *)(Pool2 + 24) = MmGetPhysicalAddress(*(PVOID *)(a2 + 176));
    v12 = VslpLockPagesForTransfer((__int64)v13, (struct _MDL *)Pool2, 0x118u, IoReadAccess, 0);
    if ( v12 >= 0 )
    {
      v16 = v13[0];
      v17 = v13[7];
      v12 = VslpEnterIumSecureMode(2u, 2u, 0, (__int64)v15);
      VslpUnlockPagesForTransfer(v13);
    }
    VslpUnlockPagesForTransfer(v14);
    ExFreePoolWithTag((PVOID)Pool2, 0);
    return (unsigned int)v12;
  }
  return result;
}
