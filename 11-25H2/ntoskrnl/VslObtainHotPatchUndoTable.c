/*
 * XREFs of VslObtainHotPatchUndoTable @ 0x140703DE0
 * Callers:
 *     MiApplyDriverHotPatch @ 0x1407E0DBC (MiApplyDriverHotPatch.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140282F50 (VslpEnterIumSecureMode.c)
 *     VslpLockPagesForTransfer @ 0x1402D3E38 (VslpLockPagesForTransfer.c)
 *     VslpUnlockPagesForTransfer @ 0x1402D45D0 (VslpUnlockPagesForTransfer.c)
 *     MmUnlockPages @ 0x1402D4670 (MmUnlockPages.c)
 *     MmProbeAndLockPages @ 0x1402D5660 (MmProbeAndLockPages.c)
 *     MmSizeOfMdl @ 0x140457EF0 (MmSizeOfMdl.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall VslObtainHotPatchUndoTable(PVOID Base, __int64 a2, ULONG a3)
{
  unsigned int v6; // r15d
  struct _MDL *Pool2; // rax
  struct _MDL *v8; // rbx
  CSHORT *p_MdlFlags; // rsi
  int v11; // edi
  __int64 *v12[10]; // [rsp+40h] [rbp-F8h] BYREF
  _BYTE v13[8]; // [rsp+90h] [rbp-A8h] BYREF
  PVOID v14; // [rsp+98h] [rbp-A0h]
  __int64 *v15; // [rsp+A0h] [rbp-98h]
  __int64 *v16; // [rsp+A8h] [rbp-90h]

  memset_0(v13, 0, 0x68uLL);
  memset_0(v12, 0, 0x48uLL);
  v6 = MmSizeOfMdl(Base, a3);
  Pool2 = (struct _MDL *)ExAllocatePool2(0x40uLL);
  v8 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  Pool2->Next = 0LL;
  Pool2->Size = 8 * (((a3 + 4095LL + (unsigned __int64)(a2 & 0xFFF)) >> 12) + 6);
  p_MdlFlags = &Pool2->MdlFlags;
  Pool2->MdlFlags = 0;
  Pool2->StartVa = (PVOID)(a2 & 0xFFFFFFFFFFFFF000uLL);
  Pool2->ByteOffset = a2 & 0xFFF;
  Pool2->ByteCount = a3;
  MmProbeAndLockPages(Pool2, 0, IoWriteAccess);
  v11 = VslpLockPagesForTransfer((__int64)v12, v8, v6, IoWriteAccess, 0);
  if ( v11 >= 0 )
  {
    v14 = Base;
    v15 = v12[0];
    v16 = v12[7];
    v11 = VslpEnterIumSecureMode(2u, 0x4Cu, 0, (__int64)v13);
    VslpUnlockPagesForTransfer(v12);
  }
  if ( (*(_BYTE *)p_MdlFlags & 2) != 0 )
    MmUnlockPages(v8);
  ExFreePoolWithTag(v8, 0);
  return (unsigned int)v11;
}
