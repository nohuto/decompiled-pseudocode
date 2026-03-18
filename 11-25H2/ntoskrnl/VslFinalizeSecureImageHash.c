/*
 * XREFs of VslFinalizeSecureImageHash @ 0x1402D2780
 * Callers:
 *     <none>
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140282F50 (VslpEnterIumSecureMode.c)
 *     MmUnlockPages @ 0x1402D4670 (MmUnlockPages.c)
 *     MmProbeAndLockPages @ 0x1402D5660 (MmProbeAndLockPages.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall VslFinalizeSecureImageHash(__int64 a1, __int64 a2)
{
  struct _MDL MemoryDescriptorList; // [rsp+20h] [rbp-C8h] BYREF
  __int128 v6; // [rsp+50h] [rbp-98h]
  _BYTE v7[8]; // [rsp+60h] [rbp-88h] BYREF
  __int64 v8; // [rsp+68h] [rbp-80h]
  __int64 v9; // [rsp+70h] [rbp-78h]
  __int128 v10; // [rsp+78h] [rbp-70h]

  memset_0(v7, 0, 0x68uLL);
  memset_0(&MemoryDescriptorList, 0, 0x40uLL);
  MemoryDescriptorList.Size = 8 * (((unsigned __int16)((a2 & 0xFFF) + 4167) >> 12) + 6);
  MemoryDescriptorList.MdlFlags = 0;
  MemoryDescriptorList.StartVa = (PVOID)(a2 & 0xFFFFFFFFFFFFF000uLL);
  MemoryDescriptorList.ByteOffset = a2 & 0xFFF;
  MemoryDescriptorList.ByteCount = 72;
  MmProbeAndLockPages(&MemoryDescriptorList, 0, IoWriteAccess);
  v8 = a1;
  v9 = a2;
  v10 = v6;
  LODWORD(a2) = VslpEnterIumSecureMode(2u, 0x1Au, 0, (__int64)v7);
  MmUnlockPages(&MemoryDescriptorList);
  return (unsigned int)a2;
}
