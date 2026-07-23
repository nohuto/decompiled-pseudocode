/*
 * XREFs of MiFreeProcessLargePageCache @ 0x140716BA8
 * Callers:
 *     MiPruneProcessLargePageCaches @ 0x1402A83C4 (MiPruneProcessLargePageCaches.c)
 *     MiDeleteProcessLargePageCache @ 0x1404CA01C (MiDeleteProcessLargePageCache.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiEmptyCacheSlice @ 0x14071675C (MiEmptyCacheSlice.c)
 *     MiFreeCacheSlice @ 0x140716848 (MiFreeCacheSlice.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall MiFreeProcessLargePageCache(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  unsigned __int8 CurrentIrql; // bp
  __int64 result; // rax
  unsigned int v6; // ebx
  __int64 v7; // r15
  _DWORD *v8; // rdi
  __int64 v9; // r14
  volatile LONG *v10; // rcx
  KIRQL v11; // bp
  __int64 v12; // rcx
  volatile LONG *v13; // rcx
  unsigned __int8 i; // [rsp+20h] [rbp-C8h]
  __int64 v15; // [rsp+28h] [rbp-C0h]
  _BYTE v17[64]; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v18; // [rsp+80h] [rbp-68h]

  v2 = a2;
  memset_0(v17, 0, 0x60uLL);
  CurrentIrql = KeGetCurrentIrql();
  v15 = *(_QWORD *)(v2 + 16);
  result = 0LL;
  v6 = 0;
  for ( i = CurrentIrql; v6 < (unsigned __int16)KeNumberNodes; v2 = a2 )
  {
    v7 = 3LL;
    v8 = (_DWORD *)(192LL * v6 + v2 + 44);
    do
    {
      v9 = 4LL;
      do
      {
        if ( (*v8 & 0x3F) != 0 )
        {
          memset_0(v17, 0, 0x60uLL);
          v10 = (volatile LONG *)(v15 + 288);
          if ( CurrentIrql == 2 )
          {
            v11 = 17;
            ExAcquireSpinLockExclusiveAtDpcLevel(v10);
          }
          else
          {
            v11 = ExAcquireSpinLockExclusive(v10);
          }
          if ( (*v8 & 0x3F) != 0 )
            MiEmptyCacheSlice(v12, (__int64)v17, (__int64)(v8 - 3));
          v13 = (volatile LONG *)(v15 + 288);
          if ( v11 == 17 )
            ExReleaseSpinLockExclusiveFromDpcLevel(v13);
          else
            ExReleaseSpinLockExclusive(v13, v11);
          if ( v18 )
            MiFreeCacheSlice(a1, (__int64)v17);
          CurrentIrql = i;
        }
        v8 += 4;
        --v9;
      }
      while ( v9 );
      --v7;
    }
    while ( v7 );
    result = (unsigned __int16)KeNumberNodes;
    ++v6;
  }
  return result;
}
