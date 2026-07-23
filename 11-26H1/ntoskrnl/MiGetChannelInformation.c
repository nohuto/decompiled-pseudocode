/*
 * XREFs of MiGetChannelInformation @ 0x14049DA84
 * Callers:
 *     MmManagePartitionMemoryInformation @ 0x140ABB3FC (MmManagePartitionMemoryInformation.c)
 *     MmGetChannelInformation @ 0x140B0E978 (MmGetChannelInformation.c)
 * Callees:
 *     ExReleaseSpinLockShared @ 0x14026C450 (ExReleaseSpinLockShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402BE490 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x1402CFF90 (ExAcquireSpinLockShared.c)
 *     MiGetNodeChannelPageCounts @ 0x1403D220C (MiGetNodeChannelPageCounts.c)
 *     MiLockDynamicMemoryShared @ 0x1404C5110 (MiLockDynamicMemoryShared.c)
 *     MiUnlockDynamicMemoryShared @ 0x1404C9D60 (MiUnlockDynamicMemoryShared.c)
 */

__int64 __fastcall MiGetChannelInformation(__int64 a1, unsigned int a2, __int64 a3, _QWORD *a4)
{
  unsigned __int8 v5; // si
  __int64 v8; // r15
  struct _KTHREAD *CurrentThread; // r12
  KIRQL v10; // r14
  __int64 v11; // rdi
  unsigned __int8 v12; // cl
  unsigned __int64 v13; // rax
  volatile LONG *v14; // rcx
  __int64 v16; // [rsp+70h] [rbp+8h] BYREF
  __int64 v17; // [rsp+80h] [rbp+18h] BYREF
  unsigned __int64 v18; // [rsp+88h] [rbp+20h] BYREF

  v5 = 0;
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  v8 = *(_QWORD *)(a1 + 16) + 56320LL * a2;
  *a4 = 40LL * (unsigned __int8)byte_140E2D898;
  CurrentThread = KeGetCurrentThread();
  MiLockDynamicMemoryShared(a1, CurrentThread);
  v10 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(v8 + 14132));
  if ( byte_140E2D898 )
  {
    v11 = a3 + 4;
    do
    {
      *(_DWORD *)(v11 - 4) = v5;
      if ( (*(_DWORD *)(v8 + 14096) & 1) != 0 )
      {
        v12 = 0;
        if ( byte_140E2D898 )
        {
          while ( *(_BYTE *)(v12 + v8 + 14145) != v5 )
          {
            if ( ++v12 >= (unsigned __int8)byte_140E2D898 )
              goto LABEL_10;
          }
          *(_DWORD *)v11 = v12;
        }
      }
      else
      {
        *(_DWORD *)v11 = -1;
      }
LABEL_10:
      *(_QWORD *)(v11 + 4) = *(_QWORD *)(v8 + 8LL * v5 + 13872);
      MiGetNodeChannelPageCounts(a1, a2, v5, &v16, &v17, &v18);
      *(_QWORD *)(v11 + 12) = v16;
      *(_QWORD *)(v11 + 20) = v17;
      v13 = v18;
      *(_QWORD *)(v11 + 28) = v18;
      if ( v13 == -1LL )
        *(_QWORD *)(v11 + 28) = -1LL;
      ++v5;
      v11 += 40LL;
    }
    while ( v5 < (unsigned __int8)byte_140E2D898 );
  }
  v14 = (volatile LONG *)(v8 + 14132);
  if ( v10 == 17 )
    ExReleaseSpinLockSharedFromDpcLevel(v14);
  else
    ExReleaseSpinLockShared(v14, v10);
  return MiUnlockDynamicMemoryShared(a1, CurrentThread);
}
