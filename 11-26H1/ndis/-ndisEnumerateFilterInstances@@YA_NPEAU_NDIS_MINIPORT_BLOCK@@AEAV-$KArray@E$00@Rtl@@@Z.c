/*
 * XREFs of ?ndisEnumerateFilterInstances@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@E$00@Rtl@@@Z @ 0x140164D40
 * Callers:
 *     ?ndisPostProcessRestartParametersAfterFilters@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x140060190 (-ndisPostProcessRestartParametersAfterFilters@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_IN.c)
 * Callees:
 *     ?reserve@?$KArray@E$00@Rtl@@QEAA_N_K@Z @ 0x140066900 (-reserve@-$KArray@E$00@Rtl@@QEAA_N_K@Z.c)
 *     memmove @ 0x1400EA1C0 (memmove.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 */

char __fastcall ndisEnumerateFilterInstances(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned __int64 v3; // rbx
  unsigned __int16 *v7; // r8
  unsigned __int64 v8; // rcx
  __int64 v9; // rbx
  _WORD *v10; // rdi
  unsigned __int16 *v11; // rax

  v2 = *(_QWORD *)(a1 + 2040);
  v3 = 0LL;
  if ( !v2 )
    return 1;
  do
  {
    v7 = *(unsigned __int16 **)(v2 + 40);
    v2 = *(_QWORD *)(v2 + 120);
    v3 += *v7 + 2LL;
  }
  while ( v2 );
  if ( !v3 )
    return 1;
  if ( !Rtl::KArray<unsigned char,1>::reserve((unsigned int *)a2, v3) )
    return 0;
  v8 = *(unsigned int *)(a2 + 4);
  if ( v3 > v8 )
    memset((void *)(*(_QWORD *)(a2 + 8) + v8), 0, v3 - v8);
  *(_DWORD *)(a2 + 4) = v3;
  if ( !(_DWORD)v3 )
    __fastfail(5u);
  v9 = *(_QWORD *)(a1 + 2040);
  v10 = *(_WORD **)(a2 + 8);
  if ( !v9 )
    return 1;
  do
  {
    *v10 = **(_WORD **)(v9 + 40);
    memmove(v10 + 1, *(const void **)(*(_QWORD *)(v9 + 40) + 8LL), **(unsigned __int16 **)(v9 + 40));
    v11 = *(unsigned __int16 **)(v9 + 40);
    v9 = *(_QWORD *)(v9 + 120);
    v10 = (_WORD *)((char *)v10 + *v11 + 2);
  }
  while ( v9 );
  return 1;
}
