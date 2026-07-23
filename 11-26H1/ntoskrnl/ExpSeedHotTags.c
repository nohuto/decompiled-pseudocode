/*
 * XREFs of ExpSeedHotTags @ 0x140CEC194
 * Callers:
 *     ExInitializePoolTracker @ 0x140CEC048 (ExInitializePoolTracker.c)
 * Callees:
 *     <none>
 */

char *ExpSeedHotTags()
{
  unsigned __int64 QuantumTarget; // r10
  unsigned int *v1; // rdx
  __int64 v2; // r9
  __int64 v3; // rbx
  unsigned int v4; // ecx
  char *result; // rax
  _DWORD v6[64]; // [rsp+8h] [rbp-A9h] BYREF

  QuantumTarget = stru_140EFF2C0.QuantumTarget;
  v1 = v6;
  qmemcpy(
    v6,
    "Io  Hal MdlPPooLObStIrp NDdbIrpLIoOpMdl FileCMVaSeSdNtFCPoolTCPrCMNbSeTdNtFsTCPTTCPCKey ObSqIoNmIoEaTCPcNtFaNtf0Sect"
    "IrpSTokeSe  ObClCcScNtFLSeAcFSfmCcWkFSimAfdCAfdEFSroNtfnUIRPNpFrNpFRSePaSeUsAcpFAcpMSeScObNmNpFsSeLuScPDEvenRqrvVadl"
    "Pp  VadSVad VadLVadFMmdi",
    sizeof(v6));
  v2 = 64LL;
  do
  {
    v3 = *v1;
    v4 = LODWORD(stru_140EFF2C0.StackBase) & ((40543 * v3) ^ ((unsigned __int64)(40543 * v3) >> 32));
    while ( 1 )
    {
      if ( !*(_DWORD *)(QuantumTarget + 80LL * v4) )
      {
        result = (char *)stru_140EFF2C0.StackLimit - 1;
        if ( (void *volatile)v4 != (char *)stru_140EFF2C0.StackLimit - 1 )
          break;
      }
      result = (char *)((__int64)stru_140EFF2C0.StackBase & (v4 + 1));
      v4 = (unsigned int)result;
      if ( (_DWORD)result == (LODWORD(stru_140EFF2C0.StackBase) & ((40543 * (int)v3) ^ ((unsigned __int64)(40543 * v3) >> 32))) )
        goto LABEL_8;
    }
    *(_DWORD *)(QuantumTarget + 80LL * v4) = v3;
LABEL_8:
    ++v1;
    --v2;
  }
  while ( v2 );
  return result;
}
