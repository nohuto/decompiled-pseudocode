/*
 * XREFs of RtlRegisterFeatureConfigurationChangeNotification @ 0x18006E9E0
 * Callers:
 *     <none>
 * Callees:
 *     TpPostWork @ 0x180067FB0 (TpPostWork.c)
 *     RtlpFcEnsureSubscriptionManagerStarted @ 0x18006EA7C (RtlpFcEnsureSubscriptionManagerStarted.c)
 *     RtlpFcAllocateChangeRegistration @ 0x18006EAC8 (RtlpFcAllocateChangeRegistration.c)
 *     RtlpFcInsertChangeRegistration @ 0x18006EB64 (RtlpFcInsertChangeRegistration.c)
 */

__int64 __fastcall RtlRegisterFeatureConfigurationChangeNotification(__int64 a1, __int64 a2, _QWORD *a3, __int64 *a4)
{
  __int64 result; // rax
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rbx
  _PEB_LDR_DATA *v12; // rdx
  __int64 v13; // r8

  if ( byte_1801CB8C8 )
    return 3221226238LL;
  result = RtlpFcEnsureSubscriptionManagerStarted();
  if ( (int)result >= 0 )
  {
    v9 = RtlpFcAllocateChangeRegistration(a1, a2);
    v11 = v9;
    if ( v9 )
    {
      RtlpFcInsertChangeRegistration(v10, v9);
      if ( a3 )
      {
        if ( MEMORY[0x7FFE0A90] != *a3 )
          TpPostWork(*(_QWORD *)(v11 + 40), v12, v13);
      }
      *a4 = v11;
      return 0LL;
    }
    else
    {
      return 3221225626LL;
    }
  }
  return result;
}
