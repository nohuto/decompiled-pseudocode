/*
 * XREFs of PspIumAllocatePartitionState @ 0x14061920C
 * Callers:
 *     PsDispatchIumService @ 0x140518438 (PsDispatchIumService.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     MmProbeAndLockPagesEx @ 0x1403A1820 (MmProbeAndLockPagesEx.c)
 *     MmFreeNonChargedSecurePages @ 0x1403CCD54 (MmFreeNonChargedSecurePages.c)
 *     MmAllocateNonChargedSecurePages @ 0x14040B6F8 (MmAllocateNonChargedSecurePages.c)
 *     MmUnlockPages @ 0x140410330 (MmUnlockPages.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PspIumAllocatePartitionState(__int64 a1)
{
  ULONG **v1; // rsi
  unsigned int v3; // r14d
  __int64 Pool2; // rax
  __int64 v5; // rbx
  unsigned int v7; // eax
  int v8; // edi
  __int64 *v9; // rax
  void *v10; // rcx
  int v11; // eax
  unsigned int v12; // [rsp+50h] [rbp+8h] BYREF

  v1 = *(ULONG ***)(a1 + 16);
  v3 = 0;
  Pool2 = ExAllocatePool2(0x40uLL);
  v5 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  *(_QWORD *)(Pool2 + 8) = v1;
  v7 = *(_DWORD *)(a1 + 24);
  *(_DWORD *)(v5 + 152) = v7;
  if ( v7 < 8 )
    *(_DWORD *)(v5 + 152) = 8;
  *(_QWORD *)(v5 + 96) = 0LL;
  *(_WORD *)(v5 + 106) = 0;
  *(_DWORD *)(v5 + 136) = 168;
  *(_WORD *)(v5 + 104) = 8 * (((unsigned __int16)((v5 & 0xFFF) + 4263) >> 12) + 6);
  *(_QWORD *)(v5 + 128) = v5 & 0xFFFFFFFFFFFFF000uLL;
  *(_DWORD *)(v5 + 140) = v5 & 0xFFF;
  v8 = MmProbeAndLockPagesEx(v5 + 96, 4uLL);
  if ( v8 >= 0 )
  {
    v9 = (__int64 *)ExAllocatePool2(0x40uLL);
    *(_QWORD *)(v5 + 160) = v9;
    if ( v9 )
    {
      v12 = *(_DWORD *)(v5 + 152);
      MmAllocateNonChargedSecurePages(v1, 1, &v12, v9);
      v11 = *(_DWORD *)(v5 + 152);
      v3 = v12;
      if ( v11 == v12 )
      {
        *(_DWORD *)(v5 + 156) = v11;
        if ( v1 )
          ObfReferenceObjectWithTag(v1, 0x746C6644u);
        *(_QWORD *)(a1 + 16) = v5;
        *(_QWORD *)(a1 + 24) = *(_QWORD *)(v5 + 144);
        return 0LL;
      }
    }
    v8 = -1073741670;
  }
  if ( (*(_BYTE *)(v5 + 106) & 2) != 0 )
    MmUnlockPages((PMDL)(v5 + 96));
  if ( v3 )
    MmFreeNonChargedSecurePages(v1, 1, v3, *(_QWORD **)(v5 + 160));
  v10 = *(void **)(v5 + 160);
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  ExFreePoolWithTag((PVOID)v5, 0);
  return (unsigned int)v8;
}
