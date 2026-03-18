/*
 * XREFs of ExpSeedHotTags @ 0x140CE5DF4
 * Callers:
 *     ExInitializePoolTracker @ 0x140CE5CA8 (ExInitializePoolTracker.c)
 * Callees:
 *     <none>
 */

__int64 ExpSeedHotTags()
{
  __int64 v0; // r10
  unsigned int *v1; // rdx
  __int64 v2; // r9
  __int64 v3; // rbx
  unsigned int v4; // ecx
  __int64 result; // rax
  _DWORD v6[64]; // [rsp+8h] [rbp-A9h] BYREF

  v0 = PoolTrackTable;
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
    v4 = LODWORD(stru_140EFEF90.StackBase) & ((40543 * v3) ^ ((unsigned __int64)(40543 * v3) >> 32));
    while ( 1 )
    {
      if ( !*(_DWORD *)(v0 + 80LL * v4) )
      {
        result = PoolTrackTableSize - 1;
        if ( v4 != PoolTrackTableSize - 1 )
          break;
      }
      result = (__int64)stru_140EFEF90.StackBase & (v4 + 1);
      v4 = result;
      if ( (_DWORD)result == (LODWORD(stru_140EFEF90.StackBase) & ((40543 * (int)v3) ^ ((unsigned __int64)(40543 * v3) >> 32))) )
        goto LABEL_8;
    }
    *(_DWORD *)(v0 + 80LL * v4) = v3;
LABEL_8:
    ++v1;
    --v2;
  }
  while ( v2 );
  return result;
}
