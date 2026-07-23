/*
 * XREFs of VslObtainHotPatchUndoTable @ 0x14079504C
 * Callers:
 *     MiApplyDriverHotPatch @ 0x140873E94 (MiApplyDriverHotPatch.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14036A34C (VslpEnterIumSecureMode.c)
 *     MmProbeAndLockPagesEx @ 0x1403A1820 (MmProbeAndLockPagesEx.c)
 *     VslpLockPagesForTransfer @ 0x14040F6A8 (VslpLockPagesForTransfer.c)
 *     VslpUnlockPagesForTransfer @ 0x140410294 (VslpUnlockPagesForTransfer.c)
 *     MmUnlockPages @ 0x140410330 (MmUnlockPages.c)
 *     MmSizeOfMdl @ 0x140481EB0 (MmSizeOfMdl.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall VslObtainHotPatchUndoTable(PVOID Base, __int64 a2, unsigned int a3)
{
  __int64 v4; // r14
  unsigned int v6; // esi
  __int64 Pool2; // rax
  __int64 v8; // rbx
  int v10; // edi
  __int64 *v11[10]; // [rsp+30h] [rbp-F8h] BYREF
  _BYTE v12[8]; // [rsp+80h] [rbp-A8h] BYREF
  PVOID v13; // [rsp+88h] [rbp-A0h]
  __int64 *v14; // [rsp+90h] [rbp-98h]
  __int64 *v15; // [rsp+98h] [rbp-90h]

  v4 = a3;
  memset_0(v12, 0, 0x68uLL);
  memset_0(v11, 0, 0x48uLL);
  v6 = MmSizeOfMdl(Base, (unsigned int)v4);
  Pool2 = ExAllocatePool2(0x40uLL);
  v8 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  *(_QWORD *)Pool2 = 0LL;
  *(_WORD *)(Pool2 + 10) = 0;
  *(_DWORD *)(Pool2 + 40) = v4;
  *(_DWORD *)(Pool2 + 44) = a2 & 0xFFF;
  *(_QWORD *)(Pool2 + 32) = a2 & 0xFFFFFFFFFFFFF000uLL;
  *(_WORD *)(Pool2 + 8) = 8 * (((v4 + (unsigned __int64)(a2 & 0xFFF) + 4095) >> 12) + 6);
  v10 = MmProbeAndLockPagesEx(Pool2, 2uLL);
  if ( v10 >= 0 )
  {
    v10 = VslpLockPagesForTransfer((__int64)v11, (struct _MDL *)v8, v6, 1, 0);
    if ( v10 >= 0 )
    {
      v14 = v11[0];
      v15 = v11[7];
      v13 = Base;
      v10 = VslpEnterIumSecureMode(2u, 0x4Du, 0, (__int64)v12);
      VslpUnlockPagesForTransfer(v11);
    }
  }
  if ( (*(_BYTE *)(v8 + 10) & 2) != 0 )
    MmUnlockPages((PMDL)v8);
  ExFreePoolWithTag((PVOID)v8, 0);
  return (unsigned int)v10;
}
