/*
 * XREFs of RtlpQueryLowBoxId @ 0x14045AF90
 * Callers:
 *     RtlpAllocateAtomTableEntry @ 0x14045ACFC (RtlpAllocateAtomTableEntry.c)
 *     RtlpLookupLowBox @ 0x14045ADDC (RtlpLookupLowBox.c)
 *     RtlpLookupOrCreateLowBox @ 0x14045AE70 (RtlpLookupOrCreateLowBox.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ObpPushStackInfo @ 0x140264F60 (ObpPushStackInfo.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140279330 (PsReferencePrimaryTokenWithTag.c)
 *     SeQueryInformationToken @ 0x1408FA8C0 (SeQueryInformationToken.c)
 *     PsReferenceEffectiveToken @ 0x1409CAEC0 (PsReferenceEffectiveToken.c)
 */

__int64 RtlpQueryLowBoxId()
{
  __int64 v0; // rax
  __int64 v1; // r8
  struct _KLOCK_ENTRIES *v2; // r9
  int v3; // edi
  __int64 v4; // rbx
  _KPROCESS *Process; // rcx
  signed __int64 ActiveProcessors; // rax
  signed __int64 v7; // rtt
  void *v9; // rsi
  PVOID v10; // [rsp+30h] [rbp-38h] BYREF
  __int64 v11; // [rsp+70h] [rbp+8h] BYREF
  PVOID TokenInformation; // [rsp+78h] [rbp+10h] BYREF
  int v13; // [rsp+80h] [rbp+18h] BYREF
  int v14; // [rsp+88h] [rbp+20h] BYREF

  LODWORD(v10) = 0;
  v13 = 0;
  v14 = 0;
  v0 = PsReferenceEffectiveToken(KeGetCurrentThread(), 1836020801LL, &v13, &v11, &v14, 0LL);
  v3 = v13;
  v4 = v0;
  if ( v13 == 2 && v14 < 2 )
  {
    v9 = (void *)PsReferencePrimaryTokenWithTag((__int64)KeGetCurrentThread()->ApcState.Process, 0x6D6F7441u, v1, v2);
    SeQueryInformationToken(v9, TokenIsAppContainer, &v10);
    if ( (_DWORD)v10 == 1 )
    {
      if ( v4 )
        ObfDereferenceObjectWithTag((PVOID)v4, 0x6D6F7441u);
      v4 = (__int64)v9;
      v3 = 1;
    }
    else
    {
      ObfDereferenceObjectWithTag(v9, 0x6D6F7441u);
    }
  }
  LODWORD(TokenInformation) = 0;
  SeQueryInformationToken((PACCESS_TOKEN)v4, TokenAppContainerNumber, &TokenInformation);
  if ( v3 == 1 )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    _m_prefetchw(&Process[1].ActiveProcessors);
    ActiveProcessors = (signed __int64)Process[1].ActiveProcessors;
    while ( (v4 ^ (unsigned __int64)ActiveProcessors) < 0xF )
    {
      v7 = ActiveProcessors;
      ActiveProcessors = _InterlockedCompareExchange64(
                           (volatile signed __int64 *)&Process[1].ActiveProcessors,
                           ActiveProcessors + 1,
                           ActiveProcessors);
      if ( v7 == ActiveProcessors )
      {
        if ( ObpTraceFlags )
          ObpPushStackInfo(v4 - 48, -1, 0x6D6F7441u);
        return (unsigned int)TokenInformation;
      }
    }
    goto LABEL_10;
  }
  if ( v4 )
LABEL_10:
    ObfDereferenceObjectWithTag((PVOID)v4, 0x6D6F7441u);
  return (unsigned int)TokenInformation;
}
