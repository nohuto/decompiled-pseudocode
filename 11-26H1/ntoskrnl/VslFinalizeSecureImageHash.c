/*
 * XREFs of VslFinalizeSecureImageHash @ 0x140411260
 * Callers:
 *     <none>
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14036A34C (VslpEnterIumSecureMode.c)
 *     MmProbeAndLockPagesEx @ 0x1403A1820 (MmProbeAndLockPagesEx.c)
 *     MmUnlockPages @ 0x140410330 (MmUnlockPages.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall VslFinalizeSecureImageHash(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned int v5; // ebx
  struct _MDL MemoryDescriptorList; // [rsp+28h] [rbp-69h] BYREF
  __int128 v7; // [rsp+58h] [rbp-39h]
  _BYTE v8[8]; // [rsp+68h] [rbp-29h] BYREF
  __int64 v9; // [rsp+70h] [rbp-21h]
  __int64 v10; // [rsp+78h] [rbp-19h]
  __int128 v11; // [rsp+80h] [rbp-11h]

  memset_0(v8, 0, 0x68uLL);
  memset_0(&MemoryDescriptorList, 0, 0x40uLL);
  MemoryDescriptorList.ByteCount = 72;
  MemoryDescriptorList.MdlFlags = 0;
  MemoryDescriptorList.Size = 8 * (((unsigned __int16)((a2 & 0xFFF) + 4167) >> 12) + 6);
  MemoryDescriptorList.StartVa = (PVOID)(a2 & 0xFFFFFFFFFFFFF000uLL);
  MemoryDescriptorList.ByteOffset = a2 & 0xFFF;
  result = MmProbeAndLockPagesEx((__int64)&MemoryDescriptorList, 2uLL);
  if ( (int)result >= 0 )
  {
    v9 = a1;
    v10 = a2;
    v11 = v7;
    v5 = VslpEnterIumSecureMode(2u, 0x1Au, 0, (__int64)v8);
    MmUnlockPages(&MemoryDescriptorList);
    return v5;
  }
  return result;
}
