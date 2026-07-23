/*
 * XREFs of RtlpHpEnvTlsSetValue @ 0x1800723C0
 * Callers:
 *     RtlpHpLfhContextLockUnlock @ 0x180071B68 (RtlpHpLfhContextLockUnlock.c)
 *     RtlpHpLfhContextPrivateHeatMapCreate @ 0x18007219C (RtlpHpLfhContextPrivateHeatMapCreate.c)
 *     RtlpHpLfhThreadDataInitializeSet @ 0x180072340 (RtlpHpLfhThreadDataInitializeSet.c)
 *     RtlpHpLfhPrivateSlotCreate @ 0x18010B444 (RtlpHpLfhPrivateSlotCreate.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x180117744 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     RtlpHpLfhTlsCleanup @ 0x180117A10 (RtlpHpLfhTlsCleanup.c)
 * Callees:
 *     RtlpHpEnvFlsSetValue @ 0x180072798 (RtlpHpEnvFlsSetValue.c)
 *     RtlTlsSetValue @ 0x1800BCB60 (RtlTlsSetValue.c)
 */

__int64 __fastcall RtlpHpEnvTlsSetValue(unsigned int a1, __int64 a2)
{
  unsigned __int16 v3; // si
  __int64 result; // rax
  unsigned int v5; // ebx

  v3 = a1;
  if ( ((__int64)NtCurrentTeb()->HeapFlsData & 1) != 0 )
    return 3221225547LL;
  v5 = HIWORD(a1);
  result = RtlpHpEnvFlsSetValue(HIWORD(a1));
  if ( (int)result >= 0 )
  {
    if ( (int)RtlTlsSetValue(v3, a2) >= 0 )
    {
      return 0LL;
    }
    else
    {
      if ( (int)RtlpHpEnvFlsSetValue(v5) < 0 )
        NT_ASSERT("(((NTSTATUS)(Status)) >= 0)");
      return 3221225495LL;
    }
  }
  return result;
}
