/*
 * XREFs of MiCreateCloneZeroDescriptor @ 0x140B580FC
 * Callers:
 *     MiCloneProcessAddressSpace @ 0x140A07308 (MiCloneProcessAddressSpace.c)
 * Callees:
 *     MiWriteCloneFlags @ 0x1404AFAC4 (MiWriteCloneFlags.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     MiBuildNewCloneDescriptor @ 0x140B58184 (MiBuildNewCloneDescriptor.c)
 */

__int64 __fastcall MiCreateCloneZeroDescriptor(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 result; // rax

  v2 = MiBuildNewCloneDescriptor(*(_QWORD *)(a1 + 8));
  v3 = v2;
  if ( !v2 )
    return 3221225626LL;
  memset_0(*(void **)(v2 + 24), 0, 32LL * *(_QWORD *)(v2 + 40));
  MiWriteCloneFlags(*(_QWORD *)(v3 + 24), 4LL);
  MiWriteCloneFlags(*(_QWORD *)(v3 + 24) + 32LL, 1LL);
  result = 0LL;
  *(_QWORD *)(a1 + 24) = v3;
  return result;
}
