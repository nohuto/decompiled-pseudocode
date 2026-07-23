/*
 * XREFs of MiCreateKernelStackSlow @ 0x1403D4610
 * Callers:
 *     MmCreateKernelStack @ 0x1403D3D00 (MmCreateKernelStack.c)
 * Callees:
 *     MiReleasePtes @ 0x140281250 (MiReleasePtes.c)
 *     MiReservePtes @ 0x14035FBF0 (MiReservePtes.c)
 *     MiAllocateKernelStackPages @ 0x1403D4748 (MiAllocateKernelStackPages.c)
 *     KasanTrackAddressNoInline @ 0x140534710 (KasanTrackAddressNoInline.c)
 */

__int64 __fastcall MiCreateKernelStackSlow(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  void *v4; // rbp
  __int64 v5; // r14
  unsigned int v7; // edx
  void *v8; // rcx
  unsigned __int64 v9; // rax
  unsigned __int64 *v10; // rsi
  unsigned __int64 *v11; // r15
  __int64 v12; // rdi

  v4 = &unk_140E34C20;
  v5 = *(_QWORD *)(a1 + 16) + *(unsigned int *)(a1 + 64);
  v7 = *(_DWORD *)(a1 + 16) + *(_DWORD *)(a1 + 64);
  v8 = &unk_140E34C20;
  if ( *(_DWORD *)(a1 + 56) != 5 )
    v8 = &unk_140E34C80;
  v9 = MiReservePtes((__int64)v8, v7, a3, a4);
  v10 = (unsigned __int64 *)v9;
  if ( !v9 )
    return 0LL;
  v11 = (unsigned __int64 *)v9;
  v12 = (__int64)((v9 << 25) + (v5 << 28)) >> 16;
  if ( *(_DWORD *)(a1 + 56) != 5 )
    goto LABEL_8;
  if ( !byte_140FC8BD8
    || (int)KasanTrackAddressNoInline(
              (__int64)((v9 << 25) + 0x10000000) >> 16,
              *(_QWORD *)(a1 + 16) << 12,
              (unsigned int)(*(_DWORD *)(a1 + 48) + 1)) >= 0 )
  {
    if ( (*(_DWORD *)(a1 + 32) & 5) == 1 )
      v11 = &v10[(unsigned __int64)(unsigned int)(KeKernelLargeStackSize - KeKernelLargeStackCommit) >> 12];
LABEL_8:
    *(_QWORD *)(a1 + 16) = v5;
    *(_QWORD *)(a1 + 8) = v11 + 1;
    *(_BYTE *)(a1 + 36) = KeGetCurrentIrql();
    if ( (unsigned int)MiAllocateKernelStackPages(a1) )
      return v12;
  }
  if ( *(_DWORD *)(a1 + 56) != 5 )
    v4 = &unk_140E34C80;
  MiReleasePtes((__int64)v4, v10, v5);
  return 0LL;
}
