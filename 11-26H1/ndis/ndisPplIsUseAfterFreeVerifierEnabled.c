/*
 * XREFs of ndisPplIsUseAfterFreeVerifierEnabled @ 0x14005B800
 * Callers:
 *     ?ndisPplConfigureVerifier@@YAXPEAU_NDIS_POOL_HEADER@@PEAX_N@Z @ 0x14005B780 (-ndisPplConfigureVerifier@@YAXPEAU_NDIS_POOL_HEADER@@PEAX_N@Z.c)
 * Callees:
 *     ?ndisDriverVerifierNdisFlagEnabledForCaller@@YA_NPEAX@Z @ 0x140169430 (-ndisDriverVerifierNdisFlagEnabledForCaller@@YA_NPEAX@Z.c)
 */

char __fastcall ndisPplIsUseAfterFreeVerifierEnabled(void *a1, char a2)
{
  bool v4; // al
  char v5; // cl

  if ( ndisDisableNblUseAfterFreeVerifier )
    return 0;
  if ( KeGetCurrentIrql() )
    return a2;
  v4 = ndisDriverVerifierNdisFlagEnabledForCaller(a1);
  v5 = a2;
  if ( v4 )
    return 1;
  return v5;
}
