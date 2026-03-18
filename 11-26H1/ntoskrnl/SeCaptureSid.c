/*
 * XREFs of SeCaptureSid @ 0x1408E9720
 * Callers:
 *     SeAccessCheckByType @ 0x1402AAD98 (SeAccessCheckByType.c)
 *     NtSetInformationToken @ 0x140810BD0 (NtSetInformationToken.c)
 *     NtCreateLowBoxToken @ 0x1408140F0 (NtCreateLowBoxToken.c)
 *     NtSecureConnectPort @ 0x1408E5CC0 (NtSecureConnectPort.c)
 *     AlpcpConnectPort @ 0x1408E92E0 (AlpcpConnectPort.c)
 *     ExpWnfCaptureScopeInstanceId @ 0x14094A070 (ExpWnfCaptureScopeInstanceId.c)
 *     ExpNtUpdateWnfStateData @ 0x14094A8A0 (ExpNtUpdateWnfStateData.c)
 *     SepAccessCheckAndAuditAlarm @ 0x1409F55D0 (SepAccessCheckAndAuditAlarm.c)
 *     NtCreateTokenEx @ 0x140A44080 (NtCreateTokenEx.c)
 *     AlpcpPortQueryConnectedSidInfo @ 0x140A6C0A8 (AlpcpPortQueryConnectedSidInfo.c)
 * Callees:
 *     RtlCopyFromUser @ 0x140533E38 (RtlCopyFromUser.c)
 *     RtlCopyVolatileMemory @ 0x140733080 (RtlCopyVolatileMemory.c)
 *     RtlReadUCharFromUser @ 0x14077F51C (RtlReadUCharFromUser.c)
 *     RtlLengthRequiredSid @ 0x1408E9A40 (RtlLengthRequiredSid.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F29F0 (ExRaiseDatatypeMisalignment.c)
 *     RtlValidSid @ 0x140924370 (RtlValidSid.c)
 *     ExAllocatePoolWithTag @ 0x140C10340 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SeCaptureSid(char *Src, char a2, __int64 a3, __int64 a4, int a5, char a6, PSID *a7)
{
  unsigned __int8 UCharFromUser; // al
  unsigned __int8 v10; // r15
  ULONG v11; // eax
  size_t v12; // rsi
  PVOID PoolWithTag; // rax
  PSID v14; // rbx

  if ( !a2 && !a6 )
  {
    *a7 = Src;
    return 0LL;
  }
  if ( a2 )
    UCharFromUser = RtlReadUCharFromUser(Src + 1);
  else
    UCharFromUser = Src[1];
  v10 = UCharFromUser;
  v11 = RtlLengthRequiredSid(UCharFromUser);
  v12 = v11;
  if ( a2 && v11 && ((unsigned __int8)Src & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)1025, v11, 0x69536553u);
  *a7 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  if ( a2 && (_DWORD)v12 && ((unsigned __int8)Src & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( a2 )
    RtlCopyFromUser(PoolWithTag, Src, v12);
  else
    RtlCopyVolatileMemory(PoolWithTag, Src, v12);
  *((_BYTE *)*a7 + 1) = v10;
  v14 = *a7;
  if ( RtlValidSid(*a7) )
    return 0LL;
  ExFreePoolWithTag(v14, 0);
  *a7 = 0LL;
  return 3221225592LL;
}
