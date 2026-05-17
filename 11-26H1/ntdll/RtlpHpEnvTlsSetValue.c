/*
 * XREFs of RtlpHpEnvTlsSetValue @ 0x18009345C
 * Callers:
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x180092C30 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     RtlpHpLfhContextPrivateHeatMapCreate @ 0x180093238 (RtlpHpLfhContextPrivateHeatMapCreate.c)
 *     RtlpHpLfhThreadDataInitializeSet @ 0x1800933DC (RtlpHpLfhThreadDataInitializeSet.c)
 *     RtlpHpLfhContextLockUnlock @ 0x180097204 (RtlpHpLfhContextLockUnlock.c)
 *     RtlpHpLfhPrivateSlotCreate @ 0x180097438 (RtlpHpLfhPrivateSlotCreate.c)
 * Callees:
 *     RtlpFlsSetValue @ 0x180093690 (RtlpFlsSetValue.c)
 *     RtlTlsSetValue @ 0x180093850 (RtlTlsSetValue.c)
 */

__int64 __fastcall RtlpHpEnvTlsSetValue(unsigned int a1, __int64 a2)
{
  unsigned __int16 v3; // si
  unsigned int v4; // ebx
  __int64 result; // rax

  v3 = a1;
  v4 = HIWORD(a1);
  result = RtlpFlsSetValue(&RtlpHpEnvFlsContext, &NtCurrentTeb()->HeapFlsData, HIWORD(a1), a2);
  if ( (int)result >= 0 )
  {
    if ( (int)RtlTlsSetValue(v3, a2) < 0 )
    {
      if ( (int)RtlpFlsSetValue(&RtlpHpEnvFlsContext, &NtCurrentTeb()->HeapFlsData, v4, 0LL) < 0 )
        NT_ASSERT("(((NTSTATUS)(Status)) >= 0)");
      return 3221225495LL;
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}
