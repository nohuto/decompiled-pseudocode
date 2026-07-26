/*
 * XREFs of ?grow@?$KArray@PEAX$00@Rtl@@AEAA_N_K@Z @ 0x1401633E0
 * Callers:
 *     ?AddBindContext@BindState@Ndis@@QEAA_NPEAX@Z @ 0x140163390 (-AddBindContext@BindState@Ndis@@QEAA_NPEAX@Z.c)
 * Callees:
 *     ?reserve@?$KArray@PEAX$00@Rtl@@QEAA_N_K@Z @ 0x14005ADD0 (-reserve@-$KArray@PEAX$00@Rtl@@QEAA_N_K@Z.c)
 */

char __fastcall Rtl::KArray<void *,1>::grow(unsigned int *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // rdx

  v2 = *a1;
  if ( v2 >= a2 )
    return 1;
  v4 = 4LL;
  if ( a2 >= 4 )
    v4 = a2;
  v5 = (unsigned int)v2 + ((unsigned int)v2 >> 1);
  if ( v4 >= v5 )
    v5 = v4;
  return Rtl::KArray<void *,1>::reserve(a1, v5);
}
