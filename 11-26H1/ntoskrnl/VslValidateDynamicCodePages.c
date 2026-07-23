/*
 * XREFs of VslValidateDynamicCodePages @ 0x140AD2F54
 * Callers:
 *     MmChangeImageProtection @ 0x140AD2CC0 (MmChangeImageProtection.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14036A34C (VslpEnterIumSecureMode.c)
 *     MmProbeAndLockPagesEx @ 0x1403A1820 (MmProbeAndLockPagesEx.c)
 *     VslpLockPagesForTransfer @ 0x14040F6A8 (VslpLockPagesForTransfer.c)
 *     VslpUnlockPagesForTransfer @ 0x140410294 (VslpUnlockPagesForTransfer.c)
 *     MmUnlockPages @ 0x140410330 (MmUnlockPages.c)
 *     MmSizeOfMdl @ 0x140481EB0 (MmSizeOfMdl.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall VslValidateDynamicCodePages(__int64 a1, struct _MDL *a2, unsigned int a3)
{
  SIZE_T v6; // rax
  unsigned __int64 v7; // rdx
  __int64 result; // rax
  int v9; // edi
  __int64 *v10[10]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v11[8]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v12; // [rsp+88h] [rbp-78h]
  __int64 v13; // [rsp+90h] [rbp-70h]
  __int64 *v14; // [rsp+98h] [rbp-68h]
  __int64 *v15; // [rsp+A0h] [rbp-60h]
  struct _MDL MemoryDescriptorList; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v17; // [rsp+120h] [rbp+20h]

  memset_0(v11, 0, 0x68uLL);
  v17 = 0LL;
  memset(&MemoryDescriptorList.MdlFlags + 1, 0, 20);
  memset_0(v10, 0, 0x48uLL);
  v6 = MmSizeOfMdl(*(PVOID *)(a1 + 32), (unsigned int)(*(_DWORD *)(a1 + 40) + *(_DWORD *)(a1 + 44)));
  v7 = (v6 + (a1 & 0xFFF) + 4095) >> 12;
  if ( v7 > 1 )
    return 3221225485LL;
  MemoryDescriptorList.Next = 0LL;
  MemoryDescriptorList.Size = 8 * (v7 + 6);
  MemoryDescriptorList.MdlFlags = 0;
  MemoryDescriptorList.ByteOffset = a1 & 0xFFF;
  MemoryDescriptorList.StartVa = (PVOID)(a1 & 0xFFFFFFFFFFFFF000uLL);
  MemoryDescriptorList.ByteCount = v6;
  result = MmProbeAndLockPagesEx((__int64)&MemoryDescriptorList, 0LL);
  if ( (int)result >= 0 )
  {
    v9 = VslpLockPagesForTransfer((__int64)v10, a2, a3, 0, 0);
    if ( v9 >= 0 )
    {
      v13 = v17;
      v14 = v10[0];
      v15 = v10[7];
      v12 = a1;
      v9 = VslpEnterIumSecureMode(2u, 0x20u, 0, (__int64)v11);
      VslpUnlockPagesForTransfer(v10);
    }
    MmUnlockPages(&MemoryDescriptorList);
    return (unsigned int)v9;
  }
  return result;
}
