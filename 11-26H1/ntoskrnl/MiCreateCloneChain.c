/*
 * XREFs of MiCreateCloneChain @ 0x14077971C
 * Callers:
 *     MiCloneProcessAddressSpace @ 0x140A07308 (MiCloneProcessAddressSpace.c)
 * Callees:
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     PsChargeProcessNonPagedPoolQuota @ 0x1403C6CB0 (PsChargeProcessNonPagedPoolQuota.c)
 *     MmGetCurrentProcessorColor @ 0x140442EF0 (MmGetCurrentProcessorColor.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiCreateCloneChain(__int64 *a1)
{
  int v1; // esi
  _QWORD *v2; // rdi
  volatile _KAFFINITY_EX *ActiveProcessors; // r14
  unsigned __int64 v5; // r15
  unsigned __int64 i; // rbx
  int CurrentProcessorColor; // eax
  _QWORD *PoolMm; // rax
  __int64 v10; // rbx
  _QWORD *v11; // rbx

  v1 = 0;
  v2 = 0LL;
  ActiveProcessors = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors;
  v5 = ActiveProcessors[4].StaticBitmap[21];
  if ( !v5 )
    return 0LL;
  for ( i = 0LL; i < v5; ++i )
  {
    CurrentProcessorColor = MmGetCurrentProcessorColor();
    PoolMm = (_QWORD *)ExAllocatePoolMm(64LL, 0x70uLL, 1682140493, CurrentProcessorColor | 0x80000000);
    if ( !PoolMm )
    {
      v1 = -1073741670;
      goto LABEL_10;
    }
    *PoolMm = v2;
    v2 = PoolMm;
  }
  v10 = ActiveProcessors[4].StaticBitmap[22];
  if ( !v10 || (v1 = PsChargeProcessNonPagedPoolQuota(a1[1], ActiveProcessors[4].StaticBitmap[22]), v1 >= 0) )
  {
    a1[36] = v10;
    a1[37] = (__int64)v2;
    return (unsigned int)v1;
  }
LABEL_10:
  if ( v2 )
  {
    do
    {
      v11 = (_QWORD *)*v2;
      ExFreePoolWithTag(v2, 0);
      v2 = v11;
    }
    while ( v11 );
  }
  return (unsigned int)v1;
}
