/*
 * XREFs of ?reserve@?$KArray@PEAU_KStringAtom@Rtl@@$00@Rtl@@QEAA_N_K@Z @ 0x140003DEC
 * Callers:
 *     KRegKey::QueryValueMultisz__lambda_145828208f54867cbf19e2ec96475ca0___lambda_669a078cee999b45033530b9c5ed1c6f___ @ 0x14014C91C (KRegKey--QueryValueMultisz__lambda_145828208f54867cbf19e2ec96475ca0___lambda_669a078cee999b45033.c)
 *     ?grow@?$KArray@PEAU_KStringAtom@Rtl@@$00@Rtl@@AEAA_N_K@Z @ 0x14014D9BC (-grow@-$KArray@PEAU_KStringAtom@Rtl@@$00@Rtl@@AEAA_N_K@Z.c)
 *     ndisBlowStringListIntoAtoms @ 0x14014DEEC (ndisBlowStringListIntoAtoms.c)
 * Callees:
 *     ?RtlULongLongMult@@YAJ_K0PEA_K@Z @ 0x140063780 (-RtlULongLongMult@@YAJ_K0PEA_K@Z.c)
 *     memmove @ 0x1400EA1C0 (memmove.c)
 */

char __fastcall Rtl::KArray<Rtl::_KStringAtom *,1>::reserve(unsigned int *a1, unsigned __int64 a2)
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
    if ( (int)RtlULongLongMult(8uLL, a2, &NumberOfBytes) >= 0 )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x7272414Bu);
      v6 = PoolWithTag;
      if ( PoolWithTag )
      {
        memmove(PoolWithTag, *((const void **)a1 + 1), 8LL * a1[1]);
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
