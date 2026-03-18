/*
 * XREFs of HalpGetAdapter @ 0x140780C9C
 * Callers:
 *     HaliGetDmaAdapter @ 0x14057CF40 (HaliGetDmaAdapter.c)
 *     HalGetAdapter @ 0x140780C80 (HalGetAdapter.c)
 * Callees:
 *     HalpAreDriversDmarCompatible @ 0x140579AA0 (HalpAreDriversDmarCompatible.c)
 *     ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator @ 0x140579B80 (ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator.c)
 *     HalGetAdapterV3 @ 0x140783334 (HalGetAdapterV3.c)
 *     HalGetAdapterV2 @ 0x140783920 (HalGetAdapterV2.c)
 */

__int64 __fastcall HalpGetAdapter(__int64 a1, struct _DEVICE_OBJECT *a2, _DWORD *a3)
{
  __int64 v3; // rdi
  char v6; // bl
  unsigned int v8; // esi

  v3 = 0LL;
  *a3 = 0;
  v6 = *(_BYTE *)(a1 + 10);
  v8 = 0;
  if ( a2 )
  {
    if ( HalpAreDriversDmarCompatible(a2) )
    {
      v8 = 3;
    }
    else if ( ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator() )
    {
      v8 = 2;
    }
  }
  if ( (v6 & 4) != 0 && v8 != 3 )
    return 0LL;
  if ( *(_DWORD *)a1 > 2u )
  {
    if ( *(_DWORD *)a1 == 3 )
      return HalGetAdapterV3(a1, a2, v8, a3);
  }
  else
  {
    if ( !v8 )
      return HalGetAdapterV2(a1, a2, a3);
    if ( *(_BYTE *)(a1 + 4) )
      return HalGetAdapterV3(a1, a2, v8, a3);
  }
  return v3;
}
