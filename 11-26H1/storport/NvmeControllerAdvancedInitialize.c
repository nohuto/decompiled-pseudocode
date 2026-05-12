/*
 * XREFs of NvmeControllerAdvancedInitialize @ 0x1400F057C
 * Callers:
 *     NvmeAdapterFinalizeStorMQMiniportControllerStart @ 0x1400D52F4 (NvmeAdapterFinalizeStorMQMiniportControllerStart.c)
 *     NvmeAdapterStartMiniport @ 0x1400DE784 (NvmeAdapterStartMiniport.c)
 * Callees:
 *     NvmeControllerInitPhase2 @ 0x1400F5A18 (NvmeControllerInitPhase2.c)
 *     NvmeControllerInitPhase3 @ 0x1400F5D54 (NvmeControllerInitPhase3.c)
 *     NvmeControllerPowerInitialize @ 0x1400F81E4 (NvmeControllerPowerInitialize.c)
 */

__int64 __fastcall NvmeControllerAdvancedInitialize(_QWORD *SystemArgument2)
{
  __int64 result; // rax
  unsigned __int64 v3; // rcx
  __int64 v4; // rax
  unsigned __int64 v5; // rdx
  __int64 v6; // rax
  unsigned __int64 v7; // rdx

  if ( *(_DWORD *)(SystemArgument2[74] + 516LL) )
  {
    result = NvmeControllerInitPhase2((int)SystemArgument2);
    if ( (int)result < 0 )
      return result;
    v3 = 0xFFFFFFFFLL;
    v4 = *((unsigned int *)SystemArgument2 + 2);
    v5 = v4 * *((unsigned __int16 *)SystemArgument2 + 11);
    if ( v5 <= 0xFFFFFFFF )
    {
      v3 = v4 * *((unsigned __int16 *)SystemArgument2 + 11);
      if ( !v5 )
        v3 = 128LL;
    }
    v6 = SystemArgument2[131];
    if ( v6 )
    {
      v7 = *(unsigned int *)(v6 + 120);
      if ( (_DWORD)v7 )
      {
        if ( v3 >= v7 )
          LODWORD(v3) = *(_DWORD *)(v6 + 120);
      }
    }
    *(_DWORD *)(SystemArgument2[16] + 380LL) = v3;
    *(_DWORD *)(SystemArgument2[16] + 384LL) = v3;
  }
  result = NvmeControllerInitPhase3(SystemArgument2);
  if ( (int)result >= 0 )
  {
    NvmeControllerPowerInitialize(SystemArgument2);
    return 0LL;
  }
  return result;
}
