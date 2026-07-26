/*
 * XREFs of ?grow@?$KArray@ULwfBindProperties@@$00@Rtl@@AEAA_N_K@Z @ 0x14014DA00
 * Callers:
 *     ?append@?$KArray@ULwfBindProperties@@$00@Rtl@@QEAA_N$$QEAULwfBindProperties@@@Z @ 0x14014D914 (-append@-$KArray@ULwfBindProperties@@$00@Rtl@@QEAA_N$$QEAULwfBindProperties@@@Z.c)
 *     ?insertAt@?$KArray@ULwfBindProperties@@$00@Rtl@@QEAA_N_K$$QEAULwfBindProperties@@@Z @ 0x14014DA88 (-insertAt@-$KArray@ULwfBindProperties@@$00@Rtl@@QEAA_N_K$$QEAULwfBindProperties@@@Z.c)
 * Callees:
 *     ?reserve@?$KArray@ULwfBindProperties@@$00@Rtl@@QEAA_N_K@Z @ 0x140003EAC (-reserve@-$KArray@ULwfBindProperties@@$00@Rtl@@QEAA_N_K@Z.c)
 */

char __fastcall Rtl::KArray<LwfBindProperties,1>::grow(unsigned int *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r8
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rdx

  v2 = *a1;
  if ( v2 >= a2 )
    return 1;
  v5 = 4LL;
  if ( a2 >= 4 )
    v5 = a2;
  v6 = (unsigned int)v2 + ((unsigned int)v2 >> 1);
  if ( v5 >= v6 )
    v6 = v5;
  return Rtl::KArray<LwfBindProperties,1>::reserve(a1, v6);
}
