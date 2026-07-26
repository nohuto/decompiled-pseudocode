/*
 * XREFs of ?reserve@?$KArray@E$00@Rtl@@QEAA_N_K@Z @ 0x140066900
 * Callers:
 *     ?ndisEnumerateFilterInstances@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@E$00@Rtl@@@Z @ 0x140164D40 (-ndisEnumerateFilterInstances@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV-$KArray@E$00@Rtl@@@Z.c)
 * Callees:
 *     memmove @ 0x1400EA1C0 (memmove.c)
 */

char __fastcall Rtl::KArray<unsigned char,1>::reserve(unsigned int *a1, unsigned __int64 a2)
{
  unsigned int v2; // edi
  char result; // al
  PVOID PoolWithTag; // rax
  PVOID v6; // rsi
  void *v7; // rcx

  v2 = a2;
  if ( *a1 >= a2 )
    return 1;
  if ( a2 >= 0xFFFFFFFF )
    return 0;
  if ( !is_mul_ok(1uLL, a2) )
    return 0;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, a2, 0x7272414Bu);
  v6 = PoolWithTag;
  if ( !PoolWithTag )
    return 0;
  memmove(PoolWithTag, *((const void **)a1 + 1), a1[1]);
  v7 = (void *)*((_QWORD *)a1 + 1);
  if ( v7 )
    ExFreePoolWithTag(v7, 0x7272414Bu);
  *((_QWORD *)a1 + 1) = v6;
  result = 1;
  *a1 = v2;
  return result;
}
