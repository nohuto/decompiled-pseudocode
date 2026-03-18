/*
 * XREFs of PspRemoveCpuRateControl @ 0x1409E0978
 * Callers:
 *     PspJobDelete @ 0x140615810 (PspJobDelete.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     KeRemoveSchedulingGroup @ 0x1404C61B4 (KeRemoveSchedulingGroup.c)
 *     PspFreeRateControl @ 0x1409E0A08 (PspFreeRateControl.c)
 */

LONG_PTR __fastcall PspRemoveCpuRateControl(__int64 a1)
{
  LONG_PTR result; // rax
  bool v3; // zf
  void *v4; // rcx

  *(_DWORD *)(*(_QWORD *)(a1 + 1240) + 44LL) = 0;
  _InterlockedAnd((volatile signed __int32 *)(a1 + 1552), 0xFFFFFFDF);
  KeRemoveSchedulingGroup((unsigned __int16 *)(*(_QWORD *)(a1 + 1240) + 128LL));
  result = PspFreeRateControl(*(PVOID *)(a1 + 1240));
  v3 = PsCpuFairShareEnabled == 0;
  *(_QWORD *)(a1 + 1240) = 0LL;
  if ( !v3 )
  {
    result = *(_QWORD *)(a1 + 1312);
    if ( result == a1 )
    {
      v4 = *(void **)(a1 + 1344);
      if ( v4 )
      {
        result = ObfDereferenceObjectWithTag(v4, 0x624A7350u);
        *(_QWORD *)(a1 + 1344) = 0LL;
      }
    }
  }
  return result;
}
