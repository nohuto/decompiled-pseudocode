/*
 * XREFs of MiHandleForkZeroPte @ 0x14030AD68
 * Callers:
 *     MiBuildForkPte @ 0x14030AB74 (MiBuildForkPte.c)
 * Callees:
 *     MiFindZeroCloneBlock @ 0x14049AC08 (MiFindZeroCloneBlock.c)
 *     MiWriteSharedDemandZeroPte @ 0x14049AC34 (MiWriteSharedDemandZeroPte.c)
 */

void __fastcall MiHandleForkZeroPte(__int64 a1)
{
  __int64 v2; // rcx
  unsigned int v3; // edx
  __int64 ZeroCloneBlock; // rax
  __int64 v5; // r9

  v2 = *(_QWORD *)(a1 + 24);
  if ( v2 )
  {
    v3 = *(_DWORD *)(*(_QWORD *)(a1 + 272) + 48LL);
    if ( (v3 & 0x80000) != 0 && (v3 & 0x400000) != 0 )
    {
      ZeroCloneBlock = MiFindZeroCloneBlock(v2, (v3 >> 5) & 0x1F);
      if ( ZeroCloneBlock )
        MiWriteSharedDemandZeroPte(v5, ZeroCloneBlock, *(_QWORD *)(v5 + 312));
    }
  }
}
