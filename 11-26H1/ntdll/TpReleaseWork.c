/*
 * XREFs of TpReleaseWork @ 0x180064C60
 * Callers:
 *     RtlpFcFreeChangeRegistration @ 0x180064B0C (RtlpFcFreeChangeRegistration.c)
 *     LdrpDetectDetour @ 0x180064B60 (LdrpDetectDetour.c)
 *     RtlpCtContextFree @ 0x18014964C (RtlpCtContextFree.c)
 * Callees:
 *     TppRaiseInvalidParameter @ 0x180067FF8 (TppRaiseInvalidParameter.c)
 */

__int64 __fastcall TpReleaseWork(__int64 a1, _PEB_LDR_DATA *Ldr, __int64 a3)
{
  int v3; // eax
  __int64 result; // rax
  int v5; // ett
  void *ThreadPoolData; // rax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a1
    || (v3 = *(_DWORD *)(a1 + 168), (v3 & 0x10000) != 0)
    || (v3 & 0x20000) != 0
    && ((ThreadPoolData = NtCurrentTeb()->ThreadPoolData) == 0LL || *(_QWORD *)(*(_QWORD *)ThreadPoolData + 240LL) != a1)
    || *(__int64 (__fastcall ***)())(a1 + 8) != TppWorkpCleanupGroupMemberVFuncs
    || (Ldr = NtCurrentPeb()->Ldr, Ldr->ShutdownInProgress) )
  {
    result = (__int64)NtCurrentPeb();
    a1 = *(_QWORD *)(result + 24);
    if ( *(_BYTE *)(a1 + 72) )
      return result;
    return TppRaiseInvalidParameter(a1, Ldr, a3);
  }
  _m_prefetchw((const void *)(a1 + 168));
  LODWORD(result) = *(_DWORD *)(a1 + 168);
  do
  {
    Ldr = (_PEB_LDR_DATA *)(unsigned int)result;
    LODWORD(Ldr) = result | 0x10000;
    v5 = result;
    result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 168), result | 0x10000, result);
  }
  while ( v5 != (_DWORD)result );
  if ( (result & 0x10000) != 0 )
    return TppRaiseInvalidParameter(a1, Ldr, a3);
  if ( (result & 0x30000) == 0 )
  {
    *(_QWORD *)(a1 + 184) = retaddr;
    result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
      return (**(__int64 (***)(void))(a1 + 8))();
  }
  return result;
}
