/*
 * XREFs of ?reserve@?$KArray@_W$00@Rtl@@QEAA_N_K@Z @ 0x140001B40
 * Callers:
 *     ?resize@?$KArray@_W$00@Rtl@@QEAA_N_K@Z @ 0x140001CE8 (-resize@-$KArray@_W$00@Rtl@@QEAA_N_K@Z.c)
 * Callees:
 *     ?RtlULongLongMult@@YAJ_K0PEA_K@Z @ 0x140063780 (-RtlULongLongMult@@YAJ_K0PEA_K@Z.c)
 *     memmove @ 0x1400EA1C0 (memmove.c)
 */

char __fastcall Rtl::KArray<wchar_t,1>::reserve(unsigned int *a1, unsigned __int64 a2)
{
  unsigned int v2; // edi
  PVOID PoolWithTag; // rax
  PVOID v6; // rsi
  void *v7; // rcx
  SIZE_T NumberOfBytes; // [rsp+30h] [rbp+8h] BYREF

  v2 = a2;
  if ( *a1 >= a2 )
    return 1;
  if ( a2 < 0xFFFFFFFF )
  {
    NumberOfBytes = 0LL;
    if ( (int)RtlULongLongMult(2uLL, a2, &NumberOfBytes) >= 0 )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x7272414Bu);
      v6 = PoolWithTag;
      if ( PoolWithTag )
      {
        memmove(PoolWithTag, *((const void **)a1 + 1), 2LL * a1[1]);
        v7 = (void *)*((_QWORD *)a1 + 1);
        if ( v7 )
          ExFreePoolWithTag(v7, 0x7272414Bu);
        *a1 = v2;
        *((_QWORD *)a1 + 1) = v6;
        return 1;
      }
    }
  }
  return 0;
}
