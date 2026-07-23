/*
 * XREFs of MiWalkAllFreeZeroLists @ 0x14041C710
 * Callers:
 *     MiMirrorPurgePartitionPages @ 0x1406F4AD0 (MiMirrorPurgePartitionPages.c)
 *     MiLockMemoryLists @ 0x140708630 (MiLockMemoryLists.c)
 *     MiMirrorNodeFreeZeroPages @ 0x140BEF4D4 (MiMirrorNodeFreeZeroPages.c)
 * Callees:
 *     MiGetColorHeadBase @ 0x14041C860 (MiGetColorHeadBase.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall MiWalkAllFreeZeroLists(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 v3; // dl
  unsigned int v4; // ebx
  __int64 v5; // r13
  unsigned int i; // edi
  int v8; // r12d
  unsigned __int8 j; // r15
  int v10; // r14d
  int k; // ebp
  char v12; // [rsp+80h] [rbp+8h]

  v3 = byte_140E2D898;
  v4 = 0;
  v5 = *(_QWORD *)(a1 + 16);
  v12 = byte_140E2D898;
LABEL_2:
  if ( v4 >= (unsigned __int16)KeNumberNodes )
    return 1LL;
  for ( i = 0; ; ++i )
  {
    if ( i > 3 )
    {
      v5 += 56320LL;
      ++v4;
      goto LABEL_2;
    }
    v8 = 0;
LABEL_8:
    if ( v8 < (i != 3) + 1 )
      break;
  }
  for ( j = 0; ; ++j )
  {
    if ( j >= v3 )
    {
      ++v8;
      goto LABEL_8;
    }
    v10 = 0;
LABEL_12:
    if ( v10 <= 1 )
      break;
    v3 = v12;
  }
  for ( k = 0; ; ++k )
  {
    if ( k >= 3 )
    {
      ++v10;
      goto LABEL_12;
    }
    MiGetColorHeadBase(
      v5,
      (j & 1 | (2 * (v4 & 0x3F | ((v8 & 1 | (2 * (i & 3 | (4 * (k & 3))))) << 6)))) << 8,
      (unsigned int)v10,
      (unsigned int)k);
    if ( !(unsigned int)guard_dispatch_icall_no_overrides(a3, v5) )
      break;
  }
  return 0LL;
}
